//------------------------------------------------------------------------
//
// OPenEphys controller prototype
// 
// does 32ch 
//
//
// Apr 2012  jvoigts@mit.edu
// 
//
// 
//
// 
//
//------------------------------------------------------------------------
`timescale 1ns / 1ps
`default_nettype none

module PipeTest(
	input  wire [7:0]  hi_in,
	output wire [1:0]  hi_out,
	inout  wire [15:0] hi_inout,
	inout  wire        hi_aa,

	output wire        i2c_sda,
	output wire        i2c_scl,
	output wire        hi_muxsel,

	input  wire        sample_clk, AD_clk, fast_clk,
	output wire [7:0]  led,
	output wire [3:0]  led_status,
	output wire [3:0]  led_A,
	output wire [3:0]  led_B,
	output wire [3:0]  led_C,
	output wire [3:0]  led_D,
	
	// AD A
	 output wire adc_cnv_A, adc_sck_A, adc_step_A, adc_reset_A, 
	 input wire adc_sdo_A,
	 
	 // AD B
	 output wire adc_cnv_B, adc_sck_B, adc_step_B, adc_reset_B,
	 input wire adc_sdo_B
	 
	);

// Target interface bus:
wire         ti_clk;
wire [30:0]  ok1;
wire [16:0]  ok2;

assign i2c_sda = 1'bz;
assign i2c_scl = 1'bz;
assign hi_muxsel = 1'b0;

// Endpoint connections:
wire [15:0]  ep00wire; // [2] is reset
//wire [15:0]  rcv_errors;

// AD controller wires
reg adc_dat_reset;
wire adc_data_ready,fifo_empty,fifo_full,fifo_almost_empty,fifo_overflow;
wire [3:0] data_channel;

wire [15:0] data_ADC_word_A; // data from AD->fifo
wire [15:0] data_ADC_word_B; // data from AD->fifo

// data encoding logic registers etc
reg  [47:0] timecode; 
reg  [15:0] state;
wire byteavailable; 
reg  bytecount; // to indicate when 2 bytes are available to write to fifo
wire writetofifo;
reg  [7:0]  databyte; // byte to be transmitted
reg [15:0] out_fifo_word; // holds pairs of bytes to be transmitted
	
	
	
// display registers
reg [15:0] displayA;
reg [15:0] displayB;	


//assign led = ~(ep00wire[7:0]);

assign led[0] = ~fifo_empty;
assign led[1] = ~fifo_full;
assign led[2] = fifo_almost_empty;
assign led[3] = ~ep00wire[2];
//assign led[4] = 3'b1;
//assign led[5] = 3'b1;
assign led[6] = 1'b1;


wire invertled;


assign led_A[0] = ~data_ADC_word_A[15];
assign led_A[1] = data_ADC_word_A[15];
assign led_A[2] = 1'b0;

	 
assign led_B[0] = ~data_ADC_word_B[15]; //r
assign led_B[1] = data_ADC_word_B[15];
assign led_B[2] = 1'b0; // out?

assign led_C[0] = 1'b1; //r
assign led_C[1] = 1'b0; //g
assign led_C[2] = 1'b0; //b

	 
assign led_D[0] = 1'b1;
assign led_D[1] = 1'b0;
assign led_D[2] = 1'b0;




// Instantiate LED blink module
led_status01 status_led_x (
    .clk(fast_clk),
    .status( ), 
    .led_driver(led[4])
    );
	 // Instantiate LED blink module
led_status01 status_led_a (
    .clk(fast_clk),
    .status( ), 
    .led_driver(led[5])
    );

// Instantiate LED blink module
led_status01 status_led_b (
    .clk(fast_clk),
    .status( ), 
    .led_driver(led_status[2])
    );
assign led_status[1] = 1'b0;
assign led_status[0] = 1'b0;


// Instantiate LED blink module
led_status01 status_led_c (
    .clk(fast_clk),
    .status( ), 
    .led_driver(led[7])
    );



// Pipe Out
wire        pipe_out_read;
wire        pipe_out_valid;
wire [15:0] pipe_out_data; // data fifo->pipe




// Instantiate AD control module A
AD7980_controller inst_AD7880_controller_A (
    .clk(AD_clk), //36MHz clock from dedicated dcm [same for all ADs]
    .reset(ep00wire[2]),  //pass trough global reset  [same for all ADs]
	 
    .CNV(adc_cnv_A), //           -- out to AD via pin (jp1, 15) G16
    .SDO(adc_sdo_A), //           -- out to AD via pin (jp1, 16) G19
	 .amp_reset_b(adc_reset_A), // -- out to AD via pin (jp1, 17) G17
	 .SCK(adc_sck_A), //           -- out to AD via pin (jp1, 18) F20
    .amp_step(adc_step_A), //     -- out to AD via pin (jp1, 19) H19
    
    .data_ready( adc_data_ready), //data ready wire   [should be same for all ADs, can just use one or test that all are sync'd ?]
    .data_ready_reset( adc_dat_reset ), //acknowledge data has been written to fifo [ same for all ADs]
    .data_channel( data_channel),  //4bit wire, ch nummer 0-15 [should be same for all ADs, can just use one or test that all are sync'd ?]
    
	 .data_ADC_word(data_ADC_word_A) //16bit data  [ different across ADs]
    );


// Instantiate AD control module B
AD7980_controller inst_AD7880_controller_B (
    .clk(AD_clk), //36MHz clock from dedicated dcm [same for all ADs]
    .reset(ep00wire[2]),  //pass trough global reset  [same for all ADs]
	 
    .CNV(adc_cnv_B), //           -- out to AD via pin (jp1, x)  F16
    .SDO(adc_sdo_B), //           -- out to AD via pin (jp1, x)  D19
	 .amp_reset_b(adc_reset_B), // -- out to AD via pin (jp1, x)  F17
	 .SCK(adc_sck_B), //           -- out to AD via pin (jp1, x)  D20
    .amp_step(adc_step_B), //     -- out to AD via pin (jp1, x)  J17
    
    .data_ready( ), //data ready wire get from AD A  [should be same for all ADs, can just use one or test that all are sync'd ?]
    .data_ready_reset( adc_dat_reset ), //acknowledge data has been written to fifo [ same for all ADs]
    .data_channel( ),  //4bit wire, ch nummer 0-15 get from AD A [should be same for all ADs, can just use one or test that all are sync'd ?]
    
	 .data_ADC_word(data_ADC_word_B) //16bit data  [ different across ADs]
    );
	 
	 
// coding scheme:
// whenever host wants to read, give a 16bit word
// the words will be read at pairs of bytes, 
// the code works on a per-byte level where each byte ends in a 0 for data bytes
// or in 1 for timecode bytes. This is some overhead but makes data integrity checks 
// pretty trivial.
// 
// headstages are A,B,C,D and another one for the breakout box T for the 0-5v TTL input
// A1 is stage A channel 1 etc
//
// ...............
// tc     ttttttt1   
// tc     ttttttt1    (6*7bit timecode gives 42 bit gives 4.3980e+12 samples max
// tc     ttttttt1     which should be about 7 years at 30KHz)
// tc     ttttttt1     
// tc     ttttttt1   
// tc     ttttttt1
// A1  Hi xxxxxxx0    
// A1  Lo xxxxxxx0    (last bits 0)
// A1  ch cccccYY0   
// B1  Hi xxxxxxx0    (YY are the two missing bits from A1, cccc is a 5bit ch code 1-32, or maybe checksum?)
// B1  Lo xxxxxxx0
// B1  ch cccccYY0
// A2  Hi ........
// ... remaining channel data ...
// B16 ch cccccYY0
// T1     yyyyyyy0   
// T2     yyyyyyy0    (space for 14 TTL channels)
// ... next sample ...
//
//
//
				
				
		// timecode
		always @(negedge adc_reset_A)
		 if (ep00wire[2])
				timecode = 0;
		 else
				timecode <= timecode+1;
	
					
		/*
				// count states, assign bytes to clock cycles serially
		always @(posedge AD_clk)
		begin 
		if ( (data_channel==0) && (state==5) )// transmit timecode 1
			databyte <= {timecode[6:0],1'b1};
		if ( (data_channel==0) && (state==4) )// transmit timecode 2
			databyte <= {timecode[13:7],1'b1};
		if ( (data_channel==0) && (state==3) )// transmit timecode 3
			databyte <= {timecode[20:14],1'b1};
		if ( (data_channel==0) && (state==2) )// transmit timecode 4
			databyte <= {timecode[27:21],1'b1};
		if ( (data_channel==0) && (state==1) )// transmit timecode 5
			databyte <= {timecode[34:28],1'b1};
		if ( (data_channel==0) && (state==0) )// transmit timecode 6
			databyte <= {timecode[41:35],1'b1};

		// headstage A
		if (state == 6)
				databyte <= {data_ADC_word_A[15:9],1'b0};	 // A hi byte
		if (state == 7)
				databyte <= {data_ADC_word_A[8:2],1'b0};	 // A low byte
		if (state == 8)                          
			//databyte <= 8'b11111110;          // A extra info
				databyte <= {5'b11111, data_ADC_word_A[1:0], 1'b0};   // A extra info


		// headstage B
		if (state == 9) 
				databyte <= {data_ADC_word_B[15:9],1'b0};	    // B hi byte
		if (state == 10) 
				databyte <= {data_ADC_word_B[8:2],1'b0};		 // B low byte
		if (state == 11)                          
		//	databyte <= 8'b00000000;          // B extra info
				databyte <= {5'b10001, data_ADC_word_B[1:0], 1'b0};          // B extra info (causes errors?)
			
		end;
		
				
		*/
				
				
				//////////// simplified coding
				
				
	always @(negedge AD_clk)
			if (ep00wire[2])
				state <= 0;
			else
				if (adc_data_ready)
					state <= 0;
				else
					state <= state+1;
					
					
always @(posedge AD_clk)
		begin 
	
		if ((data_channel==1) && (state ==0))
		begin
	//	displayA <= ( data_ADC_word_A)+16'b0000000000000000;
	//	displayB <= ( data_ADC_word_B)+16'b0000000000000000;
		end;
	
	
		if ( (data_channel==0) && (state==0) )// transmit timecode 1 
			databyte <= {timecode[6:0],1'b1};
		if ( (data_channel==0) && (state==1) )// transmit timecode 2
			databyte <= {timecode[13:7],1'b1};
		if ( (data_channel==0) && (state==2) )// transmit timecode 3
			databyte <= {timecode[20:14],1'b1};
			//databyte <= 8'b10001011;     
		if ( (data_channel==0) && (state==3) )// transmit timecode 4
			databyte <= {timecode[27:21],1'b1};
			//databyte <= 8'b10011011;     
		if ( (data_channel==0) && (state==4) )// transmit timecode 5
			databyte <= {timecode[34:28],1'b1};
			//databyte <= 8'b10111011;     
		if ( (data_channel==0) && (state==5) )// transmit timecode 6
			databyte <= {timecode[41:35],1'b1};
			//databyte <= 8'b10101011;     
	
	// headstage A
		if (state == 6)
				databyte <= {data_ADC_word_A[15:9],1'b0};	 // A hi byte
			//databyte <= 8'b10000000;          // B extra info
		if (state == 7)
				databyte <= {data_ADC_word_A[7:1],1'b0};	 // A low byte
		//databyte <= 8'b11000000;          // B extra info
		if (state == 8)                          
			//databyte <= 8'b11111110;          // A extra info
				databyte <= {5'b00000, data_ADC_word_A[8],data_ADC_word_A[0], 1'b0};   // A extra info


		// headstage B
		if (state == 9) 
				databyte <= {data_ADC_word_B[15:9],1'b0};	    // B hi byte
		//databyte <= 8'b00000000;          // B extra info
		if (state == 10) 
				databyte <= {data_ADC_word_B[7:1],1'b0};		 // B low byte
		//databyte <= 8'b01000000;          // B extra info
		if (state == 11)                          
		//	databyte <= 8'b00000000;          // B extra info
		databyte <= {5'b00000, data_ADC_word_B[8],data_ADC_word_B[0], 1'b0};          // B extra info
				

		end;
		
				
		// set byteavailable to indicate if new byte is available to shiftreg ? states with data 
		assign byteavailable = (  (state == 6) |(state == 7) |(state == 8) | (state == 9) | (state == 10)| (state == 11)  | // headstages A and B
			((data_channel==0)&&(  (state == 0) | (state == 1) | (state == 2)| (state == 3)| (state == 4)| (state == 5))	)	); // timecode
		
		// one state after each pair in which bytes were written
		assign writetofifo = ( (state == 8)  | (state == 10) | (state == 12) |  // data channels A and B
		((data_channel==0)&&( (state == 2) | (state == 4)| (state == 6) )	)	); // timecode
    	/////////////// end simplified

    	/////////////// end simplified


		// align bytes in shiftreg to convert from serial 8bit to 16 bit to go into transmit fifo
		always @(negedge AD_clk)
		if (byteavailable==1)
			begin
				out_fifo_word <= {out_fifo_word[7:0],databyte};
			end;
			
							
							
// instantiate fifo
big_fifo inst_big_fifo (
  .rst(ep00wire[2]), // input rst
  .wr_clk(AD_clk), // input wr_clk
  .rd_clk(ti_clk), // input rd_clk
  .din({out_fifo_word[7:0],out_fifo_word[15:8]}), // input [15 : 0] dinL  BYTEORDER IS FLIPPED
  .wr_en(writetofifo  && (timecode>255)), // input wr_en, from AD controller, ignore first 2 timecodes to ensure we get clean data
  .wr_ack( ),   // reset adc data ready flag when data has been written to fifo
  .rd_en(pipe_out_read), // input rd_en from host via pipeOut
  .dout(pipe_out_data), // output [15 : 0] dout
  .full( fifo_full ), // output full
  .overflow(fifo_overflow), // output overflow
  .prog_empty(fifo_almost_empty), // output prog_empty
  .empty(fifo_empty ) // output empty
);

always @(negedge AD_clk) // has to be negedge or we end up having data_ready high for 2 clk cycles and we'd get doubled bytes
if (adc_data_ready) //~adc_dat_reset && ?
	adc_dat_reset =1;
else
	adc_dat_reset =0;

// Instantiate the okHost and connect endpoints.
// Host interface
okHost okHI(
	.hi_in(hi_in), .hi_out(hi_out), .hi_inout(hi_inout), .hi_aa(hi_aa), .ti_clk(ti_clk),
	.ok1(ok1), .ok2(ok2));

wire [17*3-1:0]  ok2x;
okWireOR # (.N(3)) wireOR (ok2, ok2x);
okWireIn     wi00 (.ok1(ok1),                           .ep_addr(8'h00), .ep_dataout(ep00wire));
okWireOut    wo21 (.ok1(ok1), .ok2(ok2x[ 0*17 +: 17 ]), .ep_addr(8'h21), .ep_datain( 16'b0000000000000000));
// okBTPipeIn   ep80 (.ok1(ok1), .ok2(ok2x[ 1*17 +: 17 ]), .ep_addr(8'h80), .ep_write(pipe_in_write), .ep_blockstrobe(), .ep_dataout(pipe_in_data), .ep_ready(pipe_in_ready));


okBTPipeOut  epA0 (.ok1(ok1),
 .ok2(ok2x[ 2*17 +: 17 ]),
 .ep_addr(8'ha0),
 .ep_read(pipe_out_read),
 .ep_blockstrobe(),
 .ep_datain(pipe_out_data), //16 bit of data from fifo
 .ep_ready( ~fifo_almost_empty ) // make host wait for data if fifo is empty (have to make sure that a full block is available)
 // use a threshold of 32 words (64 bytes)
 );

endmodule

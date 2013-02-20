`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:53:18 04/22/2011
// Design Name:   AD7980_controller
// Module Name:   C:/Users/jvoigts/uart_test_02/AD7980_controller_tb.v
// Project Name:  uart_test_02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AD7980_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module AD7980_controller_tb;

	// Inputs
	reg clk;
	reg reset;
	reg SDO;
	reg data_ready_reset;

	// Outputs
	wire CNV;
	wire SCK;
	wire amp_step;
	wire amp_reset_b;
	wire data_ready;
	wire [3:0] data_channel;
	wire [15:0] data_ADC_word;

   
	// control unit test 
	wire nclk;
	reg  [41:0] timecode; 
   reg  [15:0] state;
	wire byteavailable; 
	reg  bytecount; // to indicate when 2 bytes are available to write to fifo
	wire writetofifo;
	reg  [7:0]  databyte; // byte to be transmitted
	reg [15:0] out_fifo_word; // holds pairs of bytes to be transmitted

	// Instantiate the Unit Under Test (UUT)
	AD7980_controller uut (
		.clk(clk), 
		.reset(reset), 
		.CNV(CNV), 
		.SCK(SCK), 
		.SDO(SDO), 
		.amp_step(amp_step), 
		.amp_reset_b(amp_reset_b), 
		.data_ready(data_ready), 
		.data_ready_reset(data_ready_reset), 
		.data_channel(data_channel), 
		.data_ADC_word(data_ADC_word) 
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		SDO = 0;
		data_ready_reset = 0;

		// init control logic
		timecode = 42'b0;
		state = 16'b0;
		databyte = 8'b0;
		out_fifo_word = 16'b0;
		bytecount =1'b0;
//		writetofifo =1'b0;

		// Wait 100 ns for global reset to finish
		#100;
		reset=1;
		#100;
		reset=0;
		// Add stimulus here

	end
      
		
		// make 36MHz clock
		always
		#13.88888 clk=~clk;
		
		always
		#50 SDO=~SDO;
		
		//simulate pushing data into some fifo 
		always @(negedge clk)
			if (data_ready)
				data_ready_reset<=1;
			else
				data_ready_reset<=0;
		

					
		// reset state 
	//	always @(posedge data_ready)
	//				state <= 0;

		// timecode
		always @(negedge amp_reset_b)
				timecode <= timecode+1;
				/*
		// count states, assign bytes to clock cycles serially
		always @(posedge clk)
		begin 
		if ( (data_channel==0) && (state==5) )// transmit timecode 1
			databyte <= timecode[6:0];
		if ( (data_channel==0) && (state==4) )// transmit timecode 2
			databyte <= timecode[13:7];
		if ( (data_channel==0) && (state==3) )// transmit timecode 3
			databyte <= timecode[20:14];
		if ( (data_channel==0) && (state==2) )// transmit timecode 4
			databyte <= timecode[27:21];
		if ( (data_channel==0) && (state==1) )// transmit timecode 5
			databyte <= timecode[34:28];
		if ( (data_channel==0) && (state==0) )// transmit timecode 6
			databyte <= timecode[41:35];


		// headstage A
		if (state == 6) 
				databyte <= data_ADC_word[15:8];	 // A hi byte 
		if (state == 7) 
				databyte <= data_ADC_word[7:0];	 // A low byte
		if (state == 8)                          
				databyte <= 8'b11111111;          // A extra info
				
			
		// headstage B
		if (state == 9) 
				databyte <= data_ADC_word[15:8]-100;	 // A hi byte 
		if (state == 10) 
				databyte <= data_ADC_word[7:0];	 // A low byte
		if (state == 11)                          
				databyte <= 8'b11111111;          // A extra info
				
				
								
				
		end;
				
		// set byteavailable to indicate if new byte is available to shiftreg
		assign byteavailable = ( (data_channel==0  && ((state == 1)|(state == 2)|(state == 3)|(state == 4)|(state == 5)|(state == 6) ) ) |
		(state == 7) | (state == 8) | (state == 9) |
		(state == 10) | (state == 11) | (state == 11) 
		);
				*/
				
				
				//////////// simplified coding
											// count states
		always @(negedge clk)
			if (reset)
				state <= 0;
			else
				if (data_ready)
					state <= 0;
				else
					state <= state+1;
					
					
		always @(posedge clk)
		begin 
	
		// headstage A
		if (state == 0)
				databyte <= data_ADC_word[15:8];	 // A hi byte
				//databyte <= 8'b00000001;
		if (state == 1)
				databyte <= data_ADC_word[7:0];	 // A low byte
				//databyte <= 8'b00000010;

		// headstage B
		if (state == 2) 
				databyte <= data_ADC_word[15:8]+1;	    // B hi byte 
				//databyte <= 8'b00000011;
		if (state == 3) 
				databyte <= data_ADC_word[7:0]+1;		 // B low byte
				//databyte <= 8'b00000100;
				
		// zeros after all other chs			
			if ( (data_channel==0) && (state==4) )// transmit timecode 6
			databyte <= 8'b00000000;
			if ( (data_channel==0) && (state==5) )// transmit timecode 6
			databyte <= 8'b00000000;
		
		end;
		
				
		// set byteavailable to indicate if new byte is available to shiftreg ? states with data 
		assign byteavailable = ( (state == 0) |(state == 1) | (state == 2) | (state == 3)  |
			((data_channel==0)&&(  (state == 4) | (state == 5) )	)	);
		
		// one state after each pair in which bytes were written
		assign writetofifo = ( (state == 2)  | (state == 4) |
		((data_channel==0)&&( (state == 6) )	)	);
    	/////////////// end simplified


		// align bytes in shiftreg to convert from serial 8bit to a6 bit to go into transmit fifo
		always @(negedge clk)
		if (byteavailable==1)
			begin
				out_fifo_word <= {out_fifo_word[7:0],databyte};
			end;
			
							
							
			assign readfromfifo = ( (state == 20)  | (state==22) );

big_fifo inst_big_fifo (
  .rst(reset), // input rst
  .wr_clk(clk), // input wr_clk
  .rd_clk(clk), // input rd_clk
  .din(out_fifo_word), // input [15 : 0] dinL
  .wr_en(writetofifo ), // input wr_en, from AD controller 
  .wr_ack( ),   // reset adc data ready flag when data has been written to fifo
  .rd_en(readfromfifo), // input rd_en from host via pipeOut
  .dout(pipe_out_data), // output [15 : 0] dout
  .full( fifo_full ), // output full
  .overflow(fifo_overflow), // output overflow
  .prog_empty(fifo_almost_empty), // output prog_empty
  .wr_data_count(fifo_data_count), // output [12 : 0] wr_data_count
  .empty(fifo_empty ) // output empty
);

    	/////////////// end simplified
		
		// align bytes in shiftreg to convert from serial 8bit to a6 bit to go into transmit fifo

			
/*
		always @(negedge clk)
		begin
		if (byteavailable == 1 && state != 0)
			writetofifo <=1;	
		
		if (writetofifo == 1)
			writetofifo <=0;	
		end;
	*/
	
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:32:27 05/08/2011
// Design Name:   PipeTest
// Module Name:   C:/Users/jvoigts/ok_ephys_03/PipeTest_tb.v
// Project Name:  ok_ephys_03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PipeTest
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PipeTest_tb;

	// Inputs
	reg [7:0] hi_in;
	reg clk1;
	reg AD_clk;
	reg adc_sdo;

	// Outputs
	wire [1:0] hi_out;
	wire i2c_sda;
	wire i2c_scl;
	wire hi_muxsel;
	wire [7:0] led;
	wire adc_cnv;
	wire adc_sck;
	wire adc_step;
	wire adc_reset;

	// Bidirs
	wire [15:0] hi_inout;
	wire hi_aa;

	// Instantiate the Unit Under Test (UUT)
	PipeTest uut (
		.hi_in(hi_in), 
		.hi_out(hi_out), 
		.hi_inout(hi_inout), 
		.hi_aa(hi_aa), 
		.i2c_sda(i2c_sda), 
		.i2c_scl(i2c_scl), 
		.hi_muxsel(hi_muxsel), 
		.clk1(clk1), 
		.AD_clk(AD_clk), 
		.led(led), 
		.adc_cnv(adc_cnv), 
		.adc_sck(adc_sck), 
		.adc_step(adc_step), 
		.adc_reset(adc_reset), 
		.adc_sdo(adc_sdo)
	);


//------------------------------------------------------------------------
// Begin okHostInterface simulation user configurable  global data
//------------------------------------------------------------------------
parameter BlockDelayStates = 5;   // REQUIRED: # of clocks between blocks of pipe data
parameter ReadyCheckDelay = 5;    // REQUIRED: # of clocks before block transfer before
                                  //           host interface checks for ready (0-255)
parameter PostReadyDelay = 5;     // REQUIRED: # of clocks after ready is asserted and
                                  //           check that the block transfer begins (0-255)
parameter pipeInSize = 1024;      // REQUIRED: byte (must be even) length of default
                                  //           PipeIn; Integer 0-2^32
parameter pipeOutSize = 1024;     // REQUIRED: byte (must be even) length of default
                                  //           PipeOut; Integer 0-2^32

integer k;
reg  [7:0]  pipeIn [0:(pipeInSize-1)];
initial for (k=0; k<pipeInSize; k=k+1) pipeIn[k] = 8'h00;

reg  [7:0]  pipeOut [0:(pipeOutSize-1)];
initial for (k=0; k<pipeOutSize; k=k+1) pipeOut[k] = 8'h00;

//initial button = 4'hf;

//------------------------------------------------------------------------
//  Available User Task and Function Calls:
//    FrontPanelReset;                  // Always start routine with FrontPanelReset;
//    SetWireInValue(ep, val, mask);
//    UpdateWireIns;
//    UpdateWireOuts;
//    GetWireOutValue(ep);
//    ActivateTriggerIn(ep, bit);       // bit is an integer 0-15
//    UpdateTriggerOuts; 
//    IsTriggered(ep, mask);            // Returns a 1 or 0
//    WriteToPipeIn(ep, length);        // passes pipeIn array data
//    ReadFromPipeOut(ep, length);      // passes data to pipeOut array
//    WriteToBlockPipeIn(ep, blockSize, length);    // pass pipeIn array data; blockSize and length are integers
//    ReadFromBlockPipeOut(ep, blockSize, length);  // pass data to pipeOut array; blockSize and length are integers
//
//    *Pipes operate by passing arrays of data back and forth to the user's
//    design.  If you need multiple arrays, you can create a new procedure
//    above and connect it to a differnet array.  More information is
//    available in Opal Kelly documentation and online support tutorial.
//------------------------------------------------------------------------

// User configurable block of called FrontPanel operations.
reg [15:0] r1, r2, exp, sum;
initial r1 = 0;
initial r2 = 0;
initial exp = 0;
initial sum = 0;




	initial begin
	
	
	FrontPanelReset;                      // Start routine with FrontPanelReset;
	
		// Initialize Inputs
		hi_in = 0;
		clk1 = 0;
		AD_clk = 0;
		adc_sdo = 0;

		// Add stimulus here

	end
      
		

		// make 48MHz clock
		always
		#10.416 clk1=~clk1;
		
		// make 36MHz clock 
		always
		#13.888 AD_clk=~AD_clk;
		
		
		// make random SDO values
		always
		#51 adc_sdo =~adc_sdo;
		
		
endmodule


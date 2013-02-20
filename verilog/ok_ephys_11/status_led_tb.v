`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:18:23 05/14/2011
// Design Name:   led_status01
// Module Name:   C:/Users/jvoigts/ok_ephys_09/status_led_tb.v
// Project Name:  ok_ephys_09
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: led_status01
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module status_led_tb;

	// Inputs
	reg clk;
	reg status;

	// Outputs
	wire led_driver;

	// Instantiate the Unit Under Test (UUT)
	led_status01 uut (
		.clk(clk), 
		.status(status), 
		.led_driver(led_driver)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		status = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
		always
		#12.5 clk=~clk;
		
endmodule


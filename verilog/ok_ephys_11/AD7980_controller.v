`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:47 02/05/2010 
// Design Name: 
// Module Name:    AD7980_controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module AD7980_controller(clk, reset, CNV, SCK, SDO, amp_step, amp_reset_b, data_ready, data_ready_reset, data_channel, data_ADC_word);
    
	 input clk;
	 input reset;
	 input SDO;
	 input data_ready_reset;

    output CNV;
    output SCK;
    output amp_step;
    output amp_reset_b;
    output data_ready;
    output [3:0] data_channel;
    output [15:0] data_ADC_word;

	reg CNV, SCK, amp_step, amp_reset_b, data_ready, load_output_reg, channel_increment;
	reg [3:0] data_channel;
	reg [15:0] data_ADC_word;
	
	reg [6:0] state;
	reg [15:0] ADC_shift_reg;
	reg [3:0] channel;
	
	wire CNV_i, SCK_i, amp_step_i, amp_reset_b_i, load_output_reg_i, channel_increment_i;
	
	
	
	always @(negedge clk)
		if (reset)
			ADC_shift_reg <= 0;
		else if (~CNV & SCK)
			ADC_shift_reg <= {ADC_shift_reg[14:0], SDO};
			
	always @(posedge clk)
		if (reset)
			begin
				data_channel <= 0;
				data_ADC_word <= 0;
			end
		else if (load_output_reg)
			begin
				data_channel <= channel;
				data_ADC_word <= ADC_shift_reg;
//				data_channel <= 8'h58;
//				data_ADC_word <= 16'h595A;
			end
				
	always @(posedge clk)
		if (reset)
			channel <= 0;
		else if (channel_increment)
			channel <= channel + 1;

	always @(posedge clk)
		if (reset)
			data_ready <= 0;
		else if (channel_increment)
			data_ready <= 1;
		else if (data_ready_reset)
			data_ready <= 0;
			
	always @(posedge clk)
		if (reset)
			begin
				CNV <= 0;
				SCK <= 0;
				amp_step <= 0;
				amp_reset_b <= 1;
				load_output_reg <= 0;
				channel_increment <= 0;
			end
		else
			begin
				CNV <= CNV_i;
				SCK <= SCK_i;
				amp_step <= amp_step_i;
				amp_reset_b <= ~amp_reset_b_i;
				load_output_reg <= load_output_reg_i;
				channel_increment <= channel_increment_i;
			end

	always @(posedge clk)
		if (reset)
			state <= 90;		// states 90-122 are 'starting' states to start amp on channel 0
		else
			if (state == 89)	// states 0-89 are normal states that cycle after reset
				state <= 0;
			else if (state == 122)
				state <= 2;
			else
				state <= state + 1;

	assign CNV_i = 	(state ==  0) | (state ==  1) | (state ==  2) | (state ==  3) | (state ==  4) |
					(state ==  5) | (state ==  6) | (state ==  7) | (state ==  8) | (state ==  9) |
					(state == 10) | (state == 11) | (state == 12) | (state == 13) | (state == 14) |
					(state == 15) | (state == 16) | (state == 17) | (state == 18) | (state == 19) |
					(state == 20) | (state == 21) | (state == 22) | (state == 23) | (state == 24) |
					(state == 25) | (state == 26) | (state == 27) | (state == 28) | (state == 29) |
					(state == 30) | (state == 31) | (state == 32) | (state == 33) | (state == 34) |
					(state == 35) | (state == 36) | (state == 37) | (state == 38) | (state == 39) |
					(state == 40) | (state == 41) | (state == 42) | (state == 43) | (state == 44) |
					(state == 45) | (state == 46) | (state == 47) | (state == 48) | (state == 49) |
					(state == 50) | (state == 51) | (state == 52) | (state == 53) | (state == 54) |
					(state == 55) | (state == 56) | (state == 57);

	assign SCK_i =	(state == 59) | (state == 61) | (state == 63) | (state == 65) | (state == 67) |
					(state == 69) | (state == 71) | (state == 73) | (state == 75) | (state == 77) |
					(state == 79) | (state == 81) | (state == 83) | (state == 85) | (state == 87) |
					(state == 89);
	
	assign amp_step_i = (channel != 15) &
					   ((state == 59) | (state == 60) | (state == 61) | (state == 62) | (state == 63) |
						(state == 64) | (state == 65) | (state == 66) | (state == 67) | (state == 68) |
						(state == 69) | (state == 70) | (state == 71) | (state == 72) | (state == 73) |
						(state == 74) | (state == 75) | (state == 76) | (state == 77) | (state == 78) |
						(state == 79) | (state == 80) | (state == 81) | (state == 82) | (state == 83) |
						(state == 84) | (state == 85) | (state == 86) | (state == 87) | (state == 88));

	assign amp_reset_b_i = ((channel == 15) &
					   ((state == 59) | (state == 60) | (state == 61) | (state == 62) | (state == 63) |
						(state == 64) | (state == 65) | (state == 66) | (state == 67) | (state == 68) |
						(state == 69) | (state == 70) | (state == 71) | (state == 72) | (state == 73) |
						(state == 74) | (state == 75) | (state == 76) | (state == 77) | (state == 78) |
						(state == 79) | (state == 80) | (state == 81) | (state == 82) | (state == 83) |
						(state == 84) | (state == 85) | (state == 86) | (state == 87) | (state == 88))) |
					   ((state == 90) | (state == 91) | (state == 92) | (state == 93) | (state == 94) |
						(state == 95) | (state == 96) | (state == 97) | (state == 98) | (state == 99) |
						(state == 100) | (state == 101) | (state == 102) | (state == 103) | (state == 104) |
						(state == 105) | (state == 106) | (state == 107) | (state == 108) | (state == 109) |
						(state == 110) | (state == 111) | (state == 112) | (state == 113) | (state == 114) |
						(state == 115) | (state == 116) | (state == 117) | (state == 118) | (state == 119));

	assign load_output_reg_i = (state == 0);
	
	assign channel_increment_i = (state == 1);

endmodule

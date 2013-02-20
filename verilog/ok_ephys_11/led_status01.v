`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:42 05/14/2011 
// Design Name: 
// Module Name:    led_status01 
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
module led_status01(
    
input clk,
    input status,
    output led_driver
    );

reg [30:0] cnt;
always @(posedge clk) cnt<=cnt+1;
wire [5:0] PWM_input = cnt[30] ? cnt[29:24] : ~cnt[29:24];    // ramp the PWM input up and down

reg [6:0] PWM;
always @(posedge clk) PWM <= PWM[5:0]+PWM_input;

assign led_driver = PWM[6];


endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:10 05/14/2011 
// Design Name: 
// Module Name:    led_pwm_01 
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
module led_pwm_01(
    input clk,
    input val,
    output led_driver
    );



reg [15:0] PWM;
always @(posedge clk) PWM <= PWM[15:0]+val;

assign led_driver = PWM[15];


endmodule

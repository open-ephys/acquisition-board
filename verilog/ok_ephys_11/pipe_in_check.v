//------------------------------------------------------------------------
// pipe_in_check.v
//
// Received data and checks against pseudorandom sequence for Pipe In.
//
// Copyright (c) 2005-2010  Opal Kelly Incorporated
// $Rev$ $Date$
//------------------------------------------------------------------------
`timescale 1ns / 1ps
`default_nettype none

module pipe_in_check(
	input  wire            clk,
	input  wire            reset,
	input  wire            pipe_in_write,
	input  wire [15:0]     pipe_in_data,
	output wire            pipe_in_ready,
	input  wire            mode,               // 0=Count, 1=LFSR
	output reg  [31:0]     error_count
	);

reg  [63:0]  lfsr;

assign pipe_in_ready = 1'b1;


//------------------------------------------------------------------------
// LFSR mode signals
//
// 32-bit: x^32 + x^22 + x^2 + 1
// lfsr_out_reg[0] <= r[31] ^ r[21] ^ r[1]
//------------------------------------------------------------------------
reg [31:0] temp;
always @(posedge clk) begin
	if (reset == 1'b1) begin
		error_count <= 0;
		
		if (mode == 1'b1) begin
			lfsr  <= 64'h0D0C0B0A04030201;
		end else begin
			lfsr  <= 64'h0000000100000001;
		end
	end else begin
		
		// Check incoming data for validity
		if (pipe_in_write == 1'b1) begin
			if (pipe_in_data[15:0] != lfsr[15:0]) begin
				error_count <= error_count + 1'b1;
			end
		end

		// Cycle the LFSR
		if (pipe_in_write == 1'b1) begin
			if (mode == 1'b1) begin
				temp = lfsr[31:0];
				lfsr[31:0]  <= {temp[30:0], temp[31] ^ temp[21] ^ temp[1]};
				temp = lfsr[63:32];
				lfsr[63:32] <= {temp[30:0], temp[31] ^ temp[21] ^ temp[1]};
			end else begin
				lfsr[31:0]  <= lfsr[31:0]  + 1'b1;
				lfsr[63:32] <= lfsr[63:32] + 1'b1;
			end
		end
	end
end

endmodule

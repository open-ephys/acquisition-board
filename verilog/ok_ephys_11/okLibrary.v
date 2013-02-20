//------------------------------------------------------------------------
// FrontPanel Library Module Declarations (Verilog)
// XEM6001 XEM6010
//
// IDELAY and IODELAY fixed delays were determined empirically to meet
// timing for particular devices on particular products.
//
// Copyright (c) 2004-2011 Opal Kelly Incorporated
// $Rev: 868 $ $Date: 2011-03-14 10:16:59 -0700 (Mon, 14 Mar 2011) $
//------------------------------------------------------------------------


module idelay_S6 # (
	parameter N=1,
	parameter DELAY=50
	) (
	input  wire [N-1:0]  data_in,
	output wire [N-1:0]  data_out
	);
	genvar i;
	generate
		for (i=0; i<N; i=i+1) begin : delays
			IODELAY2 #(
				.IDELAY_TYPE("FIXED"),
				.IDELAY_VALUE(DELAY),
				.DELAY_SRC("IDATAIN")
			) iodelay_inst (
				.IDATAIN(data_in[i]),
				.DATAOUT(data_out[i]),
				.T(1'b1)
			);
		end
	endgenerate
endmodule


module okHost
	(
	input  wire [7:0]  hi_in,
	output wire [1:0]  hi_out,
	inout  wire [15:0] hi_inout,
	inout  wire        hi_aa,
	output wire        ti_clk,
	output wire [30:0] ok1,
	input  wire [16:0] ok2
	);

	wire [24:0] okHC;
	wire [20:0] okCH;
	reg  [15:0] hi_datain;
	wire [15:0] hi_datain_delay;
	wire [15:0] hi_dataout;
	reg  [15:0] hi_dataout_reg;
	reg         hi_drive;
	
	assign okHC[0]     = ti_clk;
	assign okHC[7:1]   = hi_in[7:1];
	assign okHC[23:8]  = hi_datain;

	// Clock buffer for the Host Interface clock.
	wire dcm_clk0, rstin, rst1, rst2, rst3, rst4; 

	DCM_SP hi_dcm (.CLKIN     (hi_in[0]),
	               .CLKFB     (ti_clk),
	               .CLK0      (dcm_clk0),
	               .PSCLK     (1'b0),
	               .PSEN      (1'b0),
	               .PSINCDEC  (1'b0),
	               .RST       (rstin),
	               .DSSEN     (1'b0));
	BUFG clkout1_buf (.I(dcm_clk0), .O(ti_clk));
	FDS flop1(.D(1'b0), .C(hi_in[0]), .Q(rst1), .S(1'b0));
	FD flop2(.D(rst1), .C(hi_in[0]), .Q(rst2));
	FD flop3(.D(rst2), .C(hi_in[0]), .Q(rst3));
	FD flop4(.D(rst3), .C(hi_in[0]), .Q(rst4));
	assign rstin = (rst2 | rst3 | rst4);
	
	// Bidirectional IOBUFs for the hi_data lines.
	assign hi_inout = (hi_drive==1'b0) ? (hi_dataout_reg) : (16'bzzzzzzzzzzzzzzzz);
	idelay_S6 #(.N(16), .DELAY(50)) okInputHoldDelay (.data_in(hi_inout), .data_out(hi_datain_delay));
	always @(posedge ti_clk) begin
		hi_drive       <= ~okCH[2];         // Must invert to place DFF in OLOGIC
		hi_dataout_reg <= okCH[18:3];       // OLOGIC
		hi_datain      <= hi_datain_delay;  // ILOGIC
	end

	OBUF obuf0(.I(okCH[0]), .O(hi_out[0]));
	OBUF obuf1(.I(okCH[1]), .O(hi_out[1]));
	IOBUF tbuf(.I(okCH[19]), .O(okHC[24]), .T(okCH[20]), .IO(hi_aa));

	okCoreHarness core0(.okHC(okHC), .okCH(okCH), .ok1(ok1), .ok2(ok2));
endmodule


module okCoreHarness(okHC, okCH, ok1, ok2);
	input  [24:0] okHC;
	output [20:0] okCH;
	output [30:0] ok1;
	input  [16:0] ok2;
// synthesis attribute box_type okCoreHarness "black_box"
endmodule


module okWireIn(ok1, ep_addr, ep_dataout);
	input  [30:0] ok1;
	input  [7:0]  ep_addr;
	output [15:0] ep_dataout;
// synthesis attribute box_type okWireIn "black_box"
endmodule


module okWireOut(ok1, ok2, ep_addr, ep_datain);
	input  [30:0] ok1;
	output [16:0] ok2;
	input  [7:0]  ep_addr;
	input  [15:0] ep_datain;
// synthesis attribute box_type okWireOut "black_box"
endmodule


module okTriggerIn(ok1, ep_addr, ep_clk, ep_trigger);
	input  [30:0] ok1;
	input  [7:0]  ep_addr;
	input         ep_clk;
	output [15:0] ep_trigger;
// synthesis attribute box_type okTriggerIn "black_box"
endmodule


module okTriggerOut(ok1, ok2, ep_addr, ep_clk, ep_trigger);
	input  [30:0] ok1;
	output [16:0] ok2;
	input  [7:0]  ep_addr;
	input         ep_clk;
	input  [15:0] ep_trigger;
// synthesis attribute box_type okTriggerOut "black_box"
endmodule


module okPipeIn(ok1, ok2, ep_addr, ep_write, ep_dataout);
	input  [30:0] ok1;
	output [16:0] ok2;
	input  [7:0]  ep_addr;
	output        ep_write;
	output [15:0] ep_dataout;
// synthesis attribute box_type okPipeIn "black_box"
endmodule


module okPipeOut(ok1, ok2, ep_addr, ep_read, ep_datain);
	input  [30:0] ok1;
	output [16:0] ok2;
	input  [7:0]  ep_addr;
	output        ep_read;
	input  [15:0] ep_datain;
// synthesis attribute box_type okPipeOut "black_box"
endmodule

module okBTPipeIn(ok1, ok2, ep_addr, ep_write, ep_blockstrobe, ep_dataout, ep_ready);
	input  [30:0] ok1;
	output [16:0] ok2;
	input  [7:0]  ep_addr;
	output        ep_write;
	output        ep_blockstrobe;
	output [15:0] ep_dataout;
	input         ep_ready;
// synthesis attribute box_type okBTPipeIn "black_box"
endmodule


module okBTPipeOut(ok1, ok2, ep_addr, ep_read, ep_blockstrobe, ep_datain, ep_ready);
	input  [30:0] ok1;
	output [16:0] ok2;
	input  [7:0]  ep_addr;
	output        ep_read;
	output        ep_blockstrobe;
	input  [15:0] ep_datain;
	input         ep_ready;
// synthesis attribute box_type okBTPipeOut "black_box"
endmodule


module okWireOR # (parameter N = 1)	(
	output reg  [16:0]     ok2,
	input  wire [N*17-1:0] ok2s
	);

	integer i;
	always @(ok2s)
	begin
		ok2 = 0;
		for (i=0; i<N; i=i+1) begin: wireOR
			ok2 = ok2 | ok2s[ i*17 +: 17 ];
		end
	end
endmodule

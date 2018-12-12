`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/11
 @Filename:     reg.v
 @Software:     ISE_13.4
 @LastModify:   18/12/11
 */


/* When not enable, just simply stop increasing pc..*/
module PC_Reg(
		enable, clk,  // Input signal.
		pc		 	  // Output signal.
    );

	parameter PC_SIZE = 11;

	input wire enable, clk;
	output reg [PC_SIZE - 1: 0] pc;

	initial begin 
		pc = 0;
	end

	always @(posedge clk) begin 
		if (enable) begin
			pc = pc + 1;
		end
	end

endmodule


/* Litter tricks bewteen enable and code.*/
module ID_Reg (
		enable, clk,									// Input signal.
		i_icode, i_ri, i_rj, i_rk, i_imme, i_ifunc,
		o_icode, o_ri, o_rj, o_rk, o_imme, o_ifunc		// Output signal.
	);

	parameter CODE_SIZE = 6;
	parameter REG_SIZE = 5;
	parameter IMME_SIZE = 11;

	input wire enable, clk;
	input wire [CODE_SIZE - 1: 0] i_icode;
	input wire [REG_SIZE - 1: 0] i_ri, i_rj, i_rk;
	input wire [IMME_SIZE - 1: 0] i_imme, i_ifunc;

	output reg [CODE_SIZE - 1: 0] o_icode;
	output reg [REG_SIZE - 1: 0] o_ri, o_rj, o_rk;
	output reg [IMME_SIZE - 1: 0] o_imme, o_ifunc;

	initial begin
		o_icode = 0;
		{o_ri, o_rj, o_rk} = 100'd0;
		o_imme = 0;
		o_ifunc = 0;
	end

	always @(posedge clk) begin 
		if (enable) begin 
			o_icode = i_icode;
			o_ri = i_ri;
			o_rj = i_rj;
			o_rk = i_rk;
			o_imme = i_imme;
			o_ifunc = i_ifunc;
		end else begin 
			o_icode = 0;	// i_code = 0 means nop.
			o_ri = 0;
			o_rj = 0;
			o_rk = 0;
			o_imme = 0;
			o_ifunc = 0;
		end
	end

endmodule


module RF_Reg(
		clk,
		i_ri, i_icode, i_jout, i_kout, i_imme, i_ifunc,
		o_ri, o_icode, o_jout, o_kout, o_imme, o_ifunc
	);

	parameter CODE_SIZE = 6;
	parameter REG_SIZE = 5;
	parameter DATA_SIZE = 32;
	parameter FUNC_SIZE = 11;

	input wire clk;
	input wire [REG_SIZE - 1: 0] i_ri; 
	input wire [CODE_SIZE - 1: 0] i_icode;
	input wire [DATA_SIZE - 1: 0] i_jout, i_kout, i_imme;
	input wire [FUNC_SIZE - 1: 0] i_ifunc;

	output reg [REG_SIZE - 1: 0] o_ri;
	output reg [CODE_SIZE - 1: 0] o_icode;
	output reg [DATA_SIZE - 1: 0] o_jout, o_kout, o_imme;
	output reg [FUNC_SIZE - 1: 0] o_ifunc;

	initial begin 
		o_icode = 0;
		o_jout = 0;
		o_kout = 0;
		o_imme = 0;
		o_ifunc = 0;
		o_ri = 0;
	end

	always @(posedge clk) begin 
		o_icode = i_icode;
		o_jout = i_jout;
		o_kout = i_kout;
		o_imme = i_imme;
		o_ifunc = i_ifunc;
		o_ri = i_ri;
	end

endmodule


module ALU_Reg(
		clk,							// Input signal.
		i_ri, i_icode, i_jout, i_aout,	// Output signal.
		o_ri, o_icode, o_jout, o_aout
	);

	parameter CODE_SIZE = 6;
	parameter REG_SIZE = 5;
	parameter DATA_SIZE = 32;

	input wire clk;
	input wire [REG_SIZE - 1: 0] i_ri;
	input wire [CODE_SIZE - 1: 0] i_icode;
	input wire [DATA_SIZE - 1: 0] i_jout, i_aout;

	output reg [REG_SIZE - 1: 0] o_ri;
	output reg [CODE_SIZE - 1: 0] o_icode;
	output reg [DATA_SIZE - 1: 0] o_jout, o_aout;

	initial begin 
		o_icode = 0;
		o_jout = 0;
		o_aout = 0;
		o_ri = 0;
	end

	always @(posedge clk) begin 
		o_icode = i_icode;
		o_jout = i_jout;
		o_aout = i_aout;
		o_ri = i_ri;
	end

endmodule


module MEM_Reg (
		clk,
		i_ri, i_icode, i_mout, i_aout, 
		o_ri, o_icode, o_mout, o_aout
	);

	parameter CODE_SIZE	= 6;
	parameter REG_SIZE = 5;
	parameter DATA_SIZE = 32;

	input wire clk;
	input wire [REG_SIZE - 1: 0] i_ri;
	input wire [CODE_SIZE - 1: 0] i_icode;
	input wire [DATA_SIZE - 1: 0] i_mout, i_aout;

	output reg [REG_SIZE - 1: 0] o_ri;
	output reg [CODE_SIZE - 1: 0] o_icode;
	output reg [DATA_SIZE - 1: 0] o_mout, o_aout;

	initial begin 
		o_ri = 0;
		o_icode = 0;
		o_aout = 0;
		o_mout = 0;
	end

	always @(posedge clk) begin 
		o_ri = i_ri;
		o_icode = i_icode;
		o_mout = i_mout;
		o_aout = i_aout;
	end

endmodule

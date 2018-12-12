`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/10
 @Filename:     alu.v
 @Software:     ISE_13.4
 @LastModify:   18/12/10
 */

`define ADD 11'd1
`define SUB 11'd2
`define AND 11'd3
`define OR	11'd4
`define XOR	11'd5


module ALU(
		alu_a, alu_b, i_func,	// Input signal.
		alu_out					// Output signal.
    );
	
	parameter DATA_SIZE = 32;
	parameter FUNC_SIZE = 11;

	input wire [DATA_SIZE - 1: 0] alu_a, alu_b;
	input wire [FUNC_SIZE - 1: 0] i_func;

	output wire [DATA_SIZE - 1: 0] alu_out;

	// Default i_func = 0 and alu_out is 0.
	assign alu_out = i_func == `ADD ? alu_a + alu_b:
				     i_func == `SUB ? alu_a - alu_b:
			  	  	 i_func == `AND ? alu_a & alu_b:
			  		 i_func == `OR  ? alu_a | alu_b:
			  		 i_func == `XOR ? alu_a ^ alu_b:
			  		 0;

endmodule

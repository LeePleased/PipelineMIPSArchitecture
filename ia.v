`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/10
 @Filename:     ia.v
 @Software:     ISE_13.4
 @LastModify:   18/12/11
 */


`define CODE_START INSTR_SIZE-CODE_SIZE
`define R_I_START  `CODE_START-REG_SIZE
`define R_J_START  `R_I_START-REG_SIZE
`define R_K_START  `R_J_START-REG_SIZE
`define IMME_START `R_K_START-IMME_SIZE

`define LW_CODE 	6'd2
`define SW_CODE 	6'd3
`define ADD_FUNC 	11'd1


module IA(
		instr,			// Input signal.
		i_code, 		// Output signal.
		r_i, r_j, r_k, 
		imme, i_func
    );

	parameter INSTR_SIZE = 32;
	parameter CODE_SIZE = 6;
	parameter REG_SIZE = 5;
	parameter IMME_SIZE = 11;

	input wire [INSTR_SIZE - 1: 0] instr;

	output wire [CODE_SIZE - 1: 0] i_code;
	output wire [REG_SIZE - 1: 0] r_i, r_j, r_k;
	output wire [IMME_SIZE - 1: 0] imme, i_func;

	assign i_code = instr[INSTR_SIZE - 1: `CODE_START];
	assign r_i = instr[`CODE_START - 1: `R_I_START];
	assign r_j = instr[`R_I_START - 1: `R_J_START];
	assign r_k = instr[`R_J_START - 1: `R_K_START];
	assign imme = instr[`R_K_START - 1: `IMME_START];

	assign i_func = i_code == `LW_CODE ? `ADD_FUNC:
					i_code == `SW_CODE ? `ADD_FUNC:
					imme;

endmodule

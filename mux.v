`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/11
 @Filename:     mux.v
 @Software:     ISE_13.4
 @LastModify:   18/12/11
 */

`define ALU_CODE 6'd1
`define LW_CODE  6'd2
`define SW_CODE  6'd3


module RF_R_MUX(
		r_i, r_j, e_code,	// Input signal.
		o_data				// Output signal.
    );

	parameter REG_SIZE = 5;
	parameter CODE_SIZE = 6;

 	input wire [REG_SIZE - 1: 0] r_i, r_j;
 	input wire [CODE_SIZE - 1: 0] e_code;

 	output wire [REG_SIZE - 1: 0] o_data;
 	assign o_data = e_code == `LW_CODE ? r_j: 
 		   		    r_i;

endmodule


module ALU_A_MUX (
		j_out, k_out, e_code,
		o_data
	);

	parameter DATA_SIZE = 32;
	parameter CODE_SIZE = 6;

	input wire [DATA_SIZE - 1: 0] j_out, k_out;
	input wire [CODE_SIZE - 1: 0] e_code;

	output wire [DATA_SIZE - 1: 0] o_data;
	assign o_data = e_code == `ALU_CODE ? j_out:
					k_out;

endmodule


module ALU_B_MUX (
		k_out, imme, e_code,
		o_data
	);

	parameter DATA_SIZE = 32;
	parameter CODE_SIZE = 6;

	input wire [DATA_SIZE - 1: 0] k_out, imme;
	input wire [CODE_SIZE - 1: 0] e_code;

	output wire [DATA_SIZE - 1 : 0] o_data;
	assign o_data = e_code == `ALU_CODE ? k_out:
					imme;

endmodule


module RF_W_MUX (
		a_out, m_out, e_code, 
		o_data
	);

	parameter DATA_SIZE = 32;
	parameter CODE_SIZE = 6;

	input wire [DATA_SIZE - 1: 0] a_out, m_out;
	input wire [CODE_SIZE - 1: 0] e_code;

	output wire [DATA_SIZE - 1: 0] o_data;
	assign o_data = e_code == `LW_CODE ? m_out:
					a_out;

endmodule

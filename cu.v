`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/11
 @Filename:     cu.v
 @Software:     ISE_13.4
 @LastModify:   18/12/12
 */

`define NOP_CODE 6'd0
`define ALU_CODE 6'd1
`define LW_CODE  6'd2
`define SW_CODE  6'd3

`define NUM_PIPE 5
`define TIME_BIT 32
`define SIGN_BIT `TIME_BIT+1+REG_SIZE+CODE_SIZE


/** 
  Control unit for risk management. 

  r_b: the target register to write bypass;
  b_enable: to make sure if it's writable;

 */
module CU(
		clk,							// Input signal.
		i_code, r_i, r_j, r_k,
		p_enable, i_enable,				// Output signal.
		b_enable, r_b
    ); 

	parameter CODE_SIZE = 6;
	parameter REG_SIZE = 5;

	input wire [CODE_SIZE - 1: 0] i_code;
	input wire [REG_SIZE - 1: 0] r_i, r_j, r_k;
	input wire clk;		// Negedge sensitive signal.

	output reg p_enable, i_enable, b_enable;
	output reg [REG_SIZE - 1: 0] r_b;

	reg [`TIME_BIT - 1: 0] count;
	reg [`SIGN_BIT - 1: 0] sign [`NUM_PIPE - 1: 0];

	// 0 means normal, 1 means conflict, 2 means bypass.
	reg [1:0] t_log;
	reg [1:0] s_log;
	reg [`NUM_PIPE - 1: 0] s_pos;

	integer i;
	initial begin 
		p_enable = 1'b1;	// Run PC normally.
		i_enable = 1'b1;	// Run IA nornally.
		b_enable = 1'b0;	// Stop bypass.
		r_b = 0;

		count = 0;
		t_log = 0;
		s_log = 0;
		s_pos = 0;
		for (i = 0; i < `NUM_PIPE; i = i + 1) begin 
			sign[i] = 100'd0;
		end
	end

	always @(negedge clk) begin
		s_pos = count % `NUM_PIPE;
		if (i_code == `NOP_CODE) begin 
			p_enable = 1'b1;
			i_enable = 1'b1;
			b_enable = 1'b0;

			sign[s_pos] = 100'd0;
		end else begin
			for (i = 0; i < `NUM_PIPE; i = i + 1) begin 
				if (i_code != `LW_CODE) begin 
					check(sign[i], r_j, count, t_log);
					if (t_log == 2'd1) begin 
						s_log = 2'd1;
					end
					if (t_log == 2'd2) begin
						if (s_log != 2'd1) begin
							r_b = r_j;
							s_log = 2'd2;
						end
					end
				end

				check(sign[i], r_k, count, t_log);
				if (t_log == 2'd1) begin 
					s_log = 2'd1;
				end
				if (t_log == 2'd2) begin
					if (s_log != 2'd1) begin
						r_b = r_k;
						s_log = 2'd2;
					end
				end	
			end

			if (s_log == 2'd1) begin 
				p_enable = 1'd0;
				i_enable = 1'd0;
				b_enable = 1'd0;

				sign[s_pos] = 100'd0;
			end else begin 
				if (s_log == 2'd0) begin 
					p_enable = 1'd1;
					i_enable = 1'd1;
					b_enable = 1'd0;
				end
				if (s_log == 2'd2) begin 
					p_enable = 1'd1;
					i_enable = 1'd1;
					b_enable = 1'd1;
				end

				sign[s_pos][0] = 1'd1;
				if (i_code == `ALU_CODE) begin 
					sign[s_pos][REG_SIZE: 1] = r_i;
				end
				if (i_code == `LW_CODE) begin
					sign[s_pos][REG_SIZE: 1] = r_j;
				end
				sign[s_pos][REG_SIZE + CODE_SIZE: REG_SIZE + 1] = i_code;
				sign[s_pos][`SIGN_BIT - 1: `SIGN_BIT - `TIME_BIT] = count;
			end
		end

		t_log = 0;
		s_log = 0;
		count = count + 1;
	end

	task check;
		input reg [`SIGN_BIT - 1: 0] s;
		input reg [REG_SIZE - 1: 0] r;
		input reg [`TIME_BIT - 1: 0] t;
		output reg [1: 0] solu;

		begin
			solu = s[0] == 0 || s[REG_SIZE: 1] != r ? 2'd0:
		 	   	   s[REG_SIZE + CODE_SIZE: REG_SIZE + 1] == `LW_CODE  && t >= s[`SIGN_BIT - 1: `SIGN_BIT - `TIME_BIT] + 3 ? 2'd0:
		 	   	   s[REG_SIZE + CODE_SIZE: REG_SIZE + 1] == `ALU_CODE && t == s[`SIGN_BIT - 1: `SIGN_BIT - `TIME_BIT] + 2 ? 2'd2:
		 	   	   s[REG_SIZE + CODE_SIZE: REG_SIZE + 1] == `ALU_CODE && t >= s[`SIGN_BIT - 1: `SIGN_BIT - `TIME_BIT] + 3 ? 2'd0:
		 	   	   2'd1;
		end
	endtask
 
endmodule

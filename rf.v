`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/10/12
 @Filename:     rf.v
 @Software:     ISE_13.4
 @LastModify:   18/10/12
 */

 `define ALU_CODE 6'd1
 `define LW_CODE  6'd2


module RF(
		r_i, r_j, r_k,			// Input signal.
		b_enable, b_data, r_b, 
		w_code, w_data,
		clk, 					// negedge clock.
		j_out, k_out			// Output signal.
    );

	parameter REG_SIZE = 5;
	parameter CODE_SIZE = 6;
	parameter DATA_SIZE = 32;
	parameter REG_CAPACITY = 32;

	input wire [REG_SIZE - 1: 0] r_i, r_j, r_k, r_b;
	input wire [DATA_SIZE - 1: 0] w_data, b_data;
	input wire [CODE_SIZE - 1: 0] w_code;		 // i_code control signal.
	input wire b_enable, clk;

	output wire [DATA_SIZE - 1: 0] j_out, k_out;

	reg [DATA_SIZE - 1: 0] ram [REG_CAPACITY - 1: 0];

	integer i;
	initial begin 
		for (i = 0; i < REG_CAPACITY; i = i + 1) begin
			ram[i] = 0;
		end

		$readmemh("r_mem/bench_1.txt", ram);
	end

	assign j_out = ram[r_j];		// Read options, combinational logic.
	assign k_out = ram[r_k];

	always @(negedge clk) begin		// Write options, negedge time series.
		if (b_enable) begin 
			ram[r_b] = b_data;
		end

		// When w_code is nop(0) or sw(3), it
		// is not allowed to write anything.
		if (w_code == `ALU_CODE || w_code == `LW_CODE) begin 
			ram[r_i] = w_data;
		end
	end

endmodule

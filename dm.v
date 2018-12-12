`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/11
 @Filename:     dm.v
 @Software:     ISE_13.4
 @LastModify:   18/12/11
 */

`define SW_CODE 6'd3


module DM(
		in_addr, in_data, w_code,	// Input signal.
		clk,
		o_data						// Output signal.
    );

	parameter ADDR_SIZE = 32;
	parameter DATA_SIZE = 32;
	parameter CODE_SIZE = 6;
	parameter RAM_CAPACITY = 256;

	input wire [ADDR_SIZE - 1: 0] in_addr;
	input wire [DATA_SIZE - 1: 0] in_data;
	input wire [CODE_SIZE - 1: 0] w_code;
	input wire clk;

	output wire [DATA_SIZE - 1: 0] o_data;
	reg [DATA_SIZE - 1: 0] ram [RAM_CAPACITY - 1: 0];

	// Initial memory.
	integer i;
	initial begin
		for (i = 0; i < RAM_CAPACITY; i = i + 1) begin
			ram[i] = 0;
		end

		$readmemh("d_mem/bench_1.txt", ram);
	end


	// Output data flow.
	assign o_data = ram[in_addr];

	// Negedge comtrol flow.
	always @(negedge clk) begin 
		if (w_code == `SW_CODE) begin
			ram[in_addr] = in_data;
		end
	end

endmodule

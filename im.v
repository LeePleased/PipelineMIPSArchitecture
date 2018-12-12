`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/10
 @Filename:     im.v
 @Software:     ISE_13.4
 @LastModify:   18/12/10
 */


module IM(
		pc,		// Input signal.
		instr	// Output signal.
    );

	parameter PC_SIZE = 11;
	parameter INSTR_SIZE = 32;
	parameter ROM_CAPACITY = 256;

	input wire [PC_SIZE - 1 : 0] pc;
	output wire [INSTR_SIZE - 1 : 0] instr;

	reg [INSTR_SIZE - 1: 0] rom [ROM_CAPACITY - 1: 0];

	integer i;
	initial begin 
		for (i = 0; i < ROM_CAPACITY; i = i + 1) begin
			rom[i] = 0;
		end

		$readmemb("i_mem/bench_2.txt", rom);
	end

	assign instr = rom[pc];

endmodule

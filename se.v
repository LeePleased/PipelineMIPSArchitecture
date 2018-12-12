`timescale 1ns / 1ps

/**
 @Author:       LiYangMing
 @StartTime:    18/12/11
 @Filename:     se.v
 @Software:     ISE_13.4
 @LastModify:   18/12/11
 */


module SE(
		i_imme, e_imme
    );

	parameter IMME_SIZE = 11;
	parameter DATA_SIZE = 32;

	input wire [IMME_SIZE - 1: 0] i_imme;
	output wire [DATA_SIZE - 1: 0] e_imme;

	assign e_imme = {{(DATA_SIZE - IMME_SIZE){i_imme[IMME_SIZE - 1]}}, i_imme};

endmodule

`timescale 1ns / 1ps

`include "alu.v"
`include "mux.v"
`include "reg.v"
`include "cu.v"
`include "dm.v"
`include "ia.v"
`include "im.v"
`include "rf.v"
`include "se.v"

/**
 @Author:       LiYangMing
 @StartTime:    18/12/12
 @Filename:     cu.v
 @Software:     ISE_13.4
 @LastModify:   18/12/12
 */


module TOP(
		clk,
		__pc_0__,
		__p_enable__, __i_enable__, __b_enable__, __r_b__,
		__i_code_0__, __i_code_1__, __i_code_2__, __i_code_3__, __i_code_4__,
		__r_i_0__, __r_j_0__, __r_k_0__, __imme_0__,
		__j_out_1__, __k_out_1__,
		__alu_a_2__, __alu_b_2__, __alu_out_2__,
		__o_mem_3__,
		__sel_alu_mem_4__, __sel_rij_4__
    );

	parameter PC_SIZE = 11;
	parameter INSTR_SIZE = 32;
	parameter DATA_SIZE = 32;
	parameter CODE_SIZE = 6;
	parameter REG_SIZE = 5;
	parameter IMME_SIZE = 11;
	parameter FUNC_SIZE = 11;
	parameter ADDR_SIZE = 32;

	input wire clk;
	output wire [PC_SIZE - 1: 0] __pc_0__;
	output wire __p_enable__, __i_enable__, __b_enable__;
	output wire [REG_SIZE -1 : 0] __r_b__;
	output wire [CODE_SIZE - 1: 0] __i_code_0__, __i_code_1__, __i_code_2__;
	output wire [CODE_SIZE - 1: 0] __i_code_3__, __i_code_4__;
	output wire [REG_SIZE - 1: 0] __r_i_0__, __r_j_0__, __r_k_0__;
	output wire [IMME_SIZE - 1: 0] __imme_0__;
	output wire [DATA_SIZE - 1: 0] __j_out_1__, __k_out_1__;
	output wire [DATA_SIZE - 1: 0] __alu_a_2__, __alu_b_2__, __alu_out_2__;
	output wire [DATA_SIZE - 1: 0] __o_mem_3__, __sel_alu_mem_4__;
	output wire [REG_SIZE - 1: 0] __sel_rij_4__;

	// Control signal. 
	wire p_enable, i_enable, b_enable;
	wire [REG_SIZE - 1: 0] r_b;

	// Stage 0: get instr.
	wire [PC_SIZE - 1: 0] pc_0;
	wire [INSTR_SIZE - 1: 0] instr_0;
	wire [CODE_SIZE - 1: 0] i_code_0;
	wire [REG_SIZE - 1: 0] r_i_0, r_j_0, r_k_0;
	wire [IMME_SIZE - 1: 0] imme_0;
	wire [FUNC_SIZE - 1: 0] i_func_0;

	// Stage 1: analysis instr.
	wire [CODE_SIZE - 1: 0] i_code_1;
	wire [REG_SIZE - 1: 0] r_i_1, r_j_1, r_k_1, sel_rij_1;
	wire [IMME_SIZE - 1: 0] imme_1;
	wire [DATA_SIZE - 1: 0] e_imme_1;
	wire [FUNC_SIZE - 1: 0] i_func_1;
	wire [DATA_SIZE - 1: 0] j_out_1, k_out_1;

	// Stage 2: ALU computation.
	wire [CODE_SIZE - 1: 0] i_code_2;
	wire [REG_SIZE - 1: 0] sel_rij_2;
	wire [DATA_SIZE - 1: 0] j_out_2, k_out_2, e_imme_2;
	wire [DATA_SIZE - 1: 0] alu_a_2, alu_b_2, alu_out_2;
	wire [FUNC_SIZE - 1: 0] i_func_2;

	// Stage 3: write/read mem.
	wire [CODE_SIZE - 1: 0] i_code_3;
	wire [REG_SIZE - 1: 0] sel_rij_3;
	wire [DATA_SIZE - 1: 0] j_out_3, alu_out_3, o_mem_3;

	// Stage 4: write back.
	wire [CODE_SIZE - 1: 0] i_code_4;
	wire [REG_SIZE - 1: 0] sel_rij_4;
	wire [DATA_SIZE - 1: 0] alu_out_4, o_mem_4;
	wire [DATA_SIZE - 1: 0] sel_alu_mem_4;

	assign __pc_0__ = pc_0;
	assign __p_enable__ = p_enable;
	assign __i_enable__ = i_enable;
	assign __b_enable__ = b_enable;
	assign __r_b__ = r_b;
	assign __i_code_0__ = i_code_0;
	assign __i_code_1__ = i_code_1;
	assign __i_code_2__ = i_code_2;
	assign __i_code_3__ = i_code_3;
	assign __i_code_4__ = i_code_4;
	assign __r_i_0__ = r_i_0;
	assign __r_j_0__ = r_j_0;
	assign __r_k_0__ = r_k_0;
	assign __imme_0__ = imme_0;
	assign __j_out_1__ = j_out_1;
	assign __k_out_1__ = k_out_1;
	assign __alu_a_2__ = alu_a_2;
	assign __alu_b_2__ = alu_b_2;
	assign __alu_out_2__ = alu_out_2;
	assign __o_mem_3__ = o_mem_3;
	assign __sel_alu_mem_4__ = sel_alu_mem_4;
	assign __sel_rij_4__ = sel_rij_4;

	PC_Reg #(PC_SIZE) pc_uut(
		.enable(p_enable), .clk(clk),
		.pc(pc_0)
	);
	IM #(PC_SIZE, INSTR_SIZE) im_uut(
		.pc(pc_0), .instr(instr_0)
	);
	IA #(INSTR_SIZE, CODE_SIZE, REG_SIZE, IMME_SIZE) ia_uut(
		.instr(instr_0),
		.i_code(i_code_0),
		.r_i(r_i_0), .r_j(r_j_0), .r_k(r_k_0),
		.imme(imme_0), .i_func(i_func_0)
	);
	ID_Reg #(CODE_SIZE, REG_SIZE, IMME_SIZE) id_reg_uut(
		.enable(i_enable), .clk(clk),
		.i_icode(i_code_0), 
		.i_ri(r_i_0), .i_rj(r_j_0), .i_rk(r_k_0),
		.i_imme(imme_0), .i_ifunc(i_func_0),
		.o_icode(i_code_1),
		.o_ri(r_i_1), .o_rj(r_j_1), .o_rk(r_k_1),
		.o_imme(imme_1), .o_ifunc(i_func_1)
	);
	RF_R_MUX #(REG_SIZE, CODE_SIZE) rf_r_mux_uut(
		.r_i(r_i_1), .r_j(r_j_1), .e_code(i_code_1),
		.o_data(sel_rij_1)
	);
	RF #(REG_SIZE, CODE_SIZE, DATA_SIZE) rf_uut(
		.r_i(sel_rij_4), .r_j(r_j_1), .r_k(r_k_1),
		.b_enable(b_enable), .b_data(alu_out_3), .r_b(r_b),
		.w_code(i_code_4), .w_data(sel_alu_mem_4), .clk(clk),
		.j_out(j_out_1), .k_out(k_out_1)
	);
	SE #(IMME_SIZE, DATA_SIZE) se_uut(
		.i_imme(imme_1),
		.e_imme(e_imme_1)
	);
	RF_Reg #(CODE_SIZE, REG_SIZE, DATA_SIZE, FUNC_SIZE) rf_reg_uut(
		.clk(clk), 
		.i_icode(i_code_1),
		.i_ri(sel_rij_1), 
		.i_jout(j_out_1), .i_kout(k_out_1),
		.i_imme(e_imme_1), .i_ifunc(i_func_1),
		.o_icode(i_code_2),
		.o_ri(sel_rij_2),
		.o_jout(j_out_2), .o_kout(k_out_2),
		.o_imme(e_imme_2), .o_ifunc(i_func_2)
	);
	ALU_A_MUX #(DATA_SIZE, CODE_SIZE) alu_a_mux_uut(
		.j_out(j_out_2), .k_out(k_out_2), .e_code(i_code_2),
		.o_data(alu_a_2)
	);
	ALU_B_MUX #(DATA_SIZE, CODE_SIZE) alu_b_mux_uut(
		.k_out(k_out_2), .imme(e_imme_2), .e_code(i_code_2),
		.o_data(alu_b_2)
	);
	ALU #(DATA_SIZE, FUNC_SIZE) alu_uut(
		.alu_a(alu_a_2), .alu_b(alu_b_2), .i_func(i_func_2),
		.alu_out(alu_out_2)
	);
	ALU_Reg #(CODE_SIZE, REG_SIZE, DATA_SIZE) alu_reg_uut(
		.clk(clk),
		.i_ri(sel_rij_2), .i_icode(i_code_2), .i_jout(j_out_2), .i_aout(alu_out_2),
		.o_ri(sel_rij_3), .o_icode(i_code_3), .o_jout(j_out_3), .o_aout(alu_out_3)
	);
	DM #(ADDR_SIZE, DATA_SIZE, CODE_SIZE) dm_uut(
		.in_addr(alu_out_3), .in_data(j_out_3), .w_code(i_code_3),
		.clk(clk),
		.o_data(o_mem_3)
	);
	MEM_Reg #(CODE_SIZE, REG_SIZE, DATA_SIZE) mem_reg_uut(
		.clk(clk),
		.i_ri(sel_rij_3), .i_icode(i_code_3), .i_mout(o_mem_3), .i_aout(alu_out_3),
		.o_ri(sel_rij_4), .o_icode(i_code_4), .o_mout(o_mem_4), .o_aout(alu_out_4)
	);
	RF_W_MUX #(DATA_SIZE, CODE_SIZE) rf_w_mux(
		.a_out(alu_out_4), .m_out(o_mem_4), .e_code(i_code_4),
		.o_data(sel_alu_mem_4)
	);

	CU #(CODE_SIZE, REG_SIZE) cu_uut(
		.clk(clk),
		.i_code(i_code_0), 
		.r_i(r_i_0), .r_j(r_j_0), .r_k(r_k_0),
		.p_enable(p_enable), .i_enable(i_enable),
		.b_enable(b_enable), .r_b(r_b)
	);

endmodule


module Main(
	);

	reg clk;

	wire __p_enable__, __i_enable__, __b_enable__;
	wire [10: 0] __pc_0__;
	wire [4 : 0] __r_b__;
	wire [5: 0] __i_code_0__, __i_code_1__, __i_code_2__;
	wire [5: 0] __i_code_3__, __i_code_4__;
	wire [4: 0] __r_i_0__, __r_j_0__, __r_k_0__;
	wire [10: 0] __imme_0__;
	wire [31: 0] __j_out_1__, __k_out_1__;
	wire [31: 0] __alu_a_2__, __alu_b_2__, __alu_out_2__;
	wire [31: 0] __o_mem_3__, __sel_alu_mem_4__;
	wire [4: 0] __sel_rij_4__;

	TOP top_uut(
		.clk(clk),
		.__pc_0__(__pc_0__),
		.__p_enable__(__p_enable__), .__i_enable__(__i_enable__), 
		.__b_enable__(__b_enable__), .__r_b__(__r_b__),
		.__i_code_0__(__i_code_0__), .__i_code_1__(__i_code_1__),
		.__i_code_2__(__i_code_2__), .__i_code_3__(__i_code_3__),
		.__i_code_4__(__i_code_4__), .__r_i_0__(__r_i_0__),
		.__r_j_0__(__r_j_0__), .__r_k_0__(__r_k_0__),
		.__imme_0__(__imme_0__), .__j_out_1__(__j_out_1__),
		.__k_out_1__(__k_out_1__), .__alu_a_2__(__alu_a_2__),
		.__alu_b_2__(__alu_b_2__), .__alu_out_2__(__alu_out_2__),
		.__o_mem_3__(__o_mem_3__), .__sel_alu_mem_4__(__sel_alu_mem_4__),
		.__sel_rij_4__(__sel_rij_4__)
	);

	always #10 clk = ~clk;

	initial begin 
		clk = 0;
		
		// #(40 * 2 * 10);
		// $finish;
	end
 
 endmodule
 
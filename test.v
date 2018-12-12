module test_ALU(
	);

	reg [31: 0] alu_a, alu_b;
	reg [10: 0] i_func;

	wire [31: 0] alu_out;

	ALU #(32, 11) uut(
		.alu_a(alu_a), .alu_b(alu_b), .i_func(i_func),
		.alu_out(alu_out)
	);

	integer i;

	initial begin
		alu_a = 32'hfffffffa;
		alu_b = 32'h00000002;

		for (i = 5; i >= 0; i = i - 1) begin
			i_func = i;
			#40;
		end

		$finish;
	end

	initial begin
		$monitor($time, , , "alu_a: %h, alu_b: %h, i_func: %d | alu_out: %h",
				 alu_a, alu_b, i_func, alu_out);
	end

endmodule


module test_CU(
	);

	reg [5: 0] i_code;
	reg [4: 0] r_i, r_j, r_k;
	reg clk;

	wire [4: 0] r_b;
	wire p_enable, i_enable, b_enable;

	CU uut(
		.clk(clk), .i_code(i_code),
		.r_i(r_i), .r_j(r_j), .r_k(r_k),
		.p_enable(p_enable), .i_enable(i_enable), .b_enable(b_enable),
		.r_b(r_b)
	);

	always #10 clk = ~clk;

	initial begin 
		clk = 0;
		i_code = 6'd1;
		r_i = 5'd5;
		r_j = 5'd6;
		r_k = 5'd7;
		#20;

		r_i = 5'd1;
		r_j = 5'd5;
		r_k = 5'd9;
		#20;

		i_code = 6'd1;
		r_i = 5'd2;
		r_j = 5'd5;
		r_k = 5'd1; 
		#20;

		#20;
		$finish;
	end
 
 endmodule


module test_DM (
	);

	reg [31: 0] in_addr, in_data;
	reg [5: 0] w_code;
	reg clk;

	wire [31: 0] o_data;

	DM #(32, 32, 6, 256) uut(
		.in_addr(in_addr), .in_data(in_data),
		.w_code(w_code), .o_data(o_data),
		.clk(clk)
	);

	always #10 clk = ~clk;

	initial begin
		clk = 0;
		in_data = 0;
		in_addr = 0;
		w_code = 0;

		#40;

		in_addr = 10;
		#40;

		in_addr = 20;
		#40;

		in_data = 188;
		in_addr = 2;
		w_code = 3;
		#40;

		$finish;
	end

endmodule


module test_IA(
	);
	
	reg [31: 0] instr;

	wire [5: 0] i_code;
	wire [4: 0] r_i, r_j, r_k;
	wire [10: 0] imme, i_func;

	IA #(32, 6, 5, 11) uut(
		.instr(instr),
		.i_code(i_code), 
		.r_i(r_i), .r_j(r_j), .r_k(r_k),
		.imme(imme), .i_func(i_func)
	);

	initial begin 
		instr = 32'b000001_01110_01100_01100_00000000011;
		#40;

		instr = 32'b000010_00000_01010_01011_00000000010;
		#40;

		instr = 32'b000011_00000_01100_01101_00000000010;
		#40;

		$finish;
	end

endmodule


module test_IM (
	);

	reg [10: 0] pc;
	wire [31: 0] instr;

	IM #(11, 32, 256) uut(.pc(pc), .instr(instr));

	integer i;
	initial begin
		for (i = 0; i < 256; i = i + 1) begin
			pc = i;
			#40;
		end

		$finish;
	end

	initial begin
		$monitor($time, , , "pc: %d | pc: %b", pc, instr);
	end

endmodule


module test_MUX (
	);

	reg [31: 0] j_out, k_out, imme, a_out, m_out;
	reg [4: 0] r_i, r_j;
	reg [5: 0] e_code;

	wire [4: 0] o_reg;
	wire [31: 0] o_a, o_b, o_w;

	RF_R_MUX r_uut(.r_i(r_i), .r_j(r_j), .e_code(e_code), .o_data(o_reg));
	RF_W_MUX w_uut(.a_out(a_out), .m_out(m_out), .e_code(e_code), .o_data(o_w));
	ALU_A_MUX a_uut(.j_out(j_out), .k_out(k_out), .e_code(e_code), .o_data(o_a));
	ALU_B_MUX b_uut(.k_out(k_out), .imme(imme), .e_code(e_code), .o_data(o_b));

	initial begin 
		j_out = 32'd1;
		k_out = 32'd2;
		imme = 32'd3;
		a_out = 32'd4;
		m_out = 32'd5;
		r_i = 5'd6;
		r_j = 5'd7;

		e_code = 6'd1;
		#40;

		e_code = 6'd2;
		#40;

		e_code = 6'd3;
		#40;

		$finish;
	end

endmodule


module test_REG(
	);

	reg clk, enable;
	reg [5: 0] i_icode;
	reg [4: 0] i_ri, i_rj, i_rk;
	reg [10: 0] i_imme, i_ifunc;
	reg [31: 0] i_jout, i_aout, i_mout;
	
	wire [10: 0] pc;
	wire [5: 0] o_icode_i, o_icode_a, o_icode_m;
	wire [4: 0] o_ri, o_rj, o_rk;
	wire [10: 0] o_imme, o_ifunc;
	wire [31: 0] o_jout, o_aout_a, o_mout, o_aout_m;

	reg [5: 0] i_icode_r;
	reg [31: 0] i_jout_r, i_kout_r, i_imme_r;
	reg [10: 0] i_ifunc_r;

	wire [5: 0] o_icode_r;
	wire [31: 0] o_jout_r, o_kout_r, o_imme_r;
	wire [10: 0] o_ifunc_r;

	PC_Reg p_uut(.enable(enable), .clk(clk), .pc(pc));
	ID_Reg i_uut(
		.clk(clk), .enable(enable),
		.i_icode(i_icode), 
		.i_ri(i_ri), .i_rj(i_rj), .i_rk(i_rk),
		.i_imme(i_imme), .i_ifunc(i_ifunc),
		.o_icode(o_icode_i),
		.o_ri(o_ri), .o_rj(o_rj), .o_rk(o_rk),
		.o_imme(o_imme), .o_ifunc(o_ifunc)
	);
	RF_Reg r_uut(
		.clk(clk),
		.i_icode(i_icode_r), 
		.i_jout(i_jout_r), .i_kout(i_kout_r),
		.i_imme(i_imme_r), .i_ifunc(i_ifunc_r),
		.o_icode(o_icode_r), 
		.o_jout(o_jout_r), .o_kout(o_kout_r),
		.o_imme(o_imme_r), .o_ifunc(o_ifunc_r)
	);
	ALU_Reg a_uut(
		.clk(clk),
		.i_icode(i_icode), .i_jout(i_jout), .i_aout(i_aout),
		.o_icode(o_icode_a), .o_jout(o_jout), .o_aout(o_aout_a)
	);
	MEM_Reg m_uut(
		.clk(clk),
		.i_icode(i_icode), .i_mout(i_mout), .i_aout(i_aout),
		.o_icode(o_icode_m), .o_mout(o_mout), .o_aout(o_aout_m)
	);

	always #10 clk = ~clk;

	initial begin
		clk = 0;
		enable = 1;
		i_icode = 6'b000111;
		{i_ri, i_rj, i_rk} = 15'b00010_00101_10001;
		i_imme = 11'd20;
		i_ifunc = 11'd27;
		i_jout = 32'd31;
		i_aout = 32'd33;
		i_mout = 32'd127;
		i_icode_r = 6'b101010;
		i_jout_r = 32'd255;
		i_kout_r = 32'd1023;
		i_imme_r = 32'd7;
		i_ifunc_r = 11'd15;
		#40;

		enable = 0;
		i_jout = 32'd33;
		i_aout = 32'd31;
		i_icode_r = 6'b010101;
		i_jout_r = 32'd1023;
		i_kout_r = 32'd255;
		i_imme_r = 32'd15;
		i_ifunc_r = 11'd7;
		#40;

		$finish;
	end

endmodule


module test_RF (
	);

	reg [4: 0] r_i, r_j, r_k, r_b;
	reg [31: 0] b_data, w_data;
	reg [5: 0] w_code;
	reg b_enable, clk;

	wire [31: 0] j_out, k_out;

	RF #(5, 6, 32, 32) uut(
		.r_i(r_i), .r_b(r_b),
		.r_j(r_j), .r_k(r_k),
		.b_data(b_data), .b_enable(b_enable),
		.w_data(w_data), .w_code(w_code),
		.clk(clk), .j_out(j_out), .k_out(k_out)
	);

	// Wave clock signal.
	always #10 clk = ~clk;

	initial begin
		clk = 0;
		b_enable = 0;
		b_data = 0;
		w_data = 0;
		w_code = 0;
		r_i = 0;
		r_j = 0;
		r_k = 0;
		r_b = 0;
		#40;

		r_j = 10;
		r_k = 20;
		#40;

		r_b = 2;
		b_enable = 1;
		b_data = 100;
		r_j = 2;
		#40;

		w_data = 12;
		w_code = 1;
		r_k = 0;
		#40;

		w_code = 3;
		w_data = 20;
		#40;

		$finish;
	end

endmodule


module test_SE (
	);

	reg [10: 0] in_imme;
	wire [31: 0] e_imme;

	SE #(11, 32) uut(.in_imme(in_imme), .e_imme(e_imme));

	initial begin 
		in_imme = 11'b0000_0000_011;
		#40;

		in_imme = 11'b1000_0000_011;
		#40;

		$finish;
	end

endmodule


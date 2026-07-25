//Generate the verilog at 2026-07-24T19:00:07 by iSTA.
module top (
clk,
rst_n,
func_0_,
func_1_,
func_2_,
in_0_,
in_1_,
in_2_,
in_3_,
in_4_,
in_5_,
in_6_,
in_7_,
left_in,
out_0_,
out_1_,
out_2_,
out_3_,
out_4_,
out_5_,
out_6_,
out_7_
);

input clk ;
input rst_n ;
input func_0_ ;
input func_1_ ;
input func_2_ ;
input in_0_ ;
input in_1_ ;
input in_2_ ;
input in_3_ ;
input in_4_ ;
input in_5_ ;
input in_6_ ;
input in_7_ ;
input left_in ;
output out_0_ ;
output out_1_ ;
output out_2_ ;
output out_3_ ;
output out_4_ ;
output out_5_ ;
output out_6_ ;
output out_7_ ;

wire clk ;
wire rst_n ;
wire func_0_ ;
wire func_1_ ;
wire func_2_ ;
wire in_0_ ;
wire in_1_ ;
wire in_2_ ;
wire in_3_ ;
wire in_4_ ;
wire in_5_ ;
wire in_6_ ;
wire in_7_ ;
wire left_in ;
wire out_0_ ;
wire out_1_ ;
wire out_2_ ;
wire out_3_ ;
wire out_4_ ;
wire out_5_ ;
wire out_6_ ;
wire out_7_ ;
wire func_BUFX10H7L_A_Y ;
wire func_BUFX10H7L_A_Y_NAND3BX6H7L_C_Y ;
wire func_BUFX7H7L_A_1_Y ;
wire func_BUFX7H7L_A_Y ;
wire left_in_MUX2X1P4H7L_B_Y ;
wire left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_B0 ;
wire left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_Y ;
wire \out[0]_reg_p_D ;
wire \out[0]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \out[1]_reg_p_D ;
wire \out[1]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \out[2]_reg_p_D ;
wire \out[2]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \out[3]_reg_p_D ;
wire \out[3]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \out[4]_reg_p_D ;
wire \out[4]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \out[5]_reg_p_D ;
wire \out[5]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \out[6]_reg_p_D ;
wire \out[6]_reg_p_D_OAOI211X2H7L_Y_A0 ;
wire \out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ;
wire \out[6]_reg_p_D_OAOI211X2H7L_Y_B0 ;
wire \out[7]_reg_p_D ;
wire \out[7]_reg_p_D_NOR2X1P4H7L_Y_B ;
wire \ysyx_100022863_shift_register_inst.Q_0_ ;
wire \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y ;
wire \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_C0 ;
wire \ysyx_100022863_shift_register_inst.Q_0__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_1_ ;
wire \ysyx_100022863_shift_register_inst.Q_1__NAND3X0P5H7L_A_Y ;
wire \ysyx_100022863_shift_register_inst.Q_1__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_1__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_2_ ;
wire \ysyx_100022863_shift_register_inst.Q_2__NAND3X0P5H7L_A_Y ;
wire \ysyx_100022863_shift_register_inst.Q_2__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_3_ ;
wire \ysyx_100022863_shift_register_inst.Q_3__NAND3X0P5H7L_A_Y ;
wire \ysyx_100022863_shift_register_inst.Q_3__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ;
wire \ysyx_100022863_shift_register_inst.Q_4_ ;
wire \ysyx_100022863_shift_register_inst.Q_4__NAND3X0P5H7L_A_Y ;
wire \ysyx_100022863_shift_register_inst.Q_4__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A0 ;
wire \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_5_ ;
wire \ysyx_100022863_shift_register_inst.Q_5__NAND3X0P5H7L_A_Y ;
wire \ysyx_100022863_shift_register_inst.Q_5__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_6_ ;
wire \ysyx_100022863_shift_register_inst.Q_6__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0 ;
wire \ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ;
wire \ysyx_100022863_shift_register_inst.Q_7_ ;
wire \ysyx_100022863_shift_register_inst.Q_7__reg_p_D ;
wire \ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0 ;
wire \ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_B0 ;


BUFX10H7L func_BUFX10H7L_A ( .A(func_0_ ), .Y(func_BUFX10H7L_A_Y ) );
NAND3BX6H7L func_BUFX10H7L_A_Y_NAND3BX6H7L_C ( .AN(func_BUFX7H7L_A_Y ), .B(func_BUFX7H7L_A_1_Y ), .C(func_BUFX10H7L_A_Y ), .Y(func_BUFX10H7L_A_Y_NAND3BX6H7L_C_Y ) );
BUFX7H7L func_BUFX7H7L_A ( .A(func_1_ ), .Y(func_BUFX7H7L_A_Y ) );
BUFX7H7L func_BUFX7H7L_A_1 ( .A(func_2_ ), .Y(func_BUFX7H7L_A_1_Y ) );
MUX2X1P4H7L left_in_MUX2X1P4H7L_B ( .A(in_7_ ), .B(left_in ), .S0(func_BUFX7H7L_A_1_Y ), .Y(left_in_MUX2X1P4H7L_B_Y ) );
OAI21X0P5H7L left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1 ( .A0(func_BUFX7H7L_A_Y ), .A1(left_in_MUX2X1P4H7L_B_Y ), .B0(left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_B0 ), .Y(left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_Y ) );
NAND2BX0P5H7L left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_B0_NAND2BX0P5H7L_Y ( .AN(\ysyx_100022863_shift_register_inst.Q_6_ ), .B(func_BUFX7H7L_A_Y ), .Y(left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_B0 ) );
DFFQX1H7L \out[0]_reg_p ( .CK(clk ), .D(\out[0]_reg_p_D ), .Q(out_0_ ) );
NOR2X1P4H7L \out[0]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[0]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[0]_reg_p_D ) );
DFFQX1H7L \out[1]_reg_p ( .CK(clk ), .D(\out[1]_reg_p_D ), .Q(out_1_ ) );
NOR2X1P4H7L \out[1]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[1]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[1]_reg_p_D ) );
MUXI2X1P4H7L \out[1]_reg_p_D_NOR2X1P4H7L_Y_B_MUXI2X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_1_ ), .B(out_1_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[1]_reg_p_D_NOR2X1P4H7L_Y_B ) );
DFFQX1H7L \out[2]_reg_p ( .CK(clk ), .D(\out[2]_reg_p_D ), .Q(out_2_ ) );
NOR2X1P4H7L \out[2]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[2]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[2]_reg_p_D ) );
MUXI2X1P4H7L \out[2]_reg_p_D_NOR2X1P4H7L_Y_B_MUXI2X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_2_ ), .B(out_2_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[2]_reg_p_D_NOR2X1P4H7L_Y_B ) );
DFFQX1H7L \out[3]_reg_p ( .CK(clk ), .D(\out[3]_reg_p_D ), .Q(out_3_ ) );
NOR2X1P4H7L \out[3]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[3]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[3]_reg_p_D ) );
MUXI2X1P4H7L \out[3]_reg_p_D_NOR2X1P4H7L_Y_B_MUXI2X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_3_ ), .B(out_3_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[3]_reg_p_D_NOR2X1P4H7L_Y_B ) );
DFFQX1H7L \out[4]_reg_p ( .CK(clk ), .D(\out[4]_reg_p_D ), .Q(out_4_ ) );
NOR2X1P4H7L \out[4]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[4]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[4]_reg_p_D ) );
MUXI2X1P4H7L \out[4]_reg_p_D_NOR2X1P4H7L_Y_B_MUXI2X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_4_ ), .B(out_4_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[4]_reg_p_D_NOR2X1P4H7L_Y_B ) );
DFFQX1H7L \out[5]_reg_p ( .CK(clk ), .D(\out[5]_reg_p_D ), .Q(out_5_ ) );
NOR2X1P4H7L \out[5]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[5]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[5]_reg_p_D ) );
MUXI2X1P4H7L \out[5]_reg_p_D_NOR2X1P4H7L_Y_B_MUXI2X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_5_ ), .B(out_5_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[5]_reg_p_D_NOR2X1P4H7L_Y_B ) );
DFFQX1H7L \out[6]_reg_p ( .CK(clk ), .D(\out[6]_reg_p_D ), .Q(out_6_ ) );
OAOI211X2H7L \out[6]_reg_p_D_OAOI211X2H7L_Y ( .A0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A0 ), .A1(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .B0(\out[6]_reg_p_D_OAOI211X2H7L_Y_B0 ), .C0(rst_n ), .Y(\out[6]_reg_p_D ) );
INVX0P5H7L \out[6]_reg_p_D_OAOI211X2H7L_Y_A0_INVX0P5H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_6_ ), .Y(\out[6]_reg_p_D_OAOI211X2H7L_Y_A0 ) );
BUFX16H7L \out[6]_reg_p_D_OAOI211X2H7L_Y_A1_BUFX16H7L_Y ( .A(func_BUFX10H7L_A_Y_NAND3BX6H7L_C_Y ), .Y(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ) );
NAND2X0P5H7L \out[6]_reg_p_D_OAOI211X2H7L_Y_B0_NAND2X0P5H7L_Y ( .A(out_6_ ), .B(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[6]_reg_p_D_OAOI211X2H7L_Y_B0 ) );
DFFQX1H7L \out[7]_reg_p ( .CK(clk ), .D(\out[7]_reg_p_D ), .Q(out_7_ ) );
NOR2X1P4H7L \out[7]_reg_p_D_NOR2X1P4H7L_Y ( .A(rst_n ), .B(\out[7]_reg_p_D_NOR2X1P4H7L_Y_B ), .Y(\out[7]_reg_p_D ) );
MUXI2X1P4H7L \out[7]_reg_p_D_NOR2X1P4H7L_Y_B_MUXI2X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_7_ ), .B(out_7_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[7]_reg_p_D_NOR2X1P4H7L_Y_B ) );
AND2X1H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_0_ ), .B(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0 ( .A0(in_1_ ), .A1(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y ), .C0(func_BUFX10H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_1__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
NOR2X2H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0_A1_NOR2X2H7L_Y ( .A(func_BUFX7H7L_A_Y ), .B(func_BUFX7H7L_A_1_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0_A1 ) );
AOAI211X0P5H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0 ( .A0(\ysyx_100022863_shift_register_inst.Q_7_ ), .A1(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y ), .C0(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_B0 ) );
INVX2P5H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_A1_INVX2P5H7L_Y ( .A(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_A1 ) );
MUX2X3H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_A1_MUX2X3H7L_S0 ( .A(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0 ), .B(func_BUFX7H7L_A_1_Y ), .S0(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_A1 ), .Y(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ) );
NOR3BX0P5H7L \ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_C0_NOR3BX0P5H7L_Y ( .AN(func_BUFX7H7L_A_1_Y ), .B(rst_n ), .C(func_BUFX10H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOAI211X0P5H7L_B0_C0 ) );
MUXI2X1P4H7L \ysyx_100022863_shift_register_inst.Q_0__MUXI2X1P4H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_0_ ), .B(out_0_ ), .S0(\out[6]_reg_p_D_OAOI211X2H7L_Y_A1 ), .Y(\out[0]_reg_p_D_NOR2X1P4H7L_Y_B ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_0__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_0__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_0_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_1_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_0__reg_p_D ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0_AOA211X1P4H7L_Y ( .A0(in_0_ ), .A1(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0_AOA211X1P4H7L_Y_B0 ), .C0(func_BUFX10H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
AND3X1P4H7L \ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0_AOA211X1P4H7L_Y_B0_AND3X1P4H7L_Y ( .A(\ysyx_100022863_shift_register_inst.Q_7_ ), .B(func_BUFX7H7L_A_Y ), .C(func_BUFX7H7L_A_1_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_0__reg_p_D_AOA211X1P4H7L_Y_B0_AOA211X1P4H7L_Y_B0 ) );
NAND3X0P5H7L \ysyx_100022863_shift_register_inst.Q_1__NAND3X0P5H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_1_ ), .B(func_BUFX10H7L_A_Y ), .C(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_1__NAND3X0P5H7L_A_Y ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_1__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_1__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_1_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_1__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_2_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_1__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_1__reg_p_D ) );
NAND3X0P5H7L \ysyx_100022863_shift_register_inst.Q_2__NAND3X0P5H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_2_ ), .B(func_BUFX10H7L_A_Y ), .C(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_2__NAND3X0P5H7L_A_Y ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_2__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_2__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_2_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_3_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_2__reg_p_D ) );
OAI21X0P5H7L \ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .A1(\ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_1__NAND3X0P5H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
NAND2BX0P5H7L \ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1_NAND2BX0P5H7L_Y ( .AN(func_BUFX7H7L_A_1_Y ), .B(in_2_ ), .Y(\ysyx_100022863_shift_register_inst.Q_2__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ) );
NAND3X0P5H7L \ysyx_100022863_shift_register_inst.Q_3__NAND3X0P5H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_3_ ), .B(func_BUFX10H7L_A_Y ), .C(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_3__NAND3X0P5H7L_A_Y ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_3__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_3_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_4_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D ) );
OAI21X0P5H7L \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_2__NAND3X0P5H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
NAND2BX0P5H7L \ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1_NAND2BX0P5H7L_Y ( .AN(func_BUFX7H7L_A_1_Y ), .B(in_3_ ), .Y(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ) );
NAND3X0P5H7L \ysyx_100022863_shift_register_inst.Q_4__NAND3X0P5H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_4_ ), .B(func_BUFX10H7L_A_Y ), .C(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_4__NAND3X0P5H7L_A_Y ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_4__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_4_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_5_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D ) );
OAI21X0P5H7L \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A0 ), .A1(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_3__NAND3X0P5H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
NAND2BX0P5H7L \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A0_NAND2BX0P5H7L_Y ( .AN(func_BUFX7H7L_A_1_Y ), .B(in_4_ ), .Y(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A0 ) );
NAND2BX1P4H7L \ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1_NAND2BX1P4H7L_Y ( .AN(func_BUFX7H7L_A_Y ), .B(func_BUFX10H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ) );
NAND3X0P5H7L \ysyx_100022863_shift_register_inst.Q_5__NAND3X0P5H7L_A ( .A(\ysyx_100022863_shift_register_inst.Q_5_ ), .B(func_BUFX10H7L_A_Y ), .C(func_BUFX7H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_5__NAND3X0P5H7L_A_Y ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_5__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_5__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_5_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_6_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_5__reg_p_D ) );
OAI21X0P5H7L \ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .A1(\ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_4__NAND3X0P5H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
NAND2BX0P5H7L \ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1_NAND2BX0P5H7L_Y ( .AN(func_BUFX7H7L_A_1_Y ), .B(in_5_ ), .Y(\ysyx_100022863_shift_register_inst.Q_5__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_6__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_6__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_6_ ) );
AOA211X1P4H7L \ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_7_ ), .A1(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0 ), .C0(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ), .Y(\ysyx_100022863_shift_register_inst.Q_6__reg_p_D ) );
OAI21X0P5H7L \ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_4__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .A1(\ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ), .B0(\ysyx_100022863_shift_register_inst.Q_5__NAND3X0P5H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0 ) );
NAND2BX0P5H7L \ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1_NAND2BX0P5H7L_Y ( .AN(func_BUFX7H7L_A_1_Y ), .B(in_6_ ), .Y(\ysyx_100022863_shift_register_inst.Q_6__reg_p_D_AOA211X1P4H7L_Y_B0_OAI21X0P5H7L_Y_A1 ) );
DFFQX1H7L \ysyx_100022863_shift_register_inst.Q_7__reg_p ( .CK(clk ), .D(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D ), .Q(\ysyx_100022863_shift_register_inst.Q_7_ ) );
OAI31X1H7L \ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y ( .A0(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0 ), .A1(rst_n ), .A2(left_in_MUX2X1P4H7L_B_Y_OAI21X0P5H7L_A1_Y ), .B0(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_B0 ), .Y(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D ) );
AOI21X3H7L \ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0_AOI21X3H7L_A0 ( .A0(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0 ), .A1(\ysyx_100022863_shift_register_inst.Q_0__AND2X1H7L_A_Y_AOA211X1P4H7L_B0_A1 ), .B0(rst_n ), .Y(\ysyx_100022863_shift_register_inst.Q_3__reg_p_D_AOA211X1P4H7L_Y_C0 ) );
INVX5H7L \ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0_INVX5H7L_Y ( .A(func_BUFX10H7L_A_Y ), .Y(\ysyx_100022863_shift_register_inst.Q_7__reg_p_D_OAI31X1H7L_Y_A0 ) );

endmodule

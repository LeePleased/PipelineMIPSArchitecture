/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/hadoop/Desktop/NaivePipelineMIPS/cu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {5, 0};
static unsigned int ng8[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {11, 0};
static int ng11[] = {6, 0};
static int ng12[] = {43, 0};
static int ng13[] = {12, 0};



static int sp_check(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t10[8];
    char t16[8];
    char t32[8];
    char t45[8];
    char t60[8];
    char t76[8];
    char t84[8];
    char t128[8];
    char t129[8];
    char t130[8];
    char t143[8];
    char t159[8];
    char t174[8];
    char t195[8];
    char t196[8];
    char t200[8];
    char t208[8];
    char t256[8];
    char t257[8];
    char t258[8];
    char t271[8];
    char t287[8];
    char t302[8];
    char t323[8];
    char t324[8];
    char t340[8];
    char t348[8];
    char t396[8];
    char t397[8];
    char t398[8];
    char t411[8];
    char t427[8];
    char t442[8];
    char t463[8];
    char t464[8];
    char t468[8];
    char t476[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    char *t173;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t197;
    char *t198;
    char *t199;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    int t232;
    int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    char *t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t259;
    char *t260;
    char *t261;
    char *t262;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    char *t294;
    char *t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;
    char *t300;
    char *t301;
    char *t303;
    char *t304;
    char *t305;
    char *t306;
    char *t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    char *t312;
    char *t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    char *t325;
    char *t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    char *t339;
    char *t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    char *t347;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    char *t352;
    char *t353;
    char *t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    char *t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    int t372;
    int t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    char *t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    char *t386;
    char *t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    char *t399;
    char *t400;
    char *t401;
    char *t402;
    char *t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    char *t410;
    char *t412;
    char *t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    char *t426;
    char *t428;
    unsigned int t429;
    unsigned int t430;
    unsigned int t431;
    unsigned int t432;
    unsigned int t433;
    char *t434;
    char *t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    char *t439;
    char *t440;
    char *t441;
    char *t443;
    char *t444;
    char *t445;
    char *t446;
    char *t447;
    unsigned int t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    char *t452;
    char *t453;
    unsigned int t454;
    unsigned int t455;
    unsigned int t456;
    unsigned int t457;
    unsigned int t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    char *t462;
    char *t465;
    char *t466;
    char *t467;
    char *t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    char *t475;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    char *t480;
    char *t481;
    char *t482;
    unsigned int t483;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    char *t490;
    char *t491;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    unsigned int t495;
    unsigned int t496;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    int t500;
    int t501;
    unsigned int t502;
    unsigned int t503;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    unsigned int t507;
    char *t508;
    unsigned int t509;
    unsigned int t510;
    unsigned int t511;
    unsigned int t512;
    unsigned int t513;
    char *t514;
    char *t515;
    unsigned int t516;
    unsigned int t517;
    unsigned int t518;
    char *t519;
    unsigned int t520;
    unsigned int t521;
    unsigned int t522;
    unsigned int t523;
    char *t524;
    char *t525;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(145, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t7 = (t1 + 4392);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 4392);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t9, t13, 2, t14, 32, 1);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t10 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB9;

LAB6:    if (t28 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t16) = 1;

LAB9:    memset(t32, 0, 8);
    t33 = (t16 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t16);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t33) != 0)
        goto LAB12;

LAB13:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = (!(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB14;

LAB15:    memcpy(t84, t32, 8);

LAB16:    memset(t6, 0, 8);
    t112 = (t84 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t84);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t112) != 0)
        goto LAB30;

LAB31:    t119 = (t6 + 4);
    t120 = *((unsigned int *)t6);
    t121 = *((unsigned int *)t119);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB32;

LAB33:    t124 = *((unsigned int *)t6);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t119) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t6) > 0)
        goto LAB38;

LAB39:    memcpy(t5, t128, 8);

LAB40:    t525 = (t1 + 4872);
    xsi_vlogvar_assign_value(t525, t5, 0, 0, 2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB12:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB14:    t46 = (t1 + 4392);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 1);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 1);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 31U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 31U);
    t57 = (t1 + 4552);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t61 = (t45 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t45);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB18;

LAB17:    if (t72 != 0)
        goto LAB19;

LAB20:    memset(t76, 0, 8);
    t77 = (t60 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t77) != 0)
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t32);
    t86 = *((unsigned int *)t76);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = (t32 + 4);
    t89 = (t76 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t60) = 1;
    goto LAB20;

LAB19:    t75 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t76) = 1;
    goto LAB24;

LAB23:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB24;

LAB25:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t32 + 4);
    t99 = (t76 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (~(t100));
    t102 = *((unsigned int *)t32);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t99);
    t105 = (~(t104));
    t106 = *((unsigned int *)t76);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t109);
    goto LAB27;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB30:    t118 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB31;

LAB32:    t123 = ((char*)((ng2)));
    goto LAB33;

LAB34:    t131 = (t1 + 4392);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t130, 0, 8);
    t134 = (t130 + 4);
    t135 = (t133 + 4);
    t136 = *((unsigned int *)t133);
    t137 = (t136 >> 6);
    *((unsigned int *)t130) = t137;
    t138 = *((unsigned int *)t135);
    t139 = (t138 >> 6);
    *((unsigned int *)t134) = t139;
    t140 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t140 & 63U);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t141 & 63U);
    t142 = ((char*)((ng3)));
    memset(t143, 0, 8);
    t144 = (t130 + 4);
    t145 = (t142 + 4);
    t146 = *((unsigned int *)t130);
    t147 = *((unsigned int *)t142);
    t148 = (t146 ^ t147);
    t149 = *((unsigned int *)t144);
    t150 = *((unsigned int *)t145);
    t151 = (t149 ^ t150);
    t152 = (t148 | t151);
    t153 = *((unsigned int *)t144);
    t154 = *((unsigned int *)t145);
    t155 = (t153 | t154);
    t156 = (~(t155));
    t157 = (t152 & t156);
    if (t157 != 0)
        goto LAB44;

LAB41:    if (t155 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t143) = 1;

LAB44:    memset(t159, 0, 8);
    t160 = (t143 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t143);
    t164 = (t163 & t162);
    t165 = (t164 & 1U);
    if (t165 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t160) != 0)
        goto LAB47;

LAB48:    t167 = (t159 + 4);
    t168 = *((unsigned int *)t159);
    t169 = *((unsigned int *)t167);
    t170 = (t168 || t169);
    if (t170 > 0)
        goto LAB49;

LAB50:    memcpy(t208, t159, 8);

LAB51:    memset(t129, 0, 8);
    t240 = (t208 + 4);
    t241 = *((unsigned int *)t240);
    t242 = (~(t241));
    t243 = *((unsigned int *)t208);
    t244 = (t243 & t242);
    t245 = (t244 & 1U);
    if (t245 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t240) != 0)
        goto LAB66;

LAB67:    t247 = (t129 + 4);
    t248 = *((unsigned int *)t129);
    t249 = *((unsigned int *)t247);
    t250 = (t248 || t249);
    if (t250 > 0)
        goto LAB68;

LAB69:    t252 = *((unsigned int *)t129);
    t253 = (~(t252));
    t254 = *((unsigned int *)t247);
    t255 = (t253 || t254);
    if (t255 > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t247) > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t129) > 0)
        goto LAB74;

LAB75:    memcpy(t128, t256, 8);

LAB76:    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t5, 2, t123, 2, t128, 2);
    goto LAB40;

LAB38:    memcpy(t5, t123, 8);
    goto LAB40;

LAB43:    t158 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t159) = 1;
    goto LAB48;

LAB47:    t166 = (t159 + 4);
    *((unsigned int *)t159) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB48;

LAB49:    t171 = (t1 + 4712);
    t172 = (t171 + 56U);
    t173 = *((char **)t172);
    t175 = (t1 + 4392);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    memset(t174, 0, 8);
    t178 = (t174 + 4);
    t179 = (t177 + 4);
    t180 = *((unsigned int *)t177);
    t181 = (t180 >> 12);
    *((unsigned int *)t174) = t181;
    t182 = *((unsigned int *)t179);
    t183 = (t182 >> 12);
    *((unsigned int *)t178) = t183;
    t184 = (t177 + 8);
    t185 = (t177 + 12);
    t186 = *((unsigned int *)t184);
    t187 = (t186 << 20);
    t188 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t188 | t187);
    t189 = *((unsigned int *)t185);
    t190 = (t189 << 20);
    t191 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t191 | t190);
    t192 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t192 & 4294967295U);
    t193 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t193 & 4294967295U);
    t194 = ((char*)((ng4)));
    memset(t195, 0, 8);
    xsi_vlog_unsigned_add(t195, 32, t174, 32, t194, 32);
    memset(t196, 0, 8);
    t197 = (t173 + 4);
    if (*((unsigned int *)t197) != 0)
        goto LAB53;

LAB52:    t198 = (t195 + 4);
    if (*((unsigned int *)t198) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t173) < *((unsigned int *)t195))
        goto LAB55;

LAB54:    *((unsigned int *)t196) = 1;

LAB55:    memset(t200, 0, 8);
    t201 = (t196 + 4);
    t202 = *((unsigned int *)t201);
    t203 = (~(t202));
    t204 = *((unsigned int *)t196);
    t205 = (t204 & t203);
    t206 = (t205 & 1U);
    if (t206 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t201) != 0)
        goto LAB59;

LAB60:    t209 = *((unsigned int *)t159);
    t210 = *((unsigned int *)t200);
    t211 = (t209 & t210);
    *((unsigned int *)t208) = t211;
    t212 = (t159 + 4);
    t213 = (t200 + 4);
    t214 = (t208 + 4);
    t215 = *((unsigned int *)t212);
    t216 = *((unsigned int *)t213);
    t217 = (t215 | t216);
    *((unsigned int *)t214) = t217;
    t218 = *((unsigned int *)t214);
    t219 = (t218 != 0);
    if (t219 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB51;

LAB53:    t199 = (t196 + 4);
    *((unsigned int *)t196) = 1;
    *((unsigned int *)t199) = 1;
    goto LAB55;

LAB57:    *((unsigned int *)t200) = 1;
    goto LAB60;

LAB59:    t207 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t207) = 1;
    goto LAB60;

LAB61:    t220 = *((unsigned int *)t208);
    t221 = *((unsigned int *)t214);
    *((unsigned int *)t208) = (t220 | t221);
    t222 = (t159 + 4);
    t223 = (t200 + 4);
    t224 = *((unsigned int *)t159);
    t225 = (~(t224));
    t226 = *((unsigned int *)t222);
    t227 = (~(t226));
    t228 = *((unsigned int *)t200);
    t229 = (~(t228));
    t230 = *((unsigned int *)t223);
    t231 = (~(t230));
    t232 = (t225 & t227);
    t233 = (t229 & t231);
    t234 = (~(t232));
    t235 = (~(t233));
    t236 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t236 & t234);
    t237 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t237 & t235);
    t238 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t238 & t234);
    t239 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t239 & t235);
    goto LAB63;

LAB64:    *((unsigned int *)t129) = 1;
    goto LAB67;

LAB66:    t246 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t246) = 1;
    goto LAB67;

LAB68:    t251 = ((char*)((ng2)));
    goto LAB69;

LAB70:    t259 = (t1 + 4392);
    t260 = (t259 + 56U);
    t261 = *((char **)t260);
    memset(t258, 0, 8);
    t262 = (t258 + 4);
    t263 = (t261 + 4);
    t264 = *((unsigned int *)t261);
    t265 = (t264 >> 6);
    *((unsigned int *)t258) = t265;
    t266 = *((unsigned int *)t263);
    t267 = (t266 >> 6);
    *((unsigned int *)t262) = t267;
    t268 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t268 & 63U);
    t269 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t269 & 63U);
    t270 = ((char*)((ng5)));
    memset(t271, 0, 8);
    t272 = (t258 + 4);
    t273 = (t270 + 4);
    t274 = *((unsigned int *)t258);
    t275 = *((unsigned int *)t270);
    t276 = (t274 ^ t275);
    t277 = *((unsigned int *)t272);
    t278 = *((unsigned int *)t273);
    t279 = (t277 ^ t278);
    t280 = (t276 | t279);
    t281 = *((unsigned int *)t272);
    t282 = *((unsigned int *)t273);
    t283 = (t281 | t282);
    t284 = (~(t283));
    t285 = (t280 & t284);
    if (t285 != 0)
        goto LAB80;

LAB77:    if (t283 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t271) = 1;

LAB80:    memset(t287, 0, 8);
    t288 = (t271 + 4);
    t289 = *((unsigned int *)t288);
    t290 = (~(t289));
    t291 = *((unsigned int *)t271);
    t292 = (t291 & t290);
    t293 = (t292 & 1U);
    if (t293 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t288) != 0)
        goto LAB83;

LAB84:    t295 = (t287 + 4);
    t296 = *((unsigned int *)t287);
    t297 = *((unsigned int *)t295);
    t298 = (t296 || t297);
    if (t298 > 0)
        goto LAB85;

LAB86:    memcpy(t348, t287, 8);

LAB87:    memset(t257, 0, 8);
    t380 = (t348 + 4);
    t381 = *((unsigned int *)t380);
    t382 = (~(t381));
    t383 = *((unsigned int *)t348);
    t384 = (t383 & t382);
    t385 = (t384 & 1U);
    if (t385 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t380) != 0)
        goto LAB101;

LAB102:    t387 = (t257 + 4);
    t388 = *((unsigned int *)t257);
    t389 = *((unsigned int *)t387);
    t390 = (t388 || t389);
    if (t390 > 0)
        goto LAB103;

LAB104:    t392 = *((unsigned int *)t257);
    t393 = (~(t392));
    t394 = *((unsigned int *)t387);
    t395 = (t393 || t394);
    if (t395 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t387) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t257) > 0)
        goto LAB109;

LAB110:    memcpy(t256, t396, 8);

LAB111:    goto LAB71;

LAB72:    xsi_vlog_unsigned_bit_combine(t128, 2, t251, 2, t256, 2);
    goto LAB76;

LAB74:    memcpy(t128, t251, 8);
    goto LAB76;

LAB79:    t286 = (t271 + 4);
    *((unsigned int *)t271) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t287) = 1;
    goto LAB84;

LAB83:    t294 = (t287 + 4);
    *((unsigned int *)t287) = 1;
    *((unsigned int *)t294) = 1;
    goto LAB84;

LAB85:    t299 = (t1 + 4712);
    t300 = (t299 + 56U);
    t301 = *((char **)t300);
    t303 = (t1 + 4392);
    t304 = (t303 + 56U);
    t305 = *((char **)t304);
    memset(t302, 0, 8);
    t306 = (t302 + 4);
    t307 = (t305 + 4);
    t308 = *((unsigned int *)t305);
    t309 = (t308 >> 12);
    *((unsigned int *)t302) = t309;
    t310 = *((unsigned int *)t307);
    t311 = (t310 >> 12);
    *((unsigned int *)t306) = t311;
    t312 = (t305 + 8);
    t313 = (t305 + 12);
    t314 = *((unsigned int *)t312);
    t315 = (t314 << 20);
    t316 = *((unsigned int *)t302);
    *((unsigned int *)t302) = (t316 | t315);
    t317 = *((unsigned int *)t313);
    t318 = (t317 << 20);
    t319 = *((unsigned int *)t306);
    *((unsigned int *)t306) = (t319 | t318);
    t320 = *((unsigned int *)t302);
    *((unsigned int *)t302) = (t320 & 4294967295U);
    t321 = *((unsigned int *)t306);
    *((unsigned int *)t306) = (t321 & 4294967295U);
    t322 = ((char*)((ng6)));
    memset(t323, 0, 8);
    xsi_vlog_unsigned_add(t323, 32, t302, 32, t322, 32);
    memset(t324, 0, 8);
    t325 = (t301 + 4);
    t326 = (t323 + 4);
    t327 = *((unsigned int *)t301);
    t328 = *((unsigned int *)t323);
    t329 = (t327 ^ t328);
    t330 = *((unsigned int *)t325);
    t331 = *((unsigned int *)t326);
    t332 = (t330 ^ t331);
    t333 = (t329 | t332);
    t334 = *((unsigned int *)t325);
    t335 = *((unsigned int *)t326);
    t336 = (t334 | t335);
    t337 = (~(t336));
    t338 = (t333 & t337);
    if (t338 != 0)
        goto LAB91;

LAB88:    if (t336 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t324) = 1;

LAB91:    memset(t340, 0, 8);
    t341 = (t324 + 4);
    t342 = *((unsigned int *)t341);
    t343 = (~(t342));
    t344 = *((unsigned int *)t324);
    t345 = (t344 & t343);
    t346 = (t345 & 1U);
    if (t346 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t341) != 0)
        goto LAB94;

LAB95:    t349 = *((unsigned int *)t287);
    t350 = *((unsigned int *)t340);
    t351 = (t349 & t350);
    *((unsigned int *)t348) = t351;
    t352 = (t287 + 4);
    t353 = (t340 + 4);
    t354 = (t348 + 4);
    t355 = *((unsigned int *)t352);
    t356 = *((unsigned int *)t353);
    t357 = (t355 | t356);
    *((unsigned int *)t354) = t357;
    t358 = *((unsigned int *)t354);
    t359 = (t358 != 0);
    if (t359 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB90:    t339 = (t324 + 4);
    *((unsigned int *)t324) = 1;
    *((unsigned int *)t339) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t340) = 1;
    goto LAB95;

LAB94:    t347 = (t340 + 4);
    *((unsigned int *)t340) = 1;
    *((unsigned int *)t347) = 1;
    goto LAB95;

LAB96:    t360 = *((unsigned int *)t348);
    t361 = *((unsigned int *)t354);
    *((unsigned int *)t348) = (t360 | t361);
    t362 = (t287 + 4);
    t363 = (t340 + 4);
    t364 = *((unsigned int *)t287);
    t365 = (~(t364));
    t366 = *((unsigned int *)t362);
    t367 = (~(t366));
    t368 = *((unsigned int *)t340);
    t369 = (~(t368));
    t370 = *((unsigned int *)t363);
    t371 = (~(t370));
    t372 = (t365 & t367);
    t373 = (t369 & t371);
    t374 = (~(t372));
    t375 = (~(t373));
    t376 = *((unsigned int *)t354);
    *((unsigned int *)t354) = (t376 & t374);
    t377 = *((unsigned int *)t354);
    *((unsigned int *)t354) = (t377 & t375);
    t378 = *((unsigned int *)t348);
    *((unsigned int *)t348) = (t378 & t374);
    t379 = *((unsigned int *)t348);
    *((unsigned int *)t348) = (t379 & t375);
    goto LAB98;

LAB99:    *((unsigned int *)t257) = 1;
    goto LAB102;

LAB101:    t386 = (t257 + 4);
    *((unsigned int *)t257) = 1;
    *((unsigned int *)t386) = 1;
    goto LAB102;

LAB103:    t391 = ((char*)((ng3)));
    goto LAB104;

LAB105:    t399 = (t1 + 4392);
    t400 = (t399 + 56U);
    t401 = *((char **)t400);
    memset(t398, 0, 8);
    t402 = (t398 + 4);
    t403 = (t401 + 4);
    t404 = *((unsigned int *)t401);
    t405 = (t404 >> 6);
    *((unsigned int *)t398) = t405;
    t406 = *((unsigned int *)t403);
    t407 = (t406 >> 6);
    *((unsigned int *)t402) = t407;
    t408 = *((unsigned int *)t398);
    *((unsigned int *)t398) = (t408 & 63U);
    t409 = *((unsigned int *)t402);
    *((unsigned int *)t402) = (t409 & 63U);
    t410 = ((char*)((ng5)));
    memset(t411, 0, 8);
    t412 = (t398 + 4);
    t413 = (t410 + 4);
    t414 = *((unsigned int *)t398);
    t415 = *((unsigned int *)t410);
    t416 = (t414 ^ t415);
    t417 = *((unsigned int *)t412);
    t418 = *((unsigned int *)t413);
    t419 = (t417 ^ t418);
    t420 = (t416 | t419);
    t421 = *((unsigned int *)t412);
    t422 = *((unsigned int *)t413);
    t423 = (t421 | t422);
    t424 = (~(t423));
    t425 = (t420 & t424);
    if (t425 != 0)
        goto LAB115;

LAB112:    if (t423 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t411) = 1;

LAB115:    memset(t427, 0, 8);
    t428 = (t411 + 4);
    t429 = *((unsigned int *)t428);
    t430 = (~(t429));
    t431 = *((unsigned int *)t411);
    t432 = (t431 & t430);
    t433 = (t432 & 1U);
    if (t433 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t428) != 0)
        goto LAB118;

LAB119:    t435 = (t427 + 4);
    t436 = *((unsigned int *)t427);
    t437 = *((unsigned int *)t435);
    t438 = (t436 || t437);
    if (t438 > 0)
        goto LAB120;

LAB121:    memcpy(t476, t427, 8);

LAB122:    memset(t397, 0, 8);
    t508 = (t476 + 4);
    t509 = *((unsigned int *)t508);
    t510 = (~(t509));
    t511 = *((unsigned int *)t476);
    t512 = (t511 & t510);
    t513 = (t512 & 1U);
    if (t513 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t508) != 0)
        goto LAB137;

LAB138:    t515 = (t397 + 4);
    t516 = *((unsigned int *)t397);
    t517 = *((unsigned int *)t515);
    t518 = (t516 || t517);
    if (t518 > 0)
        goto LAB139;

LAB140:    t520 = *((unsigned int *)t397);
    t521 = (~(t520));
    t522 = *((unsigned int *)t515);
    t523 = (t521 || t522);
    if (t523 > 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t515) > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t397) > 0)
        goto LAB145;

LAB146:    memcpy(t396, t524, 8);

LAB147:    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t256, 2, t391, 2, t396, 2);
    goto LAB111;

LAB109:    memcpy(t256, t391, 8);
    goto LAB111;

LAB114:    t426 = (t411 + 4);
    *((unsigned int *)t411) = 1;
    *((unsigned int *)t426) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t427) = 1;
    goto LAB119;

LAB118:    t434 = (t427 + 4);
    *((unsigned int *)t427) = 1;
    *((unsigned int *)t434) = 1;
    goto LAB119;

LAB120:    t439 = (t1 + 4712);
    t440 = (t439 + 56U);
    t441 = *((char **)t440);
    t443 = (t1 + 4392);
    t444 = (t443 + 56U);
    t445 = *((char **)t444);
    memset(t442, 0, 8);
    t446 = (t442 + 4);
    t447 = (t445 + 4);
    t448 = *((unsigned int *)t445);
    t449 = (t448 >> 12);
    *((unsigned int *)t442) = t449;
    t450 = *((unsigned int *)t447);
    t451 = (t450 >> 12);
    *((unsigned int *)t446) = t451;
    t452 = (t445 + 8);
    t453 = (t445 + 12);
    t454 = *((unsigned int *)t452);
    t455 = (t454 << 20);
    t456 = *((unsigned int *)t442);
    *((unsigned int *)t442) = (t456 | t455);
    t457 = *((unsigned int *)t453);
    t458 = (t457 << 20);
    t459 = *((unsigned int *)t446);
    *((unsigned int *)t446) = (t459 | t458);
    t460 = *((unsigned int *)t442);
    *((unsigned int *)t442) = (t460 & 4294967295U);
    t461 = *((unsigned int *)t446);
    *((unsigned int *)t446) = (t461 & 4294967295U);
    t462 = ((char*)((ng4)));
    memset(t463, 0, 8);
    xsi_vlog_unsigned_add(t463, 32, t442, 32, t462, 32);
    memset(t464, 0, 8);
    t465 = (t441 + 4);
    if (*((unsigned int *)t465) != 0)
        goto LAB124;

LAB123:    t466 = (t463 + 4);
    if (*((unsigned int *)t466) != 0)
        goto LAB124;

LAB127:    if (*((unsigned int *)t441) < *((unsigned int *)t463))
        goto LAB126;

LAB125:    *((unsigned int *)t464) = 1;

LAB126:    memset(t468, 0, 8);
    t469 = (t464 + 4);
    t470 = *((unsigned int *)t469);
    t471 = (~(t470));
    t472 = *((unsigned int *)t464);
    t473 = (t472 & t471);
    t474 = (t473 & 1U);
    if (t474 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t469) != 0)
        goto LAB130;

LAB131:    t477 = *((unsigned int *)t427);
    t478 = *((unsigned int *)t468);
    t479 = (t477 & t478);
    *((unsigned int *)t476) = t479;
    t480 = (t427 + 4);
    t481 = (t468 + 4);
    t482 = (t476 + 4);
    t483 = *((unsigned int *)t480);
    t484 = *((unsigned int *)t481);
    t485 = (t483 | t484);
    *((unsigned int *)t482) = t485;
    t486 = *((unsigned int *)t482);
    t487 = (t486 != 0);
    if (t487 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB122;

LAB124:    t467 = (t464 + 4);
    *((unsigned int *)t464) = 1;
    *((unsigned int *)t467) = 1;
    goto LAB126;

LAB128:    *((unsigned int *)t468) = 1;
    goto LAB131;

LAB130:    t475 = (t468 + 4);
    *((unsigned int *)t468) = 1;
    *((unsigned int *)t475) = 1;
    goto LAB131;

LAB132:    t488 = *((unsigned int *)t476);
    t489 = *((unsigned int *)t482);
    *((unsigned int *)t476) = (t488 | t489);
    t490 = (t427 + 4);
    t491 = (t468 + 4);
    t492 = *((unsigned int *)t427);
    t493 = (~(t492));
    t494 = *((unsigned int *)t490);
    t495 = (~(t494));
    t496 = *((unsigned int *)t468);
    t497 = (~(t496));
    t498 = *((unsigned int *)t491);
    t499 = (~(t498));
    t500 = (t493 & t495);
    t501 = (t497 & t499);
    t502 = (~(t500));
    t503 = (~(t501));
    t504 = *((unsigned int *)t482);
    *((unsigned int *)t482) = (t504 & t502);
    t505 = *((unsigned int *)t482);
    *((unsigned int *)t482) = (t505 & t503);
    t506 = *((unsigned int *)t476);
    *((unsigned int *)t476) = (t506 & t502);
    t507 = *((unsigned int *)t476);
    *((unsigned int *)t476) = (t507 & t503);
    goto LAB134;

LAB135:    *((unsigned int *)t397) = 1;
    goto LAB138;

LAB137:    t514 = (t397 + 4);
    *((unsigned int *)t397) = 1;
    *((unsigned int *)t514) = 1;
    goto LAB138;

LAB139:    t519 = ((char*)((ng2)));
    goto LAB140;

LAB141:    t524 = ((char*)((ng5)));
    goto LAB142;

LAB143:    xsi_vlog_unsigned_bit_combine(t396, 2, t519, 2, t524, 2);
    goto LAB147;

LAB145:    memcpy(t396, t519, 8);
    goto LAB147;

}

static void Initial_54_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3272);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3912);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4072);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4232);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 4232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB6:    xsi_set_current_line(65, ng0);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 3592);
    t16 = (t0 + 3592);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3592);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 4232);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 4232);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_69_1(char *t0)
{
    char t8[8];
    char t28[8];
    char t45[16];
    char t93[8];
    char t95[8];
    char t96[8];
    char t97[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t94;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;

LAB0:    t1 = (t0 + 6032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6352);
    *((int *)t2) = 1;
    t3 = (t0 + 6064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 4072);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 5);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);

LAB16:    xsi_set_current_line(78, ng0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB92;

LAB89:    if (t19 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t8) = 1;

LAB92:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(110, ng0);

LAB99:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB103;

LAB100:    if (t19 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t8) = 1;

LAB103:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB104;

LAB105:
LAB106:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB111;

LAB108:    if (t19 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t8) = 1;

LAB111:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB112;

LAB113:
LAB114:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3592);
    t4 = (t0 + 3592);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3592);
    t9 = (t7 + 64U);
    t27 = *((char **)t9);
    t29 = (t0 + 4072);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t8, t28, t6, t27, 2, 1, t31, 5, 2);
    t32 = (t0 + 3592);
    t34 = (t32 + 72U);
    t44 = *((char **)t34);
    t46 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t93, t44, 2, t46, 32, 1);
    t47 = (t8 + 4);
    t10 = *((unsigned int *)t47);
    t33 = (!(t10));
    t48 = (t28 + 4);
    t11 = *((unsigned int *)t48);
    t35 = (!(t11));
    t36 = (t33 && t35);
    t49 = (t93 + 4);
    t12 = *((unsigned int *)t49);
    t37 = (!(t12));
    t38 = (t36 && t37);
    if (t38 == 1)
        goto LAB116;

LAB117:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB121;

LAB118:    if (t19 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t8) = 1;

LAB121:    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB122;

LAB123:
LAB124:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB131;

LAB128:    if (t19 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t8) = 1;

LAB131:    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB132;

LAB133:
LAB134:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t0 + 3592);
    t4 = (t0 + 3592);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3592);
    t9 = (t7 + 64U);
    t27 = *((char **)t9);
    t29 = (t0 + 4072);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t8, t28, t6, t27, 2, 1, t31, 5, 2);
    t32 = (t0 + 3592);
    t34 = (t32 + 72U);
    t44 = *((char **)t34);
    t46 = ((char*)((ng10)));
    t47 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t93, t95, t96, ((int*)(t44)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t8 + 4);
    t10 = *((unsigned int *)t48);
    t33 = (!(t10));
    t49 = (t28 + 4);
    t11 = *((unsigned int *)t49);
    t35 = (!(t11));
    t36 = (t33 && t35);
    t50 = (t93 + 4);
    t12 = *((unsigned int *)t50);
    t37 = (!(t12));
    t38 = (t36 && t37);
    t51 = (t95 + 4);
    t13 = *((unsigned int *)t51);
    t94 = (!(t13));
    t98 = (t38 && t94);
    t52 = (t96 + 4);
    t14 = *((unsigned int *)t52);
    t99 = (!(t14));
    t100 = (t98 && t99);
    if (t100 == 1)
        goto LAB138;

LAB139:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    t6 = (t0 + 3592);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t27 = (t0 + 3592);
    t29 = (t27 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 4072);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    xsi_vlog_generic_convert_array_indices(t8, t28, t9, t30, 2, 1, t34, 5, 2);
    t44 = (t0 + 3592);
    t46 = (t44 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng12)));
    t49 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t93, t95, t96, ((int*)(t47)), 2, t48, 32, 1, t49, 32, 1);
    t50 = (t8 + 4);
    t10 = *((unsigned int *)t50);
    t33 = (!(t10));
    t51 = (t28 + 4);
    t11 = *((unsigned int *)t51);
    t35 = (!(t11));
    t36 = (t33 && t35);
    t52 = (t93 + 4);
    t12 = *((unsigned int *)t52);
    t37 = (!(t12));
    t38 = (t36 && t37);
    t53 = (t95 + 4);
    t13 = *((unsigned int *)t53);
    t94 = (!(t13));
    t98 = (t38 && t94);
    t54 = (t96 + 4);
    t14 = *((unsigned int *)t54);
    t99 = (!(t14));
    t100 = (t98 && t99);
    if (t100 == 1)
        goto LAB140;

LAB141:
LAB95:
LAB12:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3432);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB2;

LAB8:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t9 = ((char*)((ng5)));
    t27 = (t0 + 2792);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3592);
    t4 = (t0 + 3592);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3592);
    t9 = (t7 + 64U);
    t27 = *((char **)t9);
    t29 = (t0 + 4072);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t8, t28, t6, t27, 2, 1, t31, 5, 2);
    t32 = (t8 + 4);
    t10 = *((unsigned int *)t32);
    t33 = (!(t10));
    t34 = (t28 + 4);
    t11 = *((unsigned int *)t34);
    t35 = (!(t11));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t28);
    t37 = (t12 - t13);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t28), t38);
    goto LAB15;

LAB18:    xsi_set_current_line(78, ng0);

LAB20:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 1752U);
    t9 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t27 = (t9 + 4);
    t29 = (t7 + 4);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t27);
    t19 = *((unsigned int *)t29);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t27);
    t23 = *((unsigned int *)t29);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB22;

LAB21:    if (t24 != 0)
        goto LAB23;

LAB24:    t31 = (t28 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t28);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 3592);
    t27 = (t9 + 64U);
    t29 = *((char **)t27);
    t30 = (t0 + 4232);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t45, 44, t4, t7, t29, 2, 1, t32, 32, 1);
    t34 = (t0 + 2232U);
    t44 = *((char **)t34);
    t34 = (t0 + 3432);
    t46 = (t34 + 56U);
    t47 = *((char **)t46);
    t48 = (t0 + 5840);
    t49 = (t0 + 1120);
    t50 = xsi_create_subprogram_invocation(t48, 0, t0, t49, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t49, t50);
    t51 = (t0 + 4392);
    xsi_vlogvar_assign_value(t51, t45, 0, 0, 44);
    t52 = (t0 + 4552);
    xsi_vlogvar_assign_value(t52, t44, 0, 0, 5);
    t53 = (t0 + 4712);
    xsi_vlogvar_assign_value(t53, t47, 0, 0, 32);

LAB61:    t54 = (t0 + 5936);
    t55 = *((char **)t54);
    t56 = (t55 + 80U);
    t57 = *((char **)t56);
    t58 = (t57 + 272U);
    t59 = *((char **)t58);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t33 = ((int  (*)(char *, char *))t61)(t0, t55);

LAB63:    if (t33 != 0)
        goto LAB64;

LAB59:    t55 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t55);

LAB60:    t62 = (t0 + 5936);
    t63 = *((char **)t62);
    t62 = (t0 + 4872);
    t64 = (t62 + 56U);
    t65 = *((char **)t64);
    t66 = (t0 + 3752);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 2);
    t67 = (t0 + 1120);
    t68 = (t0 + 5840);
    t69 = 0;
    xsi_delete_subprogram_invocation(t67, t63, t0, t68, t69);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB68;

LAB65:    if (t19 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t8) = 1;

LAB68:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB76;

LAB73:    if (t19 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t8) = 1;

LAB76:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 4232);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB17;

LAB22:    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB23:    t30 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(79, ng0);

LAB28:    xsi_set_current_line(80, ng0);
    t32 = (t0 + 3592);
    t34 = (t32 + 56U);
    t44 = *((char **)t34);
    t46 = (t0 + 3592);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 3592);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 4232);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_generic_get_array_select_value(t45, 44, t44, t48, t51, 2, 1, t54, 32, 1);
    t55 = (t0 + 2072U);
    t56 = *((char **)t55);
    t55 = (t0 + 3432);
    t57 = (t55 + 56U);
    t58 = *((char **)t57);
    t59 = (t0 + 5840);
    t60 = (t0 + 1120);
    t61 = xsi_create_subprogram_invocation(t59, 0, t0, t60, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t60, t61);
    t62 = (t0 + 4392);
    xsi_vlogvar_assign_value(t62, t45, 0, 0, 44);
    t63 = (t0 + 4552);
    xsi_vlogvar_assign_value(t63, t56, 0, 0, 5);
    t64 = (t0 + 4712);
    xsi_vlogvar_assign_value(t64, t58, 0, 0, 32);

LAB31:    t65 = (t0 + 5936);
    t66 = *((char **)t65);
    t67 = (t66 + 80U);
    t68 = *((char **)t67);
    t69 = (t68 + 272U);
    t70 = *((char **)t69);
    t71 = (t70 + 0U);
    t72 = *((char **)t71);
    t33 = ((int  (*)(char *, char *))t72)(t0, t66);

LAB33:    if (t33 != 0)
        goto LAB34;

LAB29:    t66 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t66);

LAB30:    t73 = (t0 + 5936);
    t74 = *((char **)t73);
    t73 = (t0 + 4872);
    t75 = (t73 + 56U);
    t76 = *((char **)t75);
    t77 = (t0 + 3752);
    xsi_vlogvar_assign_value(t77, t76, 0, 0, 2);
    t78 = (t0 + 1120);
    t79 = (t0 + 5840);
    t80 = 0;
    xsi_delete_subprogram_invocation(t78, t74, t0, t79, t80);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB38;

LAB35:    if (t19 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t8) = 1;

LAB38:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB46;

LAB43:    if (t19 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t8) = 1;

LAB46:    t27 = (t8 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB27;

LAB32:;
LAB34:    t65 = (t0 + 6032U);
    *((char **)t65) = &&LAB31;
    goto LAB1;

LAB37:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(81, ng0);

LAB42:    xsi_set_current_line(82, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 3912);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 2);
    goto LAB41;

LAB45:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(84, ng0);

LAB50:    xsi_set_current_line(85, ng0);
    t29 = (t0 + 3912);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    memset(t28, 0, 8);
    t34 = (t31 + 4);
    t44 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t32);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t44);
    t81 = (t42 ^ t43);
    t82 = (t41 | t81);
    t83 = *((unsigned int *)t34);
    t84 = *((unsigned int *)t44);
    t85 = (t83 | t84);
    t86 = (~(t85));
    t87 = (t82 & t86);
    if (t87 != 0)
        goto LAB52;

LAB51:    if (t85 != 0)
        goto LAB53;

LAB54:    t47 = (t28 + 4);
    t88 = *((unsigned int *)t47);
    t89 = (~(t88));
    t90 = *((unsigned int *)t28);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB49;

LAB52:    *((unsigned int *)t28) = 1;
    goto LAB54;

LAB53:    t46 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(85, ng0);

LAB58:    xsi_set_current_line(86, ng0);
    t48 = (t0 + 2072U);
    t49 = *((char **)t48);
    t48 = (t0 + 3272);
    xsi_vlogvar_assign_value(t48, t49, 0, 0, 5);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB57;

LAB62:;
LAB64:    t54 = (t0 + 6032U);
    *((char **)t54) = &&LAB61;
    goto LAB1;

LAB67:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(93, ng0);

LAB72:    xsi_set_current_line(94, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 3912);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 2);
    goto LAB71;

LAB75:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(96, ng0);

LAB80:    xsi_set_current_line(97, ng0);
    t29 = (t0 + 3912);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    memset(t28, 0, 8);
    t34 = (t31 + 4);
    t44 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t32);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t44);
    t81 = (t42 ^ t43);
    t82 = (t41 | t81);
    t83 = *((unsigned int *)t34);
    t84 = *((unsigned int *)t44);
    t85 = (t83 | t84);
    t86 = (~(t85));
    t87 = (t82 & t86);
    if (t87 != 0)
        goto LAB82;

LAB81:    if (t85 != 0)
        goto LAB83;

LAB84:    t47 = (t28 + 4);
    t88 = *((unsigned int *)t47);
    t89 = (~(t88));
    t90 = *((unsigned int *)t28);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB85;

LAB86:
LAB87:    goto LAB79;

LAB82:    *((unsigned int *)t28) = 1;
    goto LAB84;

LAB83:    t46 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(97, ng0);

LAB88:    xsi_set_current_line(98, ng0);
    t48 = (t0 + 2232U);
    t49 = *((char **)t48);
    t48 = (t0 + 3272);
    xsi_vlogvar_assign_value(t48, t49, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB87;

LAB91:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(104, ng0);

LAB96:    xsi_set_current_line(105, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2792);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3592);
    t4 = (t0 + 3592);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3592);
    t9 = (t7 + 64U);
    t27 = *((char **)t9);
    t29 = (t0 + 4072);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t8, t28, t6, t27, 2, 1, t31, 5, 2);
    t32 = (t8 + 4);
    t10 = *((unsigned int *)t32);
    t33 = (!(t10));
    t34 = (t28 + 4);
    t11 = *((unsigned int *)t34);
    t35 = (!(t11));
    t36 = (t33 && t35);
    if (t36 == 1)
        goto LAB97;

LAB98:    goto LAB95;

LAB97:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t28);
    t37 = (t12 - t13);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t28), t38);
    goto LAB98;

LAB102:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(111, ng0);

LAB107:    xsi_set_current_line(112, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2792);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB106;

LAB110:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(116, ng0);

LAB115:    xsi_set_current_line(117, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2792);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB114;

LAB116:    t13 = *((unsigned int *)t28);
    t14 = *((unsigned int *)t93);
    t94 = (t13 + t14);
    xsi_vlogvar_assign_value(t3, t2, 0, t94, 1);
    goto LAB117;

LAB120:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(123, ng0);

LAB125:    xsi_set_current_line(124, ng0);
    t9 = (t0 + 1912U);
    t27 = *((char **)t9);
    t9 = (t0 + 3592);
    t29 = (t0 + 3592);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 3592);
    t34 = (t32 + 64U);
    t44 = *((char **)t34);
    t46 = (t0 + 4072);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t28, t93, t31, t44, 2, 1, t48, 5, 2);
    t49 = (t0 + 3592);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng7)));
    t53 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t95, t96, t97, ((int*)(t51)), 2, t52, 32, 1, t53, 32, 1);
    t54 = (t28 + 4);
    t39 = *((unsigned int *)t54);
    t33 = (!(t39));
    t55 = (t93 + 4);
    t40 = *((unsigned int *)t55);
    t35 = (!(t40));
    t36 = (t33 && t35);
    t56 = (t95 + 4);
    t41 = *((unsigned int *)t56);
    t37 = (!(t41));
    t38 = (t36 && t37);
    t57 = (t96 + 4);
    t42 = *((unsigned int *)t57);
    t94 = (!(t42));
    t98 = (t38 && t94);
    t58 = (t97 + 4);
    t43 = *((unsigned int *)t58);
    t99 = (!(t43));
    t100 = (t98 && t99);
    if (t100 == 1)
        goto LAB126;

LAB127:    goto LAB124;

LAB126:    t81 = *((unsigned int *)t97);
    t101 = (t81 + 0);
    t82 = *((unsigned int *)t93);
    t83 = *((unsigned int *)t96);
    t102 = (t82 + t83);
    t84 = *((unsigned int *)t95);
    t85 = *((unsigned int *)t96);
    t103 = (t84 - t85);
    t104 = (t103 + 1);
    xsi_vlogvar_assign_value(t9, t27, t101, t102, t104);
    goto LAB127;

LAB130:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(126, ng0);

LAB135:    xsi_set_current_line(127, ng0);
    t9 = (t0 + 2072U);
    t27 = *((char **)t9);
    t9 = (t0 + 3592);
    t29 = (t0 + 3592);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 3592);
    t34 = (t32 + 64U);
    t44 = *((char **)t34);
    t46 = (t0 + 4072);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t28, t93, t31, t44, 2, 1, t48, 5, 2);
    t49 = (t0 + 3592);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng7)));
    t53 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t95, t96, t97, ((int*)(t51)), 2, t52, 32, 1, t53, 32, 1);
    t54 = (t28 + 4);
    t39 = *((unsigned int *)t54);
    t33 = (!(t39));
    t55 = (t93 + 4);
    t40 = *((unsigned int *)t55);
    t35 = (!(t40));
    t36 = (t33 && t35);
    t56 = (t95 + 4);
    t41 = *((unsigned int *)t56);
    t37 = (!(t41));
    t38 = (t36 && t37);
    t57 = (t96 + 4);
    t42 = *((unsigned int *)t57);
    t94 = (!(t42));
    t98 = (t38 && t94);
    t58 = (t97 + 4);
    t43 = *((unsigned int *)t58);
    t99 = (!(t43));
    t100 = (t98 && t99);
    if (t100 == 1)
        goto LAB136;

LAB137:    goto LAB134;

LAB136:    t81 = *((unsigned int *)t97);
    t101 = (t81 + 0);
    t82 = *((unsigned int *)t93);
    t83 = *((unsigned int *)t96);
    t102 = (t82 + t83);
    t84 = *((unsigned int *)t95);
    t85 = *((unsigned int *)t96);
    t103 = (t84 - t85);
    t104 = (t103 + 1);
    xsi_vlogvar_assign_value(t9, t27, t101, t102, t104);
    goto LAB137;

LAB138:    t15 = *((unsigned int *)t96);
    t101 = (t15 + 0);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t95);
    t102 = (t16 + t17);
    t18 = *((unsigned int *)t93);
    t19 = *((unsigned int *)t95);
    t103 = (t18 - t19);
    t104 = (t103 + 1);
    xsi_vlogvar_assign_value(t2, t3, t101, t102, t104);
    goto LAB139;

LAB140:    t15 = *((unsigned int *)t96);
    t101 = (t15 + 0);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t95);
    t102 = (t16 + t17);
    t18 = *((unsigned int *)t93);
    t19 = *((unsigned int *)t95);
    t103 = (t18 - t19);
    t104 = (t103 + 1);
    xsi_vlogvar_assign_value(t5, t4, t101, t102, t104);
    goto LAB141;

}


extern void work_m_04447863497171815135_2867698509_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_69_1};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_04447863497171815135_2867698509", "isim/Main_isim_beh.exe.sim/work/m_04447863497171815135_2867698509.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

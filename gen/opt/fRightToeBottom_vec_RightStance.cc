/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:26:14 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5555;
  double t28839;
  double t4419;
  double t25181;
  double t28842;
  double t32642;
  double t32808;
  double t32892;
  double t32783;
  double t32852;
  double t32868;
  double t32518;
  double t32916;
  double t32993;
  double t33262;
  double t33462;
  double t32891;
  double t33331;
  double t33391;
  double t32332;
  double t33512;
  double t33520;
  double t33523;
  double t33762;
  double t33457;
  double t33546;
  double t33590;
  double t32322;
  double t33764;
  double t33771;
  double t33772;
  double t29349;
  double t33816;
  double t33756;
  double t33773;
  double t33804;
  double t32274;
  double t33818;
  double t33929;
  double t33944;
  double t33810;
  double t33957;
  double t33974;
  double t34007;
  double t34011;
  double t34012;
  double t29030;
  double t29346;
  double t29348;
  double t33994;
  double t34013;
  double t34030;
  double t34109;
  double t34113;
  double t34190;
  double t31751;
  double t35135;
  double t35315;
  double t35317;
  double t35018;
  double t35628;
  double t35629;
  double t35640;
  double t35661;
  double t35632;
  double t35667;
  double t35673;
  double t36476;
  double t36540;
  double t36623;
  double t36469;
  double t36627;
  double t36643;
  double t36842;
  double t36847;
  double t36896;
  double t36654;
  double t36970;
  double t36989;
  double t37106;
  double t37116;
  double t37140;
  double t37105;
  double t37197;
  double t37198;
  double t37237;
  double t37526;
  double t39208;
  double t31441;
  double t31499;
  double t31517;
  double t27629;
  double t28871;
  double t29029;
  double t29359;
  double t31794;
  double t31894;
  double t40998;
  double t34734;
  double t34743;
  double t34870;
  double t41572;
  double t34105;
  double t34299;
  double t34398;
  double t34729;
  double t34893;
  double t34969;
  double t39753;
  double t39784;
  double t39848;
  double t37202;
  double t39380;
  double t39383;
  double t39743;
  double t40516;
  double t40550;
  double t41007;
  double t41127;
  double t41292;
  double t42115;
  double t42118;
  double t42151;
  double t42333;
  double t42348;
  double t42511;
  double t42709;
  double t42712;
  double t43090;
  double t43322;
  double t43366;
  double t43367;
  double t43370;
  double t43378;
  double t43379;
  double t29235;
  double t32013;
  double t32046;
  double t34723;
  double t34972;
  double t35004;
  double t44103;
  double t44104;
  double t44079;
  double t44080;
  double t44137;
  double t44142;
  double t44151;
  double t44157;
  double t44239;
  double t44252;
  double t44253;
  double t44278;
  double t44083;
  double t44084;
  double t44192;
  double t44350;
  double t44370;
  double t44398;
  double t44406;
  double t44411;
  double t44413;
  double t44416;
  double t43936;
  double t43984;
  double t44066;
  double t44068;
  double t44077;
  double t44396;
  double t44418;
  double t44419;
  double t44426;
  double t44443;
  double t44444;
  double t44463;
  double t44485;
  double t44634;
  double t44660;
  double t43901;
  double t43905;
  double t44022;
  double t44064;
  double t44424;
  double t44673;
  double t44679;
  double t44698;
  double t44744;
  double t44769;
  double t44810;
  double t44811;
  double t43843;
  double t43865;
  double t43866;
  double t43896;
  double t43897;
  double t43929;
  double t43935;
  double t44696;
  double t44866;
  double t44931;
  double t44967;
  double t45031;
  double t45386;
  double t45436;
  double t45459;
  double t45486;
  double t45501;
  double t43840;
  double t45157;
  double t45517;
  double t45519;
  double t45571;
  double t45636;
  double t45637;
  double t45641;
  double t45744;
  double t45745;
  double t45914;
  double t45941;
  double t45970;
  double t45972;
  double t43817;
  double t43820;
  double t43825;
  double t45529;
  double t45767;
  double t45768;
  double t46036;
  double t46039;
  double t46043;
  double t46108;
  double t46128;
  double t46131;
  double t46154;
  double t45901;
  double t46009;
  double t46011;
  double t46120;
  double t46169;
  double t46199;
  double t46206;
  double t46212;
  double t46223;
  double t39436;
  double t40576;
  double t40810;
  double t46027;
  double t46252;
  double t46266;
  double t46345;
  double t46406;
  double t46435;
  double t46545;
  double t46594;
  double t46643;
  double t46752;
  double t46850;
  double t46916;
  double t47077;
  double t47040;
  double t47942;
  double t47505;
  double t47315;
  double t47158;
  double t48125;
  double t48446;
  double t48658;
  double t48664;
  t5555 = Cos(var1[16]);
  t28839 = Cos(var1[14]);
  t4419 = Cos(var1[15]);
  t25181 = Sin(var1[14]);
  t28842 = Sin(var1[15]);
  t32642 = Cos(var1[21]);
  t32808 = Sin(var1[21]);
  t32892 = Cos(var1[20]);
  t32783 = 0.642788*t32642;
  t32852 = -0.766044*t32808;
  t32868 = t32783 + t32852;
  t32518 = Sin(var1[20]);
  t32916 = -0.766044*t32642;
  t32993 = -0.642788*t32808;
  t33262 = t32916 + t32993;
  t33462 = Cos(var1[19]);
  t32891 = -1.*t32518*t32868;
  t33331 = t32892*t33262;
  t33391 = t32891 + t33331;
  t32332 = Sin(var1[19]);
  t33512 = t32892*t32868;
  t33520 = t32518*t33262;
  t33523 = t33512 + t33520;
  t33762 = Cos(var1[18]);
  t33457 = t32332*t33391;
  t33546 = t33462*t33523;
  t33590 = t33457 + t33546;
  t32322 = Sin(var1[18]);
  t33764 = t33462*t33391;
  t33771 = -1.*t32332*t33523;
  t33772 = t33764 + t33771;
  t29349 = Sin(var1[16]);
  t33816 = Cos(var1[17]);
  t33756 = -1.*t32322*t33590;
  t33773 = t33762*t33772;
  t33804 = t33756 + t33773;
  t32274 = Sin(var1[17]);
  t33818 = t33762*t33590;
  t33929 = t32322*t33772;
  t33944 = t33818 + t33929;
  t33810 = t32274*t33804;
  t33957 = t33816*t33944;
  t33974 = t33810 + t33957;
  t34007 = t33816*t33804;
  t34011 = -1.*t32274*t33944;
  t34012 = t34007 + t34011;
  t29030 = Sin(var1[4]);
  t29346 = Cos(var1[4]);
  t29348 = Cos(var1[5]);
  t33994 = -1.*t28842*t33974;
  t34013 = -1.*t4419*t29349*t34012;
  t34030 = t33994 + t34013;
  t34109 = t4419*t33974;
  t34113 = -1.*t28842*t29349*t34012;
  t34190 = t34109 + t34113;
  t31751 = Sin(var1[5]);
  t35135 = 0.766044*t32642;
  t35315 = 0.642788*t32808;
  t35317 = t35135 + t35315;
  t35018 = t32518*t32868;
  t35628 = t32892*t35317;
  t35629 = t35018 + t35628;
  t35640 = -1.*t32518*t35317;
  t35661 = t33512 + t35640;
  t35632 = -1.*t32332*t35629;
  t35667 = t33462*t35661;
  t35673 = t35632 + t35667;
  t36476 = t33462*t35629;
  t36540 = t32332*t35661;
  t36623 = t36476 + t36540;
  t36469 = t32322*t35673;
  t36627 = t33762*t36623;
  t36643 = t36469 + t36627;
  t36842 = t33762*t35673;
  t36847 = -1.*t32322*t36623;
  t36896 = t36842 + t36847;
  t36654 = -1.*t32274*t36643;
  t36970 = t33816*t36896;
  t36989 = t36654 + t36970;
  t37106 = t33816*t36643;
  t37116 = t32274*t36896;
  t37140 = t37106 + t37116;
  t37105 = -1.*t28842*t29349*t36989;
  t37197 = t4419*t37140;
  t37198 = t37105 + t37197;
  t37237 = -1.*t4419*t29349*t36989;
  t37526 = -1.*t28842*t37140;
  t39208 = t37237 + t37526;
  t31441 = -1.*t28839*t4419*t5555;
  t31499 = t5555*t25181*t28842;
  t31517 = t31441 + t31499;
  t27629 = -1.*t4419*t5555*t25181;
  t28871 = -1.*t28839*t5555*t28842;
  t29029 = t27629 + t28871;
  t29359 = -1.*t29348*t29349;
  t31794 = -1.*t31517*t31751;
  t31894 = t29359 + t31794;
  t40998 = Cos(var1[3]);
  t34734 = t28839*t34030;
  t34743 = -1.*t25181*t34190;
  t34870 = t34734 + t34743;
  t41572 = Sin(var1[3]);
  t34105 = t25181*t34030;
  t34299 = t28839*t34190;
  t34398 = t34105 + t34299;
  t34729 = t5555*t29348*t34012;
  t34893 = -1.*t34870*t31751;
  t34969 = t34729 + t34893;
  t39753 = -1.*t25181*t37198;
  t39784 = t28839*t39208;
  t39848 = t39753 + t39784;
  t37202 = t28839*t37198;
  t39380 = t25181*t39208;
  t39383 = t37202 + t39380;
  t39743 = t5555*t29348*t36989;
  t40516 = -1.*t39848*t31751;
  t40550 = t39743 + t40516;
  t41007 = t29348*t31517;
  t41127 = -1.*t29349*t31751;
  t41292 = t41007 + t41127;
  t42115 = t29346*t29029;
  t42118 = -1.*t29030*t31894;
  t42151 = t42115 + t42118;
  t42333 = t29348*t34870;
  t42348 = t5555*t34012*t31751;
  t42511 = t42333 + t42348;
  t42709 = t29346*t34398;
  t42712 = -1.*t29030*t34969;
  t43090 = t42709 + t42712;
  t43322 = t29348*t39848;
  t43366 = t5555*t36989*t31751;
  t43367 = t43322 + t43366;
  t43370 = t29346*t39383;
  t43378 = -1.*t29030*t40550;
  t43379 = t43370 + t43378;
  t29235 = t29029*t29030;
  t32013 = t29346*t31894;
  t32046 = t29235 + t32013;
  t34723 = t34398*t29030;
  t34972 = t29346*t34969;
  t35004 = t34723 + t34972;
  t44103 = -1.*t32642;
  t44104 = 1. + t44103;
  t44079 = -1.*t32892;
  t44080 = 1. + t44079;
  t44137 = -0.0216*t44104;
  t44142 = 0.0306*t32642;
  t44151 = 0.0177*t32808;
  t44157 = t44137 + t44142 + t44151;
  t44239 = -1.1135*t44104;
  t44252 = -1.1312*t32642;
  t44253 = 0.0522*t32808;
  t44278 = t44239 + t44252 + t44253;
  t44083 = -0.7055*t44080;
  t44084 = -0.0184*t32518;
  t44192 = t32518*t44157;
  t44350 = t32892*t44278;
  t44370 = t44083 + t44084 + t44192 + t44350;
  t44398 = 0.0184*t44080;
  t44406 = -0.7055*t32518;
  t44411 = t32892*t44157;
  t44413 = -1.*t32518*t44278;
  t44416 = t44398 + t44406 + t44411 + t44413;
  t43936 = -1.*t33762;
  t43984 = 1. + t43936;
  t44066 = -1. + t33462;
  t44068 = 0.0016*t44066;
  t44077 = -0.2707*t32332;
  t44396 = -1.*t32332*t44370;
  t44418 = t33462*t44416;
  t44419 = t44068 + t44077 + t44396 + t44418;
  t44426 = -1.*t33462;
  t44443 = 1. + t44426;
  t44444 = -0.2707*t44443;
  t44463 = 0.0016*t32332;
  t44485 = t33462*t44370;
  t44634 = t32332*t44416;
  t44660 = t44444 + t44463 + t44485 + t44634;
  t43901 = -1.*t33816;
  t43905 = 1. + t43901;
  t44022 = -0.21*t43984;
  t44064 = 0.049*t32322;
  t44424 = t32322*t44419;
  t44673 = t33762*t44660;
  t44679 = t44022 + t44064 + t44424 + t44673;
  t44698 = -0.049*t43984;
  t44744 = -0.21*t32322;
  t44769 = t33762*t44419;
  t44810 = -1.*t32322*t44660;
  t44811 = t44698 + t44744 + t44769 + t44810;
  t43843 = -1.*t5555;
  t43865 = 1. + t43843;
  t43866 = -0.135*t43865;
  t43896 = -0.1305*t5555;
  t43897 = -0.049*t29349;
  t43929 = -0.049*t43905;
  t43935 = -0.09*t32274;
  t44696 = -1.*t32274*t44679;
  t44866 = t33816*t44811;
  t44931 = t43929 + t43935 + t44696 + t44866;
  t44967 = -1.*t29349*t44931;
  t45031 = t43866 + t43896 + t43897 + t44967;
  t45386 = -0.09*t43905;
  t45436 = 0.049*t32274;
  t45459 = t33816*t44679;
  t45486 = t32274*t44811;
  t45501 = t45386 + t45436 + t45459 + t45486;
  t43840 = 0.135*t28842;
  t45157 = t28842*t45031;
  t45517 = t4419*t45501;
  t45519 = t43840 + t45157 + t45517;
  t45571 = -1.*t4419;
  t45636 = 1. + t45571;
  t45637 = -0.135*t45636;
  t45641 = t4419*t45031;
  t45744 = -1.*t28842*t45501;
  t45745 = t45637 + t45641 + t45744;
  t45914 = -0.049*t43865;
  t45941 = 0.0045*t29349;
  t45970 = t5555*t44931;
  t45972 = t45914 + t45941 + t45970;
  t43817 = -1.*t28839;
  t43820 = 1. + t43817;
  t43825 = -0.135*t43820;
  t45529 = -1.*t25181*t45519;
  t45767 = t28839*t45745;
  t45768 = t43825 + t45529 + t45767;
  t46036 = 0.135*t25181;
  t46039 = t28839*t45519;
  t46043 = t25181*t45745;
  t46108 = t46036 + t46039 + t46043;
  t46128 = t29348*t45972;
  t46131 = -1.*t45768*t31751;
  t46154 = t46128 + t46131;
  t45901 = t29348*t45768;
  t46009 = t45972*t31751;
  t46011 = t45901 + t46009;
  t46120 = t46108*t29030;
  t46169 = t29346*t46154;
  t46199 = t46120 + t46169;
  t46206 = t29346*t46108;
  t46212 = -1.*t29030*t46154;
  t46223 = t46206 + t46212;
  t39436 = t39383*t29030;
  t40576 = t29346*t40550;
  t40810 = t39436 + t40576;
  t46027 = t41292*t46011;
  t46252 = -1.*t46011*t42511;
  t46266 = t46011*t42511;
  t46345 = -1.*t46011*t43367;
  t46406 = -1.*t41292*t46011;
  t46435 = t46011*t43367;
  t46545 = t29029*t46108;
  t46594 = -1.*t34398*t46108;
  t46643 = t34398*t46108;
  t46752 = -1.*t46108*t39383;
  t46850 = -1.*t29029*t46108;
  t46916 = t46108*t39383;
  t47077 = -1.*t5555*t45972*t34012;
  t47040 = -1.*t29349*t45972;
  t47942 = t5555*t45972*t36989;
  t47505 = t29349*t45972;
  t47315 = -1.*t5555*t45972*t36989;
  t47158 = t5555*t45972*t34012;
  t48125 = -1.*var2[3]*t29349;
  t48446 = var2[4]*t5555*t34012;
  t48658 = -1.*t45501*t37140;
  t48664 = t33974*t45501;
  p_output1[0]=t32046*var2[0] + t40810*var2[1] + t35004*var2[2];
  p_output1[1]=(t40998*t41292 - 1.*t41572*t42151)*var2[0] + (t40998*t43367 - 1.*t41572*t43379)*var2[1] + (t40998*t42511 - 1.*t41572*t43090)*var2[2];
  p_output1[2]=(t41292*t41572 + t40998*t42151)*var2[0] + (t41572*t43367 + t40998*t43379)*var2[1] + (t41572*t42511 + t40998*t43090)*var2[2];
  p_output1[3]=(t40810*(t35004*t46199 + t43090*t46223 + t46266) + t35004*(-1.*t40810*t46199 - 1.*t43379*t46223 + t46345))*var2[0] + (t35004*(t46027 + t32046*t46199 + t42151*t46223) + t32046*(-1.*t35004*t46199 - 1.*t43090*t46223 + t46252))*var2[1] + (t40810*(-1.*t32046*t46199 - 1.*t42151*t46223 + t46406) + t32046*(t40810*t46199 + t43379*t46223 + t46435))*var2[2] + t32046*var2[3] + t35004*var2[4];
  p_output1[4]=(t43367*(t34969*t46154 + t46266 + t46643) + t42511*(-1.*t40550*t46154 + t46345 + t46752))*var2[0] + (t42511*(t46027 + t31894*t46154 + t46545) + t41292*(-1.*t34969*t46154 + t46252 + t46594))*var2[1] + (t43367*(-1.*t31894*t46154 + t46406 + t46850) + t41292*(t40550*t46154 + t46435 + t46916))*var2[2] + t41292*var2[3] + t42511*var2[4];
  p_output1[5]=(t39383*(t34870*t45768 + t46643 + t47158) + t34398*(-1.*t39848*t45768 + t46752 + t47315))*var2[0] + (t34398*(t31517*t45768 + t46545 + t47040) + t29029*(-1.*t34870*t45768 + t46594 + t47077))*var2[1] + (t39383*(-1.*t31517*t45768 + t46850 + t47505) + t29029*(t39848*t45768 + t46916 + t47942))*var2[2] + t29029*var2[3] + t34398*var2[4];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=t48125 + t48446 + (-0.135*t28842*t5555 + t36989*(t34190*t45519 + t34030*t45745 + t47158)*t5555 + t34012*(-1.*t37198*t45519 - 1.*t39208*t45745 + t47315)*t5555)*var2[0] + (0.135*t37198 - 1.*t29349*(-1.*t34190*t45519 - 1.*t34030*t45745 + t47077) + t34012*t5555*(t47040 - 1.*t28842*t45519*t5555 - 1.*t4419*t45745*t5555))*var2[1] + (0.135*t34190 - 1.*t29349*(t37198*t45519 + t39208*t45745 + t47942) + t36989*t5555*(t47505 + t28842*t45519*t5555 + t4419*t45745*t5555))*var2[2];
  p_output1[15]=t48125 + t48446 + (t34012*(t29349*t36989*t45031 + t47315 + t48658)*t5555 + t36989*(-1.*t29349*t34012*t45031 + t47158 + t48664)*t5555)*var2[0] + (0.135*t37140 - 1.*t29349*(t29349*t34012*t45031 - 1.*t33974*t45501 + t47077) + t34012*t5555*(t47040 - 1.*t45031*t5555))*var2[1] + (0.135*t33974 - 1.*t29349*(-1.*t29349*t36989*t45031 + t37140*t45501 + t47942) + t36989*t5555*(t47505 + t45031*t5555))*var2[2];
  p_output1[16]=(0.049 - 1.*t33974*(-1.*t36989*t44931 + t48658) - 1.*t37140*(t34012*t44931 + t48664))*var2[0] + (-0.1305*t33974 + 0.135*t36989)*var2[1] + (0.135*t34012 + 0.1305*t37140)*var2[2] + (-1.*t32274*t33804 - 1.*t33816*t33944)*var2[4];
  p_output1[17]=(0.049*t36643 - 0.09*t36896 - 1.*t33944*t44679 - 1.*t33804*t44811)*var2[1] + (-0.09*t33804 + 0.049*t33944 + t36643*t44679 + t36896*t44811)*var2[2] + var2[3];
  p_output1[18]=(-0.21*t35673 + 0.049*t36623 - 1.*t33772*t44419 - 1.*t33590*t44660)*var2[1] + (0.049*t33590 - 0.21*t33772 + t35673*t44419 + t36623*t44660)*var2[2] + var2[3];
  p_output1[19]=(0.0016*t35629 - 0.2707*t35661 - 1.*t33523*t44370 - 1.*t33391*t44416)*var2[1] + (-0.2707*t33391 + 0.0016*t33523 + t35629*t44370 + t35661*t44416)*var2[2] + var2[3];
  p_output1[20]=(-0.7055*t32868 - 0.0184*t35317 - 1.*t33262*t44157 - 1.*t32868*t44278)*var2[1] + (-0.0184*t32868 - 0.7055*t33262 + t32868*t44157 + t35317*t44278)*var2[2] + var2[3];
  p_output1[21]=0.0513648444*var2[1] + 0.0199945548*var2[2] + var2[3];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToeBottom_vec_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void fRightToeBottom_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:47 GMT-04:00
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
  double t2912;
  double t3839;
  double t2154;
  double t2955;
  double t5826;
  double t2153;
  double t11631;
  double t12107;
  double t12368;
  double t11991;
  double t12139;
  double t12141;
  double t11584;
  double t12412;
  double t12414;
  double t12436;
  double t12627;
  double t12355;
  double t12441;
  double t12501;
  double t11214;
  double t12679;
  double t12808;
  double t12913;
  double t12991;
  double t12546;
  double t12918;
  double t12922;
  double t11093;
  double t13082;
  double t13085;
  double t13126;
  double t13476;
  double t12979;
  double t13170;
  double t13305;
  double t10682;
  double t13492;
  double t13570;
  double t13578;
  double t8721;
  double t13404;
  double t13663;
  double t13736;
  double t13803;
  double t13864;
  double t13884;
  double t7041;
  double t8582;
  double t7170;
  double t13801;
  double t13918;
  double t13938;
  double t14045;
  double t14106;
  double t14134;
  double t14542;
  double t14558;
  double t14621;
  double t14532;
  double t14704;
  double t14717;
  double t14746;
  double t14779;
  double t14722;
  double t14793;
  double t14801;
  double t14832;
  double t14841;
  double t14842;
  double t14828;
  double t14843;
  double t14844;
  double t14847;
  double t14857;
  double t14865;
  double t14845;
  double t14866;
  double t14868;
  double t14874;
  double t14885;
  double t14917;
  double t14872;
  double t14932;
  double t14956;
  double t15016;
  double t15017;
  double t15018;
  double t7532;
  double t7842;
  double t8254;
  double t3386;
  double t5930;
  double t6634;
  double t8263;
  double t8921;
  double t8990;
  double t15215;
  double t14196;
  double t14203;
  double t14220;
  double t15270;
  double t14033;
  double t14148;
  double t14149;
  double t14173;
  double t14236;
  double t14345;
  double t15079;
  double t15080;
  double t15087;
  double t14991;
  double t15021;
  double t15066;
  double t15075;
  double t15091;
  double t15097;
  double t15218;
  double t15220;
  double t15224;
  double t15307;
  double t15315;
  double t15331;
  double t15405;
  double t15408;
  double t15411;
  double t15422;
  double t15431;
  double t15441;
  double t15464;
  double t15466;
  double t15476;
  double t15488;
  double t15490;
  double t15492;
  double t6726;
  double t9955;
  double t10076;
  double t14169;
  double t14374;
  double t14445;
  double t15804;
  double t15807;
  double t15755;
  double t15764;
  double t15811;
  double t15827;
  double t15834;
  double t15839;
  double t15841;
  double t15847;
  double t15848;
  double t15855;
  double t15766;
  double t15791;
  double t15840;
  double t15875;
  double t15878;
  double t15914;
  double t15918;
  double t15923;
  double t15928;
  double t15929;
  double t15662;
  double t15663;
  double t15696;
  double t15713;
  double t15737;
  double t15887;
  double t15939;
  double t15974;
  double t15996;
  double t16000;
  double t16010;
  double t16014;
  double t16016;
  double t16018;
  double t16022;
  double t15644;
  double t15649;
  double t15669;
  double t15692;
  double t15982;
  double t16026;
  double t16075;
  double t16089;
  double t16091;
  double t16092;
  double t16130;
  double t16132;
  double t15641;
  double t15642;
  double t15651;
  double t15656;
  double t16087;
  double t16133;
  double t16139;
  double t16205;
  double t16206;
  double t16208;
  double t16211;
  double t16225;
  double t16228;
  double t16230;
  double t16232;
  double t16237;
  double t16240;
  double t16192;
  double t16195;
  double t16198;
  double t16226;
  double t16242;
  double t16249;
  double t16253;
  double t16258;
  double t16262;
  double t16265;
  double t15643;
  double t16144;
  double t16149;
  double t16152;
  double t16160;
  double t16164;
  double t16178;
  double t16250;
  double t16274;
  double t16280;
  double t16286;
  double t16288;
  double t16291;
  double t16294;
  double t16304;
  double t16305;
  double t16308;
  double t16158;
  double t16282;
  double t16283;
  double t16303;
  double t16309;
  double t16319;
  double t16323;
  double t16324;
  double t16340;
  double t15070;
  double t15128;
  double t15167;
  double t16285;
  double t16350;
  double t16404;
  double t16419;
  double t16459;
  double t16477;
  double t16506;
  double t16545;
  double t16586;
  double t16646;
  double t16685;
  double t16700;
  double t16785;
  double t16843;
  double t16874;
  double t16889;
  double t16932;
  double t16981;
  double t17007;
  double t17013;
  double t17681;
  double t17574;
  t2912 = Cos(var1[8]);
  t3839 = Cos(var1[6]);
  t2154 = Cos(var1[7]);
  t2955 = Sin(var1[6]);
  t5826 = Sin(var1[7]);
  t2153 = Sin(var1[4]);
  t11631 = Cos(var1[13]);
  t12107 = Sin(var1[13]);
  t12368 = Cos(var1[12]);
  t11991 = 0.642788*t11631;
  t12139 = -0.766044*t12107;
  t12141 = t11991 + t12139;
  t11584 = Sin(var1[12]);
  t12412 = -0.766044*t11631;
  t12414 = -0.642788*t12107;
  t12436 = t12412 + t12414;
  t12627 = Cos(var1[11]);
  t12355 = -1.*t11584*t12141;
  t12441 = t12368*t12436;
  t12501 = t12355 + t12441;
  t11214 = Sin(var1[11]);
  t12679 = t12368*t12141;
  t12808 = t11584*t12436;
  t12913 = t12679 + t12808;
  t12991 = Cos(var1[10]);
  t12546 = t11214*t12501;
  t12918 = t12627*t12913;
  t12922 = t12546 + t12918;
  t11093 = Sin(var1[10]);
  t13082 = t12627*t12501;
  t13085 = -1.*t11214*t12913;
  t13126 = t13082 + t13085;
  t13476 = Cos(var1[9]);
  t12979 = -1.*t11093*t12922;
  t13170 = t12991*t13126;
  t13305 = t12979 + t13170;
  t10682 = Sin(var1[9]);
  t13492 = t12991*t12922;
  t13570 = t11093*t13126;
  t13578 = t13492 + t13570;
  t8721 = Sin(var1[8]);
  t13404 = t10682*t13305;
  t13663 = t13476*t13578;
  t13736 = t13404 + t13663;
  t13803 = t13476*t13305;
  t13864 = -1.*t10682*t13578;
  t13884 = t13803 + t13864;
  t7041 = Cos(var1[4]);
  t8582 = Cos(var1[5]);
  t7170 = Sin(var1[5]);
  t13801 = -1.*t13736*t5826;
  t13918 = -1.*t2154*t13884*t8721;
  t13938 = t13801 + t13918;
  t14045 = t2154*t13736;
  t14106 = -1.*t13884*t5826*t8721;
  t14134 = t14045 + t14106;
  t14542 = 0.766044*t11631;
  t14558 = 0.642788*t12107;
  t14621 = t14542 + t14558;
  t14532 = t11584*t12141;
  t14704 = t12368*t14621;
  t14717 = t14532 + t14704;
  t14746 = -1.*t11584*t14621;
  t14779 = t12679 + t14746;
  t14722 = -1.*t11214*t14717;
  t14793 = t12627*t14779;
  t14801 = t14722 + t14793;
  t14832 = t12627*t14717;
  t14841 = t11214*t14779;
  t14842 = t14832 + t14841;
  t14828 = t11093*t14801;
  t14843 = t12991*t14842;
  t14844 = t14828 + t14843;
  t14847 = t12991*t14801;
  t14857 = -1.*t11093*t14842;
  t14865 = t14847 + t14857;
  t14845 = t13476*t14844;
  t14866 = t10682*t14865;
  t14868 = t14845 + t14866;
  t14874 = -1.*t10682*t14844;
  t14885 = t13476*t14865;
  t14917 = t14874 + t14885;
  t14872 = -1.*t14868*t5826;
  t14932 = -1.*t2154*t14917*t8721;
  t14956 = t14872 + t14932;
  t15016 = t2154*t14868;
  t15017 = -1.*t14917*t5826*t8721;
  t15018 = t15016 + t15017;
  t7532 = -1.*t3839*t2154*t2912;
  t7842 = t2912*t2955*t5826;
  t8254 = t7532 + t7842;
  t3386 = -1.*t2154*t2912*t2955;
  t5930 = -1.*t3839*t2912*t5826;
  t6634 = t3386 + t5930;
  t8263 = -1.*t7170*t8254;
  t8921 = -1.*t8582*t8721;
  t8990 = t8263 + t8921;
  t15215 = Cos(var1[3]);
  t14196 = t3839*t13938;
  t14203 = -1.*t2955*t14134;
  t14220 = t14196 + t14203;
  t15270 = Sin(var1[3]);
  t14033 = t2955*t13938;
  t14148 = t3839*t14134;
  t14149 = t14033 + t14148;
  t14173 = t8582*t2912*t13884;
  t14236 = -1.*t7170*t14220;
  t14345 = t14173 + t14236;
  t15079 = t3839*t14956;
  t15080 = -1.*t2955*t15018;
  t15087 = t15079 + t15080;
  t14991 = t2955*t14956;
  t15021 = t3839*t15018;
  t15066 = t14991 + t15021;
  t15075 = t8582*t2912*t14917;
  t15091 = -1.*t7170*t15087;
  t15097 = t15075 + t15091;
  t15218 = t8582*t8254;
  t15220 = -1.*t7170*t8721;
  t15224 = t15218 + t15220;
  t15307 = t7041*t6634;
  t15315 = -1.*t2153*t8990;
  t15331 = t15307 + t15315;
  t15405 = t2912*t13884*t7170;
  t15408 = t8582*t14220;
  t15411 = t15405 + t15408;
  t15422 = t7041*t14149;
  t15431 = -1.*t2153*t14345;
  t15441 = t15422 + t15431;
  t15464 = t2912*t14917*t7170;
  t15466 = t8582*t15087;
  t15476 = t15464 + t15466;
  t15488 = t7041*t15066;
  t15490 = -1.*t2153*t15097;
  t15492 = t15488 + t15490;
  t6726 = t2153*t6634;
  t9955 = t7041*t8990;
  t10076 = t6726 + t9955;
  t14169 = t2153*t14149;
  t14374 = t7041*t14345;
  t14445 = t14169 + t14374;
  t15804 = -1.*t11631;
  t15807 = 1. + t15804;
  t15755 = -1.*t12368;
  t15764 = 1. + t15755;
  t15811 = -0.0216*t15807;
  t15827 = 0.0306*t11631;
  t15834 = 0.0177*t12107;
  t15839 = t15811 + t15827 + t15834;
  t15841 = -1.1135*t15807;
  t15847 = -1.1312*t11631;
  t15848 = 0.0522*t12107;
  t15855 = t15841 + t15847 + t15848;
  t15766 = -0.7055*t15764;
  t15791 = -0.0184*t11584;
  t15840 = t11584*t15839;
  t15875 = t12368*t15855;
  t15878 = t15766 + t15791 + t15840 + t15875;
  t15914 = 0.0184*t15764;
  t15918 = -0.7055*t11584;
  t15923 = t12368*t15839;
  t15928 = -1.*t11584*t15855;
  t15929 = t15914 + t15918 + t15923 + t15928;
  t15662 = -1.*t12991;
  t15663 = 1. + t15662;
  t15696 = -1. + t12627;
  t15713 = 0.0016*t15696;
  t15737 = -0.2707*t11214;
  t15887 = -1.*t11214*t15878;
  t15939 = t12627*t15929;
  t15974 = t15713 + t15737 + t15887 + t15939;
  t15996 = -1.*t12627;
  t16000 = 1. + t15996;
  t16010 = -0.2707*t16000;
  t16014 = 0.0016*t11214;
  t16016 = t12627*t15878;
  t16018 = t11214*t15929;
  t16022 = t16010 + t16014 + t16016 + t16018;
  t15644 = -1.*t13476;
  t15649 = 1. + t15644;
  t15669 = -0.21*t15663;
  t15692 = 0.049*t11093;
  t15982 = t11093*t15974;
  t16026 = t12991*t16022;
  t16075 = t15669 + t15692 + t15982 + t16026;
  t16089 = -0.049*t15663;
  t16091 = -0.21*t11093;
  t16092 = t12991*t15974;
  t16130 = -1.*t11093*t16022;
  t16132 = t16089 + t16091 + t16092 + t16130;
  t15641 = -1.*t2912;
  t15642 = 1. + t15641;
  t15651 = -0.049*t15649;
  t15656 = -0.09*t10682;
  t16087 = -1.*t10682*t16075;
  t16133 = t13476*t16132;
  t16139 = t15651 + t15656 + t16087 + t16133;
  t16205 = -0.09*t15649;
  t16206 = 0.049*t10682;
  t16208 = t13476*t16075;
  t16211 = t10682*t16132;
  t16225 = t16205 + t16206 + t16208 + t16211;
  t16228 = 0.135*t15642;
  t16230 = 0.1305*t2912;
  t16232 = -0.049*t8721;
  t16237 = -1.*t16139*t8721;
  t16240 = t16228 + t16230 + t16232 + t16237;
  t16192 = -1.*t2154;
  t16195 = 1. + t16192;
  t16198 = 0.135*t16195;
  t16226 = -1.*t16225*t5826;
  t16242 = t2154*t16240;
  t16249 = t16198 + t16226 + t16242;
  t16253 = t2154*t16225;
  t16258 = -0.135*t5826;
  t16262 = t5826*t16240;
  t16265 = t16253 + t16258 + t16262;
  t15643 = -0.049*t15642;
  t16144 = t2912*t16139;
  t16149 = -0.0045*t8721;
  t16152 = t15643 + t16144 + t16149;
  t16160 = -1.*t3839;
  t16164 = 1. + t16160;
  t16178 = 0.135*t16164;
  t16250 = t3839*t16249;
  t16274 = -1.*t2955*t16265;
  t16280 = t16178 + t16250 + t16274;
  t16286 = -0.135*t2955;
  t16288 = t2955*t16249;
  t16291 = t3839*t16265;
  t16294 = t16286 + t16288 + t16291;
  t16304 = t8582*t16152;
  t16305 = -1.*t7170*t16280;
  t16308 = t16304 + t16305;
  t16158 = t7170*t16152;
  t16282 = t8582*t16280;
  t16283 = t16158 + t16282;
  t16303 = t2153*t16294;
  t16309 = t7041*t16308;
  t16319 = t16303 + t16309;
  t16323 = t7041*t16294;
  t16324 = -1.*t2153*t16308;
  t16340 = t16323 + t16324;
  t15070 = t2153*t15066;
  t15128 = t7041*t15097;
  t15167 = t15070 + t15128;
  t16285 = t15224*t16283;
  t16350 = -1.*t15411*t16283;
  t16404 = t15411*t16283;
  t16419 = -1.*t15476*t16283;
  t16459 = -1.*t15224*t16283;
  t16477 = t15476*t16283;
  t16506 = t6634*t16294;
  t16545 = -1.*t14149*t16294;
  t16586 = t14149*t16294;
  t16646 = -1.*t15066*t16294;
  t16685 = -1.*t6634*t16294;
  t16700 = t15066*t16294;
  t16785 = -1.*t16152*t8721;
  t16843 = -1.*t2912*t13884*t16152;
  t16874 = t2912*t13884*t16152;
  t16889 = -1.*t2912*t14917*t16152;
  t16932 = t16152*t8721;
  t16981 = t2912*t14917*t16152;
  t17007 = var2[4]*t2912*t13884;
  t17013 = -1.*var2[3]*t8721;
  t17681 = -1.*t16225*t14868;
  t17574 = t13736*t16225;
  p_output1[0]=t10076*var2[0] + t15167*var2[1] + t14445*var2[2];
  p_output1[1]=(t15215*t15224 - 1.*t15270*t15331)*var2[0] + (t15215*t15476 - 1.*t15270*t15492)*var2[1] + (t15215*t15411 - 1.*t15270*t15441)*var2[2];
  p_output1[2]=(t15224*t15270 + t15215*t15331)*var2[0] + (t15270*t15476 + t15215*t15492)*var2[1] + (t15270*t15411 + t15215*t15441)*var2[2];
  p_output1[3]=(t15167*(t14445*t16319 + t15441*t16340 + t16404) + t14445*(-1.*t15167*t16319 - 1.*t15492*t16340 + t16419))*var2[0] + (t14445*(t16285 + t10076*t16319 + t15331*t16340) + t10076*(-1.*t14445*t16319 - 1.*t15441*t16340 + t16350))*var2[1] + (t15167*(-1.*t10076*t16319 - 1.*t15331*t16340 + t16459) + t10076*(t15167*t16319 + t15492*t16340 + t16477))*var2[2] + t10076*var2[3] + t14445*var2[4];
  p_output1[4]=(t15476*(t14345*t16308 + t16404 + t16586) + t15411*(-1.*t15097*t16308 + t16419 + t16646))*var2[0] + (t15224*(-1.*t14345*t16308 + t16350 + t16545) + t15411*(t16285 + t16506 + t16308*t8990))*var2[1] + (t15224*(t15097*t16308 + t16477 + t16700) + t15476*(t16459 + t16685 - 1.*t16308*t8990))*var2[2] + t15224*var2[3] + t15411*var2[4];
  p_output1[5]=(t15066*(t14220*t16280 + t16586 + t16874) + t14149*(-1.*t15087*t16280 + t16646 + t16889))*var2[0] + ((-1.*t14220*t16280 + t16545 + t16843)*t6634 + t14149*(t16506 + t16785 + t16280*t8254))*var2[1] + ((t15087*t16280 + t16700 + t16981)*t6634 + t15066*(t16685 + t16932 - 1.*t16280*t8254))*var2[2] + t6634*var2[3] + t14149*var2[4];
  p_output1[6]=t17007 + t17013 + (t14917*(t13938*t16249 + t14134*t16265 + t16874)*t2912 + t13884*(-1.*t14956*t16249 - 1.*t15018*t16265 + t16889)*t2912 + 0.135*t2912*t5826)*var2[0] + (-0.135*t15018 + t13884*t2912*(t16785 - 1.*t16249*t2154*t2912 - 1.*t16265*t2912*t5826) - 1.*(-1.*t13938*t16249 - 1.*t14134*t16265 + t16843)*t8721)*var2[1] + (-0.135*t14134 + t14917*t2912*(t16932 + t16249*t2154*t2912 + t16265*t2912*t5826) - 1.*(t14956*t16249 + t15018*t16265 + t16981)*t8721)*var2[2];
  p_output1[7]=t17007 + t17013 + (t14917*t2912*(t16874 + t17574 - 1.*t13884*t16240*t8721) + t13884*t2912*(t16889 + t17681 + t14917*t16240*t8721))*var2[0] + (-0.135*t14868 + t13884*t2912*(t16785 - 1.*t16240*t2912) - 1.*t8721*(-1.*t13736*t16225 + t16843 + t13884*t16240*t8721))*var2[1] + (-0.135*t13736 + t14917*t2912*(t16932 + t16240*t2912) - 1.*t8721*(t14868*t16225 + t16981 - 1.*t14917*t16240*t8721))*var2[2];
  p_output1[8]=(0.049 - 1.*t14868*(t13884*t16139 + t17574) - 1.*t13736*(-1.*t14917*t16139 + t17681))*var2[0] + (0.1305*t13736 - 0.135*t14917)*var2[1] + (-0.135*t13884 - 0.1305*t14868)*var2[2] + (-1.*t10682*t13305 - 1.*t13476*t13578)*var2[4];
  p_output1[9]=(0.049*t14844 - 0.09*t14865 - 1.*t13578*t16075 - 1.*t13305*t16132)*var2[1] + (-0.09*t13305 + 0.049*t13578 + t14844*t16075 + t14865*t16132)*var2[2] + var2[3];
  p_output1[10]=(-0.21*t14801 + 0.049*t14842 - 1.*t13126*t15974 - 1.*t12922*t16022)*var2[1] + (0.049*t12922 - 0.21*t13126 + t14801*t15974 + t14842*t16022)*var2[2] + var2[3];
  p_output1[11]=(0.0016*t14717 - 0.2707*t14779 - 1.*t12913*t15878 - 1.*t12501*t15929)*var2[1] + (-0.2707*t12501 + 0.0016*t12913 + t14717*t15878 + t14779*t15929)*var2[2] + var2[3];
  p_output1[12]=(-0.7055*t12141 - 0.0184*t14621 - 1.*t12436*t15839 - 1.*t12141*t15855)*var2[1] + (-0.0184*t12141 - 0.7055*t12436 + t12141*t15839 + t14621*t15855)*var2[2] + var2[3];
  p_output1[13]=0.0513648444*var2[1] + 0.0199945548*var2[2] + var2[3];
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
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

#include "fLeftToeBottom_vec_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void fLeftToeBottom_vec_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:04:23 GMT-04:00
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
  double t995;
  double t1009;
  double t1333;
  double t1003;
  double t1186;
  double t1236;
  double t797;
  double t1461;
  double t1510;
  double t1534;
  double t1726;
  double t1263;
  double t1564;
  double t1568;
  double t781;
  double t1728;
  double t1745;
  double t1746;
  double t1978;
  double t1612;
  double t1751;
  double t1795;
  double t763;
  double t2004;
  double t2006;
  double t2062;
  double t2257;
  double t1828;
  double t2090;
  double t2091;
  double t689;
  double t2305;
  double t2456;
  double t2679;
  double t3141;
  double t681;
  double t2213;
  double t2682;
  double t2955;
  double t438;
  double t3275;
  double t3333;
  double t3345;
  double t390;
  double t4255;
  double t4354;
  double t4476;
  double t4168;
  double t4548;
  double t4704;
  double t4756;
  double t4847;
  double t4755;
  double t4872;
  double t4935;
  double t5033;
  double t5093;
  double t5100;
  double t4978;
  double t5137;
  double t5140;
  double t5395;
  double t5433;
  double t5498;
  double t3738;
  double t5166;
  double t5537;
  double t5633;
  double t5790;
  double t5813;
  double t5819;
  double t6284;
  double t6960;
  double t6961;
  double t6885;
  double t6888;
  double t6967;
  double t7018;
  double t7033;
  double t7091;
  double t7124;
  double t7150;
  double t7170;
  double t7279;
  double t6924;
  double t6959;
  double t7107;
  double t7326;
  double t7457;
  double t7611;
  double t7630;
  double t7764;
  double t7796;
  double t7855;
  double t6607;
  double t6619;
  double t6730;
  double t6753;
  double t6824;
  double t7523;
  double t8008;
  double t8049;
  double t8108;
  double t8189;
  double t8203;
  double t8358;
  double t8477;
  double t8492;
  double t8746;
  double t6531;
  double t6556;
  double t6652;
  double t6657;
  double t8064;
  double t8853;
  double t8955;
  double t9355;
  double t9358;
  double t9487;
  double t9526;
  double t9528;
  double t6312;
  double t6321;
  double t6456;
  double t6474;
  double t6527;
  double t6571;
  double t6588;
  double t9138;
  double t9626;
  double t9640;
  double t9776;
  double t9892;
  double t9927;
  double t10090;
  double t10097;
  double t10132;
  double t10199;
  double t5728;
  double t5823;
  double t5855;
  double t6085;
  double t6093;
  double t6128;
  double t6272;
  double t9919;
  double t10208;
  double t10213;
  double t10232;
  double t10274;
  double t10287;
  double t10303;
  double t10786;
  double t10883;
  double t11674;
  double t11685;
  double t11720;
  double t6216;
  double t6241;
  double t6257;
  double t10228;
  double t10946;
  double t11185;
  double t3018;
  double t3353;
  double t3431;
  double t3756;
  double t3904;
  double t4007;
  double t11863;
  double t12036;
  double t12041;
  double t12127;
  double t3640;
  double t4118;
  double t4125;
  double t12202;
  double t13098;
  double t13136;
  double t13168;
  double t13847;
  double t13238;
  double t14445;
  double t14655;
  double t15562;
  double t15628;
  double t15643;
  double t15827;
  double t15974;
  double t15431;
  double t15131;
  double t15184;
  double t15315;
  double t15354;
  double t15596;
  double t15982;
  double t16000;
  double t16144;
  double t16050;
  double t16081;
  double t16132;
  double t16026;
  double t16149;
  double t16150;
  double t16158;
  double t13428;
  double t13464;
  double t13600;
  double t12192;
  double t5920;
  double t6155;
  double t6166;
  double t16702;
  double t16720;
  double t16724;
  double t13833;
  double t16488;
  double t16503;
  double t16506;
  double t16612;
  double t16690;
  double t16700;
  double t16305;
  double t16320;
  double t16344;
  double t16749;
  double t16750;
  double t16755;
  double t16744;
  double t16365;
  double t16463;
  double t16479;
  double t17039;
  double t17059;
  double t17116;
  double t16843;
  double t17156;
  double t17170;
  double t17171;
  double t16931;
  double t17013;
  double t17027;
  double t17574;
  double t17635;
  double t17651;
  double t18420;
  double t18332;
  double t17736;
  double t17772;
  double t17773;
  double t18193;
  double t18417;
  double t20071;
  double t15422;
  double t16005;
  double t16014;
  double t20100;
  double t17265;
  double t17302;
  double t17419;
  double t20595;
  double t20547;
  double t20538;
  double t20587;
  double t21825;
  double t21846;
  t995 = Cos(var1[21]);
  t1009 = Sin(var1[21]);
  t1333 = Cos(var1[20]);
  t1003 = 0.642788*t995;
  t1186 = -0.766044*t1009;
  t1236 = t1003 + t1186;
  t797 = Sin(var1[20]);
  t1461 = 0.766044*t995;
  t1510 = 0.642788*t1009;
  t1534 = t1461 + t1510;
  t1726 = Cos(var1[19]);
  t1263 = t797*t1236;
  t1564 = t1333*t1534;
  t1568 = t1263 + t1564;
  t781 = Sin(var1[19]);
  t1728 = t1333*t1236;
  t1745 = -1.*t797*t1534;
  t1746 = t1728 + t1745;
  t1978 = Cos(var1[18]);
  t1612 = -1.*t781*t1568;
  t1751 = t1726*t1746;
  t1795 = t1612 + t1751;
  t763 = Sin(var1[18]);
  t2004 = t1726*t1568;
  t2006 = t781*t1746;
  t2062 = t2004 + t2006;
  t2257 = Cos(var1[17]);
  t1828 = t763*t1795;
  t2090 = t1978*t2062;
  t2091 = t1828 + t2090;
  t689 = Sin(var1[17]);
  t2305 = t1978*t1795;
  t2456 = -1.*t763*t2062;
  t2679 = t2305 + t2456;
  t3141 = Cos(var1[15]);
  t681 = Sin(var1[16]);
  t2213 = -1.*t689*t2091;
  t2682 = t2257*t2679;
  t2955 = t2213 + t2682;
  t438 = Sin(var1[15]);
  t3275 = t2257*t2091;
  t3333 = t689*t2679;
  t3345 = t3275 + t3333;
  t390 = Cos(var1[14]);
  t4255 = -0.766044*t995;
  t4354 = -0.642788*t1009;
  t4476 = t4255 + t4354;
  t4168 = -1.*t797*t1236;
  t4548 = t1333*t4476;
  t4704 = t4168 + t4548;
  t4756 = t797*t4476;
  t4847 = t1728 + t4756;
  t4755 = t781*t4704;
  t4872 = t1726*t4847;
  t4935 = t4755 + t4872;
  t5033 = t1726*t4704;
  t5093 = -1.*t781*t4847;
  t5100 = t5033 + t5093;
  t4978 = -1.*t763*t4935;
  t5137 = t1978*t5100;
  t5140 = t4978 + t5137;
  t5395 = t1978*t4935;
  t5433 = t763*t5100;
  t5498 = t5395 + t5433;
  t3738 = Sin(var1[14]);
  t5166 = t689*t5140;
  t5537 = t2257*t5498;
  t5633 = t5166 + t5537;
  t5790 = t2257*t5140;
  t5813 = -1.*t689*t5498;
  t5819 = t5790 + t5813;
  t6284 = Cos(var1[16]);
  t6960 = -1.*t995;
  t6961 = 1. + t6960;
  t6885 = -1.*t1333;
  t6888 = 1. + t6885;
  t6967 = -0.0216*t6961;
  t7018 = 0.0306*t995;
  t7033 = 0.0177*t1009;
  t7091 = t6967 + t7018 + t7033;
  t7124 = -1.1135*t6961;
  t7150 = -1.1312*t995;
  t7170 = 0.0522*t1009;
  t7279 = t7124 + t7150 + t7170;
  t6924 = -0.7055*t6888;
  t6959 = -0.0184*t797;
  t7107 = t797*t7091;
  t7326 = t1333*t7279;
  t7457 = t6924 + t6959 + t7107 + t7326;
  t7611 = 0.0184*t6888;
  t7630 = -0.7055*t797;
  t7764 = t1333*t7091;
  t7796 = -1.*t797*t7279;
  t7855 = t7611 + t7630 + t7764 + t7796;
  t6607 = -1.*t1978;
  t6619 = 1. + t6607;
  t6730 = -1. + t1726;
  t6753 = 0.0016*t6730;
  t6824 = -0.2707*t781;
  t7523 = -1.*t781*t7457;
  t8008 = t1726*t7855;
  t8049 = t6753 + t6824 + t7523 + t8008;
  t8108 = -1.*t1726;
  t8189 = 1. + t8108;
  t8203 = -0.2707*t8189;
  t8358 = 0.0016*t781;
  t8477 = t1726*t7457;
  t8492 = t781*t7855;
  t8746 = t8203 + t8358 + t8477 + t8492;
  t6531 = -1.*t2257;
  t6556 = 1. + t6531;
  t6652 = -0.21*t6619;
  t6657 = 0.049*t763;
  t8064 = t763*t8049;
  t8853 = t1978*t8746;
  t8955 = t6652 + t6657 + t8064 + t8853;
  t9355 = -0.049*t6619;
  t9358 = -0.21*t763;
  t9487 = t1978*t8049;
  t9526 = -1.*t763*t8746;
  t9528 = t9355 + t9358 + t9487 + t9526;
  t6312 = -1.*t6284;
  t6321 = 1. + t6312;
  t6456 = -0.135*t6321;
  t6474 = -0.1305*t6284;
  t6527 = -0.049*t681;
  t6571 = -0.049*t6556;
  t6588 = -0.09*t689;
  t9138 = -1.*t689*t8955;
  t9626 = t2257*t9528;
  t9640 = t6571 + t6588 + t9138 + t9626;
  t9776 = -1.*t681*t9640;
  t9892 = t6456 + t6474 + t6527 + t9776;
  t9927 = -0.09*t6556;
  t10090 = 0.049*t689;
  t10097 = t2257*t8955;
  t10132 = t689*t9528;
  t10199 = t9927 + t10090 + t10097 + t10132;
  t5728 = -1.*t438*t5633;
  t5823 = -1.*t3141*t681*t5819;
  t5855 = t5728 + t5823;
  t6085 = t3141*t5633;
  t6093 = -1.*t438*t681*t5819;
  t6128 = t6085 + t6093;
  t6272 = 0.135*t438;
  t9919 = t438*t9892;
  t10208 = t3141*t10199;
  t10213 = t6272 + t9919 + t10208;
  t10232 = -1.*t3141;
  t10274 = 1. + t10232;
  t10287 = -0.135*t10274;
  t10303 = t3141*t9892;
  t10786 = -1.*t438*t10199;
  t10883 = t10287 + t10303 + t10786;
  t11674 = t3738*t5855;
  t11685 = t390*t6128;
  t11720 = t11674 + t11685;
  t6216 = -1.*t390;
  t6241 = 1. + t6216;
  t6257 = -0.135*t6241;
  t10228 = -1.*t3738*t10213;
  t10946 = t390*t10883;
  t11185 = t6257 + t10228 + t10946;
  t3018 = -1.*t438*t681*t2955;
  t3353 = t3141*t3345;
  t3431 = t3018 + t3353;
  t3756 = -1.*t3141*t681*t2955;
  t3904 = -1.*t438*t3345;
  t4007 = t3756 + t3904;
  t11863 = 0.135*t3738;
  t12036 = t390*t10213;
  t12041 = t3738*t10883;
  t12127 = t11863 + t12036 + t12041;
  t3640 = t390*t3431;
  t4118 = t3738*t4007;
  t4125 = t3640 + t4118;
  t12202 = -0.049*t6321;
  t13098 = 0.0045*t681;
  t13136 = t6284*t9640;
  t13168 = t12202 + t13098 + t13136;
  t13847 = -1.*t6284*t13168*t2955;
  t13238 = t6284*t13168*t5819;
  t14445 = -1.*t10199*t3345;
  t14655 = t5633*t10199;
  t15562 = Cos(var1[5]);
  t15628 = -1.*t390*t3141*t6284;
  t15643 = t6284*t3738*t438;
  t15827 = t15628 + t15643;
  t15974 = Sin(var1[5]);
  t15431 = Cos(var1[4]);
  t15131 = -1.*t3141*t6284*t3738;
  t15184 = -1.*t390*t6284*t438;
  t15315 = t15131 + t15184;
  t15354 = Sin(var1[4]);
  t15596 = -1.*t15562*t681;
  t15982 = -1.*t15827*t15974;
  t16000 = t15596 + t15982;
  t16144 = Cos(var1[3]);
  t16050 = t15562*t15827;
  t16081 = -1.*t681*t15974;
  t16132 = t16050 + t16081;
  t16026 = Sin(var1[3]);
  t16149 = t15431*t15315;
  t16150 = -1.*t15354*t16000;
  t16158 = t16149 + t16150;
  t13428 = -1.*t3738*t3431;
  t13464 = t390*t4007;
  t13600 = t13428 + t13464;
  t12192 = t11720*t12127;
  t5920 = t390*t5855;
  t6155 = -1.*t3738*t6128;
  t6166 = t5920 + t6155;
  t16702 = t15562*t6166;
  t16720 = t6284*t5819*t15974;
  t16724 = t16702 + t16720;
  t13833 = -1.*t12127*t4125;
  t16488 = t15562*t13168;
  t16503 = -1.*t11185*t15974;
  t16506 = t16488 + t16503;
  t16612 = t15562*t11185;
  t16690 = t13168*t15974;
  t16700 = t16612 + t16690;
  t16305 = t15562*t13600;
  t16320 = t6284*t2955*t15974;
  t16344 = t16305 + t16320;
  t16749 = t6284*t15562*t2955;
  t16750 = -1.*t13600*t15974;
  t16755 = t16749 + t16750;
  t16744 = t16700*t16724;
  t16365 = t6284*t15562*t5819;
  t16463 = -1.*t6166*t15974;
  t16479 = t16365 + t16463;
  t17039 = t11720*t15354;
  t17059 = t15431*t16479;
  t17116 = t17039 + t17059;
  t16843 = -1.*t16700*t16344;
  t17156 = t12127*t15354;
  t17170 = t15431*t16506;
  t17171 = t17156 + t17170;
  t16931 = t4125*t15354;
  t17013 = t15431*t16755;
  t17027 = t16931 + t17013;
  t17574 = t15431*t12127;
  t17635 = -1.*t15354*t16506;
  t17651 = t17574 + t17635;
  t18420 = -1.*t6284*t13168*t5819;
  t18332 = -1.*t681*t13168;
  t17736 = t15431*t4125;
  t17772 = -1.*t15354*t16755;
  t17773 = t17736 + t17772;
  t18193 = t15315*t12127;
  t18417 = -1.*t11720*t12127;
  t20071 = t16132*t16700;
  t15422 = t15315*t15354;
  t16005 = t15431*t16000;
  t16014 = t15422 + t16005;
  t20100 = -1.*t16700*t16724;
  t17265 = t15431*t11720;
  t17302 = -1.*t15354*t16479;
  t17419 = t17265 + t17302;
  t20595 = t6284*t13168*t2955;
  t20547 = t681*t13168;
  t20538 = -1.*t15315*t12127;
  t20587 = t12127*t4125;
  t21825 = -1.*t16132*t16700;
  t21846 = t16700*t16344;
  p_output1[0]=t16014*var2[0] + (t16132*t16144 - 1.*t16026*t16158)*var2[1] + (t16026*t16132 + t16144*t16158)*var2[2] + (t17027*(t16744 + t17116*t17171 + t17419*t17651) + t17116*(t16843 - 1.*t17027*t17171 - 1.*t17651*t17773))*var2[3] + (t16344*(t12192 + t16479*t16506 + t16744) + t16724*(t13833 - 1.*t16506*t16755 + t16843))*var2[4] + (t11720*(-1.*t11185*t13600 + t13833 + t13847) + t4125*(t12192 + t13238 + t11185*t6166))*var2[5] + (-0.135*t438*t6284 + (t13847 - 1.*t10213*t3431 - 1.*t10883*t4007)*t5819*t6284 + t2955*(t13238 + t10883*t5855 + t10213*t6128)*t6284)*var2[14] + (t5819*t6284*(t13847 + t14445 + t2955*t681*t9892) + t2955*t6284*(t13238 + t14655 - 1.*t5819*t681*t9892))*var2[15] + (0.049 - 1.*t5633*(t14445 - 1.*t2955*t9640) - 1.*t3345*(t14655 + t5819*t9640))*var2[16];
  p_output1[1]=t17027*var2[0] + (t16144*t16344 - 1.*t16026*t17773)*var2[1] + (t16026*t16344 + t16144*t17773)*var2[2] + (t17116*(t16014*t17171 + t16158*t17651 + t20071) + t16014*(-1.*t17116*t17171 - 1.*t17419*t17651 + t20100))*var2[3] + (t16724*(t16000*t16506 + t18193 + t20071) + t16132*(-1.*t16479*t16506 + t18417 + t20100))*var2[4] + (t11720*(t11185*t15827 + t18193 + t18332) + t15315*(t18417 + t18420 - 1.*t11185*t6166))*var2[5] + (0.135*t3431 + t5819*t6284*(t18332 - 1.*t10883*t3141*t6284 - 1.*t10213*t438*t6284) - 1.*(t18420 - 1.*t10883*t5855 - 1.*t10213*t6128)*t681)*var2[14] + (0.135*t3345 + t5819*t6284*(t18332 - 1.*t6284*t9892) - 1.*t681*(t18420 - 1.*t10199*t5633 + t5819*t681*t9892))*var2[15] + (0.135*t2955 - 0.1305*t5633)*var2[16] + (0.049*t2091 - 0.09*t2679 - 1.*t5498*t8955 - 1.*t5140*t9528)*var2[17] + (-0.21*t1795 + 0.049*t2062 - 1.*t5100*t8049 - 1.*t4935*t8746)*var2[18] + (0.0016*t1568 - 0.2707*t1746 - 1.*t4847*t7457 - 1.*t4704*t7855)*var2[19] + (-0.7055*t1236 - 0.0184*t1534 - 1.*t4476*t7091 - 1.*t1236*t7279)*var2[20] + 0.0513648444*var2[21];
  p_output1[2]=t17116*var2[0] + (t16144*t16724 - 1.*t16026*t17419)*var2[1] + (t16026*t16724 + t16144*t17419)*var2[2] + (t17027*(-1.*t16014*t17171 - 1.*t16158*t17651 + t21825) + t16014*(t17027*t17171 + t17651*t17773 + t21846))*var2[3] + (t16344*(-1.*t16000*t16506 + t20538 + t21825) + t16132*(t16506*t16755 + t20587 + t21846))*var2[4] + (t15315*(t11185*t13600 + t20587 + t20595) + (-1.*t11185*t15827 + t20538 + t20547)*t4125)*var2[5] + (0.135*t6128 + t2955*t6284*(t20547 + t10883*t3141*t6284 + t10213*t438*t6284) - 1.*(t20595 + t10213*t3431 + t10883*t4007)*t681)*var2[14] + (0.135*t5633 + t2955*t6284*(t20547 + t6284*t9892) - 1.*t681*(t20595 + t10199*t3345 - 1.*t2955*t681*t9892))*var2[15] + (0.1305*t3345 + 0.135*t5819)*var2[16] + (-0.09*t5140 + 0.049*t5498 + t2091*t8955 + t2679*t9528)*var2[17] + (0.049*t4935 - 0.21*t5100 + t1795*t8049 + t2062*t8746)*var2[18] + (-0.2707*t4704 + 0.0016*t4847 + t1568*t7457 + t1746*t7855)*var2[19] + (-0.0184*t1236 - 0.7055*t4476 + t1236*t7091 + t1534*t7279)*var2[20] + 0.0199945548*var2[21];
  p_output1[3]=t16014*var2[3] + t16132*var2[4] + t15315*var2[5] - 1.*t681*var2[14] - 1.*t681*var2[15] + var2[17] + var2[18] + var2[19] + var2[20] + var2[21];
  p_output1[4]=t17116*var2[3] + t16724*var2[4] + t11720*var2[5] + t5819*t6284*var2[14] + t5819*t6284*var2[15] + (-1.*t2257*t5498 - 1.*t5140*t689)*var2[16];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToeBottom_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void dh_RightToeBottom_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

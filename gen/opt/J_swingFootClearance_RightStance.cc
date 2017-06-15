/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:05:19 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t3960;
  double t3175;
  double t3650;
  double t3687;
  double t3738;
  double t4125;
  double t4244;
  double t4261;
  double t4313;
  double t4548;
  double t4577;
  double t4600;
  double t4697;
  double t4704;
  double t4705;
  double t4646;
  double t4651;
  double t4683;
  double t4706;
  double t5382;
  double t5433;
  double t5434;
  double t5483;
  double t5659;
  double t5673;
  double t5721;
  double t5316;
  double t5330;
  double t5374;
  double t4745;
  double t4752;
  double t4756;
  double t4783;
  double t5259;
  double t5265;
  double t5293;
  double t5903;
  double t5911;
  double t5920;
  double t5935;
  double t5949;
  double t5969;
  double t6004;
  double t6056;
  double t6059;
  double t6085;
  double t6108;
  double t6126;
  double t6128;
  double t6155;
  double t6211;
  double t6257;
  double t6272;
  double t6276;
  double t6340;
  double t6343;
  double t6376;
  double t6382;
  double t6395;
  double t6396;
  double t6406;
  double t6432;
  double t6446;
  double t6456;
  double t6487;
  double t6489;
  double t6490;
  double t6498;
  double t6499;
  double t6503;
  double t6531;
  double t6555;
  double t6556;
  double t6560;
  double t6580;
  double t6585;
  double t6588;
  double t3353;
  double t3526;
  double t4639;
  double t4640;
  double t4762;
  double t4788;
  double t5156;
  double t6660;
  double t6663;
  double t6671;
  double t6645;
  double t6651;
  double t6652;
  double t5461;
  double t5498;
  double t5596;
  double t5728;
  double t5735;
  double t5741;
  double t6728;
  double t6730;
  double t6739;
  double t5832;
  double t5840;
  double t5855;
  double t5973;
  double t6005;
  double t6023;
  double t6702;
  double t6717;
  double t6719;
  double t6822;
  double t6824;
  double t6839;
  double t6089;
  double t6090;
  double t6093;
  double t6166;
  double t6184;
  double t6200;
  double t6216;
  double t6241;
  double t6861;
  double t6869;
  double t6878;
  double t6885;
  double t6888;
  double t6895;
  double t6287;
  double t6294;
  double t6312;
  double t6321;
  double t6403;
  double t6408;
  double t6414;
  double t6902;
  double t6918;
  double t6924;
  double t6936;
  double t6959;
  double t6960;
  double t6462;
  double t6474;
  double t6486;
  double t6527;
  double t6543;
  double t6548;
  double t6967;
  double t6993;
  double t6999;
  double t7011;
  double t7012;
  double t7014;
  double t6571;
  double t6575;
  double t6577;
  double t7032;
  double t7033;
  double t7038;
  double t7045;
  double t7052;
  double t7073;
  double t7154;
  double t7161;
  double t7164;
  double t7297;
  double t7298;
  double t7301;
  double t7256;
  double t7269;
  double t7279;
  double t7192;
  double t7198;
  double t7251;
  double t7359;
  double t7378;
  double t7398;
  double t7419;
  double t7423;
  double t7449;
  double t7457;
  double t7479;
  double t7484;
  double t7516;
  double t7521;
  double t7523;
  double t7589;
  double t7611;
  double t7630;
  double t7660;
  double t7672;
  double t7685;
  double t7743;
  double t7764;
  double t7765;
  double t7785;
  double t7787;
  double t7793;
  double t7801;
  double t7802;
  double t7820;
  double t7876;
  double t7895;
  double t7925;
  double t7937;
  double t7940;
  double t7944;
  double t7956;
  double t7961;
  double t7983;
  double t8008;
  double t8031;
  double t8032;
  double t8049;
  double t8064;
  double t8066;
  double t8069;
  double t8070;
  double t8103;
  double t8144;
  double t8146;
  double t8180;
  double t8203;
  double t8219;
  double t8262;
  double t8317;
  double t8318;
  double t8358;
  double t8383;
  double t8385;
  double t8392;
  double t8422;
  double t8444;
  double t8466;
  double t8476;
  double t8477;
  double t8492;
  double t8625;
  double t8704;
  double t8706;
  double t8717;
  double t8720;
  double t8722;
  double t8723;
  double t8746;
  double t8780;
  double t8788;
  double t8797;
  double t8798;
  double t8804;
  double t8808;
  double t8809;
  double t8810;
  double t8825;
  double t8836;
  double t8843;
  double t8845;
  double t8853;
  double t8854;
  double t8862;
  double t8869;
  double t8870;
  double t8876;
  double t8886;
  double t8894;
  double t8905;
  double t8906;
  double t8907;
  double t9129;
  double t9130;
  double t9134;
  double t9074;
  double t9085;
  double t9114;
  double t9190;
  double t9209;
  double t9210;
  double t9326;
  double t9333;
  double t9335;
  double t9355;
  double t9358;
  double t9379;
  double t9394;
  double t9395;
  double t9408;
  double t9415;
  double t9417;
  double t9418;
  double t9434;
  double t9438;
  double t9487;
  double t9513;
  double t9526;
  double t9528;
  double t9244;
  double t9252;
  double t9256;
  double t9767;
  double t9776;
  double t9782;
  double t9793;
  double t9800;
  double t9803;
  double t9864;
  double t9892;
  double t9915;
  double t9927;
  double t9935;
  double t9952;
  double t9974;
  double t9999;
  double t10013;
  double t10024;
  double t10028;
  double t10060;
  double t10097;
  double t10105;
  double t10129;
  double t10147;
  double t10152;
  double t10164;
  double t10228;
  double t10232;
  double t10241;
  double t10304;
  double t10328;
  double t10353;
  double t10357;
  double t10385;
  double t10403;
  double t10413;
  double t10452;
  double t10523;
  double t10550;
  double t10555;
  double t10565;
  double t10571;
  double t10575;
  double t10576;
  double t10586;
  double t10786;
  double t10787;
  double t10793;
  double t10802;
  double t10804;
  double t10837;
  double t10862;
  double t10873;
  double t10883;
  double t10887;
  double t10925;
  double t10927;
  double t10946;
  double t11205;
  double t11206;
  double t11209;
  double t11225;
  double t11226;
  double t11231;
  double t11232;
  double t11279;
  double t11524;
  double t11533;
  double t11535;
  double t11344;
  t3960 = Sin(var1[3]);
  t3175 = Cos(var1[6]);
  t3650 = Cos(var1[3]);
  t3687 = Cos(var1[5]);
  t3738 = t3650*t3687;
  t4125 = Sin(var1[4]);
  t4244 = Sin(var1[5]);
  t4261 = -1.*t3960*t4125*t4244;
  t4313 = t3738 + t4261;
  t4548 = Cos(var1[4]);
  t4577 = Sin(var1[6]);
  t4600 = Cos(var1[7]);
  t4697 = -1.*t4548*t3175*t3960;
  t4704 = -1.*t4313*t4577;
  t4705 = t4697 + t4704;
  t4646 = t3175*t4313;
  t4651 = -1.*t4548*t3960*t4577;
  t4683 = t4646 + t4651;
  t4706 = Sin(var1[7]);
  t5382 = Cos(var1[8]);
  t5433 = -1.*t5382;
  t5434 = 1. + t5433;
  t5483 = Sin(var1[8]);
  t5659 = t4600*t4683;
  t5673 = t4705*t4706;
  t5721 = t5659 + t5673;
  t5316 = t3687*t3960*t4125;
  t5330 = t3650*t4244;
  t5374 = t5316 + t5330;
  t4745 = Cos(var1[9]);
  t4752 = -1.*t4745;
  t4756 = 1. + t4752;
  t4783 = Sin(var1[9]);
  t5259 = t4600*t4705;
  t5265 = -1.*t4683*t4706;
  t5293 = t5259 + t5265;
  t5903 = t5382*t5374;
  t5911 = -1.*t5721*t5483;
  t5920 = t5903 + t5911;
  t5935 = Cos(var1[10]);
  t5949 = -1.*t5935;
  t5969 = 1. + t5949;
  t6004 = Sin(var1[10]);
  t6056 = t4783*t5293;
  t6059 = t4745*t5920;
  t6085 = t6056 + t6059;
  t6108 = t4745*t5293;
  t6126 = -1.*t4783*t5920;
  t6128 = t6108 + t6126;
  t6155 = Cos(var1[11]);
  t6211 = Sin(var1[11]);
  t6257 = -1.*t6004*t6085;
  t6272 = t5935*t6128;
  t6276 = t6257 + t6272;
  t6340 = t5935*t6085;
  t6343 = t6004*t6128;
  t6376 = t6340 + t6343;
  t6382 = Cos(var1[12]);
  t6395 = -1.*t6382;
  t6396 = 1. + t6395;
  t6406 = Sin(var1[12]);
  t6432 = t6211*t6276;
  t6446 = t6155*t6376;
  t6456 = t6432 + t6446;
  t6487 = t6155*t6276;
  t6489 = -1.*t6211*t6376;
  t6490 = t6487 + t6489;
  t6498 = Cos(var1[13]);
  t6499 = -1.*t6498;
  t6503 = 1. + t6499;
  t6531 = Sin(var1[13]);
  t6555 = -1.*t6406*t6456;
  t6556 = t6382*t6490;
  t6560 = t6555 + t6556;
  t6580 = t6382*t6456;
  t6585 = t6406*t6490;
  t6588 = t6580 + t6585;
  t3353 = -1.*t3175;
  t3526 = 1. + t3353;
  t4639 = -1.*t4600;
  t4640 = 1. + t4639;
  t4762 = -0.09*t4756;
  t4788 = 0.049*t4783;
  t5156 = t4762 + t4788;
  t6660 = -1.*t3650*t3175*t4125;
  t6663 = -1.*t3650*t4548*t4244*t4577;
  t6671 = t6660 + t6663;
  t6645 = t3650*t4548*t3175*t4244;
  t6651 = -1.*t3650*t4125*t4577;
  t6652 = t6645 + t6651;
  t5461 = -0.049*t5434;
  t5498 = -0.135*t5483;
  t5596 = t5461 + t5498;
  t5728 = 0.135*t5434;
  t5735 = -0.049*t5483;
  t5741 = t5728 + t5735;
  t6728 = t4600*t6652;
  t6730 = t6671*t4706;
  t6739 = t6728 + t6730;
  t5832 = -0.049*t4756;
  t5840 = -0.09*t4783;
  t5855 = t5832 + t5840;
  t5973 = -0.049*t5969;
  t6005 = -0.21*t6004;
  t6023 = t5973 + t6005;
  t6702 = t4600*t6671;
  t6717 = -1.*t6652*t4706;
  t6719 = t6702 + t6717;
  t6822 = -1.*t3650*t4548*t3687*t5382;
  t6824 = -1.*t6739*t5483;
  t6839 = t6822 + t6824;
  t6089 = -0.21*t5969;
  t6090 = 0.049*t6004;
  t6093 = t6089 + t6090;
  t6166 = -1.*t6155;
  t6184 = 1. + t6166;
  t6200 = -0.2707*t6184;
  t6216 = 0.0016*t6211;
  t6241 = t6200 + t6216;
  t6861 = t4783*t6719;
  t6869 = t4745*t6839;
  t6878 = t6861 + t6869;
  t6885 = t4745*t6719;
  t6888 = -1.*t4783*t6839;
  t6895 = t6885 + t6888;
  t6287 = -1. + t6155;
  t6294 = 0.0016*t6287;
  t6312 = -0.2707*t6211;
  t6321 = t6294 + t6312;
  t6403 = 0.0184*t6396;
  t6408 = -0.7055*t6406;
  t6414 = t6403 + t6408;
  t6902 = -1.*t6004*t6878;
  t6918 = t5935*t6895;
  t6924 = t6902 + t6918;
  t6936 = t5935*t6878;
  t6959 = t6004*t6895;
  t6960 = t6936 + t6959;
  t6462 = -0.7055*t6396;
  t6474 = -0.0184*t6406;
  t6486 = t6462 + t6474;
  t6527 = -1.1135*t6503;
  t6543 = 0.0216*t6531;
  t6548 = t6527 + t6543;
  t6967 = t6211*t6924;
  t6993 = t6155*t6960;
  t6999 = t6967 + t6993;
  t7011 = t6155*t6924;
  t7012 = -1.*t6211*t6960;
  t7014 = t7011 + t7012;
  t6571 = -0.0216*t6503;
  t6575 = -1.1135*t6531;
  t6577 = t6571 + t6575;
  t7032 = -1.*t6406*t6999;
  t7033 = t6382*t7014;
  t7038 = t7032 + t7033;
  t7045 = t6382*t6999;
  t7052 = t6406*t7014;
  t7073 = t7045 + t7052;
  t7154 = t3650*t3687*t4125;
  t7161 = -1.*t3960*t4244;
  t7164 = t7154 + t7161;
  t7297 = t3175*t4600*t7164;
  t7298 = -1.*t7164*t4577*t4706;
  t7301 = t7297 + t7298;
  t7256 = t3687*t3960;
  t7269 = t3650*t4125*t4244;
  t7279 = t7256 + t7269;
  t7192 = -1.*t4600*t7164*t4577;
  t7198 = -1.*t3175*t7164*t4706;
  t7251 = t7192 + t7198;
  t7359 = t5382*t7279;
  t7378 = -1.*t7301*t5483;
  t7398 = t7359 + t7378;
  t7419 = t4783*t7251;
  t7423 = t4745*t7398;
  t7449 = t7419 + t7423;
  t7457 = t4745*t7251;
  t7479 = -1.*t4783*t7398;
  t7484 = t7457 + t7479;
  t7516 = -1.*t6004*t7449;
  t7521 = t5935*t7484;
  t7523 = t7516 + t7521;
  t7589 = t5935*t7449;
  t7611 = t6004*t7484;
  t7630 = t7589 + t7611;
  t7660 = t6211*t7523;
  t7672 = t6155*t7630;
  t7685 = t7660 + t7672;
  t7743 = t6155*t7523;
  t7764 = -1.*t6211*t7630;
  t7765 = t7743 + t7764;
  t7785 = -1.*t6406*t7685;
  t7787 = t6382*t7765;
  t7793 = t7785 + t7787;
  t7801 = t6382*t7685;
  t7802 = t6406*t7765;
  t7820 = t7801 + t7802;
  t7876 = t3650*t4548*t3175;
  t7895 = -1.*t7279*t4577;
  t7925 = t7876 + t7895;
  t7937 = -1.*t3175*t7279;
  t7940 = -1.*t3650*t4548*t4577;
  t7944 = t7937 + t7940;
  t7956 = t4600*t7925;
  t7961 = t7944*t4706;
  t7983 = t7956 + t7961;
  t8008 = t4600*t7944;
  t8031 = -1.*t7925*t4706;
  t8032 = t8008 + t8031;
  t8049 = t4783*t8032;
  t8064 = -1.*t4745*t7983*t5483;
  t8066 = t8049 + t8064;
  t8069 = t4745*t8032;
  t8070 = t4783*t7983*t5483;
  t8103 = t8069 + t8070;
  t8144 = -1.*t6004*t8066;
  t8146 = t5935*t8103;
  t8180 = t8144 + t8146;
  t8203 = t5935*t8066;
  t8219 = t6004*t8103;
  t8262 = t8203 + t8219;
  t8317 = t6211*t8180;
  t8318 = t6155*t8262;
  t8358 = t8317 + t8318;
  t8383 = t6155*t8180;
  t8385 = -1.*t6211*t8262;
  t8392 = t8383 + t8385;
  t8422 = -1.*t6406*t8358;
  t8444 = t6382*t8392;
  t8466 = t8422 + t8444;
  t8476 = t6382*t8358;
  t8477 = t6406*t8392;
  t8492 = t8476 + t8477;
  t8625 = t3175*t7279;
  t8704 = t3650*t4548*t4577;
  t8706 = t8625 + t8704;
  t8717 = -1.*t8706*t4706;
  t8720 = t7956 + t8717;
  t8722 = -1.*t4600*t8706;
  t8723 = t8722 + t8031;
  t8746 = t4783*t8723;
  t8780 = -1.*t4745*t8720*t5483;
  t8788 = t8746 + t8780;
  t8797 = t4745*t8723;
  t8798 = t4783*t8720*t5483;
  t8804 = t8797 + t8798;
  t8808 = -1.*t6004*t8788;
  t8809 = t5935*t8804;
  t8810 = t8808 + t8809;
  t8825 = t5935*t8788;
  t8836 = t6004*t8804;
  t8843 = t8825 + t8836;
  t8845 = t6211*t8810;
  t8853 = t6155*t8843;
  t8854 = t8845 + t8853;
  t8862 = t6155*t8810;
  t8869 = -1.*t6211*t8843;
  t8870 = t8862 + t8869;
  t8876 = -1.*t6406*t8854;
  t8886 = t6382*t8870;
  t8894 = t8876 + t8886;
  t8905 = t6382*t8854;
  t8906 = t6406*t8870;
  t8907 = t8905 + t8906;
  t9129 = t4600*t8706;
  t9130 = t7925*t4706;
  t9134 = t9129 + t9130;
  t9074 = -1.*t3650*t3687*t4125;
  t9085 = t3960*t4244;
  t9114 = t9074 + t9085;
  t9190 = -1.*t5382*t9134;
  t9209 = -1.*t9114*t5483;
  t9210 = t9190 + t9209;
  t9326 = -1.*t5935*t4783*t9210;
  t9333 = -1.*t4745*t6004*t9210;
  t9335 = t9326 + t9333;
  t9355 = t4745*t5935*t9210;
  t9358 = -1.*t4783*t6004*t9210;
  t9379 = t9355 + t9358;
  t9394 = t6211*t9335;
  t9395 = t6155*t9379;
  t9408 = t9394 + t9395;
  t9415 = t6155*t9335;
  t9417 = -1.*t6211*t9379;
  t9418 = t9415 + t9417;
  t9434 = -1.*t6406*t9408;
  t9438 = t6382*t9418;
  t9487 = t9434 + t9438;
  t9513 = t6382*t9408;
  t9526 = t6406*t9418;
  t9528 = t9513 + t9526;
  t9244 = t5382*t9114;
  t9252 = -1.*t9134*t5483;
  t9256 = t9244 + t9252;
  t9767 = -1.*t4783*t8720;
  t9776 = -1.*t4745*t9256;
  t9782 = t9767 + t9776;
  t9793 = t4745*t8720;
  t9800 = -1.*t4783*t9256;
  t9803 = t9793 + t9800;
  t9864 = t6004*t9782;
  t9892 = t5935*t9803;
  t9915 = t9864 + t9892;
  t9927 = t5935*t9782;
  t9935 = -1.*t6004*t9803;
  t9952 = t9927 + t9935;
  t9974 = -1.*t6211*t9915;
  t9999 = t6155*t9952;
  t10013 = t9974 + t9999;
  t10024 = t6155*t9915;
  t10028 = t6211*t9952;
  t10060 = t10024 + t10028;
  t10097 = t6406*t10013;
  t10105 = t6382*t10060;
  t10129 = t10097 + t10105;
  t10147 = t6382*t10013;
  t10152 = -1.*t6406*t10060;
  t10164 = t10147 + t10152;
  t10228 = t4783*t8720;
  t10232 = t4745*t9256;
  t10241 = t10228 + t10232;
  t10304 = -1.*t6004*t10241;
  t10328 = t10304 + t9892;
  t10353 = -1.*t5935*t10241;
  t10357 = t10353 + t9935;
  t10385 = -1.*t6211*t10328;
  t10403 = t6155*t10357;
  t10413 = t10385 + t10403;
  t10452 = t6155*t10328;
  t10523 = t6211*t10357;
  t10550 = t10452 + t10523;
  t10555 = t6406*t10413;
  t10565 = t6382*t10550;
  t10571 = t10555 + t10565;
  t10575 = t6382*t10413;
  t10576 = -1.*t6406*t10550;
  t10586 = t10575 + t10576;
  t10786 = t5935*t10241;
  t10787 = t6004*t9803;
  t10793 = t10786 + t10787;
  t10802 = -1.*t6155*t10793;
  t10804 = t10385 + t10802;
  t10837 = -1.*t6211*t10793;
  t10862 = t10452 + t10837;
  t10873 = t6406*t10804;
  t10883 = t6382*t10862;
  t10887 = t10873 + t10883;
  t10925 = t6382*t10804;
  t10927 = -1.*t6406*t10862;
  t10946 = t10925 + t10927;
  t11205 = t6211*t10328;
  t11206 = t6155*t10793;
  t11209 = t11205 + t11206;
  t11225 = -1.*t6406*t11209;
  t11226 = t11225 + t10883;
  t11231 = -1.*t6382*t11209;
  t11232 = t11231 + t10927;
  t11279 = -1.*t6531*t11226;
  t11524 = t6382*t11209;
  t11533 = t6406*t10862;
  t11535 = t11524 + t11533;
  t11344 = t6498*t11226;
  p_output1[0]=1.;
  p_output1[1]=0.135*t3526*t4313 + 0.135*t3960*t4548*t4577 + 0.135*t4640*t4683 - 0.135*t4705*t4706 + t5156*t5293 + t5374*t5596 + 0.1305*(t5374*t5483 + t5382*t5721) + t5721*t5741 + t5855*t5920 + t6023*t6085 + t6093*t6128 + t6241*t6276 + t6321*t6376 + t6414*t6456 + t6486*t6490 + t6548*t6560 + t6577*t6588 + 0.0306*(t6531*t6560 + t6498*t6588) - 1.1312*(t6498*t6560 - 1.*t6531*t6588);
  p_output1[2]=0.135*t3526*t3650*t4244*t4548 + 0.135*t3650*t4125*t4577 - 1.*t3650*t3687*t4548*t5596 + 0.135*t4640*t6652 - 0.135*t4706*t6671 + t5156*t6719 + t5741*t6739 + 0.1305*(-1.*t3650*t3687*t4548*t5483 + t5382*t6739) + t5855*t6839 + t6023*t6878 + t6093*t6895 + t6241*t6924 + t6321*t6960 + t6414*t6999 + t6486*t7014 + t6548*t7038 + t6577*t7073 + 0.0306*(t6531*t7038 + t6498*t7073) - 1.1312*(t6498*t7038 - 1.*t6531*t7073);
  p_output1[3]=0.135*t3526*t7164 + 0.135*t3175*t4640*t7164 + 0.135*t4577*t4706*t7164 + t5156*t7251 + t5596*t7279 + t5741*t7301 + 0.1305*(t5483*t7279 + t5382*t7301) + t5855*t7398 + t6023*t7449 + t6093*t7484 + t6241*t7523 + t6321*t7630 + t6414*t7685 + t6486*t7765 + t6548*t7793 + t6577*t7820 + 0.0306*(t6531*t7793 + t6498*t7820) - 1.1312*(t6498*t7793 - 1.*t6531*t7820);
  p_output1[4]=-0.135*t3175*t3650*t4548 + 0.135*t4577*t7279 + 0.135*t4640*t7925 - 0.135*t4706*t7944 + 0.1305*t5382*t7983 + t5741*t7983 - 1.*t5483*t5855*t7983 + t5156*t8032 + t6023*t8066 + t6093*t8103 + t6241*t8180 + t6321*t8262 + t6414*t8358 + t6486*t8392 + t6548*t8466 + t6577*t8492 + 0.0306*(t6531*t8466 + t6498*t8492) - 1.1312*(t6498*t8466 - 1.*t6531*t8492);
  p_output1[5]=-0.135*t4600*t7925 + 0.135*t4706*t8706 + 0.1305*t5382*t8720 + t5741*t8720 - 1.*t5483*t5855*t8720 + t5156*t8723 + t6023*t8788 + t6093*t8804 + t6241*t8810 + t6321*t8843 + t6414*t8854 + t6486*t8870 + t6548*t8894 + t6577*t8907 + 0.0306*(t6531*t8894 + t6498*t8907) - 1.1312*(t6498*t8894 - 1.*t6531*t8907);
  p_output1[6]=(-0.135*t5382 + t5735)*t9114 + (-0.049*t5382 + 0.135*t5483)*t9134 + t5855*t9210 + t4745*t6023*t9210 - 1.*t4783*t6093*t9210 + 0.1305*t9256 + t6241*t9335 + t6321*t9379 + t6414*t9408 + t6486*t9418 + t6548*t9487 + t6577*t9528 + 0.0306*(t6531*t9487 + t6498*t9528) - 1.1312*(t6498*t9487 - 1.*t6531*t9528);
  p_output1[7]=t10060*t6414 + t10013*t6486 - 1.1312*(t10164*t6498 - 1.*t10129*t6531) + 0.0306*(t10129*t6498 + t10164*t6531) + t10164*t6548 + t10129*t6577 + (0.049*t4745 + t5840)*t8720 + (-0.09*t4745 - 0.049*t4783)*t9256 + t6093*t9782 + t6023*t9803 + t6321*t9915 + t6241*t9952;
  p_output1[8]=t10241*(-0.21*t5935 - 0.049*t6004) + t10357*t6241 + t10328*t6321 + t10550*t6414 + t10413*t6486 - 1.1312*(t10586*t6498 - 1.*t10571*t6531) + 0.0306*(t10571*t6498 + t10586*t6531) + t10586*t6548 + t10571*t6577 + (0.049*t5935 + t6005)*t9803;
  p_output1[9]=t10793*(-0.2707*t6155 - 0.0016*t6211) + t10328*(0.0016*t6155 + t6312) + t10862*t6414 + t10804*t6486 - 1.1312*(t10946*t6498 - 1.*t10887*t6531) + 0.0306*(t10887*t6498 + t10946*t6531) + t10946*t6548 + t10887*t6577;
  p_output1[10]=t11209*(-0.7055*t6382 + 0.0184*t6406) + t10862*(-0.0184*t6382 + t6408) - 1.1312*(t11279 + t11232*t6498) + 0.0306*(t11344 + t11232*t6531) + t11232*t6548 + t11226*t6577;
  p_output1[11]=-1.1312*(t11279 - 1.*t11535*t6498) + t11535*(-1.1135*t6498 - 0.0216*t6531) + 0.0306*(t11344 - 1.*t11535*t6531) + t11226*(0.0216*t6498 + t6575);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swingFootClearance_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_swingFootClearance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

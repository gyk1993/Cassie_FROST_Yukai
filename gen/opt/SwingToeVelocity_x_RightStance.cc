/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:37 GMT-04:00
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
  double t54;
  double t449;
  double t724;
  double t529;
  double t816;
  double t268;
  double t300;
  double t433;
  double t645;
  double t872;
  double t948;
  double t949;
  double t973;
  double t974;
  double t1027;
  double t1039;
  double t1040;
  double t1077;
  double t70;
  double t1435;
  double t1900;
  double t1986;
  double t2008;
  double t1797;
  double t2151;
  double t2169;
  double t2173;
  double t2202;
  double t3088;
  double t3094;
  double t3416;
  double t3584;
  double t3644;
  double t3672;
  double t3715;
  double t4097;
  double t4146;
  double t4287;
  double t4308;
  double t4312;
  double t4341;
  double t4392;
  double t4457;
  double t4461;
  double t4493;
  double t4569;
  double t4578;
  double t4583;
  double t4592;
  double t4602;
  double t4604;
  double t4614;
  double t4640;
  double t4645;
  double t4647;
  double t4685;
  double t4707;
  double t4725;
  double t4830;
  double t4832;
  double t4835;
  double t1439;
  double t1751;
  double t4845;
  double t4856;
  double t4860;
  double t1788;
  double t1861;
  double t1862;
  double t2187;
  double t2215;
  double t2342;
  double t4891;
  double t4907;
  double t4930;
  double t2452;
  double t2682;
  double t2808;
  double t3477;
  double t3630;
  double t3632;
  double t5016;
  double t5031;
  double t5038;
  double t5051;
  double t5056;
  double t5059;
  double t4004;
  double t4057;
  double t4066;
  double t4349;
  double t4438;
  double t4449;
  double t5061;
  double t5069;
  double t5070;
  double t5074;
  double t5077;
  double t5078;
  double t4561;
  double t4566;
  double t4568;
  double t4610;
  double t4625;
  double t4633;
  double t5081;
  double t5090;
  double t5091;
  double t5114;
  double t5117;
  double t5122;
  double t4663;
  double t4668;
  double t4673;
  double t5129;
  double t5137;
  double t5140;
  double t5147;
  double t5150;
  double t5157;
  double t4870;
  double t4872;
  double t4882;
  double t5296;
  double t5299;
  double t4942;
  double t4953;
  double t4965;
  double t4969;
  double t4971;
  double t5312;
  double t5326;
  double t5382;
  double t5391;
  double t5394;
  double t5425;
  double t5430;
  double t5438;
  double t5447;
  double t5452;
  double t5453;
  double t5460;
  double t5464;
  double t5465;
  double t5470;
  double t5483;
  double t5484;
  double t5497;
  double t5501;
  double t5507;
  double t5521;
  double t5536;
  double t5548;
  double t5558;
  double t5565;
  double t5570;
  double t4788;
  double t4797;
  double t4810;
  double t4812;
  double t4836;
  double t4839;
  double t1272;
  double t5728;
  double t5731;
  double t5733;
  double t5699;
  double t5713;
  double t5723;
  double t5795;
  double t5803;
  double t5815;
  double t5837;
  double t5845;
  double t5848;
  double t5877;
  double t5889;
  double t5895;
  double t5910;
  double t5912;
  double t5915;
  double t5923;
  double t5931;
  double t5934;
  double t5938;
  double t5939;
  double t5940;
  double t5943;
  double t5945;
  double t5947;
  double t5951;
  double t5953;
  double t5959;
  double t5971;
  double t5972;
  double t5974;
  double t6028;
  double t6030;
  double t6037;
  double t6043;
  double t6045;
  double t6055;
  double t6061;
  double t6065;
  double t6068;
  double t6080;
  double t6087;
  double t6092;
  double t6103;
  double t6106;
  double t6107;
  double t6111;
  double t6113;
  double t6115;
  double t6129;
  double t6136;
  double t6137;
  double t6152;
  double t6153;
  double t6159;
  double t6166;
  double t6168;
  double t6175;
  double t6228;
  double t6229;
  double t6232;
  double t6242;
  double t6244;
  double t6248;
  double t6252;
  double t6255;
  double t6256;
  double t6260;
  double t6266;
  double t6267;
  double t6273;
  double t6297;
  double t6304;
  double t6308;
  double t6310;
  double t6311;
  double t6320;
  double t6366;
  double t6372;
  double t6373;
  double t6377;
  double t6381;
  double t6389;
  double t6395;
  double t6398;
  double t6399;
  double t6403;
  double t6411;
  double t6412;
  double t6417;
  double t6455;
  double t6459;
  double t6460;
  double t6470;
  double t6473;
  double t6476;
  double t6479;
  double t6485;
  double t6526;
  double t6527;
  double t6528;
  double t6491;
  double t5673;
  double t5675;
  double t5677;
  double t5683;
  double t6590;
  double t6591;
  double t6592;
  double t6575;
  double t6577;
  double t6579;
  double t5742;
  double t5749;
  double t6608;
  double t6613;
  double t6616;
  double t6598;
  double t6601;
  double t6603;
  double t6632;
  double t6634;
  double t6636;
  double t6639;
  double t6640;
  double t6641;
  double t6644;
  double t6646;
  double t6652;
  double t6662;
  double t6664;
  double t6667;
  double t6671;
  double t6672;
  double t6674;
  double t6677;
  double t6679;
  double t6681;
  double t6687;
  double t6688;
  double t6689;
  double t6693;
  double t6695;
  double t6696;
  double t6699;
  double t6700;
  double t6707;
  t54 = Cos(var1[4]);
  t449 = Cos(var1[6]);
  t724 = Sin(var1[4]);
  t529 = Sin(var1[5]);
  t816 = Sin(var1[6]);
  t268 = Cos(var1[8]);
  t300 = Sin(var1[8]);
  t433 = Cos(var1[7]);
  t645 = -1.*t54*t449*t529;
  t872 = t724*t816;
  t948 = t645 + t872;
  t949 = t433*t948;
  t973 = t449*t724;
  t974 = t54*t529*t816;
  t1027 = t973 + t974;
  t1039 = Sin(var1[7]);
  t1040 = t1027*t1039;
  t1077 = t949 + t1040;
  t70 = Cos(var1[5]);
  t1435 = Cos(var1[9]);
  t1900 = t268*t1077;
  t1986 = -1.*t54*t70*t300;
  t2008 = t1900 + t1986;
  t1797 = Sin(var1[9]);
  t2151 = Cos(var1[10]);
  t2169 = -1.*t2151;
  t2173 = 1. + t2169;
  t2202 = Sin(var1[10]);
  t3088 = Cos(var1[11]);
  t3094 = -1.*t3088;
  t3416 = 1. + t3094;
  t3584 = Sin(var1[11]);
  t3644 = -1.*t2151*t1797*t2008;
  t3672 = -1.*t1435*t2202*t2008;
  t3715 = t3644 + t3672;
  t4097 = t1435*t2151*t2008;
  t4146 = -1.*t1797*t2202*t2008;
  t4287 = t4097 + t4146;
  t4308 = Cos(var1[12]);
  t4312 = -1.*t4308;
  t4341 = 1. + t4312;
  t4392 = Sin(var1[12]);
  t4457 = t3584*t3715;
  t4461 = t3088*t4287;
  t4493 = t4457 + t4461;
  t4569 = t3088*t3715;
  t4578 = -1.*t3584*t4287;
  t4583 = t4569 + t4578;
  t4592 = Cos(var1[13]);
  t4602 = -1.*t4592;
  t4604 = 1. + t4602;
  t4614 = Sin(var1[13]);
  t4640 = -1.*t4392*t4493;
  t4645 = t4308*t4583;
  t4647 = t4640 + t4645;
  t4685 = t4308*t4493;
  t4707 = t4392*t4583;
  t4725 = t4685 + t4707;
  t4830 = t54*t449*t529;
  t4832 = -1.*t724*t816;
  t4835 = t4830 + t4832;
  t1439 = -1.*t1435;
  t1751 = 1. + t1439;
  t4845 = t433*t1027;
  t4856 = t4835*t1039;
  t4860 = t4845 + t4856;
  t1788 = -0.049*t1751;
  t1861 = -0.09*t1797;
  t1862 = 0. + t1788 + t1861;
  t2187 = -0.049*t2173;
  t2215 = -0.21*t2202;
  t2342 = 0. + t2187 + t2215;
  t4891 = t433*t4835;
  t4907 = -1.*t1027*t1039;
  t4930 = t4891 + t4907;
  t2452 = -0.21*t2173;
  t2682 = 0.049*t2202;
  t2808 = 0. + t2452 + t2682;
  t3477 = -0.2707*t3416;
  t3630 = 0.0016*t3584;
  t3632 = 0. + t3477 + t3630;
  t5016 = t1797*t4930;
  t5031 = t1435*t4860*t300;
  t5038 = t5016 + t5031;
  t5051 = t1435*t4930;
  t5056 = -1.*t1797*t4860*t300;
  t5059 = t5051 + t5056;
  t4004 = -0.0016*t3416;
  t4057 = -0.2707*t3584;
  t4066 = 0. + t4004 + t4057;
  t4349 = 0.0184*t4341;
  t4438 = -0.7055*t4392;
  t4449 = 0. + t4349 + t4438;
  t5061 = -1.*t2202*t5038;
  t5069 = t2151*t5059;
  t5070 = t5061 + t5069;
  t5074 = t2151*t5038;
  t5077 = t2202*t5059;
  t5078 = t5074 + t5077;
  t4561 = -0.7055*t4341;
  t4566 = -0.0184*t4392;
  t4568 = 0. + t4561 + t4566;
  t4610 = -1.1135*t4604;
  t4625 = 0.0216*t4614;
  t4633 = 0. + t4610 + t4625;
  t5081 = t3584*t5070;
  t5090 = t3088*t5078;
  t5091 = t5081 + t5090;
  t5114 = t3088*t5070;
  t5117 = -1.*t3584*t5078;
  t5122 = t5114 + t5117;
  t4663 = -0.0216*t4604;
  t4668 = -1.1135*t4614;
  t4673 = 0. + t4663 + t4668;
  t5129 = -1.*t4392*t5091;
  t5137 = t4308*t5122;
  t5140 = t5129 + t5137;
  t5147 = t4308*t5091;
  t5150 = t4392*t5122;
  t5157 = t5147 + t5150;
  t4870 = -0.09*t1751;
  t4872 = 0.049*t1797;
  t4882 = 0. + t4870 + t4872;
  t5296 = -1.*t948*t1039;
  t5299 = t4845 + t5296;
  t4942 = -1.*t268;
  t4953 = 1. + t4942;
  t4965 = 0.135*t4953;
  t4969 = 0.049*t300;
  t4971 = 0. + t4965 + t4969;
  t5312 = -1.*t433*t948;
  t5326 = t5312 + t4907;
  t5382 = t1797*t5326;
  t5391 = t1435*t5299*t300;
  t5394 = t5382 + t5391;
  t5425 = t1435*t5326;
  t5430 = -1.*t1797*t5299*t300;
  t5438 = t5425 + t5430;
  t5447 = -1.*t2202*t5394;
  t5452 = t2151*t5438;
  t5453 = t5447 + t5452;
  t5460 = t2151*t5394;
  t5464 = t2202*t5438;
  t5465 = t5460 + t5464;
  t5470 = t3584*t5453;
  t5483 = t3088*t5465;
  t5484 = t5470 + t5483;
  t5497 = t3088*t5453;
  t5501 = -1.*t3584*t5465;
  t5507 = t5497 + t5501;
  t5521 = -1.*t4392*t5484;
  t5536 = t4308*t5507;
  t5548 = t5521 + t5536;
  t5558 = t4308*t5484;
  t5565 = t4392*t5507;
  t5570 = t5558 + t5565;
  t4788 = -1.*t433;
  t4797 = 1. + t4788;
  t4810 = 0.135*t4797;
  t4812 = 0. + t4810;
  t4836 = -0.135*t1039;
  t4839 = 0. + t4836;
  t1272 = 0.135*t300;
  t5728 = -1.*t54*t70*t449*t433;
  t5731 = t54*t70*t816*t1039;
  t5733 = t5728 + t5731;
  t5699 = t54*t70*t433*t816;
  t5713 = t54*t70*t449*t1039;
  t5723 = t5699 + t5713;
  t5795 = -1.*t54*t268*t529;
  t5803 = t5733*t300;
  t5815 = t5795 + t5803;
  t5837 = t1797*t5723;
  t5845 = t1435*t5815;
  t5848 = t5837 + t5845;
  t5877 = t1435*t5723;
  t5889 = -1.*t1797*t5815;
  t5895 = t5877 + t5889;
  t5910 = -1.*t2202*t5848;
  t5912 = t2151*t5895;
  t5915 = t5910 + t5912;
  t5923 = t2151*t5848;
  t5931 = t2202*t5895;
  t5934 = t5923 + t5931;
  t5938 = t3584*t5915;
  t5939 = t3088*t5934;
  t5940 = t5938 + t5939;
  t5943 = t3088*t5915;
  t5945 = -1.*t3584*t5934;
  t5947 = t5943 + t5945;
  t5951 = -1.*t4392*t5940;
  t5953 = t4308*t5947;
  t5959 = t5951 + t5953;
  t5971 = t4308*t5940;
  t5972 = t4392*t5947;
  t5974 = t5971 + t5972;
  t6028 = t54*t70*t268;
  t6030 = t1077*t300;
  t6037 = t6028 + t6030;
  t6043 = -1.*t1797*t5299;
  t6045 = -1.*t1435*t6037;
  t6055 = t6043 + t6045;
  t6061 = t1435*t5299;
  t6065 = -1.*t1797*t6037;
  t6068 = t6061 + t6065;
  t6080 = t2202*t6055;
  t6087 = t2151*t6068;
  t6092 = t6080 + t6087;
  t6103 = t2151*t6055;
  t6106 = -1.*t2202*t6068;
  t6107 = t6103 + t6106;
  t6111 = -1.*t3584*t6092;
  t6113 = t3088*t6107;
  t6115 = t6111 + t6113;
  t6129 = t3088*t6092;
  t6136 = t3584*t6107;
  t6137 = t6129 + t6136;
  t6152 = t4392*t6115;
  t6153 = t4308*t6137;
  t6159 = t6152 + t6153;
  t6166 = t4308*t6115;
  t6168 = -1.*t4392*t6137;
  t6175 = t6166 + t6168;
  t6228 = t1797*t5299;
  t6229 = t1435*t6037;
  t6232 = t6228 + t6229;
  t6242 = -1.*t2202*t6232;
  t6244 = t6242 + t6087;
  t6248 = -1.*t2151*t6232;
  t6252 = t6248 + t6106;
  t6255 = -1.*t3584*t6244;
  t6256 = t3088*t6252;
  t6260 = t6255 + t6256;
  t6266 = t3088*t6244;
  t6267 = t3584*t6252;
  t6273 = t6266 + t6267;
  t6297 = t4392*t6260;
  t6304 = t4308*t6273;
  t6308 = t6297 + t6304;
  t6310 = t4308*t6260;
  t6311 = -1.*t4392*t6273;
  t6320 = t6310 + t6311;
  t6366 = t2151*t6232;
  t6372 = t2202*t6068;
  t6373 = t6366 + t6372;
  t6377 = -1.*t3088*t6373;
  t6381 = t6255 + t6377;
  t6389 = -1.*t3584*t6373;
  t6395 = t6266 + t6389;
  t6398 = t4392*t6381;
  t6399 = t4308*t6395;
  t6403 = t6398 + t6399;
  t6411 = t4308*t6381;
  t6412 = -1.*t4392*t6395;
  t6417 = t6411 + t6412;
  t6455 = t3584*t6244;
  t6459 = t3088*t6373;
  t6460 = t6455 + t6459;
  t6470 = -1.*t4392*t6460;
  t6473 = t6470 + t6399;
  t6476 = -1.*t4308*t6460;
  t6479 = t6476 + t6412;
  t6485 = -1.*t4614*t6473;
  t6526 = t4308*t6460;
  t6527 = t4392*t6395;
  t6528 = t6526 + t6527;
  t6491 = t4592*t6473;
  t5673 = -1.*t449;
  t5675 = 1. + t5673;
  t5677 = 0.135*t5675;
  t5683 = 0. + t5677;
  t6590 = t54*t449;
  t6591 = -1.*t724*t529*t816;
  t6592 = t6590 + t6591;
  t6575 = t449*t724*t529;
  t6577 = t54*t816;
  t6579 = t6575 + t6577;
  t5742 = -0.049*t4953;
  t5749 = 0. + t5742 + t1272;
  t6608 = t433*t6579;
  t6613 = t6592*t1039;
  t6616 = t6608 + t6613;
  t6598 = t433*t6592;
  t6601 = -1.*t6579*t1039;
  t6603 = t6598 + t6601;
  t6632 = -1.*t70*t268*t724;
  t6634 = t6616*t300;
  t6636 = t6632 + t6634;
  t6639 = t1797*t6603;
  t6640 = t1435*t6636;
  t6641 = t6639 + t6640;
  t6644 = t1435*t6603;
  t6646 = -1.*t1797*t6636;
  t6652 = t6644 + t6646;
  t6662 = -1.*t2202*t6641;
  t6664 = t2151*t6652;
  t6667 = t6662 + t6664;
  t6671 = t2151*t6641;
  t6672 = t2202*t6652;
  t6674 = t6671 + t6672;
  t6677 = t3584*t6667;
  t6679 = t3088*t6674;
  t6681 = t6677 + t6679;
  t6687 = t3088*t6667;
  t6688 = -1.*t3584*t6674;
  t6689 = t6687 + t6688;
  t6693 = -1.*t4392*t6681;
  t6695 = t4308*t6689;
  t6696 = t6693 + t6695;
  t6699 = t4308*t6681;
  t6700 = t4392*t6689;
  t6707 = t6699 + t6700;
  p_output1[0]=var2[0] + (t4812*t6579 + t4839*t6592 + t4882*t6603 + t4971*t6616 + t1862*t6636 + t2342*t6641 + t2808*t6652 + t3632*t6667 + t4066*t6674 + t4449*t6681 + t4568*t6689 + t4633*t6696 + t4673*t6707 + 0.0306*(t4614*t6696 + t4592*t6707) - 1.1312*(t4592*t6696 - 1.*t4614*t6707) + t529*t5683*t724 - 1.*t5749*t70*t724 + 0.1305*(t268*t6616 + t300*t70*t724) + t54*(0. - 0.135*t816))*var2[4] + (t4882*t5723 + t4971*t5733 + 0.1305*(t300*t529*t54 + t268*t5733) - 1.*t529*t54*t5749 + t1862*t5815 + t2342*t5848 + t2808*t5895 + t3632*t5915 + t4066*t5934 + t4449*t5940 + t4568*t5947 + t4633*t5959 + t4673*t5974 + 0.0306*(t4614*t5959 + t4592*t5974) - 1.1312*(t4592*t5959 - 1.*t4614*t5974) - 1.*t449*t4812*t54*t70 - 1.*t54*t5683*t70 + t4839*t54*t70*t816)*var2[5] + (t1027*t4812 + t4835*t4839 + 0.1305*t268*t4860 + t1862*t300*t4860 + t4882*t4930 + t4860*t4971 + t2342*t5038 + t2808*t5059 + t3632*t5070 + t4066*t5078 + t4449*t5091 + t4568*t5122 + t4633*t5140 + t4673*t5157 + 0.0306*(t4614*t5140 + t4592*t5157) - 1.1312*(t4592*t5140 - 1.*t4614*t5157) - 0.135*t449*t724 - 0.135*t529*t54*t816)*var2[6] + (-0.135*t1027*t433 + 0.1305*t268*t5299 + t1862*t300*t5299 + t4971*t5299 + t4882*t5326 + t2342*t5394 + t2808*t5438 + t3632*t5453 + t4066*t5465 + t4449*t5484 + t4568*t5507 + t4633*t5548 + t4673*t5570 + 0.0306*(t4614*t5548 + t4592*t5570) - 1.1312*(t4592*t5548 - 1.*t4614*t5570) + 0.135*t1039*t948)*var2[7] + (t1862*t2008 + t1435*t2008*t2342 + t1077*(t1272 + 0.049*t268) - 1.*t1797*t2008*t2808 + t3632*t3715 + t4066*t4287 + t4449*t4493 + t4568*t4583 + t4633*t4647 + t4673*t4725 + 0.0306*(t4614*t4647 + t4592*t4725) - 1.1312*(t4592*t4647 - 1.*t4614*t4725) + (0.135*t268 - 0.049*t300)*t54*t70 + 0.1305*(-1.*t1077*t300 - 1.*t268*t54*t70))*var2[8] + ((0.049*t1435 + t1861)*t5299 + (-0.09*t1435 - 0.049*t1797)*t6037 + t2808*t6055 + t2342*t6068 + t4066*t6092 + t3632*t6107 + t4568*t6115 + t4449*t6137 + t4673*t6159 + t4633*t6175 - 1.1312*(-1.*t4614*t6159 + t4592*t6175) + 0.0306*(t4592*t6159 + t4614*t6175))*var2[9] + ((0.049*t2151 + t2215)*t6068 + (-0.21*t2151 - 0.049*t2202)*t6232 + t4066*t6244 + t3632*t6252 + t4568*t6260 + t4449*t6273 + t4673*t6308 + t4633*t6320 - 1.1312*(-1.*t4614*t6308 + t4592*t6320) + 0.0306*(t4592*t6308 + t4614*t6320))*var2[10] + ((0.0016*t3088 + t4057)*t6244 + (-0.2707*t3088 - 0.0016*t3584)*t6373 + t4568*t6381 + t4449*t6395 + t4673*t6403 + t4633*t6417 - 1.1312*(-1.*t4614*t6403 + t4592*t6417) + 0.0306*(t4592*t6403 + t4614*t6417))*var2[11] + ((-0.0184*t4308 + t4438)*t6395 + (-0.7055*t4308 + 0.0184*t4392)*t6460 + t4673*t6473 + t4633*t6479 - 1.1312*(t4592*t6479 + t6485) + 0.0306*(t4614*t6479 + t6491))*var2[12] + ((0.0216*t4592 + t4668)*t6473 + (-1.1135*t4592 - 0.0216*t4614)*t6528 - 1.1312*(t6485 - 1.*t4592*t6528) + 0.0306*(t6491 - 1.*t4614*t6528))*var2[13];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "SwingToeVelocity_x_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void SwingToeVelocity_x_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

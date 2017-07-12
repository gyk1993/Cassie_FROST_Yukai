/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:32 GMT-04:00
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
  double t5082;
  double t767;
  double t4912;
  double t4979;
  double t5015;
  double t5158;
  double t5184;
  double t5188;
  double t5193;
  double t5232;
  double t5249;
  double t5254;
  double t5288;
  double t5290;
  double t5302;
  double t5265;
  double t5270;
  double t5273;
  double t5305;
  double t5434;
  double t5436;
  double t5437;
  double t5441;
  double t5498;
  double t5517;
  double t5519;
  double t5411;
  double t5415;
  double t5416;
  double t5322;
  double t5343;
  double t5348;
  double t5364;
  double t5371;
  double t5393;
  double t5406;
  double t5606;
  double t5610;
  double t5614;
  double t5619;
  double t5623;
  double t5635;
  double t5643;
  double t5648;
  double t5649;
  double t5651;
  double t5671;
  double t5672;
  double t5673;
  double t5678;
  double t5684;
  double t5688;
  double t5689;
  double t5691;
  double t5705;
  double t5708;
  double t5710;
  double t5719;
  double t5723;
  double t5724;
  double t5729;
  double t5732;
  double t5733;
  double t5736;
  double t5748;
  double t5751;
  double t5755;
  double t5760;
  double t5762;
  double t5767;
  double t5770;
  double t5779;
  double t5781;
  double t5785;
  double t5791;
  double t5793;
  double t5794;
  double t773;
  double t4737;
  double t5261;
  double t5262;
  double t5352;
  double t5365;
  double t5368;
  double t5850;
  double t5853;
  double t5854;
  double t5832;
  double t5837;
  double t5840;
  double t5438;
  double t5457;
  double t5481;
  double t5520;
  double t5524;
  double t5531;
  double t5882;
  double t5883;
  double t5885;
  double t5577;
  double t5581;
  double t5603;
  double t5641;
  double t5645;
  double t5647;
  double t5862;
  double t5866;
  double t5872;
  double t5894;
  double t5895;
  double t5899;
  double t5660;
  double t5664;
  double t5667;
  double t5681;
  double t5682;
  double t5683;
  double t5685;
  double t5687;
  double t5905;
  double t5906;
  double t5907;
  double t5911;
  double t5913;
  double t5914;
  double t5695;
  double t5697;
  double t5700;
  double t5701;
  double t5725;
  double t5730;
  double t5731;
  double t5918;
  double t5919;
  double t5920;
  double t5923;
  double t5924;
  double t5928;
  double t5741;
  double t5743;
  double t5746;
  double t5769;
  double t5775;
  double t5776;
  double t5930;
  double t5932;
  double t5933;
  double t5941;
  double t5944;
  double t5945;
  double t5787;
  double t5789;
  double t5790;
  double t5950;
  double t5951;
  double t5952;
  double t5957;
  double t5963;
  double t5965;
  double t5979;
  double t5983;
  double t5986;
  double t6020;
  double t6025;
  double t6028;
  double t6008;
  double t6009;
  double t6016;
  double t6001;
  double t6004;
  double t6005;
  double t6049;
  double t6051;
  double t6054;
  double t6057;
  double t6058;
  double t6059;
  double t6065;
  double t6066;
  double t6067;
  double t6069;
  double t6070;
  double t6071;
  double t6073;
  double t6074;
  double t6075;
  double t6077;
  double t6080;
  double t6081;
  double t6085;
  double t6087;
  double t6089;
  double t6093;
  double t6094;
  double t6097;
  double t6100;
  double t6101;
  double t6104;
  double t6132;
  double t6133;
  double t6134;
  double t6137;
  double t6140;
  double t6141;
  double t6147;
  double t6149;
  double t6151;
  double t6157;
  double t6161;
  double t6162;
  double t6169;
  double t6170;
  double t6172;
  double t6175;
  double t6176;
  double t6179;
  double t6183;
  double t6184;
  double t6188;
  double t6190;
  double t6191;
  double t6196;
  double t6198;
  double t6201;
  double t6202;
  double t6212;
  double t6213;
  double t6216;
  double t6223;
  double t6226;
  double t6229;
  double t6231;
  double t6233;
  double t6234;
  double t6265;
  double t6266;
  double t6268;
  double t6271;
  double t6272;
  double t6275;
  double t6276;
  double t6280;
  double t6283;
  double t6284;
  double t6286;
  double t6287;
  double t6289;
  double t6291;
  double t6292;
  double t6293;
  double t6298;
  double t6299;
  double t6301;
  double t6304;
  double t6308;
  double t6309;
  double t6313;
  double t6314;
  double t6317;
  double t6322;
  double t6324;
  double t6325;
  double t6327;
  double t6329;
  double t6330;
  double t6367;
  double t6370;
  double t6372;
  double t6356;
  double t6358;
  double t6361;
  double t6382;
  double t6383;
  double t6391;
  double t6403;
  double t6404;
  double t6408;
  double t6410;
  double t6413;
  double t6416;
  double t6421;
  double t6423;
  double t6424;
  double t6427;
  double t6428;
  double t6429;
  double t6432;
  double t6435;
  double t6438;
  double t6443;
  double t6444;
  double t6447;
  double t6397;
  double t6399;
  double t6400;
  double t6473;
  double t6476;
  double t6477;
  double t6479;
  double t6482;
  double t6483;
  double t6492;
  double t6493;
  double t6494;
  double t6496;
  double t6498;
  double t6500;
  double t6504;
  double t6505;
  double t6508;
  double t6513;
  double t6514;
  double t6515;
  double t6519;
  double t6520;
  double t6523;
  double t6528;
  double t6529;
  double t6531;
  double t6548;
  double t6549;
  double t6552;
  double t6561;
  double t6562;
  double t6567;
  double t6568;
  double t6572;
  double t6573;
  double t6579;
  double t6583;
  double t6584;
  double t6585;
  double t6589;
  double t6590;
  double t6592;
  double t6597;
  double t6600;
  double t6607;
  double t6635;
  double t6637;
  double t6638;
  double t6644;
  double t6645;
  double t6650;
  double t6652;
  double t6655;
  double t6656;
  double t6659;
  double t6661;
  double t6663;
  double t6664;
  double t6688;
  double t6690;
  double t6691;
  double t6698;
  double t6699;
  double t6701;
  double t6702;
  double t6705;
  double t6732;
  double t6733;
  double t6736;
  double t6713;
  t5082 = Sin(var1[3]);
  t767 = Cos(var1[6]);
  t4912 = Cos(var1[3]);
  t4979 = Cos(var1[5]);
  t5015 = t4912*t4979;
  t5158 = Sin(var1[4]);
  t5184 = Sin(var1[5]);
  t5188 = -1.*t5082*t5158*t5184;
  t5193 = t5015 + t5188;
  t5232 = Cos(var1[4]);
  t5249 = Sin(var1[6]);
  t5254 = Cos(var1[7]);
  t5288 = -1.*t5232*t767*t5082;
  t5290 = -1.*t5193*t5249;
  t5302 = t5288 + t5290;
  t5265 = t767*t5193;
  t5270 = -1.*t5232*t5082*t5249;
  t5273 = t5265 + t5270;
  t5305 = Sin(var1[7]);
  t5434 = Cos(var1[8]);
  t5436 = -1.*t5434;
  t5437 = 1. + t5436;
  t5441 = Sin(var1[8]);
  t5498 = t5254*t5273;
  t5517 = t5302*t5305;
  t5519 = t5498 + t5517;
  t5411 = t4979*t5082*t5158;
  t5415 = t4912*t5184;
  t5416 = t5411 + t5415;
  t5322 = Cos(var1[9]);
  t5343 = -1.*t5322;
  t5348 = 1. + t5343;
  t5364 = Sin(var1[9]);
  t5371 = t5254*t5302;
  t5393 = -1.*t5273*t5305;
  t5406 = t5371 + t5393;
  t5606 = t5434*t5416;
  t5610 = -1.*t5519*t5441;
  t5614 = t5606 + t5610;
  t5619 = Cos(var1[10]);
  t5623 = -1.*t5619;
  t5635 = 1. + t5623;
  t5643 = Sin(var1[10]);
  t5648 = t5364*t5406;
  t5649 = t5322*t5614;
  t5651 = t5648 + t5649;
  t5671 = t5322*t5406;
  t5672 = -1.*t5364*t5614;
  t5673 = t5671 + t5672;
  t5678 = Cos(var1[11]);
  t5684 = Sin(var1[11]);
  t5688 = -1.*t5643*t5651;
  t5689 = t5619*t5673;
  t5691 = t5688 + t5689;
  t5705 = t5619*t5651;
  t5708 = t5643*t5673;
  t5710 = t5705 + t5708;
  t5719 = Cos(var1[12]);
  t5723 = -1.*t5719;
  t5724 = 1. + t5723;
  t5729 = Sin(var1[12]);
  t5732 = t5684*t5691;
  t5733 = t5678*t5710;
  t5736 = t5732 + t5733;
  t5748 = t5678*t5691;
  t5751 = -1.*t5684*t5710;
  t5755 = t5748 + t5751;
  t5760 = Cos(var1[13]);
  t5762 = -1.*t5760;
  t5767 = 1. + t5762;
  t5770 = Sin(var1[13]);
  t5779 = -1.*t5729*t5736;
  t5781 = t5719*t5755;
  t5785 = t5779 + t5781;
  t5791 = t5719*t5736;
  t5793 = t5729*t5755;
  t5794 = t5791 + t5793;
  t773 = -1.*t767;
  t4737 = 1. + t773;
  t5261 = -1.*t5254;
  t5262 = 1. + t5261;
  t5352 = -0.09*t5348;
  t5365 = 0.049*t5364;
  t5368 = t5352 + t5365;
  t5850 = -1.*t4912*t767*t5158;
  t5853 = -1.*t4912*t5232*t5184*t5249;
  t5854 = t5850 + t5853;
  t5832 = t4912*t5232*t767*t5184;
  t5837 = -1.*t4912*t5158*t5249;
  t5840 = t5832 + t5837;
  t5438 = -0.049*t5437;
  t5457 = -0.135*t5441;
  t5481 = t5438 + t5457;
  t5520 = 0.135*t5437;
  t5524 = -0.049*t5441;
  t5531 = t5520 + t5524;
  t5882 = t5254*t5840;
  t5883 = t5854*t5305;
  t5885 = t5882 + t5883;
  t5577 = -0.049*t5348;
  t5581 = -0.09*t5364;
  t5603 = t5577 + t5581;
  t5641 = -0.049*t5635;
  t5645 = -0.21*t5643;
  t5647 = t5641 + t5645;
  t5862 = t5254*t5854;
  t5866 = -1.*t5840*t5305;
  t5872 = t5862 + t5866;
  t5894 = -1.*t4912*t5232*t4979*t5434;
  t5895 = -1.*t5885*t5441;
  t5899 = t5894 + t5895;
  t5660 = -0.21*t5635;
  t5664 = 0.049*t5643;
  t5667 = t5660 + t5664;
  t5681 = -1.*t5678;
  t5682 = 1. + t5681;
  t5683 = -0.2707*t5682;
  t5685 = 0.0016*t5684;
  t5687 = t5683 + t5685;
  t5905 = t5364*t5872;
  t5906 = t5322*t5899;
  t5907 = t5905 + t5906;
  t5911 = t5322*t5872;
  t5913 = -1.*t5364*t5899;
  t5914 = t5911 + t5913;
  t5695 = -1. + t5678;
  t5697 = 0.0016*t5695;
  t5700 = -0.2707*t5684;
  t5701 = t5697 + t5700;
  t5725 = 0.0184*t5724;
  t5730 = -0.7055*t5729;
  t5731 = t5725 + t5730;
  t5918 = -1.*t5643*t5907;
  t5919 = t5619*t5914;
  t5920 = t5918 + t5919;
  t5923 = t5619*t5907;
  t5924 = t5643*t5914;
  t5928 = t5923 + t5924;
  t5741 = -0.7055*t5724;
  t5743 = -0.0184*t5729;
  t5746 = t5741 + t5743;
  t5769 = -1.1135*t5767;
  t5775 = 0.0216*t5770;
  t5776 = t5769 + t5775;
  t5930 = t5684*t5920;
  t5932 = t5678*t5928;
  t5933 = t5930 + t5932;
  t5941 = t5678*t5920;
  t5944 = -1.*t5684*t5928;
  t5945 = t5941 + t5944;
  t5787 = -0.0216*t5767;
  t5789 = -1.1135*t5770;
  t5790 = t5787 + t5789;
  t5950 = -1.*t5729*t5933;
  t5951 = t5719*t5945;
  t5952 = t5950 + t5951;
  t5957 = t5719*t5933;
  t5963 = t5729*t5945;
  t5965 = t5957 + t5963;
  t5979 = t4912*t4979*t5158;
  t5983 = -1.*t5082*t5184;
  t5986 = t5979 + t5983;
  t6020 = t767*t5254*t5986;
  t6025 = -1.*t5986*t5249*t5305;
  t6028 = t6020 + t6025;
  t6008 = t4979*t5082;
  t6009 = t4912*t5158*t5184;
  t6016 = t6008 + t6009;
  t6001 = -1.*t5254*t5986*t5249;
  t6004 = -1.*t767*t5986*t5305;
  t6005 = t6001 + t6004;
  t6049 = t5434*t6016;
  t6051 = -1.*t6028*t5441;
  t6054 = t6049 + t6051;
  t6057 = t5364*t6005;
  t6058 = t5322*t6054;
  t6059 = t6057 + t6058;
  t6065 = t5322*t6005;
  t6066 = -1.*t5364*t6054;
  t6067 = t6065 + t6066;
  t6069 = -1.*t5643*t6059;
  t6070 = t5619*t6067;
  t6071 = t6069 + t6070;
  t6073 = t5619*t6059;
  t6074 = t5643*t6067;
  t6075 = t6073 + t6074;
  t6077 = t5684*t6071;
  t6080 = t5678*t6075;
  t6081 = t6077 + t6080;
  t6085 = t5678*t6071;
  t6087 = -1.*t5684*t6075;
  t6089 = t6085 + t6087;
  t6093 = -1.*t5729*t6081;
  t6094 = t5719*t6089;
  t6097 = t6093 + t6094;
  t6100 = t5719*t6081;
  t6101 = t5729*t6089;
  t6104 = t6100 + t6101;
  t6132 = t4912*t5232*t767;
  t6133 = -1.*t6016*t5249;
  t6134 = t6132 + t6133;
  t6137 = -1.*t767*t6016;
  t6140 = -1.*t4912*t5232*t5249;
  t6141 = t6137 + t6140;
  t6147 = t5254*t6134;
  t6149 = t6141*t5305;
  t6151 = t6147 + t6149;
  t6157 = t5254*t6141;
  t6161 = -1.*t6134*t5305;
  t6162 = t6157 + t6161;
  t6169 = t5364*t6162;
  t6170 = -1.*t5322*t6151*t5441;
  t6172 = t6169 + t6170;
  t6175 = t5322*t6162;
  t6176 = t5364*t6151*t5441;
  t6179 = t6175 + t6176;
  t6183 = -1.*t5643*t6172;
  t6184 = t5619*t6179;
  t6188 = t6183 + t6184;
  t6190 = t5619*t6172;
  t6191 = t5643*t6179;
  t6196 = t6190 + t6191;
  t6198 = t5684*t6188;
  t6201 = t5678*t6196;
  t6202 = t6198 + t6201;
  t6212 = t5678*t6188;
  t6213 = -1.*t5684*t6196;
  t6216 = t6212 + t6213;
  t6223 = -1.*t5729*t6202;
  t6226 = t5719*t6216;
  t6229 = t6223 + t6226;
  t6231 = t5719*t6202;
  t6233 = t5729*t6216;
  t6234 = t6231 + t6233;
  t6265 = t767*t6016;
  t6266 = t4912*t5232*t5249;
  t6268 = t6265 + t6266;
  t6271 = -1.*t6268*t5305;
  t6272 = t6147 + t6271;
  t6275 = -1.*t5254*t6268;
  t6276 = t6275 + t6161;
  t6280 = t5364*t6276;
  t6283 = -1.*t5322*t6272*t5441;
  t6284 = t6280 + t6283;
  t6286 = t5322*t6276;
  t6287 = t5364*t6272*t5441;
  t6289 = t6286 + t6287;
  t6291 = -1.*t5643*t6284;
  t6292 = t5619*t6289;
  t6293 = t6291 + t6292;
  t6298 = t5619*t6284;
  t6299 = t5643*t6289;
  t6301 = t6298 + t6299;
  t6304 = t5684*t6293;
  t6308 = t5678*t6301;
  t6309 = t6304 + t6308;
  t6313 = t5678*t6293;
  t6314 = -1.*t5684*t6301;
  t6317 = t6313 + t6314;
  t6322 = -1.*t5729*t6309;
  t6324 = t5719*t6317;
  t6325 = t6322 + t6324;
  t6327 = t5719*t6309;
  t6329 = t5729*t6317;
  t6330 = t6327 + t6329;
  t6367 = t5254*t6268;
  t6370 = t6134*t5305;
  t6372 = t6367 + t6370;
  t6356 = -1.*t4912*t4979*t5158;
  t6358 = t5082*t5184;
  t6361 = t6356 + t6358;
  t6382 = -1.*t5434*t6372;
  t6383 = -1.*t6361*t5441;
  t6391 = t6382 + t6383;
  t6403 = -1.*t5619*t5364*t6391;
  t6404 = -1.*t5322*t5643*t6391;
  t6408 = t6403 + t6404;
  t6410 = t5322*t5619*t6391;
  t6413 = -1.*t5364*t5643*t6391;
  t6416 = t6410 + t6413;
  t6421 = t5684*t6408;
  t6423 = t5678*t6416;
  t6424 = t6421 + t6423;
  t6427 = t5678*t6408;
  t6428 = -1.*t5684*t6416;
  t6429 = t6427 + t6428;
  t6432 = -1.*t5729*t6424;
  t6435 = t5719*t6429;
  t6438 = t6432 + t6435;
  t6443 = t5719*t6424;
  t6444 = t5729*t6429;
  t6447 = t6443 + t6444;
  t6397 = t5434*t6361;
  t6399 = -1.*t6372*t5441;
  t6400 = t6397 + t6399;
  t6473 = -1.*t5364*t6272;
  t6476 = -1.*t5322*t6400;
  t6477 = t6473 + t6476;
  t6479 = t5322*t6272;
  t6482 = -1.*t5364*t6400;
  t6483 = t6479 + t6482;
  t6492 = t5643*t6477;
  t6493 = t5619*t6483;
  t6494 = t6492 + t6493;
  t6496 = t5619*t6477;
  t6498 = -1.*t5643*t6483;
  t6500 = t6496 + t6498;
  t6504 = -1.*t5684*t6494;
  t6505 = t5678*t6500;
  t6508 = t6504 + t6505;
  t6513 = t5678*t6494;
  t6514 = t5684*t6500;
  t6515 = t6513 + t6514;
  t6519 = t5729*t6508;
  t6520 = t5719*t6515;
  t6523 = t6519 + t6520;
  t6528 = t5719*t6508;
  t6529 = -1.*t5729*t6515;
  t6531 = t6528 + t6529;
  t6548 = t5364*t6272;
  t6549 = t5322*t6400;
  t6552 = t6548 + t6549;
  t6561 = -1.*t5643*t6552;
  t6562 = t6561 + t6493;
  t6567 = -1.*t5619*t6552;
  t6568 = t6567 + t6498;
  t6572 = -1.*t5684*t6562;
  t6573 = t5678*t6568;
  t6579 = t6572 + t6573;
  t6583 = t5678*t6562;
  t6584 = t5684*t6568;
  t6585 = t6583 + t6584;
  t6589 = t5729*t6579;
  t6590 = t5719*t6585;
  t6592 = t6589 + t6590;
  t6597 = t5719*t6579;
  t6600 = -1.*t5729*t6585;
  t6607 = t6597 + t6600;
  t6635 = t5619*t6552;
  t6637 = t5643*t6483;
  t6638 = t6635 + t6637;
  t6644 = -1.*t5678*t6638;
  t6645 = t6572 + t6644;
  t6650 = -1.*t5684*t6638;
  t6652 = t6583 + t6650;
  t6655 = t5729*t6645;
  t6656 = t5719*t6652;
  t6659 = t6655 + t6656;
  t6661 = t5719*t6645;
  t6663 = -1.*t5729*t6652;
  t6664 = t6661 + t6663;
  t6688 = t5684*t6562;
  t6690 = t5678*t6638;
  t6691 = t6688 + t6690;
  t6698 = -1.*t5729*t6691;
  t6699 = t6698 + t6656;
  t6701 = -1.*t5719*t6691;
  t6702 = t6701 + t6663;
  t6705 = -1.*t5770*t6699;
  t6732 = t5719*t6691;
  t6733 = t5729*t6652;
  t6736 = t6732 + t6733;
  t6713 = t5760*t6699;
  p_output1[0]=1.;
  p_output1[1]=0.135*t4737*t5193 + 0.135*t5082*t5232*t5249 + 0.135*t5262*t5273 - 0.135*t5302*t5305 + t5368*t5406 + t5416*t5481 + 0.1305*(t5416*t5441 + t5434*t5519) + t5519*t5531 + t5603*t5614 + t5647*t5651 + t5667*t5673 + t5687*t5691 + t5701*t5710 + t5731*t5736 + t5746*t5755 + t5776*t5785 + t5790*t5794 + 0.0306*(t5770*t5785 + t5760*t5794) - 1.1312*(t5760*t5785 - 1.*t5770*t5794);
  p_output1[2]=0.135*t4737*t4912*t5184*t5232 + 0.135*t4912*t5158*t5249 - 1.*t4912*t4979*t5232*t5481 + 0.135*t5262*t5840 - 0.135*t5305*t5854 + t5368*t5872 + t5531*t5885 + 0.1305*(-1.*t4912*t4979*t5232*t5441 + t5434*t5885) + t5603*t5899 + t5647*t5907 + t5667*t5914 + t5687*t5920 + t5701*t5928 + t5731*t5933 + t5746*t5945 + t5776*t5952 + t5790*t5965 + 0.0306*(t5770*t5952 + t5760*t5965) - 1.1312*(t5760*t5952 - 1.*t5770*t5965);
  p_output1[3]=0.135*t4737*t5986 + 0.135*t5249*t5305*t5986 + t5368*t6005 + t5481*t6016 + t5531*t6028 + 0.1305*(t5441*t6016 + t5434*t6028) + t5603*t6054 + t5647*t6059 + t5667*t6067 + t5687*t6071 + t5701*t6075 + t5731*t6081 + t5746*t6089 + t5776*t6097 + t5790*t6104 + 0.0306*(t5770*t6097 + t5760*t6104) - 1.1312*(t5760*t6097 - 1.*t5770*t6104) + 0.135*t5262*t5986*t767;
  p_output1[4]=0.135*t5249*t6016 + 0.135*t5262*t6134 - 0.135*t5305*t6141 + 0.1305*t5434*t6151 + t5531*t6151 - 1.*t5441*t5603*t6151 + t5368*t6162 + t5647*t6172 + t5667*t6179 + t5687*t6188 + t5701*t6196 + t5731*t6202 + t5746*t6216 + t5776*t6229 + t5790*t6234 + 0.0306*(t5770*t6229 + t5760*t6234) - 1.1312*(t5760*t6229 - 1.*t5770*t6234) - 0.135*t4912*t5232*t767;
  p_output1[5]=-0.135*t5254*t6134 + 0.135*t5305*t6268 + 0.1305*t5434*t6272 + t5531*t6272 - 1.*t5441*t5603*t6272 + t5368*t6276 + t5647*t6284 + t5667*t6289 + t5687*t6293 + t5701*t6301 + t5731*t6309 + t5746*t6317 + t5776*t6325 + t5790*t6330 + 0.0306*(t5770*t6325 + t5760*t6330) - 1.1312*(t5760*t6325 - 1.*t5770*t6330);
  p_output1[6]=(-0.135*t5434 + t5524)*t6361 + (-0.049*t5434 + 0.135*t5441)*t6372 + t5603*t6391 + t5322*t5647*t6391 - 1.*t5364*t5667*t6391 + 0.1305*t6400 + t5687*t6408 + t5701*t6416 + t5731*t6424 + t5746*t6429 + t5776*t6438 + t5790*t6447 + 0.0306*(t5770*t6438 + t5760*t6447) - 1.1312*(t5760*t6438 - 1.*t5770*t6447);
  p_output1[7]=(0.049*t5322 + t5581)*t6272 + (-0.09*t5322 - 0.049*t5364)*t6400 + t5667*t6477 + t5647*t6483 + t5701*t6494 + t5687*t6500 + t5746*t6508 + t5731*t6515 + t5790*t6523 + t5776*t6531 - 1.1312*(-1.*t5770*t6523 + t5760*t6531) + 0.0306*(t5760*t6523 + t5770*t6531);
  p_output1[8]=(0.049*t5619 + t5645)*t6483 + (-0.21*t5619 - 0.049*t5643)*t6552 + t5701*t6562 + t5687*t6568 + t5746*t6579 + t5731*t6585 + t5790*t6592 + t5776*t6607 - 1.1312*(-1.*t5770*t6592 + t5760*t6607) + 0.0306*(t5760*t6592 + t5770*t6607);
  p_output1[9]=(0.0016*t5678 + t5700)*t6562 + (-0.2707*t5678 - 0.0016*t5684)*t6638 + t5746*t6645 + t5731*t6652 + t5790*t6659 + t5776*t6664 - 1.1312*(-1.*t5770*t6659 + t5760*t6664) + 0.0306*(t5760*t6659 + t5770*t6664);
  p_output1[10]=(-0.0184*t5719 + t5730)*t6652 + (-0.7055*t5719 + 0.0184*t5729)*t6691 + t5790*t6699 + t5776*t6702 - 1.1312*(t5760*t6702 + t6705) + 0.0306*(t5770*t6702 + t6713);
  p_output1[11]=(0.0216*t5760 + t5789)*t6699 + (-1.1135*t5760 - 0.0216*t5770)*t6736 - 1.1312*(t6705 - 1.*t5760*t6736) + 0.0306*(t6713 - 1.*t5770*t6736);
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

#include "J_u_leftFootHeight_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

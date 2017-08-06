/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:32 GMT-04:00
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
  double t729;
  double t2524;
  double t2203;
  double t2241;
  double t2286;
  double t2705;
  double t2685;
  double t2693;
  double t2698;
  double t2652;
  double t2811;
  double t2813;
  double t2814;
  double t1646;
  double t1804;
  double t1976;
  double t2091;
  double t733;
  double t2952;
  double t2999;
  double t3042;
  double t2830;
  double t2835;
  double t2843;
  double t2857;
  double t2919;
  double t2926;
  double t2927;
  double t3176;
  double t3296;
  double t3384;
  double t3432;
  double t3465;
  double t3470;
  double t3504;
  double t3552;
  double t3584;
  double t3608;
  double t3644;
  double t3664;
  double t3672;
  double t3876;
  double t3969;
  double t3987;
  double t4017;
  double t4081;
  double t4097;
  double t4146;
  double t4312;
  double t4349;
  double t4375;
  double t4409;
  double t4421;
  double t4437;
  double t4443;
  double t4461;
  double t4465;
  double t4474;
  double t4557;
  double t4558;
  double t4560;
  double t4562;
  double t4563;
  double t4564;
  double t4567;
  double t4570;
  double t4571;
  double t4572;
  double t4592;
  double t4596;
  double t4597;
  double t2583;
  double t4626;
  double t4635;
  double t4652;
  double t4663;
  double t4665;
  double t4642;
  double t4645;
  double t4646;
  double t4667;
  double t4714;
  double t4717;
  double t4720;
  double t4723;
  double t4703;
  double t4707;
  double t4711;
  double t4674;
  double t4678;
  double t4680;
  double t4684;
  double t4694;
  double t4698;
  double t4699;
  double t4751;
  double t4752;
  double t4754;
  double t4757;
  double t4758;
  double t4759;
  double t4763;
  double t4775;
  double t4776;
  double t4777;
  double t4788;
  double t4789;
  double t4790;
  double t4792;
  double t4794;
  double t4804;
  double t4819;
  double t4826;
  double t4830;
  double t4831;
  double t4838;
  double t4839;
  double t4843;
  double t4846;
  double t4847;
  double t4855;
  double t4859;
  double t4869;
  double t4870;
  double t4871;
  double t4901;
  double t4902;
  double t4906;
  double t4914;
  double t4918;
  double t4920;
  double t4929;
  double t4932;
  double t4933;
  double t4934;
  double t4940;
  double t4942;
  double t4943;
  double t2215;
  double t2223;
  double t1986;
  double t2139;
  double t2192;
  double t4977;
  double t2314;
  double t2398;
  double t2452;
  double t2515;
  double t4984;
  double t2611;
  double t2612;
  double t2624;
  double t2633;
  double t5004;
  double t5008;
  double t5012;
  double t2662;
  double t2677;
  double t2681;
  double t2682;
  double t2803;
  double t2808;
  double t2851;
  double t2873;
  double t2901;
  double t5023;
  double t5026;
  double t5030;
  double t5032;
  double t5035;
  double t5038;
  double t2933;
  double t2935;
  double t2937;
  double t4981;
  double t4988;
  double t4998;
  double t5049;
  double t5051;
  double t5053;
  double t3089;
  double t3094;
  double t3150;
  double t3477;
  double t3509;
  double t3530;
  double t5043;
  double t5045;
  double t5046;
  double t5061;
  double t5066;
  double t5068;
  double t3630;
  double t3632;
  double t3640;
  double t4004;
  double t4057;
  double t4066;
  double t5073;
  double t5074;
  double t5075;
  double t5078;
  double t5079;
  double t5080;
  double t4287;
  double t4291;
  double t4308;
  double t4438;
  double t4449;
  double t4457;
  double t5088;
  double t5089;
  double t5090;
  double t5092;
  double t5094;
  double t5096;
  double t4513;
  double t4533;
  double t4554;
  double t4566;
  double t4568;
  double t4569;
  double t5100;
  double t5102;
  double t5110;
  double t5115;
  double t5116;
  double t5117;
  double t4583;
  double t4587;
  double t4590;
  double t5120;
  double t5122;
  double t5125;
  double t5128;
  double t5129;
  double t5135;
  double t4630;
  double t4631;
  double t4637;
  double t4638;
  double t4640;
  double t4641;
  double t4668;
  double t4669;
  double t4683;
  double t4685;
  double t4687;
  double t5199;
  double t5201;
  double t5204;
  double t5162;
  double t5170;
  double t5177;
  double t4722;
  double t4725;
  double t4726;
  double t4731;
  double t4733;
  double t4734;
  double t5238;
  double t5239;
  double t5241;
  double t4742;
  double t4745;
  double t4749;
  double t4761;
  double t4767;
  double t4771;
  double t5228;
  double t5231;
  double t5233;
  double t5250;
  double t5251;
  double t5253;
  double t4782;
  double t4786;
  double t4787;
  double t4812;
  double t4824;
  double t4825;
  double t5255;
  double t5256;
  double t5267;
  double t5279;
  double t5280;
  double t5281;
  double t4835;
  double t4836;
  double t4837;
  double t4856;
  double t4860;
  double t4865;
  double t5285;
  double t5286;
  double t5287;
  double t5289;
  double t5290;
  double t5294;
  double t4882;
  double t4891;
  double t4892;
  double t4927;
  double t4930;
  double t4931;
  double t5299;
  double t5300;
  double t5309;
  double t5312;
  double t5313;
  double t5316;
  double t4937;
  double t4938;
  double t4939;
  double t5319;
  double t5321;
  double t5324;
  double t5332;
  double t5337;
  double t5347;
  t729 = Cos(var1[4]);
  t2524 = Sin(var1[5]);
  t2203 = Sin(var1[14]);
  t2241 = Sin(var1[4]);
  t2286 = Cos(var1[14]);
  t2705 = Sin(var1[15]);
  t2685 = t2203*t2241;
  t2693 = -1.*t2286*t729*t2524;
  t2698 = t2685 + t2693;
  t2652 = Cos(var1[15]);
  t2811 = t2286*t2241;
  t2813 = t729*t2203*t2524;
  t2814 = t2811 + t2813;
  t1646 = Cos(var1[16]);
  t1804 = -1.*t1646;
  t1976 = 1. + t1804;
  t2091 = Sin(var1[16]);
  t733 = Cos(var1[5]);
  t2952 = t2652*t2698;
  t2999 = t2705*t2814;
  t3042 = t2952 + t2999;
  t2830 = Cos(var1[17]);
  t2835 = -1.*t2830;
  t2843 = 1. + t2835;
  t2857 = Sin(var1[17]);
  t2919 = -1.*t2705*t2698;
  t2926 = t2652*t2814;
  t2927 = t2919 + t2926;
  t3176 = t1646*t729*t733;
  t3296 = t2091*t3042;
  t3384 = t3176 + t3296;
  t3432 = Cos(var1[18]);
  t3465 = -1.*t3432;
  t3470 = 1. + t3465;
  t3504 = Sin(var1[18]);
  t3552 = t2857*t2927;
  t3584 = t2830*t3384;
  t3608 = t3552 + t3584;
  t3644 = t2830*t2927;
  t3664 = -1.*t2857*t3384;
  t3672 = t3644 + t3664;
  t3876 = Cos(var1[19]);
  t3969 = -1.*t3876;
  t3987 = 1. + t3969;
  t4017 = Sin(var1[19]);
  t4081 = -1.*t3504*t3608;
  t4097 = t3432*t3672;
  t4146 = t4081 + t4097;
  t4312 = t3432*t3608;
  t4349 = t3504*t3672;
  t4375 = t4312 + t4349;
  t4409 = Cos(var1[20]);
  t4421 = -1.*t4409;
  t4437 = 1. + t4421;
  t4443 = Sin(var1[20]);
  t4461 = t4017*t4146;
  t4465 = t3876*t4375;
  t4474 = t4461 + t4465;
  t4557 = t3876*t4146;
  t4558 = -1.*t4017*t4375;
  t4560 = t4557 + t4558;
  t4562 = Cos(var1[21]);
  t4563 = -1.*t4562;
  t4564 = 1. + t4563;
  t4567 = Sin(var1[21]);
  t4570 = -1.*t4443*t4474;
  t4571 = t4409*t4560;
  t4572 = t4570 + t4571;
  t4592 = t4409*t4474;
  t4596 = t4443*t4560;
  t4597 = t4592 + t4596;
  t2583 = Cos(var1[6]);
  t4626 = Sin(var1[6]);
  t4635 = Cos(var1[7]);
  t4652 = t2583*t2241;
  t4663 = t729*t2524*t4626;
  t4665 = t4652 + t4663;
  t4642 = -1.*t729*t2583*t2524;
  t4645 = t2241*t4626;
  t4646 = t4642 + t4645;
  t4667 = Sin(var1[7]);
  t4714 = Cos(var1[8]);
  t4717 = -1.*t4714;
  t4720 = 1. + t4717;
  t4723 = Sin(var1[8]);
  t4703 = t4635*t4646;
  t4707 = t4665*t4667;
  t4711 = t4703 + t4707;
  t4674 = Cos(var1[9]);
  t4678 = -1.*t4674;
  t4680 = 1. + t4678;
  t4684 = Sin(var1[9]);
  t4694 = t4635*t4665;
  t4698 = -1.*t4646*t4667;
  t4699 = t4694 + t4698;
  t4751 = t729*t733*t4714;
  t4752 = t4711*t4723;
  t4754 = t4751 + t4752;
  t4757 = Cos(var1[10]);
  t4758 = -1.*t4757;
  t4759 = 1. + t4758;
  t4763 = Sin(var1[10]);
  t4775 = t4684*t4699;
  t4776 = t4674*t4754;
  t4777 = t4775 + t4776;
  t4788 = t4674*t4699;
  t4789 = -1.*t4684*t4754;
  t4790 = t4788 + t4789;
  t4792 = Cos(var1[11]);
  t4794 = -1.*t4792;
  t4804 = 1. + t4794;
  t4819 = Sin(var1[11]);
  t4826 = -1.*t4763*t4777;
  t4830 = t4757*t4790;
  t4831 = t4826 + t4830;
  t4838 = t4757*t4777;
  t4839 = t4763*t4790;
  t4843 = t4838 + t4839;
  t4846 = Cos(var1[12]);
  t4847 = -1.*t4846;
  t4855 = 1. + t4847;
  t4859 = Sin(var1[12]);
  t4869 = t4819*t4831;
  t4870 = t4792*t4843;
  t4871 = t4869 + t4870;
  t4901 = t4792*t4831;
  t4902 = -1.*t4819*t4843;
  t4906 = t4901 + t4902;
  t4914 = Cos(var1[13]);
  t4918 = -1.*t4914;
  t4920 = 1. + t4918;
  t4929 = Sin(var1[13]);
  t4932 = -1.*t4859*t4871;
  t4933 = t4846*t4906;
  t4934 = t4932 + t4933;
  t4940 = t4846*t4871;
  t4942 = t4859*t4906;
  t4943 = t4940 + t4942;
  t2215 = 0.135*t2203;
  t2223 = 0. + t2215;
  t1986 = -0.049*t1976;
  t2139 = -0.135*t2091;
  t2192 = 0. + t1986 + t2139;
  t4977 = Sin(var1[3]);
  t2314 = -1.*t2286;
  t2398 = 1. + t2314;
  t2452 = -0.135*t2398;
  t2515 = 0. + t2452;
  t4984 = Cos(var1[3]);
  t2611 = -1.*t2583;
  t2612 = 1. + t2611;
  t2624 = 0.135*t2612;
  t2633 = 0. + t2624;
  t5004 = t4984*t733;
  t5008 = -1.*t4977*t2241*t2524;
  t5012 = t5004 + t5008;
  t2662 = -1.*t2652;
  t2677 = 1. + t2662;
  t2681 = -0.135*t2677;
  t2682 = 0. + t2681;
  t2803 = 0.135*t2705;
  t2808 = 0. + t2803;
  t2851 = -0.09*t2843;
  t2873 = 0.049*t2857;
  t2901 = 0. + t2851 + t2873;
  t5023 = -1.*t729*t2203*t4977;
  t5026 = t2286*t5012;
  t5030 = t5023 + t5026;
  t5032 = -1.*t2286*t729*t4977;
  t5035 = -1.*t2203*t5012;
  t5038 = t5032 + t5035;
  t2933 = -0.135*t1976;
  t2935 = 0.049*t2091;
  t2937 = 0. + t2933 + t2935;
  t4981 = t733*t4977*t2241;
  t4988 = t4984*t2524;
  t4998 = t4981 + t4988;
  t5049 = t2652*t5030;
  t5051 = t2705*t5038;
  t5053 = t5049 + t5051;
  t3089 = -0.049*t2843;
  t3094 = -0.09*t2857;
  t3150 = 0. + t3089 + t3094;
  t3477 = -0.049*t3470;
  t3509 = -0.21*t3504;
  t3530 = 0. + t3477 + t3509;
  t5043 = -1.*t2705*t5030;
  t5045 = t2652*t5038;
  t5046 = t5043 + t5045;
  t5061 = t1646*t4998;
  t5066 = t2091*t5053;
  t5068 = t5061 + t5066;
  t3630 = -0.21*t3470;
  t3632 = 0.049*t3504;
  t3640 = 0. + t3630 + t3632;
  t4004 = -0.2707*t3987;
  t4057 = 0.0016*t4017;
  t4066 = 0. + t4004 + t4057;
  t5073 = t2857*t5046;
  t5074 = t2830*t5068;
  t5075 = t5073 + t5074;
  t5078 = t2830*t5046;
  t5079 = -1.*t2857*t5068;
  t5080 = t5078 + t5079;
  t4287 = -0.0016*t3987;
  t4291 = -0.2707*t4017;
  t4308 = 0. + t4287 + t4291;
  t4438 = 0.0184*t4437;
  t4449 = -0.7055*t4443;
  t4457 = 0. + t4438 + t4449;
  t5088 = -1.*t3504*t5075;
  t5089 = t3432*t5080;
  t5090 = t5088 + t5089;
  t5092 = t3432*t5075;
  t5094 = t3504*t5080;
  t5096 = t5092 + t5094;
  t4513 = -0.7055*t4437;
  t4533 = -0.0184*t4443;
  t4554 = 0. + t4513 + t4533;
  t4566 = -1.1135*t4564;
  t4568 = 0.0216*t4567;
  t4569 = 0. + t4566 + t4568;
  t5100 = t4017*t5090;
  t5102 = t3876*t5096;
  t5110 = t5100 + t5102;
  t5115 = t3876*t5090;
  t5116 = -1.*t4017*t5096;
  t5117 = t5115 + t5116;
  t4583 = -0.0216*t4564;
  t4587 = -1.1135*t4567;
  t4590 = 0. + t4583 + t4587;
  t5120 = -1.*t4443*t5110;
  t5122 = t4409*t5117;
  t5125 = t5120 + t5122;
  t5128 = t4409*t5110;
  t5129 = t4443*t5117;
  t5135 = t5128 + t5129;
  t4630 = -0.135*t4626;
  t4631 = 0. + t4630;
  t4637 = -1.*t4635;
  t4638 = 1. + t4637;
  t4640 = 0.135*t4638;
  t4641 = 0. + t4640;
  t4668 = -0.135*t4667;
  t4669 = 0. + t4668;
  t4683 = -0.09*t4680;
  t4685 = 0.049*t4684;
  t4687 = 0. + t4683 + t4685;
  t5199 = -1.*t729*t2583*t4977;
  t5201 = -1.*t5012*t4626;
  t5204 = t5199 + t5201;
  t5162 = t2583*t5012;
  t5170 = -1.*t729*t4977*t4626;
  t5177 = t5162 + t5170;
  t4722 = 0.135*t4720;
  t4725 = 0.049*t4723;
  t4726 = 0. + t4722 + t4725;
  t4731 = -0.049*t4720;
  t4733 = 0.135*t4723;
  t4734 = 0. + t4731 + t4733;
  t5238 = t4635*t5177;
  t5239 = t5204*t4667;
  t5241 = t5238 + t5239;
  t4742 = -0.049*t4680;
  t4745 = -0.09*t4684;
  t4749 = 0. + t4742 + t4745;
  t4761 = -0.049*t4759;
  t4767 = -0.21*t4763;
  t4771 = 0. + t4761 + t4767;
  t5228 = t4635*t5204;
  t5231 = -1.*t5177*t4667;
  t5233 = t5228 + t5231;
  t5250 = t4714*t4998;
  t5251 = t5241*t4723;
  t5253 = t5250 + t5251;
  t4782 = -0.21*t4759;
  t4786 = 0.049*t4763;
  t4787 = 0. + t4782 + t4786;
  t4812 = -0.2707*t4804;
  t4824 = 0.0016*t4819;
  t4825 = 0. + t4812 + t4824;
  t5255 = t4684*t5233;
  t5256 = t4674*t5253;
  t5267 = t5255 + t5256;
  t5279 = t4674*t5233;
  t5280 = -1.*t4684*t5253;
  t5281 = t5279 + t5280;
  t4835 = -0.0016*t4804;
  t4836 = -0.2707*t4819;
  t4837 = 0. + t4835 + t4836;
  t4856 = 0.0184*t4855;
  t4860 = -0.7055*t4859;
  t4865 = 0. + t4856 + t4860;
  t5285 = -1.*t4763*t5267;
  t5286 = t4757*t5281;
  t5287 = t5285 + t5286;
  t5289 = t4757*t5267;
  t5290 = t4763*t5281;
  t5294 = t5289 + t5290;
  t4882 = -0.7055*t4855;
  t4891 = -0.0184*t4859;
  t4892 = 0. + t4882 + t4891;
  t4927 = -1.1135*t4920;
  t4930 = 0.0216*t4929;
  t4931 = 0. + t4927 + t4930;
  t5299 = t4819*t5287;
  t5300 = t4792*t5294;
  t5309 = t5299 + t5300;
  t5312 = t4792*t5287;
  t5313 = -1.*t4819*t5294;
  t5316 = t5312 + t5313;
  t4937 = -0.0216*t4920;
  t4938 = -1.1135*t4929;
  t4939 = 0. + t4937 + t4938;
  t5319 = -1.*t4859*t5309;
  t5321 = t4846*t5316;
  t5324 = t5319 + t5321;
  t5332 = t4846*t5309;
  t5337 = t4859*t5316;
  t5347 = t5332 + t5337;
  p_output1[0]=Sqrt(Power(0. + t2192*t4998 - 1.*t4734*t4998 + t2515*t5012 - 1.*t2633*t5012 + t2682*t5030 + t2808*t5038 + t2901*t5046 + t2937*t5053 - 0.1305*(-1.*t2091*t4998 + t1646*t5053) + t3150*t5068 + t3530*t5075 + t3640*t5080 + t4066*t5090 + t4308*t5096 + t4457*t5110 + t4554*t5117 + t4569*t5125 + t4590*t5135 + 0.0306*(t4567*t5125 + t4562*t5135) - 1.1312*(t4562*t5125 - 1.*t4567*t5135) - 1.*t4641*t5177 - 1.*t4669*t5204 - 1.*t4687*t5233 - 1.*t4726*t5241 - 0.1305*(-1.*t4723*t4998 + t4714*t5241) - 1.*t4749*t5253 - 1.*t4771*t5267 - 1.*t4787*t5281 - 1.*t4825*t5287 - 1.*t4837*t5294 - 1.*t4865*t5309 - 1.*t4892*t5316 - 1.*t4931*t5324 - 1.*t4939*t5347 - 0.0306*(t4929*t5324 + t4914*t5347) + 1.1312*(t4914*t5324 - 1.*t4929*t5347) - 1.*t2223*t4977*t729 + t4631*t4977*t729,2) + Power(0. + t2223*t2241 + t2682*t2698 + t2808*t2814 + t2901*t2927 + t2937*t3042 + t3150*t3384 + t3530*t3608 + t3640*t3672 + t4066*t4146 + t4308*t4375 + t4457*t4474 + t4554*t4560 + t4569*t4572 + t4590*t4597 + 0.0306*(t4567*t4572 + t4562*t4597) - 1.1312*(t4562*t4572 - 1.*t4567*t4597) - 1.*t2241*t4631 - 1.*t4641*t4646 - 1.*t4665*t4669 - 1.*t4687*t4699 - 1.*t4711*t4726 - 1.*t4749*t4754 - 1.*t4771*t4777 - 1.*t4787*t4790 - 1.*t4825*t4831 - 1.*t4837*t4843 - 1.*t4865*t4871 - 1.*t4892*t4906 - 1.*t4931*t4934 - 1.*t4939*t4943 - 0.0306*(t4929*t4934 + t4914*t4943) + 1.1312*(t4914*t4934 - 1.*t4929*t4943) - 1.*t2515*t2524*t729 + t2524*t2633*t729 + t2192*t729*t733 - 1.*t4734*t729*t733 - 0.1305*(t1646*t3042 - 1.*t2091*t729*t733) - 0.1305*(t4711*t4714 - 1.*t4723*t729*t733),2));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Toe2ToeDistance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void Toe2ToeDistance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

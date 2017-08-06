/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:37:20 GMT-04:00
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
  double t152;
  double t170;
  double t183;
  double t153;
  double t171;
  double t172;
  double t140;
  double t184;
  double t201;
  double t205;
  double t279;
  double t174;
  double t248;
  double t264;
  double t137;
  double t312;
  double t336;
  double t392;
  double t412;
  double t271;
  double t393;
  double t399;
  double t62;
  double t413;
  double t415;
  double t437;
  double t515;
  double t401;
  double t441;
  double t473;
  double t50;
  double t516;
  double t519;
  double t520;
  double t559;
  double t43;
  double t514;
  double t525;
  double t547;
  double t38;
  double t563;
  double t571;
  double t628;
  double t27;
  double t742;
  double t767;
  double t787;
  double t741;
  double t806;
  double t807;
  double t815;
  double t817;
  double t814;
  double t818;
  double t820;
  double t847;
  double t874;
  double t924;
  double t845;
  double t971;
  double t979;
  double t1031;
  double t1032;
  double t1061;
  double t690;
  double t1000;
  double t1158;
  double t1164;
  double t1170;
  double t1183;
  double t1219;
  double t1515;
  double t1836;
  double t1954;
  double t1812;
  double t1814;
  double t1969;
  double t1973;
  double t1980;
  double t2016;
  double t2049;
  double t2061;
  double t2070;
  double t2084;
  double t1817;
  double t1829;
  double t2028;
  double t2088;
  double t2109;
  double t2132;
  double t2154;
  double t2155;
  double t2220;
  double t2226;
  double t1695;
  double t1701;
  double t1733;
  double t1735;
  double t1810;
  double t2127;
  double t2237;
  double t2277;
  double t2300;
  double t2352;
  double t2385;
  double t2434;
  double t2438;
  double t2449;
  double t2490;
  double t1583;
  double t1619;
  double t1731;
  double t1732;
  double t2291;
  double t2491;
  double t2496;
  double t2498;
  double t2500;
  double t2501;
  double t2503;
  double t2504;
  double t1516;
  double t1526;
  double t1544;
  double t1569;
  double t1580;
  double t1628;
  double t1677;
  double t2497;
  double t2507;
  double t2508;
  double t2510;
  double t2511;
  double t2529;
  double t2530;
  double t2531;
  double t2534;
  double t2535;
  double t1168;
  double t1220;
  double t1293;
  double t1345;
  double t1348;
  double t1362;
  double t1505;
  double t2521;
  double t2537;
  double t2538;
  double t2543;
  double t2547;
  double t2553;
  double t2557;
  double t2561;
  double t2564;
  double t2575;
  double t2579;
  double t2585;
  double t1392;
  double t1469;
  double t1504;
  double t2540;
  double t2567;
  double t2570;
  double t556;
  double t647;
  double t659;
  double t713;
  double t714;
  double t717;
  double t2589;
  double t2595;
  double t2605;
  double t2607;
  double t660;
  double t722;
  double t738;
  double t2615;
  double t2618;
  double t2620;
  double t2623;
  double t2651;
  double t2625;
  double t2689;
  double t2695;
  double t2732;
  double t2736;
  double t2739;
  double t2740;
  double t2743;
  double t2731;
  double t2720;
  double t2723;
  double t2724;
  double t2727;
  double t2735;
  double t2744;
  double t2747;
  double t2764;
  double t2756;
  double t2759;
  double t2760;
  double t2755;
  double t2767;
  double t2768;
  double t2771;
  double t2635;
  double t2637;
  double t2642;
  double t2613;
  double t1340;
  double t1383;
  double t1387;
  double t4945;
  double t4954;
  double t4968;
  double t2647;
  double t4166;
  double t4232;
  double t4543;
  double t4719;
  double t4805;
  double t4893;
  double t3219;
  double t3343;
  double t3348;
  double t5273;
  double t5367;
  double t5405;
  double t5108;
  double t3373;
  double t4006;
  double t4094;
  double t5907;
  double t5957;
  double t5965;
  double t5514;
  double t5995;
  double t6036;
  double t6054;
  double t5790;
  double t5809;
  double t5843;
  double t6187;
  double t6189;
  double t6209;
  double t6885;
  double t6705;
  double t6370;
  double t6382;
  double t6388;
  double t6658;
  double t6818;
  double t8699;
  double t2728;
  double t2748;
  double t2751;
  double t8731;
  double t6083;
  double t6155;
  double t6167;
  double t8833;
  double t8807;
  double t8805;
  double t8815;
  double t9129;
  double t9149;
  t152 = Cos(var1[21]);
  t170 = Sin(var1[21]);
  t183 = Cos(var1[20]);
  t153 = 0.642788*t152;
  t171 = -0.766044*t170;
  t172 = t153 + t171;
  t140 = Sin(var1[20]);
  t184 = 0.766044*t152;
  t201 = 0.642788*t170;
  t205 = t184 + t201;
  t279 = Cos(var1[19]);
  t174 = t140*t172;
  t248 = t183*t205;
  t264 = t174 + t248;
  t137 = Sin(var1[19]);
  t312 = t183*t172;
  t336 = -1.*t140*t205;
  t392 = t312 + t336;
  t412 = Cos(var1[18]);
  t271 = -1.*t137*t264;
  t393 = t279*t392;
  t399 = t271 + t393;
  t62 = Sin(var1[18]);
  t413 = t279*t264;
  t415 = t137*t392;
  t437 = t413 + t415;
  t515 = Cos(var1[17]);
  t401 = t62*t399;
  t441 = t412*t437;
  t473 = t401 + t441;
  t50 = Sin(var1[17]);
  t516 = t412*t399;
  t519 = -1.*t62*t437;
  t520 = t516 + t519;
  t559 = Cos(var1[15]);
  t43 = Sin(var1[16]);
  t514 = -1.*t50*t473;
  t525 = t515*t520;
  t547 = t514 + t525;
  t38 = Sin(var1[15]);
  t563 = t515*t473;
  t571 = t50*t520;
  t628 = t563 + t571;
  t27 = Cos(var1[14]);
  t742 = -0.766044*t152;
  t767 = -0.642788*t170;
  t787 = t742 + t767;
  t741 = -1.*t140*t172;
  t806 = t183*t787;
  t807 = t741 + t806;
  t815 = t140*t787;
  t817 = t312 + t815;
  t814 = t137*t807;
  t818 = t279*t817;
  t820 = t814 + t818;
  t847 = t279*t807;
  t874 = -1.*t137*t817;
  t924 = t847 + t874;
  t845 = -1.*t62*t820;
  t971 = t412*t924;
  t979 = t845 + t971;
  t1031 = t412*t820;
  t1032 = t62*t924;
  t1061 = t1031 + t1032;
  t690 = Sin(var1[14]);
  t1000 = t50*t979;
  t1158 = t515*t1061;
  t1164 = t1000 + t1158;
  t1170 = t515*t979;
  t1183 = -1.*t50*t1061;
  t1219 = t1170 + t1183;
  t1515 = Cos(var1[16]);
  t1836 = -1.*t152;
  t1954 = 1. + t1836;
  t1812 = -1.*t183;
  t1814 = 1. + t1812;
  t1969 = -0.0216*t1954;
  t1973 = 0.0306*t152;
  t1980 = 0.0177*t170;
  t2016 = t1969 + t1973 + t1980;
  t2049 = -1.1135*t1954;
  t2061 = -1.1312*t152;
  t2070 = 0.0522*t170;
  t2084 = t2049 + t2061 + t2070;
  t1817 = -0.7055*t1814;
  t1829 = -0.0184*t140;
  t2028 = t140*t2016;
  t2088 = t183*t2084;
  t2109 = t1817 + t1829 + t2028 + t2088;
  t2132 = 0.0184*t1814;
  t2154 = -0.7055*t140;
  t2155 = t183*t2016;
  t2220 = -1.*t140*t2084;
  t2226 = t2132 + t2154 + t2155 + t2220;
  t1695 = -1.*t412;
  t1701 = 1. + t1695;
  t1733 = -1. + t279;
  t1735 = 0.0016*t1733;
  t1810 = -0.2707*t137;
  t2127 = -1.*t137*t2109;
  t2237 = t279*t2226;
  t2277 = t1735 + t1810 + t2127 + t2237;
  t2300 = -1.*t279;
  t2352 = 1. + t2300;
  t2385 = -0.2707*t2352;
  t2434 = 0.0016*t137;
  t2438 = t279*t2109;
  t2449 = t137*t2226;
  t2490 = t2385 + t2434 + t2438 + t2449;
  t1583 = -1.*t515;
  t1619 = 1. + t1583;
  t1731 = -0.21*t1701;
  t1732 = 0.049*t62;
  t2291 = t62*t2277;
  t2491 = t412*t2490;
  t2496 = t1731 + t1732 + t2291 + t2491;
  t2498 = -0.049*t1701;
  t2500 = -0.21*t62;
  t2501 = t412*t2277;
  t2503 = -1.*t62*t2490;
  t2504 = t2498 + t2500 + t2501 + t2503;
  t1516 = -1.*t1515;
  t1526 = 1. + t1516;
  t1544 = -0.135*t1526;
  t1569 = -0.1305*t1515;
  t1580 = 0.049*t43;
  t1628 = -0.049*t1619;
  t1677 = -0.09*t50;
  t2497 = -1.*t50*t2496;
  t2507 = t515*t2504;
  t2508 = t1628 + t1677 + t2497 + t2507;
  t2510 = t43*t2508;
  t2511 = t1544 + t1569 + t1580 + t2510;
  t2529 = -0.09*t1619;
  t2530 = 0.049*t50;
  t2531 = t515*t2496;
  t2534 = t50*t2504;
  t2535 = t2529 + t2530 + t2531 + t2534;
  t1168 = -1.*t38*t1164;
  t1220 = t559*t43*t1219;
  t1293 = t1168 + t1220;
  t1345 = t559*t1164;
  t1348 = t38*t43*t1219;
  t1362 = t1345 + t1348;
  t1505 = 0.135*t38;
  t2521 = t38*t2511;
  t2537 = t559*t2535;
  t2538 = t1505 + t2521 + t2537;
  t2543 = -1.*t559;
  t2547 = 1. + t2543;
  t2553 = -0.135*t2547;
  t2557 = t559*t2511;
  t2561 = -1.*t38*t2535;
  t2564 = t2553 + t2557 + t2561;
  t2575 = t690*t1293;
  t2579 = t27*t1362;
  t2585 = t2575 + t2579;
  t1392 = -1.*t27;
  t1469 = 1. + t1392;
  t1504 = -0.135*t1469;
  t2540 = -1.*t690*t2538;
  t2567 = t27*t2564;
  t2570 = t1504 + t2540 + t2567;
  t556 = t38*t43*t547;
  t647 = t559*t628;
  t659 = t556 + t647;
  t713 = t559*t43*t547;
  t714 = -1.*t38*t628;
  t717 = t713 + t714;
  t2589 = 0.135*t690;
  t2595 = t27*t2538;
  t2605 = t690*t2564;
  t2607 = t2589 + t2595 + t2605;
  t660 = t27*t659;
  t722 = t690*t717;
  t738 = t660 + t722;
  t2615 = -0.049*t1526;
  t2618 = -0.0045*t43;
  t2620 = t1515*t2508;
  t2623 = t2615 + t2618 + t2620;
  t2651 = -1.*t1515*t2623*t547;
  t2625 = t1515*t2623*t1219;
  t2689 = -1.*t2535*t628;
  t2695 = t1164*t2535;
  t2732 = Cos(var1[5]);
  t2736 = -1.*t27*t559*t1515;
  t2739 = t1515*t690*t38;
  t2740 = t2736 + t2739;
  t2743 = Sin(var1[5]);
  t2731 = Cos(var1[4]);
  t2720 = -1.*t559*t1515*t690;
  t2723 = -1.*t27*t1515*t38;
  t2724 = t2720 + t2723;
  t2727 = Sin(var1[4]);
  t2735 = t2732*t43;
  t2744 = -1.*t2740*t2743;
  t2747 = t2735 + t2744;
  t2764 = Cos(var1[3]);
  t2756 = t2732*t2740;
  t2759 = t43*t2743;
  t2760 = t2756 + t2759;
  t2755 = Sin(var1[3]);
  t2767 = t2731*t2724;
  t2768 = -1.*t2727*t2747;
  t2771 = t2767 + t2768;
  t2635 = -1.*t690*t659;
  t2637 = t27*t717;
  t2642 = t2635 + t2637;
  t2613 = t2585*t2607;
  t1340 = t27*t1293;
  t1383 = -1.*t690*t1362;
  t1387 = t1340 + t1383;
  t4945 = t2732*t1387;
  t4954 = t1515*t1219*t2743;
  t4968 = t4945 + t4954;
  t2647 = -1.*t2607*t738;
  t4166 = t2732*t2623;
  t4232 = -1.*t2570*t2743;
  t4543 = t4166 + t4232;
  t4719 = t2732*t2570;
  t4805 = t2623*t2743;
  t4893 = t4719 + t4805;
  t3219 = t2732*t2642;
  t3343 = t1515*t547*t2743;
  t3348 = t3219 + t3343;
  t5273 = t1515*t2732*t547;
  t5367 = -1.*t2642*t2743;
  t5405 = t5273 + t5367;
  t5108 = t4893*t4968;
  t3373 = t1515*t2732*t1219;
  t4006 = -1.*t1387*t2743;
  t4094 = t3373 + t4006;
  t5907 = t2585*t2727;
  t5957 = t2731*t4094;
  t5965 = t5907 + t5957;
  t5514 = -1.*t4893*t3348;
  t5995 = t2607*t2727;
  t6036 = t2731*t4543;
  t6054 = t5995 + t6036;
  t5790 = t738*t2727;
  t5809 = t2731*t5405;
  t5843 = t5790 + t5809;
  t6187 = t2731*t2607;
  t6189 = -1.*t2727*t4543;
  t6209 = t6187 + t6189;
  t6885 = -1.*t1515*t2623*t1219;
  t6705 = t43*t2623;
  t6370 = t2731*t738;
  t6382 = -1.*t2727*t5405;
  t6388 = t6370 + t6382;
  t6658 = t2724*t2607;
  t6818 = -1.*t2585*t2607;
  t8699 = t2760*t4893;
  t2728 = t2724*t2727;
  t2748 = t2731*t2747;
  t2751 = t2728 + t2748;
  t8731 = -1.*t4893*t4968;
  t6083 = t2731*t2585;
  t6155 = -1.*t2727*t4094;
  t6167 = t6083 + t6155;
  t8833 = t1515*t2623*t547;
  t8807 = -1.*t43*t2623;
  t8805 = -1.*t2724*t2607;
  t8815 = t2607*t738;
  t9129 = -1.*t2760*t4893;
  t9149 = t4893*t3348;
  p_output1[0]=t2751*var2[0] + (t2760*t2764 - 1.*t2755*t2771)*var2[1] + (t2755*t2760 + t2764*t2771)*var2[2] + (t5843*(t5108 + t5965*t6054 + t6167*t6209) + t5965*(t5514 - 1.*t5843*t6054 - 1.*t6209*t6388))*var2[3] + (t3348*(t2613 + t4094*t4543 + t5108) + t4968*(t2647 - 1.*t4543*t5405 + t5514))*var2[4] + (t2585*(-1.*t2570*t2642 + t2647 + t2651) + (t1387*t2570 + t2613 + t2625)*t738)*var2[5] + (-0.135*t1515*t38 + t1515*(t1362*t2538 + t1293*t2564 + t2625)*t547 + t1219*t1515*(t2651 - 1.*t2538*t659 - 1.*t2564*t717))*var2[14] + (t1515*(t2625 + t2695 + t1219*t2511*t43)*t547 + t1219*t1515*(t2651 + t2689 - 1.*t2511*t43*t547))*var2[15] + (-0.049 + t1164*(t2689 - 1.*t2508*t547) + (t1219*t2508 + t2695)*t628)*var2[16];
  p_output1[1]=t5843*var2[0] + (t2764*t3348 - 1.*t2755*t6388)*var2[1] + (t2755*t3348 + t2764*t6388)*var2[2] + (t5965*(t2751*t6054 + t2771*t6209 + t8699) + t2751*(-1.*t5965*t6054 - 1.*t6167*t6209 + t8731))*var2[3] + (t4968*(t2747*t4543 + t6658 + t8699) + t2760*(-1.*t4094*t4543 + t6818 + t8731))*var2[4] + (t2585*(t2570*t2740 + t6658 + t6705) + t2724*(-1.*t1387*t2570 + t6818 + t6885))*var2[5] + (0.135*t659 + t1219*t1515*(-1.*t1515*t2538*t38 - 1.*t1515*t2564*t559 + t6705) + t43*(-1.*t1362*t2538 - 1.*t1293*t2564 + t6885))*var2[14] + (0.135*t628 + t1219*t1515*(-1.*t1515*t2511 + t6705) + t43*(-1.*t1164*t2535 - 1.*t1219*t2511*t43 + t6885))*var2[15] + (0.1305*t1164 - 0.135*t547)*var2[16] + (-1.*t1061*t2496 + 0.049*t473 - 0.09*t520 - 1.*t2504*t979)*var2[17] + (-0.21*t399 + 0.049*t437 - 1.*t2490*t820 - 1.*t2277*t924)*var2[18] + (0.0016*t264 - 0.2707*t392 - 1.*t2226*t807 - 1.*t2109*t817)*var2[19] + (-0.7055*t172 - 0.0184*t205 - 1.*t172*t2084 - 1.*t2016*t787)*var2[20] + 0.0513648444*var2[21];
  p_output1[2]=t5965*var2[0] + (t2764*t4968 - 1.*t2755*t6167)*var2[1] + (t2755*t4968 + t2764*t6167)*var2[2] + (t5843*(-1.*t2751*t6054 - 1.*t2771*t6209 + t9129) + t2751*(t5843*t6054 + t6209*t6388 + t9149))*var2[3] + (t3348*(-1.*t2747*t4543 + t8805 + t9129) + t2760*(t4543*t5405 + t8815 + t9149))*var2[4] + (t738*(-1.*t2570*t2740 + t8805 + t8807) + t2724*(t2570*t2642 + t8815 + t8833))*var2[5] + (0.135*t1362 + t1515*t547*(t1515*t2538*t38 + t1515*t2564*t559 + t8807) + t43*(t2538*t659 + t2564*t717 + t8833))*var2[14] + (0.135*t1164 + t1515*t547*(t1515*t2511 + t8807) + t43*(t2511*t43*t547 + t2535*t628 + t8833))*var2[15] + (-0.135*t1219 - 0.1305*t628)*var2[16] + (0.049*t1061 + t2496*t473 + t2504*t520 - 0.09*t979)*var2[17] + (t2277*t399 + t2490*t437 + 0.049*t820 - 0.21*t924)*var2[18] + (t2109*t264 + t2226*t392 - 0.2707*t807 + 0.0016*t817)*var2[19] + (-0.0184*t172 + t172*t2016 + t205*t2084 - 0.7055*t787)*var2[20] + 0.0199945548*var2[21];
  p_output1[3]=t2751*var2[3] + t2760*var2[4] + t2724*var2[5] + t43*var2[14] + t43*var2[15] + var2[17] + var2[18] + var2[19] + var2[20] + var2[21];
  p_output1[4]=t5965*var2[3] + t4968*var2[4] + t2585*var2[5] + t1219*t1515*var2[14] + t1219*t1515*var2[15] + t1164*var2[16];
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

namespace Pattern[Cassie, Blank[oneStep]]
{

void dh_RightToeBottom_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:58 GMT-04:00
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
  double t1160;
  double t1459;
  double t1403;
  double t1444;
  double t1488;
  double t1080;
  double t1130;
  double t1526;
  double t1530;
  double t1532;
  double t1537;
  double t1853;
  double t1598;
  double t1604;
  double t1794;
  double t1543;
  double t1871;
  double t1926;
  double t1937;
  double t1264;
  double t1267;
  double t1268;
  double t1347;
  double t1447;
  double t1497;
  double t1505;
  double t2122;
  double t2128;
  double t2154;
  double t1941;
  double t1945;
  double t1948;
  double t1979;
  double t1994;
  double t2038;
  double t2061;
  double t2282;
  double t2284;
  double t2287;
  double t2290;
  double t2291;
  double t2293;
  double t2298;
  double t2326;
  double t2329;
  double t2332;
  double t2374;
  double t2378;
  double t2400;
  double t2432;
  double t2452;
  double t2461;
  double t2463;
  double t2465;
  double t2501;
  double t2508;
  double t2514;
  double t2528;
  double t2538;
  double t2542;
  double t2551;
  double t2575;
  double t2580;
  double t2582;
  double t2656;
  double t2663;
  double t2679;
  double t2717;
  double t2718;
  double t2753;
  double t2787;
  double t2842;
  double t2873;
  double t2881;
  double t2904;
  double t2908;
  double t2912;
  double t1336;
  double t1348;
  double t1374;
  double t1527;
  double t1529;
  double t1564;
  double t1585;
  double t1968;
  double t1990;
  double t1993;
  double t3075;
  double t3094;
  double t3107;
  double t3154;
  double t3161;
  double t3176;
  double t2080;
  double t2119;
  double t2121;
  double t3217;
  double t3226;
  double t3249;
  double t2258;
  double t2264;
  double t2277;
  double t2294;
  double t2305;
  double t2321;
  double t3186;
  double t3189;
  double t3194;
  double t3308;
  double t3325;
  double t3357;
  double t2344;
  double t2356;
  double t2373;
  double t2434;
  double t2435;
  double t2437;
  double t2454;
  double t2460;
  double t3360;
  double t3370;
  double t3390;
  double t3403;
  double t3424;
  double t3442;
  double t2472;
  double t2475;
  double t2486;
  double t2497;
  double t2544;
  double t2560;
  double t2561;
  double t3464;
  double t3465;
  double t3470;
  double t3502;
  double t3522;
  double t3548;
  double t2594;
  double t2649;
  double t2652;
  double t2781;
  double t2791;
  double t2822;
  double t3605;
  double t3607;
  double t3609;
  double t3645;
  double t3669;
  double t3677;
  double t2893;
  double t2895;
  double t2897;
  double t3703;
  double t3704;
  double t3731;
  double t3749;
  double t3757;
  double t3759;
  double t3878;
  double t3883;
  double t3891;
  double t3947;
  double t3970;
  double t3986;
  double t4077;
  double t4091;
  double t4094;
  double t4021;
  double t4044;
  double t4055;
  double t4143;
  double t4151;
  double t4159;
  double t4181;
  double t4204;
  double t4212;
  double t4225;
  double t4230;
  double t4241;
  double t4280;
  double t4294;
  double t4314;
  double t4334;
  double t4344;
  double t4429;
  double t4494;
  double t4517;
  double t4546;
  double t4591;
  double t4594;
  double t4595;
  double t4691;
  double t4710;
  double t4720;
  double t4742;
  double t4770;
  double t4774;
  double t4890;
  double t4899;
  double t4905;
  double t4985;
  double t5011;
  double t5023;
  double t5045;
  double t5089;
  double t5123;
  double t5239;
  double t5252;
  double t5257;
  double t5279;
  double t5284;
  double t5307;
  double t5333;
  double t5342;
  double t5344;
  double t5368;
  double t5387;
  double t5391;
  double t5401;
  double t5425;
  double t5430;
  double t5462;
  double t5471;
  double t5478;
  double t5511;
  double t5526;
  double t5545;
  double t5561;
  double t5568;
  double t5578;
  double t5621;
  double t5626;
  double t5627;
  double t5777;
  double t5787;
  double t5793;
  double t5815;
  double t5826;
  double t5876;
  double t5893;
  double t5939;
  double t5945;
  double t5947;
  double t5950;
  double t5959;
  double t6011;
  double t6060;
  double t6076;
  double t6111;
  double t6136;
  double t6137;
  double t6159;
  double t6179;
  double t6197;
  double t6206;
  double t6232;
  double t6239;
  double t6253;
  double t6264;
  double t6277;
  double t6290;
  double t6344;
  double t6387;
  double t6388;
  double t6501;
  double t6502;
  double t6504;
  double t6517;
  double t6521;
  double t6525;
  double t6532;
  double t6537;
  double t6539;
  double t6579;
  double t6583;
  double t6587;
  double t6613;
  double t6614;
  double t6616;
  double t6619;
  double t6620;
  double t6626;
  double t6632;
  double t6634;
  double t6641;
  double t6648;
  double t6649;
  double t6659;
  double t6686;
  double t6691;
  double t6695;
  double t6562;
  double t6568;
  double t6574;
  double t6782;
  double t6801;
  double t6817;
  double t6819;
  double t6821;
  double t6823;
  double t6829;
  double t6830;
  double t6831;
  double t6836;
  double t6837;
  double t6840;
  double t6842;
  double t6845;
  double t6846;
  double t6849;
  double t6851;
  double t6853;
  double t6855;
  double t6857;
  double t6859;
  double t6863;
  double t6868;
  double t6870;
  double t6931;
  double t6933;
  double t6934;
  double t6981;
  double t6983;
  double t6988;
  double t6997;
  double t7008;
  double t7010;
  double t7016;
  double t7021;
  double t7023;
  double t7025;
  double t7039;
  double t7040;
  double t7041;
  double t7053;
  double t7055;
  double t7056;
  double t7229;
  double t7232;
  double t7233;
  double t7247;
  double t7248;
  double t7278;
  double t7281;
  double t7290;
  double t7293;
  double t7306;
  double t7309;
  double t7313;
  double t7315;
  double t7413;
  double t7425;
  double t7428;
  double t7492;
  double t7498;
  double t7506;
  double t7514;
  double t7519;
  double t7622;
  double t7629;
  double t7633;
  double t7566;
  t1160 = Sin(var1[3]);
  t1459 = Cos(var1[3]);
  t1403 = Cos(var1[5]);
  t1444 = Sin(var1[4]);
  t1488 = Sin(var1[5]);
  t1080 = Cos(var1[4]);
  t1130 = Sin(var1[14]);
  t1526 = Cos(var1[14]);
  t1530 = t1459*t1403;
  t1532 = -1.*t1160*t1444*t1488;
  t1537 = t1530 + t1532;
  t1853 = Sin(var1[15]);
  t1598 = -1.*t1080*t1130*t1160;
  t1604 = t1526*t1537;
  t1794 = t1598 + t1604;
  t1543 = Cos(var1[15]);
  t1871 = -1.*t1526*t1080*t1160;
  t1926 = -1.*t1130*t1537;
  t1937 = t1871 + t1926;
  t1264 = Cos(var1[16]);
  t1267 = -1.*t1264;
  t1268 = 1. + t1267;
  t1347 = Sin(var1[16]);
  t1447 = t1403*t1160*t1444;
  t1497 = t1459*t1488;
  t1505 = t1447 + t1497;
  t2122 = t1543*t1794;
  t2128 = t1853*t1937;
  t2154 = t2122 + t2128;
  t1941 = Cos(var1[17]);
  t1945 = -1.*t1941;
  t1948 = 1. + t1945;
  t1979 = Sin(var1[17]);
  t1994 = -1.*t1853*t1794;
  t2038 = t1543*t1937;
  t2061 = t1994 + t2038;
  t2282 = t1264*t1505;
  t2284 = -1.*t1347*t2154;
  t2287 = t2282 + t2284;
  t2290 = Cos(var1[18]);
  t2291 = -1.*t2290;
  t2293 = 1. + t2291;
  t2298 = Sin(var1[18]);
  t2326 = t1979*t2061;
  t2329 = t1941*t2287;
  t2332 = t2326 + t2329;
  t2374 = t1941*t2061;
  t2378 = -1.*t1979*t2287;
  t2400 = t2374 + t2378;
  t2432 = Cos(var1[19]);
  t2452 = Sin(var1[19]);
  t2461 = -1.*t2298*t2332;
  t2463 = t2290*t2400;
  t2465 = t2461 + t2463;
  t2501 = t2290*t2332;
  t2508 = t2298*t2400;
  t2514 = t2501 + t2508;
  t2528 = Cos(var1[20]);
  t2538 = -1.*t2528;
  t2542 = 1. + t2538;
  t2551 = Sin(var1[20]);
  t2575 = t2452*t2465;
  t2580 = t2432*t2514;
  t2582 = t2575 + t2580;
  t2656 = t2432*t2465;
  t2663 = -1.*t2452*t2514;
  t2679 = t2656 + t2663;
  t2717 = Cos(var1[21]);
  t2718 = -1.*t2717;
  t2753 = 1. + t2718;
  t2787 = Sin(var1[21]);
  t2842 = -1.*t2551*t2582;
  t2873 = t2528*t2679;
  t2881 = t2842 + t2873;
  t2904 = t2528*t2582;
  t2908 = t2551*t2679;
  t2912 = t2904 + t2908;
  t1336 = -0.049*t1268;
  t1348 = 0.135*t1347;
  t1374 = t1336 + t1348;
  t1527 = -1.*t1526;
  t1529 = 1. + t1527;
  t1564 = -1.*t1543;
  t1585 = 1. + t1564;
  t1968 = -0.09*t1948;
  t1990 = 0.049*t1979;
  t1993 = t1968 + t1990;
  t3075 = -1.*t1459*t1130*t1444;
  t3094 = t1526*t1459*t1080*t1488;
  t3107 = t3075 + t3094;
  t3154 = -1.*t1526*t1459*t1444;
  t3161 = -1.*t1459*t1080*t1130*t1488;
  t3176 = t3154 + t3161;
  t2080 = -0.135*t1268;
  t2119 = -0.049*t1347;
  t2121 = t2080 + t2119;
  t3217 = t1543*t3107;
  t3226 = t1853*t3176;
  t3249 = t3217 + t3226;
  t2258 = -0.049*t1948;
  t2264 = -0.09*t1979;
  t2277 = t2258 + t2264;
  t2294 = -0.049*t2293;
  t2305 = -0.21*t2298;
  t2321 = t2294 + t2305;
  t3186 = -1.*t1853*t3107;
  t3189 = t1543*t3176;
  t3194 = t3186 + t3189;
  t3308 = -1.*t1264*t1459*t1080*t1403;
  t3325 = -1.*t1347*t3249;
  t3357 = t3308 + t3325;
  t2344 = -0.21*t2293;
  t2356 = 0.049*t2298;
  t2373 = t2344 + t2356;
  t2434 = -1.*t2432;
  t2435 = 1. + t2434;
  t2437 = -0.2707*t2435;
  t2454 = 0.0016*t2452;
  t2460 = t2437 + t2454;
  t3360 = t1979*t3194;
  t3370 = t1941*t3357;
  t3390 = t3360 + t3370;
  t3403 = t1941*t3194;
  t3424 = -1.*t1979*t3357;
  t3442 = t3403 + t3424;
  t2472 = -1. + t2432;
  t2475 = 0.0016*t2472;
  t2486 = -0.2707*t2452;
  t2497 = t2475 + t2486;
  t2544 = 0.0184*t2542;
  t2560 = -0.7055*t2551;
  t2561 = t2544 + t2560;
  t3464 = -1.*t2298*t3390;
  t3465 = t2290*t3442;
  t3470 = t3464 + t3465;
  t3502 = t2290*t3390;
  t3522 = t2298*t3442;
  t3548 = t3502 + t3522;
  t2594 = -0.7055*t2542;
  t2649 = -0.0184*t2551;
  t2652 = t2594 + t2649;
  t2781 = -1.1135*t2753;
  t2791 = 0.0216*t2787;
  t2822 = t2781 + t2791;
  t3605 = t2452*t3470;
  t3607 = t2432*t3548;
  t3609 = t3605 + t3607;
  t3645 = t2432*t3470;
  t3669 = -1.*t2452*t3548;
  t3677 = t3645 + t3669;
  t2893 = -0.0216*t2753;
  t2895 = -1.1135*t2787;
  t2897 = t2893 + t2895;
  t3703 = -1.*t2551*t3609;
  t3704 = t2528*t3677;
  t3731 = t3703 + t3704;
  t3749 = t2528*t3609;
  t3757 = t2551*t3677;
  t3759 = t3749 + t3757;
  t3878 = t1459*t1403*t1444;
  t3883 = -1.*t1160*t1488;
  t3891 = t3878 + t3883;
  t3947 = t1403*t1160;
  t3970 = t1459*t1444*t1488;
  t3986 = t3947 + t3970;
  t4077 = t1526*t1543*t3891;
  t4091 = -1.*t1130*t1853*t3891;
  t4094 = t4077 + t4091;
  t4021 = -1.*t1543*t1130*t3891;
  t4044 = -1.*t1526*t1853*t3891;
  t4055 = t4021 + t4044;
  t4143 = t1264*t3986;
  t4151 = -1.*t1347*t4094;
  t4159 = t4143 + t4151;
  t4181 = t1979*t4055;
  t4204 = t1941*t4159;
  t4212 = t4181 + t4204;
  t4225 = t1941*t4055;
  t4230 = -1.*t1979*t4159;
  t4241 = t4225 + t4230;
  t4280 = -1.*t2298*t4212;
  t4294 = t2290*t4241;
  t4314 = t4280 + t4294;
  t4334 = t2290*t4212;
  t4344 = t2298*t4241;
  t4429 = t4334 + t4344;
  t4494 = t2452*t4314;
  t4517 = t2432*t4429;
  t4546 = t4494 + t4517;
  t4591 = t2432*t4314;
  t4594 = -1.*t2452*t4429;
  t4595 = t4591 + t4594;
  t4691 = -1.*t2551*t4546;
  t4710 = t2528*t4595;
  t4720 = t4691 + t4710;
  t4742 = t2528*t4546;
  t4770 = t2551*t4595;
  t4774 = t4742 + t4770;
  t4890 = -1.*t1459*t1080*t1130;
  t4899 = -1.*t1526*t3986;
  t4905 = t4890 + t4899;
  t4985 = t1526*t1459*t1080;
  t5011 = -1.*t1130*t3986;
  t5023 = t4985 + t5011;
  t5045 = t1853*t4905;
  t5089 = t1543*t5023;
  t5123 = t5045 + t5089;
  t5239 = t1543*t4905;
  t5252 = -1.*t1853*t5023;
  t5257 = t5239 + t5252;
  t5279 = t1347*t1979*t5123;
  t5284 = t1941*t5257;
  t5307 = t5279 + t5284;
  t5333 = -1.*t1941*t1347*t5123;
  t5342 = t1979*t5257;
  t5344 = t5333 + t5342;
  t5368 = t2298*t5307;
  t5387 = t2290*t5344;
  t5391 = t5368 + t5387;
  t5401 = t2290*t5307;
  t5425 = -1.*t2298*t5344;
  t5430 = t5401 + t5425;
  t5462 = -1.*t2452*t5391;
  t5471 = t2432*t5430;
  t5478 = t5462 + t5471;
  t5511 = t2432*t5391;
  t5526 = t2452*t5430;
  t5545 = t5511 + t5526;
  t5561 = t2551*t5478;
  t5568 = t2528*t5545;
  t5578 = t5561 + t5568;
  t5621 = t2528*t5478;
  t5626 = -1.*t2551*t5545;
  t5627 = t5621 + t5626;
  t5777 = t1459*t1080*t1130;
  t5787 = t1526*t3986;
  t5793 = t5777 + t5787;
  t5815 = -1.*t1853*t5793;
  t5826 = t5815 + t5089;
  t5876 = -1.*t1543*t5793;
  t5893 = t5876 + t5252;
  t5939 = t1347*t1979*t5826;
  t5945 = t1941*t5893;
  t5947 = t5939 + t5945;
  t5950 = -1.*t1941*t1347*t5826;
  t5959 = t1979*t5893;
  t6011 = t5950 + t5959;
  t6060 = t2298*t5947;
  t6076 = t2290*t6011;
  t6111 = t6060 + t6076;
  t6136 = t2290*t5947;
  t6137 = -1.*t2298*t6011;
  t6159 = t6136 + t6137;
  t6179 = -1.*t2452*t6111;
  t6197 = t2432*t6159;
  t6206 = t6179 + t6197;
  t6232 = t2432*t6111;
  t6239 = t2452*t6159;
  t6253 = t6232 + t6239;
  t6264 = t2551*t6206;
  t6277 = t2528*t6253;
  t6290 = t6264 + t6277;
  t6344 = t2528*t6206;
  t6387 = -1.*t2551*t6253;
  t6388 = t6344 + t6387;
  t6501 = -1.*t1459*t1403*t1444;
  t6502 = t1160*t1488;
  t6504 = t6501 + t6502;
  t6517 = t1543*t5793;
  t6521 = t1853*t5023;
  t6525 = t6517 + t6521;
  t6532 = -1.*t1347*t6504;
  t6537 = -1.*t1264*t6525;
  t6539 = t6532 + t6537;
  t6579 = -1.*t2290*t1979*t6539;
  t6583 = -1.*t1941*t2298*t6539;
  t6587 = t6579 + t6583;
  t6613 = t1941*t2290*t6539;
  t6614 = -1.*t1979*t2298*t6539;
  t6616 = t6613 + t6614;
  t6619 = t2452*t6587;
  t6620 = t2432*t6616;
  t6626 = t6619 + t6620;
  t6632 = t2432*t6587;
  t6634 = -1.*t2452*t6616;
  t6641 = t6632 + t6634;
  t6648 = -1.*t2551*t6626;
  t6649 = t2528*t6641;
  t6659 = t6648 + t6649;
  t6686 = t2528*t6626;
  t6691 = t2551*t6641;
  t6695 = t6686 + t6691;
  t6562 = t1264*t6504;
  t6568 = -1.*t1347*t6525;
  t6574 = t6562 + t6568;
  t6782 = -1.*t1979*t5826;
  t6801 = -1.*t1941*t6574;
  t6817 = t6782 + t6801;
  t6819 = t1941*t5826;
  t6821 = -1.*t1979*t6574;
  t6823 = t6819 + t6821;
  t6829 = t2298*t6817;
  t6830 = t2290*t6823;
  t6831 = t6829 + t6830;
  t6836 = t2290*t6817;
  t6837 = -1.*t2298*t6823;
  t6840 = t6836 + t6837;
  t6842 = -1.*t2452*t6831;
  t6845 = t2432*t6840;
  t6846 = t6842 + t6845;
  t6849 = t2432*t6831;
  t6851 = t2452*t6840;
  t6853 = t6849 + t6851;
  t6855 = t2551*t6846;
  t6857 = t2528*t6853;
  t6859 = t6855 + t6857;
  t6863 = t2528*t6846;
  t6868 = -1.*t2551*t6853;
  t6870 = t6863 + t6868;
  t6931 = t1979*t5826;
  t6933 = t1941*t6574;
  t6934 = t6931 + t6933;
  t6981 = -1.*t2298*t6934;
  t6983 = t6981 + t6830;
  t6988 = -1.*t2290*t6934;
  t6997 = t6988 + t6837;
  t7008 = -1.*t2452*t6983;
  t7010 = t2432*t6997;
  t7016 = t7008 + t7010;
  t7021 = t2432*t6983;
  t7023 = t2452*t6997;
  t7025 = t7021 + t7023;
  t7039 = t2551*t7016;
  t7040 = t2528*t7025;
  t7041 = t7039 + t7040;
  t7053 = t2528*t7016;
  t7055 = -1.*t2551*t7025;
  t7056 = t7053 + t7055;
  t7229 = t2290*t6934;
  t7232 = t2298*t6823;
  t7233 = t7229 + t7232;
  t7247 = -1.*t2432*t7233;
  t7248 = t7008 + t7247;
  t7278 = -1.*t2452*t7233;
  t7281 = t7021 + t7278;
  t7290 = t2551*t7248;
  t7293 = t2528*t7281;
  t7306 = t7290 + t7293;
  t7309 = t2528*t7248;
  t7313 = -1.*t2551*t7281;
  t7315 = t7309 + t7313;
  t7413 = t2452*t6983;
  t7425 = t2432*t7233;
  t7428 = t7413 + t7425;
  t7492 = -1.*t2551*t7428;
  t7498 = t7492 + t7293;
  t7506 = -1.*t2528*t7428;
  t7514 = t7506 + t7313;
  t7519 = -1.*t2787*t7498;
  t7622 = t2528*t7428;
  t7629 = t2551*t7281;
  t7633 = t7622 + t7629;
  t7566 = t2717*t7498;
  p_output1[0]=1.;
  p_output1[1]=-0.135*t1080*t1130*t1160 + t1374*t1505 - 0.135*t1529*t1537 - 0.135*t1585*t1794 + 0.135*t1853*t1937 + t1993*t2061 + t2121*t2154 - 0.1305*(t1347*t1505 + t1264*t2154) + t2277*t2287 + t2321*t2332 + t2373*t2400 + t2460*t2465 + t2497*t2514 + t2561*t2582 + t2652*t2679 + t2822*t2881 + t2897*t2912 + 0.0306*(t2787*t2881 + t2717*t2912) - 1.1312*(t2717*t2881 - 1.*t2787*t2912);
  p_output1[2]=-1.*t1080*t1374*t1403*t1459 - 0.135*t1130*t1444*t1459 - 0.135*t1080*t1459*t1488*t1529 - 0.135*t1585*t3107 + 0.135*t1853*t3176 + t1993*t3194 + t2121*t3249 - 0.1305*(-1.*t1080*t1347*t1403*t1459 + t1264*t3249) + t2277*t3357 + t2321*t3390 + t2373*t3442 + t2460*t3470 + t2497*t3548 + t2561*t3609 + t2652*t3677 + t2822*t3731 + t2897*t3759 + 0.0306*(t2787*t3731 + t2717*t3759) - 1.1312*(t2717*t3731 - 1.*t2787*t3759);
  p_output1[3]=-0.135*t1529*t3891 - 0.135*t1526*t1585*t3891 - 0.135*t1130*t1853*t3891 + t1374*t3986 + t1993*t4055 + t2121*t4094 - 0.1305*(t1347*t3986 + t1264*t4094) + t2277*t4159 + t2321*t4212 + t2373*t4241 + t2460*t4314 + t2497*t4429 + t2561*t4546 + t2652*t4595 + t2822*t4720 + t2897*t4774 + 0.0306*(t2787*t4720 + t2717*t4774) - 1.1312*(t2717*t4720 - 1.*t2787*t4774);
  p_output1[4]=0.135*t1080*t1459*t1526 - 0.135*t1130*t3986 + 0.135*t1853*t4905 - 0.135*t1585*t5023 - 0.1305*t1264*t5123 + t2121*t5123 - 1.*t1347*t2277*t5123 + t1993*t5257 + t2373*t5307 + t2321*t5344 + t2497*t5391 + t2460*t5430 + t2652*t5478 + t2561*t5545 + t2897*t5578 + t2822*t5627 - 1.1312*(-1.*t2787*t5578 + t2717*t5627) + 0.0306*(t2717*t5578 + t2787*t5627);
  p_output1[5]=0.135*t1543*t5023 - 0.135*t1853*t5793 - 0.1305*t1264*t5826 + t2121*t5826 - 1.*t1347*t2277*t5826 + t1993*t5893 + t2373*t5947 + t2321*t6011 + t2497*t6111 + t2460*t6159 + t2652*t6206 + t2561*t6253 + t2897*t6290 + t2822*t6388 - 1.1312*(-1.*t2787*t6290 + t2717*t6388) + 0.0306*(t2717*t6290 + t2787*t6388);
  p_output1[6]=(0.135*t1264 + t2119)*t6504 + (-0.049*t1264 - 0.135*t1347)*t6525 + t2277*t6539 + t1941*t2321*t6539 - 1.*t1979*t2373*t6539 - 0.1305*t6574 + t2460*t6587 + t2497*t6616 + t2561*t6626 + t2652*t6641 + t2822*t6659 + t2897*t6695 + 0.0306*(t2787*t6659 + t2717*t6695) - 1.1312*(t2717*t6659 - 1.*t2787*t6695);
  p_output1[7]=(0.049*t1941 + t2264)*t5826 + (-0.09*t1941 - 0.049*t1979)*t6574 + t2373*t6817 + t2321*t6823 + t2497*t6831 + t2460*t6840 + t2652*t6846 + t2561*t6853 + t2897*t6859 + t2822*t6870 - 1.1312*(-1.*t2787*t6859 + t2717*t6870) + 0.0306*(t2717*t6859 + t2787*t6870);
  p_output1[8]=(0.049*t2290 + t2305)*t6823 + (-0.21*t2290 - 0.049*t2298)*t6934 + t2497*t6983 + t2460*t6997 + t2652*t7016 + t2561*t7025 + t2897*t7041 + t2822*t7056 - 1.1312*(-1.*t2787*t7041 + t2717*t7056) + 0.0306*(t2717*t7041 + t2787*t7056);
  p_output1[9]=(0.0016*t2432 + t2486)*t6983 + (-0.2707*t2432 - 0.0016*t2452)*t7233 + t2652*t7248 + t2561*t7281 + t2897*t7306 + t2822*t7315 - 1.1312*(-1.*t2787*t7306 + t2717*t7315) + 0.0306*(t2717*t7306 + t2787*t7315);
  p_output1[10]=(-0.0184*t2528 + t2560)*t7281 + (-0.7055*t2528 + 0.0184*t2551)*t7428 + t2897*t7498 + t2822*t7514 - 1.1312*(t2717*t7514 + t7519) + 0.0306*(t2787*t7514 + t7566);
  p_output1[11]=(0.0216*t2717 + t2895)*t7498 + (-1.1135*t2717 - 0.0216*t2787)*t7633 - 1.1312*(t7519 - 1.*t2717*t7633) + 0.0306*(t7566 - 1.*t2787*t7633);
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

#include "J_swingFootClearance_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_swingFootClearance_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

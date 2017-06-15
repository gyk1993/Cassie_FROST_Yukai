/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:01 GMT-04:00
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
  double t7425;
  double t12001;
  double t19852;
  double t21103;
  double t21299;
  double t20437;
  double t21323;
  double t21357;
  double t21541;
  double t16355;
  double t20505;
  double t20796;
  double t21385;
  double t21448;
  double t21548;
  double t21599;
  double t21807;
  double t21851;
  double t22406;
  double t22466;
  double t9757;
  double t21078;
  double t21262;
  double t21649;
  double t23501;
  double t23585;
  double t23741;
  double t23742;
  double t23744;
  double t23745;
  double t23747;
  double t1264;
  double t9933;
  double t9991;
  double t17020;
  double t19537;
  double t20064;
  double t23687;
  double t23750;
  double t23763;
  double t23823;
  double t23829;
  double t23841;
  double t23850;
  double t23853;
  double t23903;
  double t23909;
  double t24145;
  double t24202;
  double t24212;
  double t24290;
  double t24291;
  double t24294;
  double t24275;
  double t24295;
  double t24310;
  double t24324;
  double t24325;
  double t24326;
  double t24311;
  double t24328;
  double t24358;
  double t24646;
  double t24662;
  double t24676;
  double t1642;
  double t4591;
  double t11986;
  double t12635;
  double t23771;
  double t23960;
  double t23962;
  double t23978;
  double t24003;
  double t24019;
  double t24026;
  double t24045;
  double t24538;
  double t24695;
  double t24696;
  double t24713;
  double t24717;
  double t24736;
  double t25248;
  double t25257;
  double t25270;
  double t25187;
  double t25395;
  double t25403;
  double t25423;
  double t25424;
  double t25418;
  double t25561;
  double t25590;
  double t25618;
  double t25734;
  double t25743;
  double t25608;
  double t25753;
  double t25803;
  double t25814;
  double t25817;
  double t25833;
  double t4595;
  double t8274;
  double t23971;
  double t24059;
  double t24094;
  double t25813;
  double t25834;
  double t25837;
  double t24968;
  double t24987;
  double t25025;
  double t25068;
  double t25072;
  double t25073;
  double t25078;
  double t25081;
  double t26042;
  double t26117;
  double t25905;
  double t26091;
  double t26129;
  double t26174;
  double t26158;
  double t26160;
  double t26164;
  double t26155;
  double t26178;
  double t26150;
  double t26099;
  double t26132;
  double t26136;
  double t25891;
  double t26166;
  double t26188;
  double t26197;
  double t26391;
  double t26310;
  double t26353;
  double t26365;
  double t26293;
  double t26395;
  double t26397;
  double t26400;
  double t24700;
  double t24820;
  double t24847;
  double t25851;
  double t25840;
  double t25843;
  double t25846;
  double t26445;
  double t26512;
  double t25086;
  double t26585;
  double t26593;
  double t26598;
  double t26607;
  double t26616;
  double t26617;
  double t26620;
  double t26621;
  double t26622;
  double t26615;
  double t26637;
  double t26809;
  double t26810;
  double t26812;
  double t26816;
  double t26819;
  double t26825;
  double t26883;
  double t26884;
  double t26891;
  double t26894;
  double t26904;
  double t27046;
  double t27081;
  double t27087;
  double t27088;
  double t27092;
  double t26803;
  double t26805;
  double t26806;
  double t26863;
  double t26866;
  double t26872;
  double t27149;
  double t27156;
  double t27157;
  double t27121;
  double t27126;
  double t27141;
  double t27158;
  double t27164;
  double t27167;
  double t27181;
  double t27254;
  double t27271;
  double t27288;
  double t27301;
  double t27303;
  double t27312;
  double t27326;
  double t27337;
  double t27339;
  double t27194;
  double t27205;
  double t27220;
  double t27232;
  double t27393;
  double t27394;
  double t27396;
  double t27323;
  double t27379;
  double t27388;
  double t27389;
  double t27407;
  double t27422;
  double t27435;
  double t27515;
  double t27530;
  double t27535;
  double t27548;
  double t27549;
  double t27550;
  double t27460;
  double t27471;
  double t27495;
  double t27507;
  double t27606;
  double t27607;
  double t27609;
  double t27547;
  double t27596;
  double t27604;
  double t27605;
  double t27615;
  double t27624;
  double t27630;
  double t27682;
  double t27688;
  double t27697;
  double t27976;
  double t28019;
  double t27713;
  double t27714;
  double t27715;
  double t28170;
  double t28211;
  double t28308;
  double t26143;
  double t26208;
  double t26229;
  double t28328;
  double t27655;
  double t27661;
  double t27674;
  double t28610;
  double t28666;
  double t28779;
  double t28796;
  double t28903;
  double t28955;
  t7425 = Sin(var1[9]);
  t12001 = Sin(var1[10]);
  t19852 = Sin(var1[11]);
  t21103 = Sin(var1[12]);
  t21299 = Cos(var1[13]);
  t20437 = Cos(var1[12]);
  t21323 = -1.*t21299;
  t21357 = 1. + t21323;
  t21541 = Sin(var1[13]);
  t16355 = Cos(var1[11]);
  t20505 = -1.*t20437;
  t20796 = 1. + t20505;
  t21385 = -0.0216*t21357;
  t21448 = 0.0306*t21299;
  t21548 = 0.0177*t21541;
  t21599 = t21385 + t21448 + t21548;
  t21807 = -1.1135*t21357;
  t21851 = -1.1312*t21299;
  t22406 = 0.0522*t21541;
  t22466 = t21807 + t21851 + t22406;
  t9757 = Cos(var1[10]);
  t21078 = -0.7055*t20796;
  t21262 = -0.0184*t21103;
  t21649 = t21103*t21599;
  t23501 = t20437*t22466;
  t23585 = t21078 + t21262 + t21649 + t23501;
  t23741 = 0.0184*t20796;
  t23742 = -0.7055*t21103;
  t23744 = t20437*t21599;
  t23745 = -1.*t21103*t22466;
  t23747 = t23741 + t23742 + t23744 + t23745;
  t1264 = Cos(var1[9]);
  t9933 = -1.*t9757;
  t9991 = 1. + t9933;
  t17020 = -1. + t16355;
  t19537 = 0.0016*t17020;
  t20064 = -0.2707*t19852;
  t23687 = -1.*t19852*t23585;
  t23750 = t16355*t23747;
  t23763 = t19537 + t20064 + t23687 + t23750;
  t23823 = -1.*t16355;
  t23829 = 1. + t23823;
  t23841 = -0.2707*t23829;
  t23850 = 0.0016*t19852;
  t23853 = t16355*t23585;
  t23903 = t19852*t23747;
  t23909 = t23841 + t23850 + t23853 + t23903;
  t24145 = 0.642788*t21299;
  t24202 = -0.766044*t21541;
  t24212 = t24145 + t24202;
  t24290 = 0.766044*t21299;
  t24291 = 0.642788*t21541;
  t24294 = t24290 + t24291;
  t24275 = t21103*t24212;
  t24295 = t20437*t24294;
  t24310 = t24275 + t24295;
  t24324 = t20437*t24212;
  t24325 = -1.*t21103*t24294;
  t24326 = t24324 + t24325;
  t24311 = -1.*t19852*t24310;
  t24328 = t16355*t24326;
  t24358 = t24311 + t24328;
  t24646 = t16355*t24310;
  t24662 = t19852*t24326;
  t24676 = t24646 + t24662;
  t1642 = -1.*t1264;
  t4591 = 1. + t1642;
  t11986 = -0.21*t9991;
  t12635 = 0.049*t12001;
  t23771 = t12001*t23763;
  t23960 = t9757*t23909;
  t23962 = t11986 + t12635 + t23771 + t23960;
  t23978 = -0.049*t9991;
  t24003 = -0.21*t12001;
  t24019 = t9757*t23763;
  t24026 = -1.*t12001*t23909;
  t24045 = t23978 + t24003 + t24019 + t24026;
  t24538 = t12001*t24358;
  t24695 = t9757*t24676;
  t24696 = t24538 + t24695;
  t24713 = t9757*t24358;
  t24717 = -1.*t12001*t24676;
  t24736 = t24713 + t24717;
  t25248 = -0.766044*t21299;
  t25257 = -0.642788*t21541;
  t25270 = t25248 + t25257;
  t25187 = -1.*t21103*t24212;
  t25395 = t20437*t25270;
  t25403 = t25187 + t25395;
  t25423 = t21103*t25270;
  t25424 = t24324 + t25423;
  t25418 = t19852*t25403;
  t25561 = t16355*t25424;
  t25590 = t25418 + t25561;
  t25618 = t16355*t25403;
  t25734 = -1.*t19852*t25424;
  t25743 = t25618 + t25734;
  t25608 = -1.*t12001*t25590;
  t25753 = t9757*t25743;
  t25803 = t25608 + t25753;
  t25814 = t9757*t25590;
  t25817 = t12001*t25743;
  t25833 = t25814 + t25817;
  t4595 = -0.049*t4591;
  t8274 = -0.09*t7425;
  t23971 = -1.*t7425*t23962;
  t24059 = t1264*t24045;
  t24094 = t4595 + t8274 + t23971 + t24059;
  t25813 = t7425*t25803;
  t25834 = t1264*t25833;
  t25837 = t25813 + t25834;
  t24968 = -0.09*t4591;
  t24987 = 0.049*t7425;
  t25025 = t1264*t23962;
  t25068 = t7425*t24045;
  t25072 = t24968 + t24987 + t25025 + t25068;
  t25073 = t1264*t24696;
  t25078 = t7425*t24736;
  t25081 = t25073 + t25078;
  t26042 = Cos(var1[8]);
  t26117 = Cos(var1[6]);
  t25905 = Cos(var1[7]);
  t26091 = Sin(var1[6]);
  t26129 = Sin(var1[7]);
  t26174 = Cos(var1[5]);
  t26158 = -1.*t26117*t25905*t26042;
  t26160 = t26042*t26091*t26129;
  t26164 = t26158 + t26160;
  t26155 = Sin(var1[5]);
  t26178 = Sin(var1[8]);
  t26150 = Cos(var1[4]);
  t26099 = -1.*t25905*t26042*t26091;
  t26132 = -1.*t26117*t26042*t26129;
  t26136 = t26099 + t26132;
  t25891 = Sin(var1[4]);
  t26166 = -1.*t26155*t26164;
  t26188 = -1.*t26174*t26178;
  t26197 = t26166 + t26188;
  t26391 = Cos(var1[3]);
  t26310 = t26174*t26164;
  t26353 = -1.*t26155*t26178;
  t26365 = t26310 + t26353;
  t26293 = Sin(var1[3]);
  t26395 = t26150*t26136;
  t26397 = -1.*t25891*t26197;
  t26400 = t26395 + t26397;
  t24700 = -1.*t7425*t24696;
  t24820 = t1264*t24736;
  t24847 = t24700 + t24820;
  t25851 = t25837*t25072;
  t25840 = t1264*t25803;
  t25843 = -1.*t7425*t25833;
  t25846 = t25840 + t25843;
  t26445 = -1.*t26042;
  t26512 = 1. + t26445;
  t25086 = -1.*t25072*t25081;
  t26585 = -0.049*t26512;
  t26593 = t26042*t24094;
  t26598 = -0.0045*t26178;
  t26607 = t26585 + t26593 + t26598;
  t26616 = 0.135*t26512;
  t26617 = 0.1305*t26042;
  t26620 = -0.049*t26178;
  t26621 = -1.*t24094*t26178;
  t26622 = t26616 + t26617 + t26620 + t26621;
  t26615 = t26042*t25846*t26607;
  t26637 = -1.*t26042*t24847*t26607;
  t26809 = -1.*t25905;
  t26810 = 1. + t26809;
  t26812 = 0.135*t26810;
  t26816 = -1.*t25072*t26129;
  t26819 = t25905*t26622;
  t26825 = t26812 + t26816 + t26819;
  t26883 = t25905*t25072;
  t26884 = -0.135*t26129;
  t26891 = t26129*t26622;
  t26894 = t26883 + t26884 + t26891;
  t26904 = -1.*t25081*t26129;
  t27046 = -1.*t25905*t24847*t26178;
  t27081 = t26904 + t27046;
  t27087 = t25905*t25081;
  t27088 = -1.*t24847*t26129*t26178;
  t27092 = t27087 + t27088;
  t26803 = -1.*t25837*t26129;
  t26805 = -1.*t25905*t25846*t26178;
  t26806 = t26803 + t26805;
  t26863 = t25905*t25837;
  t26866 = -1.*t25846*t26129*t26178;
  t26872 = t26863 + t26866;
  t27149 = t26091*t26806;
  t27156 = t26117*t26872;
  t27157 = t27149 + t27156;
  t27121 = t26091*t27081;
  t27126 = t26117*t27092;
  t27141 = t27121 + t27126;
  t27158 = -0.135*t26091;
  t27164 = t26091*t26825;
  t27167 = t26117*t26894;
  t27181 = t27158 + t27164 + t27167;
  t27254 = -1.*t26117;
  t27271 = 1. + t27254;
  t27288 = 0.135*t27271;
  t27301 = t26117*t26825;
  t27303 = -1.*t26091*t26894;
  t27312 = t27288 + t27301 + t27303;
  t27326 = t26117*t27081;
  t27337 = -1.*t26091*t27092;
  t27339 = t27326 + t27337;
  t27194 = t27157*t27181;
  t27205 = t26117*t26806;
  t27220 = -1.*t26091*t26872;
  t27232 = t27205 + t27220;
  t27393 = t26042*t25846*t26155;
  t27394 = t26174*t27232;
  t27396 = t27393 + t27394;
  t27323 = -1.*t27141*t27181;
  t27379 = t26042*t24847*t26155;
  t27388 = t26174*t27339;
  t27389 = t27379 + t27388;
  t27407 = t26155*t26607;
  t27422 = t26174*t27312;
  t27435 = t27407 + t27422;
  t27515 = t26174*t26607;
  t27530 = -1.*t26155*t27312;
  t27535 = t27515 + t27530;
  t27548 = t26174*t26042*t24847;
  t27549 = -1.*t26155*t27339;
  t27550 = t27548 + t27549;
  t27460 = t27396*t27435;
  t27471 = t26174*t26042*t25846;
  t27495 = -1.*t26155*t27232;
  t27507 = t27471 + t27495;
  t27606 = t25891*t27157;
  t27607 = t26150*t27507;
  t27609 = t27606 + t27607;
  t27547 = -1.*t27389*t27435;
  t27596 = t25891*t27141;
  t27604 = t26150*t27550;
  t27605 = t27596 + t27604;
  t27615 = t25891*t27181;
  t27624 = t26150*t27535;
  t27630 = t27615 + t27624;
  t27682 = t26150*t27181;
  t27688 = -1.*t25891*t27535;
  t27697 = t27682 + t27688;
  t27976 = -1.*t26607*t26178;
  t28019 = -1.*t26042*t25846*t26607;
  t27713 = t26150*t27141;
  t27714 = -1.*t25891*t27550;
  t27715 = t27713 + t27714;
  t28170 = t26136*t27181;
  t28211 = -1.*t27157*t27181;
  t28308 = t26365*t27435;
  t26143 = t25891*t26136;
  t26208 = t26150*t26197;
  t26229 = t26143 + t26208;
  t28328 = -1.*t27396*t27435;
  t27655 = t26150*t27157;
  t27661 = -1.*t25891*t27507;
  t27674 = t27655 + t27661;
  t28610 = t26607*t26178;
  t28666 = t26042*t24847*t26607;
  t28779 = -1.*t26136*t27181;
  t28796 = t27141*t27181;
  t28903 = -1.*t26365*t27435;
  t28955 = t27389*t27435;
  p_output1[0]=t26229*var2[0] + (t26365*t26391 - 1.*t26293*t26400)*var2[1] + (t26293*t26365 + t26391*t26400)*var2[2] + (t27605*(t27460 + t27609*t27630 + t27674*t27697) + t27609*(t27547 - 1.*t27605*t27630 - 1.*t27697*t27715))*var2[3] + (t27389*(t27194 + t27460 + t27507*t27535) + t27396*(t27323 + t27547 - 1.*t27535*t27550))*var2[4] + (t27141*(t26615 + t27194 + t27232*t27312) + t27157*(t26637 + t27323 - 1.*t27312*t27339))*var2[5] + (0.135*t26042*t26129 + t24847*t26042*(t26615 + t26806*t26825 + t26872*t26894) + t25846*t26042*(t26637 - 1.*t26825*t27081 - 1.*t26894*t27092))*var2[6] + (t24847*t26042*(t25851 + t26615 - 1.*t25846*t26178*t26622) + t25846*t26042*(t25086 + t24847*t26178*t26622 + t26637))*var2[7] + (0.049 - 1.*(-1.*t24094*t24847 + t25086)*t25837 - 1.*t25081*(t24094*t25846 + t25851))*var2[8];
  p_output1[1]=t27605*var2[0] + (t26391*t27389 - 1.*t26293*t27715)*var2[1] + (t26293*t27389 + t26391*t27715)*var2[2] + (t27609*(t26229*t27630 + t26400*t27697 + t28308) + t26229*(-1.*t27609*t27630 - 1.*t27674*t27697 + t28328))*var2[3] + (t27396*(t26197*t27535 + t28170 + t28308) + t26365*(-1.*t27507*t27535 + t28211 + t28328))*var2[4] + (t27157*(t26164*t27312 + t27976 + t28170) + t26136*(-1.*t27232*t27312 + t28019 + t28211))*var2[5] + (-0.135*t27092 + t25846*t26042*(-1.*t25905*t26042*t26825 - 1.*t26042*t26129*t26894 + t27976) - 1.*t26178*(-1.*t26806*t26825 - 1.*t26872*t26894 + t28019))*var2[6] + (-0.135*t25081 + t25846*t26042*(-1.*t26042*t26622 + t27976) - 1.*t26178*(-1.*t25072*t25837 + t25846*t26178*t26622 + t28019))*var2[7] + (-0.135*t24847 + 0.1305*t25837)*var2[8] + (0.049*t24696 - 0.09*t24736 - 1.*t24045*t25803 - 1.*t23962*t25833)*var2[9] + (-0.21*t24358 + 0.049*t24676 - 1.*t23909*t25590 - 1.*t23763*t25743)*var2[10] + (0.0016*t24310 - 0.2707*t24326 - 1.*t23747*t25403 - 1.*t23585*t25424)*var2[11] + (-0.7055*t24212 - 1.*t22466*t24212 - 0.0184*t24294 - 1.*t21599*t25270)*var2[12] + 0.0513648444*var2[13];
  p_output1[2]=t27609*var2[0] + (t26391*t27396 - 1.*t26293*t27674)*var2[1] + (t26293*t27396 + t26391*t27674)*var2[2] + (t27605*(-1.*t26229*t27630 - 1.*t26400*t27697 + t28903) + t26229*(t27605*t27630 + t27697*t27715 + t28955))*var2[3] + (t27389*(-1.*t26197*t27535 + t28779 + t28903) + t26365*(t27535*t27550 + t28796 + t28955))*var2[4] + (t27141*(-1.*t26164*t27312 + t28610 + t28779) + t26136*(t27312*t27339 + t28666 + t28796))*var2[5] + (-0.135*t26872 + t24847*t26042*(t25905*t26042*t26825 + t26042*t26129*t26894 + t28610) - 1.*t26178*(t26825*t27081 + t26894*t27092 + t28666))*var2[6] + (-0.135*t25837 + t24847*t26042*(t26042*t26622 + t28610) - 1.*t26178*(t25072*t25081 - 1.*t24847*t26178*t26622 + t28666))*var2[7] + (-0.1305*t25081 - 0.135*t25846)*var2[8] + (t23962*t24696 + t24045*t24736 - 0.09*t25803 + 0.049*t25833)*var2[9] + (t23763*t24358 + t23909*t24676 + 0.049*t25590 - 0.21*t25743)*var2[10] + (t23585*t24310 + t23747*t24326 - 0.2707*t25403 + 0.0016*t25424)*var2[11] + (-0.0184*t24212 + t21599*t24212 + t22466*t24294 - 0.7055*t25270)*var2[12] + 0.0199945548*var2[13];
  p_output1[3]=t26229*var2[3] + t26365*var2[4] + t26136*var2[5] - 1.*t26178*var2[6] - 1.*t26178*var2[7] + var2[9] + var2[10] + var2[11] + var2[12] + var2[13];
  p_output1[4]=t27609*var2[3] + t27396*var2[4] + t27157*var2[5] + t25846*t26042*var2[6] + t25846*t26042*var2[7] + (-1.*t1264*t25833 - 1.*t25803*t7425)*var2[8];
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

#include "dh_LeftToeBottom_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void dh_LeftToeBottom_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

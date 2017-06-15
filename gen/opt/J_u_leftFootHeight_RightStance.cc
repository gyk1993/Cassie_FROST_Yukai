/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:05:22 GMT-04:00
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
  double t2726;
  double t1721;
  double t2016;
  double t2603;
  double t2687;
  double t2735;
  double t2975;
  double t2983;
  double t4391;
  double t5810;
  double t6088;
  double t6377;
  double t6884;
  double t6927;
  double t6961;
  double t6635;
  double t6643;
  double t6657;
  double t6963;
  double t7724;
  double t7780;
  double t7796;
  double t7846;
  double t7862;
  double t7871;
  double t8042;
  double t7326;
  double t7403;
  double t7452;
  double t7091;
  double t7101;
  double t7107;
  double t7134;
  double t7151;
  double t7153;
  double t7165;
  double t8623;
  double t8729;
  double t8811;
  double t8873;
  double t8928;
  double t8951;
  double t8986;
  double t9121;
  double t9128;
  double t9138;
  double t9219;
  double t9232;
  double t9257;
  double t9391;
  double t9546;
  double t9625;
  double t9626;
  double t9627;
  double t9673;
  double t9691;
  double t9692;
  double t9749;
  double t9751;
  double t9792;
  double t9919;
  double t10090;
  double t10132;
  double t10165;
  double t10193;
  double t10197;
  double t10199;
  double t10208;
  double t10213;
  double t10223;
  double t10257;
  double t10303;
  double t10334;
  double t10362;
  double t10592;
  double t10601;
  double t10602;
  double t1969;
  double t2006;
  double t6597;
  double t6612;
  double t7124;
  double t7136;
  double t7150;
  double t10956;
  double t10987;
  double t10993;
  double t10797;
  double t10830;
  double t10864;
  double t7825;
  double t7849;
  double t7850;
  double t8044;
  double t8048;
  double t8067;
  double t11170;
  double t11185;
  double t11192;
  double t8589;
  double t8595;
  double t8602;
  double t8955;
  double t9050;
  double t9116;
  double t10998;
  double t11037;
  double t11057;
  double t11224;
  double t11227;
  double t11273;
  double t9177;
  double t9188;
  double t9212;
  double t9412;
  double t9420;
  double t9509;
  double t9597;
  double t9613;
  double t11287;
  double t11307;
  double t11343;
  double t11357;
  double t11371;
  double t11400;
  double t9645;
  double t9648;
  double t9653;
  double t9671;
  double t9845;
  double t9971;
  double t10019;
  double t11447;
  double t11448;
  double t11450;
  double t11459;
  double t11549;
  double t11563;
  double t10169;
  double t10180;
  double t10189;
  double t10226;
  double t10274;
  double t10287;
  double t11674;
  double t11685;
  double t11707;
  double t11759;
  double t11765;
  double t11782;
  double t10552;
  double t10573;
  double t10589;
  double t11828;
  double t11833;
  double t11836;
  double t11876;
  double t11880;
  double t11930;
  double t11967;
  double t11976;
  double t11977;
  double t12089;
  double t12098;
  double t12127;
  double t12036;
  double t12041;
  double t12043;
  double t12016;
  double t12017;
  double t12020;
  double t12142;
  double t12145;
  double t12152;
  double t12158;
  double t12168;
  double t12174;
  double t12181;
  double t12192;
  double t12194;
  double t12203;
  double t12234;
  double t12267;
  double t12300;
  double t12309;
  double t12310;
  double t12319;
  double t12322;
  double t12332;
  double t12350;
  double t12353;
  double t12354;
  double t12358;
  double t12361;
  double t12364;
  double t12381;
  double t12394;
  double t12398;
  double t12447;
  double t12450;
  double t12452;
  double t12460;
  double t12476;
  double t12479;
  double t12494;
  double t12497;
  double t12498;
  double t12506;
  double t12507;
  double t12512;
  double t12557;
  double t12562;
  double t12567;
  double t12585;
  double t12597;
  double t12623;
  double t12636;
  double t12640;
  double t12687;
  double t12724;
  double t12725;
  double t12751;
  double t12785;
  double t12794;
  double t12795;
  double t12810;
  double t12813;
  double t12822;
  double t12834;
  double t12837;
  double t12846;
  double t12877;
  double t12891;
  double t12907;
  double t12998;
  double t13025;
  double t13029;
  double t13040;
  double t13054;
  double t13069;
  double t13076;
  double t13095;
  double t13096;
  double t13097;
  double t13102;
  double t13110;
  double t13121;
  double t13136;
  double t13151;
  double t13168;
  double t13190;
  double t13198;
  double t13218;
  double t13240;
  double t13259;
  double t13275;
  double t13291;
  double t13295;
  double t13384;
  double t13428;
  double t13432;
  double t13441;
  double t13456;
  double t13462;
  double t13464;
  double t13748;
  double t13755;
  double t13760;
  double t13701;
  double t13703;
  double t13711;
  double t13827;
  double t13833;
  double t13839;
  double t13906;
  double t13910;
  double t13911;
  double t13927;
  double t13932;
  double t13935;
  double t13940;
  double t13946;
  double t13963;
  double t13986;
  double t13989;
  double t14003;
  double t14030;
  double t14034;
  double t14040;
  double t14046;
  double t14076;
  double t14084;
  double t13896;
  double t13898;
  double t13901;
  double t14217;
  double t14223;
  double t14234;
  double t14241;
  double t14243;
  double t14245;
  double t14271;
  double t14275;
  double t14279;
  double t14302;
  double t14326;
  double t14338;
  double t14353;
  double t14364;
  double t14372;
  double t14375;
  double t14376;
  double t14378;
  double t14412;
  double t14417;
  double t14420;
  double t14426;
  double t14428;
  double t14442;
  double t14655;
  double t14677;
  double t14692;
  double t14721;
  double t14729;
  double t14753;
  double t14757;
  double t14761;
  double t14766;
  double t14767;
  double t14786;
  double t14787;
  double t14790;
  double t14796;
  double t14797;
  double t14800;
  double t14802;
  double t14803;
  double t14807;
  double t14892;
  double t14897;
  double t14914;
  double t14918;
  double t14930;
  double t14933;
  double t14947;
  double t14965;
  double t14972;
  double t14980;
  double t14997;
  double t15011;
  double t15015;
  double t15114;
  double t15124;
  double t15126;
  double t15133;
  double t15136;
  double t15149;
  double t15162;
  double t15184;
  double t15363;
  double t15375;
  double t15388;
  double t15219;
  t2726 = Sin(var1[3]);
  t1721 = Cos(var1[6]);
  t2016 = Cos(var1[3]);
  t2603 = Cos(var1[5]);
  t2687 = t2016*t2603;
  t2735 = Sin(var1[4]);
  t2975 = Sin(var1[5]);
  t2983 = -1.*t2726*t2735*t2975;
  t4391 = t2687 + t2983;
  t5810 = Cos(var1[4]);
  t6088 = Sin(var1[6]);
  t6377 = Cos(var1[7]);
  t6884 = -1.*t5810*t1721*t2726;
  t6927 = -1.*t4391*t6088;
  t6961 = t6884 + t6927;
  t6635 = t1721*t4391;
  t6643 = -1.*t5810*t2726*t6088;
  t6657 = t6635 + t6643;
  t6963 = Sin(var1[7]);
  t7724 = Cos(var1[8]);
  t7780 = -1.*t7724;
  t7796 = 1. + t7780;
  t7846 = Sin(var1[8]);
  t7862 = t6377*t6657;
  t7871 = t6961*t6963;
  t8042 = t7862 + t7871;
  t7326 = t2603*t2726*t2735;
  t7403 = t2016*t2975;
  t7452 = t7326 + t7403;
  t7091 = Cos(var1[9]);
  t7101 = -1.*t7091;
  t7107 = 1. + t7101;
  t7134 = Sin(var1[9]);
  t7151 = t6377*t6961;
  t7153 = -1.*t6657*t6963;
  t7165 = t7151 + t7153;
  t8623 = t7724*t7452;
  t8729 = -1.*t8042*t7846;
  t8811 = t8623 + t8729;
  t8873 = Cos(var1[10]);
  t8928 = -1.*t8873;
  t8951 = 1. + t8928;
  t8986 = Sin(var1[10]);
  t9121 = t7134*t7165;
  t9128 = t7091*t8811;
  t9138 = t9121 + t9128;
  t9219 = t7091*t7165;
  t9232 = -1.*t7134*t8811;
  t9257 = t9219 + t9232;
  t9391 = Cos(var1[11]);
  t9546 = Sin(var1[11]);
  t9625 = -1.*t8986*t9138;
  t9626 = t8873*t9257;
  t9627 = t9625 + t9626;
  t9673 = t8873*t9138;
  t9691 = t8986*t9257;
  t9692 = t9673 + t9691;
  t9749 = Cos(var1[12]);
  t9751 = -1.*t9749;
  t9792 = 1. + t9751;
  t9919 = Sin(var1[12]);
  t10090 = t9546*t9627;
  t10132 = t9391*t9692;
  t10165 = t10090 + t10132;
  t10193 = t9391*t9627;
  t10197 = -1.*t9546*t9692;
  t10199 = t10193 + t10197;
  t10208 = Cos(var1[13]);
  t10213 = -1.*t10208;
  t10223 = 1. + t10213;
  t10257 = Sin(var1[13]);
  t10303 = -1.*t9919*t10165;
  t10334 = t9749*t10199;
  t10362 = t10303 + t10334;
  t10592 = t9749*t10165;
  t10601 = t9919*t10199;
  t10602 = t10592 + t10601;
  t1969 = -1.*t1721;
  t2006 = 1. + t1969;
  t6597 = -1.*t6377;
  t6612 = 1. + t6597;
  t7124 = -0.09*t7107;
  t7136 = 0.049*t7134;
  t7150 = t7124 + t7136;
  t10956 = -1.*t2016*t1721*t2735;
  t10987 = -1.*t2016*t5810*t2975*t6088;
  t10993 = t10956 + t10987;
  t10797 = t2016*t5810*t1721*t2975;
  t10830 = -1.*t2016*t2735*t6088;
  t10864 = t10797 + t10830;
  t7825 = -0.049*t7796;
  t7849 = -0.135*t7846;
  t7850 = t7825 + t7849;
  t8044 = 0.135*t7796;
  t8048 = -0.049*t7846;
  t8067 = t8044 + t8048;
  t11170 = t6377*t10864;
  t11185 = t10993*t6963;
  t11192 = t11170 + t11185;
  t8589 = -0.049*t7107;
  t8595 = -0.09*t7134;
  t8602 = t8589 + t8595;
  t8955 = -0.049*t8951;
  t9050 = -0.21*t8986;
  t9116 = t8955 + t9050;
  t10998 = t6377*t10993;
  t11037 = -1.*t10864*t6963;
  t11057 = t10998 + t11037;
  t11224 = -1.*t2016*t5810*t2603*t7724;
  t11227 = -1.*t11192*t7846;
  t11273 = t11224 + t11227;
  t9177 = -0.21*t8951;
  t9188 = 0.049*t8986;
  t9212 = t9177 + t9188;
  t9412 = -1.*t9391;
  t9420 = 1. + t9412;
  t9509 = -0.2707*t9420;
  t9597 = 0.0016*t9546;
  t9613 = t9509 + t9597;
  t11287 = t7134*t11057;
  t11307 = t7091*t11273;
  t11343 = t11287 + t11307;
  t11357 = t7091*t11057;
  t11371 = -1.*t7134*t11273;
  t11400 = t11357 + t11371;
  t9645 = -1. + t9391;
  t9648 = 0.0016*t9645;
  t9653 = -0.2707*t9546;
  t9671 = t9648 + t9653;
  t9845 = 0.0184*t9792;
  t9971 = -0.7055*t9919;
  t10019 = t9845 + t9971;
  t11447 = -1.*t8986*t11343;
  t11448 = t8873*t11400;
  t11450 = t11447 + t11448;
  t11459 = t8873*t11343;
  t11549 = t8986*t11400;
  t11563 = t11459 + t11549;
  t10169 = -0.7055*t9792;
  t10180 = -0.0184*t9919;
  t10189 = t10169 + t10180;
  t10226 = -1.1135*t10223;
  t10274 = 0.0216*t10257;
  t10287 = t10226 + t10274;
  t11674 = t9546*t11450;
  t11685 = t9391*t11563;
  t11707 = t11674 + t11685;
  t11759 = t9391*t11450;
  t11765 = -1.*t9546*t11563;
  t11782 = t11759 + t11765;
  t10552 = -0.0216*t10223;
  t10573 = -1.1135*t10257;
  t10589 = t10552 + t10573;
  t11828 = -1.*t9919*t11707;
  t11833 = t9749*t11782;
  t11836 = t11828 + t11833;
  t11876 = t9749*t11707;
  t11880 = t9919*t11782;
  t11930 = t11876 + t11880;
  t11967 = t2016*t2603*t2735;
  t11976 = -1.*t2726*t2975;
  t11977 = t11967 + t11976;
  t12089 = t1721*t6377*t11977;
  t12098 = -1.*t11977*t6088*t6963;
  t12127 = t12089 + t12098;
  t12036 = t2603*t2726;
  t12041 = t2016*t2735*t2975;
  t12043 = t12036 + t12041;
  t12016 = -1.*t6377*t11977*t6088;
  t12017 = -1.*t1721*t11977*t6963;
  t12020 = t12016 + t12017;
  t12142 = t7724*t12043;
  t12145 = -1.*t12127*t7846;
  t12152 = t12142 + t12145;
  t12158 = t7134*t12020;
  t12168 = t7091*t12152;
  t12174 = t12158 + t12168;
  t12181 = t7091*t12020;
  t12192 = -1.*t7134*t12152;
  t12194 = t12181 + t12192;
  t12203 = -1.*t8986*t12174;
  t12234 = t8873*t12194;
  t12267 = t12203 + t12234;
  t12300 = t8873*t12174;
  t12309 = t8986*t12194;
  t12310 = t12300 + t12309;
  t12319 = t9546*t12267;
  t12322 = t9391*t12310;
  t12332 = t12319 + t12322;
  t12350 = t9391*t12267;
  t12353 = -1.*t9546*t12310;
  t12354 = t12350 + t12353;
  t12358 = -1.*t9919*t12332;
  t12361 = t9749*t12354;
  t12364 = t12358 + t12361;
  t12381 = t9749*t12332;
  t12394 = t9919*t12354;
  t12398 = t12381 + t12394;
  t12447 = t2016*t5810*t1721;
  t12450 = -1.*t12043*t6088;
  t12452 = t12447 + t12450;
  t12460 = -1.*t1721*t12043;
  t12476 = -1.*t2016*t5810*t6088;
  t12479 = t12460 + t12476;
  t12494 = t6377*t12452;
  t12497 = t12479*t6963;
  t12498 = t12494 + t12497;
  t12506 = t6377*t12479;
  t12507 = -1.*t12452*t6963;
  t12512 = t12506 + t12507;
  t12557 = t7134*t12512;
  t12562 = -1.*t7091*t12498*t7846;
  t12567 = t12557 + t12562;
  t12585 = t7091*t12512;
  t12597 = t7134*t12498*t7846;
  t12623 = t12585 + t12597;
  t12636 = -1.*t8986*t12567;
  t12640 = t8873*t12623;
  t12687 = t12636 + t12640;
  t12724 = t8873*t12567;
  t12725 = t8986*t12623;
  t12751 = t12724 + t12725;
  t12785 = t9546*t12687;
  t12794 = t9391*t12751;
  t12795 = t12785 + t12794;
  t12810 = t9391*t12687;
  t12813 = -1.*t9546*t12751;
  t12822 = t12810 + t12813;
  t12834 = -1.*t9919*t12795;
  t12837 = t9749*t12822;
  t12846 = t12834 + t12837;
  t12877 = t9749*t12795;
  t12891 = t9919*t12822;
  t12907 = t12877 + t12891;
  t12998 = t1721*t12043;
  t13025 = t2016*t5810*t6088;
  t13029 = t12998 + t13025;
  t13040 = -1.*t13029*t6963;
  t13054 = t12494 + t13040;
  t13069 = -1.*t6377*t13029;
  t13076 = t13069 + t12507;
  t13095 = t7134*t13076;
  t13096 = -1.*t7091*t13054*t7846;
  t13097 = t13095 + t13096;
  t13102 = t7091*t13076;
  t13110 = t7134*t13054*t7846;
  t13121 = t13102 + t13110;
  t13136 = -1.*t8986*t13097;
  t13151 = t8873*t13121;
  t13168 = t13136 + t13151;
  t13190 = t8873*t13097;
  t13198 = t8986*t13121;
  t13218 = t13190 + t13198;
  t13240 = t9546*t13168;
  t13259 = t9391*t13218;
  t13275 = t13240 + t13259;
  t13291 = t9391*t13168;
  t13295 = -1.*t9546*t13218;
  t13384 = t13291 + t13295;
  t13428 = -1.*t9919*t13275;
  t13432 = t9749*t13384;
  t13441 = t13428 + t13432;
  t13456 = t9749*t13275;
  t13462 = t9919*t13384;
  t13464 = t13456 + t13462;
  t13748 = t6377*t13029;
  t13755 = t12452*t6963;
  t13760 = t13748 + t13755;
  t13701 = -1.*t2016*t2603*t2735;
  t13703 = t2726*t2975;
  t13711 = t13701 + t13703;
  t13827 = -1.*t7724*t13760;
  t13833 = -1.*t13711*t7846;
  t13839 = t13827 + t13833;
  t13906 = -1.*t8873*t7134*t13839;
  t13910 = -1.*t7091*t8986*t13839;
  t13911 = t13906 + t13910;
  t13927 = t7091*t8873*t13839;
  t13932 = -1.*t7134*t8986*t13839;
  t13935 = t13927 + t13932;
  t13940 = t9546*t13911;
  t13946 = t9391*t13935;
  t13963 = t13940 + t13946;
  t13986 = t9391*t13911;
  t13989 = -1.*t9546*t13935;
  t14003 = t13986 + t13989;
  t14030 = -1.*t9919*t13963;
  t14034 = t9749*t14003;
  t14040 = t14030 + t14034;
  t14046 = t9749*t13963;
  t14076 = t9919*t14003;
  t14084 = t14046 + t14076;
  t13896 = t7724*t13711;
  t13898 = -1.*t13760*t7846;
  t13901 = t13896 + t13898;
  t14217 = -1.*t7134*t13054;
  t14223 = -1.*t7091*t13901;
  t14234 = t14217 + t14223;
  t14241 = t7091*t13054;
  t14243 = -1.*t7134*t13901;
  t14245 = t14241 + t14243;
  t14271 = t8986*t14234;
  t14275 = t8873*t14245;
  t14279 = t14271 + t14275;
  t14302 = t8873*t14234;
  t14326 = -1.*t8986*t14245;
  t14338 = t14302 + t14326;
  t14353 = -1.*t9546*t14279;
  t14364 = t9391*t14338;
  t14372 = t14353 + t14364;
  t14375 = t9391*t14279;
  t14376 = t9546*t14338;
  t14378 = t14375 + t14376;
  t14412 = t9919*t14372;
  t14417 = t9749*t14378;
  t14420 = t14412 + t14417;
  t14426 = t9749*t14372;
  t14428 = -1.*t9919*t14378;
  t14442 = t14426 + t14428;
  t14655 = t7134*t13054;
  t14677 = t7091*t13901;
  t14692 = t14655 + t14677;
  t14721 = -1.*t8986*t14692;
  t14729 = t14721 + t14275;
  t14753 = -1.*t8873*t14692;
  t14757 = t14753 + t14326;
  t14761 = -1.*t9546*t14729;
  t14766 = t9391*t14757;
  t14767 = t14761 + t14766;
  t14786 = t9391*t14729;
  t14787 = t9546*t14757;
  t14790 = t14786 + t14787;
  t14796 = t9919*t14767;
  t14797 = t9749*t14790;
  t14800 = t14796 + t14797;
  t14802 = t9749*t14767;
  t14803 = -1.*t9919*t14790;
  t14807 = t14802 + t14803;
  t14892 = t8873*t14692;
  t14897 = t8986*t14245;
  t14914 = t14892 + t14897;
  t14918 = -1.*t9391*t14914;
  t14930 = t14761 + t14918;
  t14933 = -1.*t9546*t14914;
  t14947 = t14786 + t14933;
  t14965 = t9919*t14930;
  t14972 = t9749*t14947;
  t14980 = t14965 + t14972;
  t14997 = t9749*t14930;
  t15011 = -1.*t9919*t14947;
  t15015 = t14997 + t15011;
  t15114 = t9546*t14729;
  t15124 = t9391*t14914;
  t15126 = t15114 + t15124;
  t15133 = -1.*t9919*t15126;
  t15136 = t15133 + t14972;
  t15149 = -1.*t9749*t15126;
  t15162 = t15149 + t15011;
  t15184 = -1.*t10257*t15136;
  t15363 = t9749*t15126;
  t15375 = t9919*t14947;
  t15388 = t15363 + t15375;
  t15219 = t10208*t15136;
  p_output1[0]=1.;
  p_output1[1]=t10019*t10165 + t10189*t10199 + t10287*t10362 + t10589*t10602 + 0.0306*(t10257*t10362 + t10208*t10602) - 1.1312*(t10208*t10362 - 1.*t10257*t10602) + 0.135*t2006*t4391 + 0.135*t2726*t5810*t6088 + 0.135*t6612*t6657 - 0.135*t6961*t6963 + t7150*t7165 + t7452*t7850 + 0.1305*(t7452*t7846 + t7724*t8042) + t8042*t8067 + t8602*t8811 + t9116*t9138 + t9212*t9257 + t9613*t9627 + t9671*t9692;
  p_output1[2]=t10019*t11707 + t10189*t11782 + t10287*t11836 + t10589*t11930 + 0.0306*(t10257*t11836 + t10208*t11930) - 1.1312*(t10208*t11836 - 1.*t10257*t11930) + 0.135*t2006*t2016*t2975*t5810 + 0.135*t2016*t2735*t6088 + 0.135*t10864*t6612 - 0.135*t10993*t6963 + t11057*t7150 + 0.1305*(t11192*t7724 - 1.*t2016*t2603*t5810*t7846) - 1.*t2016*t2603*t5810*t7850 + t11192*t8067 + t11273*t8602 + t11343*t9116 + t11400*t9212 + t11450*t9613 + t11563*t9671;
  p_output1[3]=t10019*t12332 + t10189*t12354 + t10287*t12364 + t10589*t12398 + 0.0306*(t10257*t12364 + t10208*t12398) - 1.1312*(t10208*t12364 - 1.*t10257*t12398) + 0.135*t11977*t2006 + 0.135*t11977*t1721*t6612 + 0.135*t11977*t6088*t6963 + t12020*t7150 + 0.1305*(t12127*t7724 + t12043*t7846) + t12043*t7850 + t12127*t8067 + t12152*t8602 + t12174*t9116 + t12194*t9212 + t12267*t9613 + t12310*t9671;
  p_output1[4]=t10019*t12795 + t10189*t12822 + t10287*t12846 + t10589*t12907 + 0.0306*(t10257*t12846 + t10208*t12907) - 1.1312*(t10208*t12846 - 1.*t10257*t12907) - 0.135*t1721*t2016*t5810 + 0.135*t12043*t6088 + 0.135*t12452*t6612 - 0.135*t12479*t6963 + t12512*t7150 + 0.1305*t12498*t7724 + t12498*t8067 - 1.*t12498*t7846*t8602 + t12567*t9116 + t12623*t9212 + t12687*t9613 + t12751*t9671;
  p_output1[5]=t10019*t13275 + t10189*t13384 + t10287*t13441 + t10589*t13464 + 0.0306*(t10257*t13441 + t10208*t13464) - 1.1312*(t10208*t13441 - 1.*t10257*t13464) - 0.135*t12452*t6377 + 0.135*t13029*t6963 + t13076*t7150 + 0.1305*t13054*t7724 + t13054*t8067 - 1.*t13054*t7846*t8602 + t13097*t9116 + t13121*t9212 + t13168*t9613 + t13218*t9671;
  p_output1[6]=0.1305*t13901 + t10019*t13963 + t10189*t14003 + t10287*t14040 + t10589*t14084 + 0.0306*(t10257*t14040 + t10208*t14084) - 1.1312*(t10208*t14040 - 1.*t10257*t14084) + t13760*(-0.049*t7724 + 0.135*t7846) + t13711*(-0.135*t7724 + t8048) + t13839*t8602 + t13839*t7091*t9116 - 1.*t13839*t7134*t9212 + t13911*t9613 + t13935*t9671;
  p_output1[7]=t10189*t14372 + t10019*t14378 + t10589*t14420 + t10287*t14442 - 1.1312*(-1.*t10257*t14420 + t10208*t14442) + 0.0306*(t10208*t14420 + t10257*t14442) + t13901*(-0.09*t7091 - 0.049*t7134) + t13054*(0.049*t7091 + t8595) + t14245*t9116 + t14234*t9212 + t14338*t9613 + t14279*t9671;
  p_output1[8]=t10189*t14767 + t10019*t14790 + t10589*t14800 + t10287*t14807 - 1.1312*(-1.*t10257*t14800 + t10208*t14807) + 0.0306*(t10208*t14800 + t10257*t14807) + t14692*(-0.21*t8873 - 0.049*t8986) + t14245*(0.049*t8873 + t9050) + t14757*t9613 + t14729*t9671;
  p_output1[9]=t10189*t14930 + t10019*t14947 + t10589*t14980 + t10287*t15015 - 1.1312*(-1.*t10257*t14980 + t10208*t15015) + 0.0306*(t10208*t14980 + t10257*t15015) + t14914*(-0.2707*t9391 - 0.0016*t9546) + t14729*(0.0016*t9391 + t9653);
  p_output1[10]=t10589*t15136 + t10287*t15162 - 1.1312*(t10208*t15162 + t15184) + 0.0306*(t10257*t15162 + t15219) + t15126*(-0.7055*t9749 + 0.0184*t9919) + t14947*(-0.0184*t9749 + t9971);
  p_output1[11]=(0.0216*t10208 + t10573)*t15136 + (-1.1135*t10208 - 0.0216*t10257)*t15388 - 1.1312*(t15184 - 1.*t10208*t15388) + 0.0306*(t15219 - 1.*t10257*t15388);
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

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

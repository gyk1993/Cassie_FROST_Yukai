/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 13:37:03 GMT-04:00
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
  double t11;
  double t1902;
  double t987;
  double t1187;
  double t1519;
  double t3854;
  double t3353;
  double t3493;
  double t3665;
  double t2854;
  double t4013;
  double t4049;
  double t4072;
  double t431;
  double t451;
  double t525;
  double t703;
  double t28;
  double t4562;
  double t4585;
  double t4611;
  double t4097;
  double t4110;
  double t4120;
  double t4133;
  double t4263;
  double t4313;
  double t4329;
  double t4865;
  double t5054;
  double t5167;
  double t5320;
  double t5357;
  double t5374;
  double t5497;
  double t5522;
  double t5530;
  double t5535;
  double t5776;
  double t5778;
  double t5855;
  double t6056;
  double t6059;
  double t6068;
  double t6155;
  double t6339;
  double t6395;
  double t6414;
  double t6478;
  double t6481;
  double t6485;
  double t6498;
  double t6529;
  double t6551;
  double t6599;
  double t6639;
  double t6645;
  double t6660;
  double t6704;
  double t6719;
  double t6724;
  double t6737;
  double t6739;
  double t6750;
  double t6753;
  double t6807;
  double t6818;
  double t6841;
  double t6967;
  double t6975;
  double t6978;
  double t2097;
  double t7297;
  double t7359;
  double t7581;
  double t7586;
  double t7610;
  double t7515;
  double t7516;
  double t7525;
  double t7651;
  double t7851;
  double t7853;
  double t7854;
  double t7856;
  double t7877;
  double t7884;
  double t7890;
  double t7688;
  double t7704;
  double t7743;
  double t7785;
  double t7816;
  double t7830;
  double t7837;
  double t7992;
  double t7994;
  double t8000;
  double t8024;
  double t8025;
  double t8029;
  double t8041;
  double t8053;
  double t8055;
  double t8059;
  double t8076;
  double t8079;
  double t8082;
  double t8103;
  double t8109;
  double t8112;
  double t8144;
  double t8160;
  double t8170;
  double t8189;
  double t8224;
  double t8247;
  double t8278;
  double t8289;
  double t8310;
  double t8314;
  double t8364;
  double t8397;
  double t8401;
  double t8408;
  double t8452;
  double t8454;
  double t8455;
  double t8466;
  double t8476;
  double t8477;
  double t8485;
  double t8506;
  double t8508;
  double t8515;
  double t8543;
  double t8546;
  double t8547;
  double t1099;
  double t1180;
  double t702;
  double t807;
  double t977;
  double t8609;
  double t1617;
  double t1659;
  double t1811;
  double t1850;
  double t8624;
  double t2234;
  double t2421;
  double t2429;
  double t2682;
  double t8639;
  double t8642;
  double t8643;
  double t2988;
  double t3130;
  double t3312;
  double t3318;
  double t3888;
  double t3903;
  double t4123;
  double t4175;
  double t4261;
  double t8654;
  double t8655;
  double t8658;
  double t8680;
  double t8681;
  double t8682;
  double t4394;
  double t4399;
  double t4400;
  double t8622;
  double t8629;
  double t8631;
  double t8695;
  double t8696;
  double t8706;
  double t4714;
  double t4783;
  double t4790;
  double t5434;
  double t5507;
  double t5516;
  double t8687;
  double t8688;
  double t8692;
  double t8732;
  double t8737;
  double t8739;
  double t5659;
  double t5692;
  double t5735;
  double t6126;
  double t6241;
  double t6244;
  double t8747;
  double t8748;
  double t8752;
  double t8767;
  double t8780;
  double t8787;
  double t6456;
  double t6474;
  double t6477;
  double t6556;
  double t6603;
  double t6611;
  double t8795;
  double t8798;
  double t8802;
  double t8808;
  double t8809;
  double t8810;
  double t6680;
  double t6688;
  double t6699;
  double t6751;
  double t6765;
  double t6767;
  double t8813;
  double t8816;
  double t8825;
  double t8837;
  double t8842;
  double t8843;
  double t6873;
  double t6893;
  double t6924;
  double t8853;
  double t8854;
  double t8863;
  double t8872;
  double t8874;
  double t8894;
  double t7329;
  double t7343;
  double t7367;
  double t7409;
  double t7484;
  double t7500;
  double t7660;
  double t7675;
  double t7764;
  double t7786;
  double t7813;
  double t9006;
  double t9007;
  double t9010;
  double t8935;
  double t8939;
  double t8966;
  double t7855;
  double t7858;
  double t7864;
  double t7895;
  double t7925;
  double t7937;
  double t9034;
  double t9049;
  double t9051;
  double t7964;
  double t7965;
  double t7987;
  double t8036;
  double t8045;
  double t8051;
  double t9023;
  double t9025;
  double t9028;
  double t9110;
  double t9115;
  double t9117;
  double t8062;
  double t8065;
  double t8074;
  double t8135;
  double t8154;
  double t8157;
  double t9125;
  double t9127;
  double t9132;
  double t9144;
  double t9169;
  double t9178;
  double t8195;
  double t8196;
  double t8203;
  double t8349;
  double t8385;
  double t8392;
  double t9185;
  double t9187;
  double t9193;
  double t9199;
  double t9205;
  double t9206;
  double t8413;
  double t8421;
  double t8433;
  double t8479;
  double t8489;
  double t8494;
  double t9217;
  double t9226;
  double t9227;
  double t9234;
  double t9241;
  double t9242;
  double t8518;
  double t8526;
  double t8533;
  double t9246;
  double t9250;
  double t9251;
  double t9259;
  double t9263;
  double t9270;
  double t9323;
  double t9324;
  double t9330;
  double t9341;
  double t9351;
  double t9352;
  double t9358;
  double t9359;
  double t9367;
  double t9314;
  double t9318;
  double t9320;
  double t9415;
  double t9416;
  double t9417;
  double t9395;
  double t9397;
  double t9406;
  double t9455;
  double t9464;
  double t9466;
  double t9481;
  double t9482;
  double t9485;
  double t9512;
  double t9514;
  double t9518;
  double t9532;
  double t9538;
  double t9539;
  double t9583;
  double t9587;
  double t9590;
  double t9608;
  double t9618;
  double t9623;
  double t9649;
  double t9664;
  double t9665;
  double t9683;
  double t9686;
  double t9694;
  double t9709;
  double t9714;
  double t9736;
  double t9863;
  double t9874;
  double t9878;
  double t9832;
  double t9837;
  double t9846;
  double t9909;
  double t9912;
  double t9927;
  double t9883;
  double t9886;
  double t9888;
  double t9963;
  double t9964;
  double t9974;
  double t9999;
  double t10000;
  double t10001;
  double t10013;
  double t10028;
  double t10058;
  double t10081;
  double t10105;
  double t10125;
  double t10158;
  double t10173;
  double t10174;
  double t10195;
  double t10196;
  double t10198;
  double t10204;
  double t10207;
  double t10210;
  double t10229;
  double t10234;
  double t10238;
  double t10243;
  double t10254;
  double t10260;
  t11 = Cos(var1[4]);
  t1902 = Sin(var1[5]);
  t987 = Sin(var1[14]);
  t1187 = Sin(var1[4]);
  t1519 = Cos(var1[14]);
  t3854 = Sin(var1[15]);
  t3353 = t987*t1187;
  t3493 = -1.*t1519*t11*t1902;
  t3665 = t3353 + t3493;
  t2854 = Cos(var1[15]);
  t4013 = t1519*t1187;
  t4049 = t11*t987*t1902;
  t4072 = t4013 + t4049;
  t431 = Cos(var1[16]);
  t451 = -1.*t431;
  t525 = 1. + t451;
  t703 = Sin(var1[16]);
  t28 = Cos(var1[5]);
  t4562 = t2854*t3665;
  t4585 = t3854*t4072;
  t4611 = t4562 + t4585;
  t4097 = Cos(var1[17]);
  t4110 = -1.*t4097;
  t4120 = 1. + t4110;
  t4133 = Sin(var1[17]);
  t4263 = -1.*t3854*t3665;
  t4313 = t2854*t4072;
  t4329 = t4263 + t4313;
  t4865 = t431*t11*t28;
  t5054 = -1.*t703*t4611;
  t5167 = t4865 + t5054;
  t5320 = Cos(var1[18]);
  t5357 = -1.*t5320;
  t5374 = 1. + t5357;
  t5497 = Sin(var1[18]);
  t5522 = t4133*t4329;
  t5530 = t4097*t5167;
  t5535 = t5522 + t5530;
  t5776 = t4097*t4329;
  t5778 = -1.*t4133*t5167;
  t5855 = t5776 + t5778;
  t6056 = Cos(var1[19]);
  t6059 = -1.*t6056;
  t6068 = 1. + t6059;
  t6155 = Sin(var1[19]);
  t6339 = -1.*t5497*t5535;
  t6395 = t5320*t5855;
  t6414 = t6339 + t6395;
  t6478 = t5320*t5535;
  t6481 = t5497*t5855;
  t6485 = t6478 + t6481;
  t6498 = Cos(var1[20]);
  t6529 = -1.*t6498;
  t6551 = 1. + t6529;
  t6599 = Sin(var1[20]);
  t6639 = t6155*t6414;
  t6645 = t6056*t6485;
  t6660 = t6639 + t6645;
  t6704 = t6056*t6414;
  t6719 = -1.*t6155*t6485;
  t6724 = t6704 + t6719;
  t6737 = Cos(var1[21]);
  t6739 = -1.*t6737;
  t6750 = 1. + t6739;
  t6753 = Sin(var1[21]);
  t6807 = -1.*t6599*t6660;
  t6818 = t6498*t6724;
  t6841 = t6807 + t6818;
  t6967 = t6498*t6660;
  t6975 = t6599*t6724;
  t6978 = t6967 + t6975;
  t2097 = Cos(var1[6]);
  t7297 = Sin(var1[6]);
  t7359 = Cos(var1[7]);
  t7581 = t2097*t1187;
  t7586 = t11*t1902*t7297;
  t7610 = t7581 + t7586;
  t7515 = -1.*t11*t2097*t1902;
  t7516 = t1187*t7297;
  t7525 = t7515 + t7516;
  t7651 = Sin(var1[7]);
  t7851 = Cos(var1[8]);
  t7853 = -1.*t7851;
  t7854 = 1. + t7853;
  t7856 = Sin(var1[8]);
  t7877 = t7359*t7525;
  t7884 = t7610*t7651;
  t7890 = t7877 + t7884;
  t7688 = Cos(var1[9]);
  t7704 = -1.*t7688;
  t7743 = 1. + t7704;
  t7785 = Sin(var1[9]);
  t7816 = t7359*t7610;
  t7830 = -1.*t7525*t7651;
  t7837 = t7816 + t7830;
  t7992 = t11*t28*t7851;
  t7994 = -1.*t7890*t7856;
  t8000 = t7992 + t7994;
  t8024 = Cos(var1[10]);
  t8025 = -1.*t8024;
  t8029 = 1. + t8025;
  t8041 = Sin(var1[10]);
  t8053 = t7785*t7837;
  t8055 = t7688*t8000;
  t8059 = t8053 + t8055;
  t8076 = t7688*t7837;
  t8079 = -1.*t7785*t8000;
  t8082 = t8076 + t8079;
  t8103 = Cos(var1[11]);
  t8109 = -1.*t8103;
  t8112 = 1. + t8109;
  t8144 = Sin(var1[11]);
  t8160 = -1.*t8041*t8059;
  t8170 = t8024*t8082;
  t8189 = t8160 + t8170;
  t8224 = t8024*t8059;
  t8247 = t8041*t8082;
  t8278 = t8224 + t8247;
  t8289 = Cos(var1[12]);
  t8310 = -1.*t8289;
  t8314 = 1. + t8310;
  t8364 = Sin(var1[12]);
  t8397 = t8144*t8189;
  t8401 = t8103*t8278;
  t8408 = t8397 + t8401;
  t8452 = t8103*t8189;
  t8454 = -1.*t8144*t8278;
  t8455 = t8452 + t8454;
  t8466 = Cos(var1[13]);
  t8476 = -1.*t8466;
  t8477 = 1. + t8476;
  t8485 = Sin(var1[13]);
  t8506 = -1.*t8364*t8408;
  t8508 = t8289*t8455;
  t8515 = t8506 + t8508;
  t8543 = t8289*t8408;
  t8546 = t8364*t8455;
  t8547 = t8543 + t8546;
  t1099 = 0.135*t987;
  t1180 = 0. + t1099;
  t702 = -0.049*t525;
  t807 = 0.135*t703;
  t977 = 0. + t702 + t807;
  t8609 = Cos(var1[3]);
  t1617 = -1.*t1519;
  t1659 = 1. + t1617;
  t1811 = -0.135*t1659;
  t1850 = 0. + t1811;
  t8624 = Sin(var1[3]);
  t2234 = -1.*t2097;
  t2421 = 1. + t2234;
  t2429 = 0.135*t2421;
  t2682 = 0. + t2429;
  t8639 = t28*t8624;
  t8642 = t8609*t1187*t1902;
  t8643 = t8639 + t8642;
  t2988 = -1.*t2854;
  t3130 = 1. + t2988;
  t3312 = -0.135*t3130;
  t3318 = 0. + t3312;
  t3888 = 0.135*t3854;
  t3903 = 0. + t3888;
  t4123 = -0.09*t4120;
  t4175 = 0.049*t4133;
  t4261 = 0. + t4123 + t4175;
  t8654 = t8609*t11*t987;
  t8655 = t1519*t8643;
  t8658 = t8654 + t8655;
  t8680 = t1519*t8609*t11;
  t8681 = -1.*t987*t8643;
  t8682 = t8680 + t8681;
  t4394 = -0.135*t525;
  t4399 = -0.049*t703;
  t4400 = 0. + t4394 + t4399;
  t8622 = -1.*t8609*t28*t1187;
  t8629 = t8624*t1902;
  t8631 = t8622 + t8629;
  t8695 = t2854*t8658;
  t8696 = t3854*t8682;
  t8706 = t8695 + t8696;
  t4714 = -0.049*t4120;
  t4783 = -0.09*t4133;
  t4790 = 0. + t4714 + t4783;
  t5434 = -0.049*t5374;
  t5507 = -0.21*t5497;
  t5516 = 0. + t5434 + t5507;
  t8687 = -1.*t3854*t8658;
  t8688 = t2854*t8682;
  t8692 = t8687 + t8688;
  t8732 = t431*t8631;
  t8737 = -1.*t703*t8706;
  t8739 = t8732 + t8737;
  t5659 = -0.21*t5374;
  t5692 = 0.049*t5497;
  t5735 = 0. + t5659 + t5692;
  t6126 = -0.2707*t6068;
  t6241 = 0.0016*t6155;
  t6244 = 0. + t6126 + t6241;
  t8747 = t4133*t8692;
  t8748 = t4097*t8739;
  t8752 = t8747 + t8748;
  t8767 = t4097*t8692;
  t8780 = -1.*t4133*t8739;
  t8787 = t8767 + t8780;
  t6456 = -0.0016*t6068;
  t6474 = -0.2707*t6155;
  t6477 = 0. + t6456 + t6474;
  t6556 = 0.0184*t6551;
  t6603 = -0.7055*t6599;
  t6611 = 0. + t6556 + t6603;
  t8795 = -1.*t5497*t8752;
  t8798 = t5320*t8787;
  t8802 = t8795 + t8798;
  t8808 = t5320*t8752;
  t8809 = t5497*t8787;
  t8810 = t8808 + t8809;
  t6680 = -0.7055*t6551;
  t6688 = -0.0184*t6599;
  t6699 = 0. + t6680 + t6688;
  t6751 = -1.1135*t6750;
  t6765 = 0.0216*t6753;
  t6767 = 0. + t6751 + t6765;
  t8813 = t6155*t8802;
  t8816 = t6056*t8810;
  t8825 = t8813 + t8816;
  t8837 = t6056*t8802;
  t8842 = -1.*t6155*t8810;
  t8843 = t8837 + t8842;
  t6873 = -0.0216*t6750;
  t6893 = -1.1135*t6753;
  t6924 = 0. + t6873 + t6893;
  t8853 = -1.*t6599*t8825;
  t8854 = t6498*t8843;
  t8863 = t8853 + t8854;
  t8872 = t6498*t8825;
  t8874 = t6599*t8843;
  t8894 = t8872 + t8874;
  t7329 = -0.135*t7297;
  t7343 = 0. + t7329;
  t7367 = -1.*t7359;
  t7409 = 1. + t7367;
  t7484 = 0.135*t7409;
  t7500 = 0. + t7484;
  t7660 = -0.135*t7651;
  t7675 = 0. + t7660;
  t7764 = -0.09*t7743;
  t7786 = 0.049*t7785;
  t7813 = 0. + t7764 + t7786;
  t9006 = t8609*t11*t2097;
  t9007 = -1.*t8643*t7297;
  t9010 = t9006 + t9007;
  t8935 = t2097*t8643;
  t8939 = t8609*t11*t7297;
  t8966 = t8935 + t8939;
  t7855 = -0.049*t7854;
  t7858 = -0.135*t7856;
  t7864 = 0. + t7855 + t7858;
  t7895 = 0.135*t7854;
  t7925 = -0.049*t7856;
  t7937 = 0. + t7895 + t7925;
  t9034 = t7359*t8966;
  t9049 = t9010*t7651;
  t9051 = t9034 + t9049;
  t7964 = -0.049*t7743;
  t7965 = -0.09*t7785;
  t7987 = 0. + t7964 + t7965;
  t8036 = -0.049*t8029;
  t8045 = -0.21*t8041;
  t8051 = 0. + t8036 + t8045;
  t9023 = t7359*t9010;
  t9025 = -1.*t8966*t7651;
  t9028 = t9023 + t9025;
  t9110 = t7851*t8631;
  t9115 = -1.*t9051*t7856;
  t9117 = t9110 + t9115;
  t8062 = -0.21*t8029;
  t8065 = 0.049*t8041;
  t8074 = 0. + t8062 + t8065;
  t8135 = -0.2707*t8112;
  t8154 = 0.0016*t8144;
  t8157 = 0. + t8135 + t8154;
  t9125 = t7785*t9028;
  t9127 = t7688*t9117;
  t9132 = t9125 + t9127;
  t9144 = t7688*t9028;
  t9169 = -1.*t7785*t9117;
  t9178 = t9144 + t9169;
  t8195 = -0.0016*t8112;
  t8196 = -0.2707*t8144;
  t8203 = 0. + t8195 + t8196;
  t8349 = 0.0184*t8314;
  t8385 = -0.7055*t8364;
  t8392 = 0. + t8349 + t8385;
  t9185 = -1.*t8041*t9132;
  t9187 = t8024*t9178;
  t9193 = t9185 + t9187;
  t9199 = t8024*t9132;
  t9205 = t8041*t9178;
  t9206 = t9199 + t9205;
  t8413 = -0.7055*t8314;
  t8421 = -0.0184*t8364;
  t8433 = 0. + t8413 + t8421;
  t8479 = -1.1135*t8477;
  t8489 = 0.0216*t8485;
  t8494 = 0. + t8479 + t8489;
  t9217 = t8144*t9193;
  t9226 = t8103*t9206;
  t9227 = t9217 + t9226;
  t9234 = t8103*t9193;
  t9241 = -1.*t8144*t9206;
  t9242 = t9234 + t9241;
  t8518 = -0.0216*t8477;
  t8526 = -1.1135*t8485;
  t8533 = 0. + t8518 + t8526;
  t9246 = -1.*t8364*t9227;
  t9250 = t8289*t9242;
  t9251 = t9246 + t9250;
  t9259 = t8289*t9227;
  t9263 = t8364*t9242;
  t9270 = t9259 + t9263;
  t9323 = t8609*t28;
  t9324 = -1.*t8624*t1187*t1902;
  t9330 = t9323 + t9324;
  t9341 = -1.*t11*t987*t8624;
  t9351 = t1519*t9330;
  t9352 = t9341 + t9351;
  t9358 = -1.*t1519*t11*t8624;
  t9359 = -1.*t987*t9330;
  t9367 = t9358 + t9359;
  t9314 = t28*t8624*t1187;
  t9318 = t8609*t1902;
  t9320 = t9314 + t9318;
  t9415 = t2854*t9352;
  t9416 = t3854*t9367;
  t9417 = t9415 + t9416;
  t9395 = -1.*t3854*t9352;
  t9397 = t2854*t9367;
  t9406 = t9395 + t9397;
  t9455 = t431*t9320;
  t9464 = -1.*t703*t9417;
  t9466 = t9455 + t9464;
  t9481 = t4133*t9406;
  t9482 = t4097*t9466;
  t9485 = t9481 + t9482;
  t9512 = t4097*t9406;
  t9514 = -1.*t4133*t9466;
  t9518 = t9512 + t9514;
  t9532 = -1.*t5497*t9485;
  t9538 = t5320*t9518;
  t9539 = t9532 + t9538;
  t9583 = t5320*t9485;
  t9587 = t5497*t9518;
  t9590 = t9583 + t9587;
  t9608 = t6155*t9539;
  t9618 = t6056*t9590;
  t9623 = t9608 + t9618;
  t9649 = t6056*t9539;
  t9664 = -1.*t6155*t9590;
  t9665 = t9649 + t9664;
  t9683 = -1.*t6599*t9623;
  t9686 = t6498*t9665;
  t9694 = t9683 + t9686;
  t9709 = t6498*t9623;
  t9714 = t6599*t9665;
  t9736 = t9709 + t9714;
  t9863 = -1.*t11*t2097*t8624;
  t9874 = -1.*t9330*t7297;
  t9878 = t9863 + t9874;
  t9832 = t2097*t9330;
  t9837 = -1.*t11*t8624*t7297;
  t9846 = t9832 + t9837;
  t9909 = t7359*t9846;
  t9912 = t9878*t7651;
  t9927 = t9909 + t9912;
  t9883 = t7359*t9878;
  t9886 = -1.*t9846*t7651;
  t9888 = t9883 + t9886;
  t9963 = t7851*t9320;
  t9964 = -1.*t9927*t7856;
  t9974 = t9963 + t9964;
  t9999 = t7785*t9888;
  t10000 = t7688*t9974;
  t10001 = t9999 + t10000;
  t10013 = t7688*t9888;
  t10028 = -1.*t7785*t9974;
  t10058 = t10013 + t10028;
  t10081 = -1.*t8041*t10001;
  t10105 = t8024*t10058;
  t10125 = t10081 + t10105;
  t10158 = t8024*t10001;
  t10173 = t8041*t10058;
  t10174 = t10158 + t10173;
  t10195 = t8144*t10125;
  t10196 = t8103*t10174;
  t10198 = t10195 + t10196;
  t10204 = t8103*t10125;
  t10207 = -1.*t8144*t10174;
  t10210 = t10204 + t10207;
  t10229 = -1.*t8364*t10198;
  t10234 = t8289*t10210;
  t10238 = t10229 + t10234;
  t10243 = t8289*t10198;
  t10254 = t8364*t10210;
  t10260 = t10243 + t10254;
  p_output1[0]=Sqrt(Power(0. + t1180*t1187 - 1.*t11*t1850*t1902 + t11*t1902*t2682 + t3318*t3665 + t3903*t4072 + t4261*t4329 + t4400*t4611 + t4790*t5167 + t5516*t5535 + t5735*t5855 + t6244*t6414 + t6477*t6485 + t6611*t6660 + t6699*t6724 + t6767*t6841 + t6924*t6978 + 0.0306*(t6753*t6841 + t6737*t6978) - 1.1312*(t6737*t6841 - 1.*t6753*t6978) - 0.1305*(t431*t4611 + t11*t28*t703) - 1.*t1187*t7343 - 1.*t7500*t7525 - 1.*t7610*t7675 - 1.*t7813*t7837 - 1.*t11*t28*t7864 - 0.1305*(t11*t28*t7856 + t7851*t7890) - 1.*t7890*t7937 - 1.*t7987*t8000 - 1.*t8051*t8059 - 1.*t8074*t8082 - 1.*t8157*t8189 - 1.*t8203*t8278 - 1.*t8392*t8408 - 1.*t8433*t8455 - 1.*t8494*t8515 - 1.*t8533*t8547 - 0.0306*(t8485*t8515 + t8466*t8547) + 1.1312*(t8466*t8515 - 1.*t8485*t8547) + t11*t28*t977,2) + Power(0. + t11*t1180*t8609 - 1.*t11*t7343*t8609 - 1.*t7864*t8631 + t1850*t8643 - 1.*t2682*t8643 + t3318*t8658 + t3903*t8682 + t4261*t8692 + t4400*t8706 - 0.1305*(t703*t8631 + t431*t8706) + t4790*t8739 + t5516*t8752 + t5735*t8787 + t6244*t8802 + t6477*t8810 + t6611*t8825 + t6699*t8843 + t6767*t8863 + t6924*t8894 + 0.0306*(t6753*t8863 + t6737*t8894) - 1.1312*(t6737*t8863 - 1.*t6753*t8894) - 1.*t7500*t8966 - 1.*t7675*t9010 - 1.*t7813*t9028 - 1.*t7937*t9051 - 0.1305*(t7856*t8631 + t7851*t9051) - 1.*t7987*t9117 - 1.*t8051*t9132 - 1.*t8074*t9178 - 1.*t8157*t9193 - 1.*t8203*t9206 - 1.*t8392*t9227 - 1.*t8433*t9242 - 1.*t8494*t9251 - 1.*t8533*t9270 - 0.0306*(t8485*t9251 + t8466*t9270) + 1.1312*(t8466*t9251 - 1.*t8485*t9270) + t8631*t977,2) + Power(0. - 1.*t10001*t8051 - 1.*t10058*t8074 - 1.*t10125*t8157 - 1.*t10174*t8203 - 1.*t10198*t8392 - 1.*t10210*t8433 - 0.0306*(t10260*t8466 + t10238*t8485) + 1.1312*(t10238*t8466 - 1.*t10260*t8485) - 1.*t10238*t8494 - 1.*t10260*t8533 - 1.*t11*t1180*t8624 + t11*t7343*t8624 - 1.*t7864*t9320 + t1850*t9330 - 1.*t2682*t9330 + t3318*t9352 + t3903*t9367 + t4261*t9406 + t4400*t9417 - 0.1305*(t703*t9320 + t431*t9417) + t4790*t9466 + t5516*t9485 + t5735*t9518 + t6244*t9539 + t6477*t9590 + t6611*t9623 + t6699*t9665 + t6767*t9694 + t6924*t9736 + 0.0306*(t6753*t9694 + t6737*t9736) - 1.1312*(t6737*t9694 - 1.*t6753*t9736) + t9320*t977 - 1.*t7500*t9846 - 1.*t7675*t9878 - 1.*t7813*t9888 - 1.*t7937*t9927 - 0.1305*(t7856*t9320 + t7851*t9927) - 1.*t7987*t9974,2));
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

namespace RightStance
{

void Toe2ToeDistance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:11:01 GMT-04:00
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
  double t2232;
  double t3477;
  double t3257;
  double t3359;
  double t3741;
  double t1829;
  double t2199;
  double t3852;
  double t3869;
  double t3908;
  double t3922;
  double t4812;
  double t4332;
  double t4463;
  double t4781;
  double t4013;
  double t4816;
  double t4838;
  double t4863;
  double t2892;
  double t2942;
  double t2949;
  double t3050;
  double t3462;
  double t3771;
  double t3807;
  double t5869;
  double t5930;
  double t6172;
  double t4889;
  double t5034;
  double t5133;
  double t5358;
  double t5497;
  double t5636;
  double t5684;
  double t6515;
  double t6526;
  double t6540;
  double t6552;
  double t6576;
  double t6599;
  double t6628;
  double t6699;
  double t6704;
  double t6713;
  double t6742;
  double t6751;
  double t6756;
  double t6760;
  double t6776;
  double t6827;
  double t6832;
  double t6841;
  double t6876;
  double t6879;
  double t6880;
  double t6883;
  double t6887;
  double t6892;
  double t6901;
  double t6945;
  double t6958;
  double t6974;
  double t7035;
  double t7049;
  double t7061;
  double t7094;
  double t7105;
  double t7109;
  double t7116;
  double t7149;
  double t7158;
  double t7159;
  double t7240;
  double t7254;
  double t7282;
  double t3031;
  double t3051;
  double t3070;
  double t3854;
  double t3860;
  double t4123;
  double t4217;
  double t5320;
  double t5396;
  double t5456;
  double t7412;
  double t7431;
  double t7486;
  double t7491;
  double t7501;
  double t7515;
  double t5745;
  double t5843;
  double t5846;
  double t7582;
  double t7584;
  double t7586;
  double t6476;
  double t6478;
  double t6512;
  double t6617;
  double t6642;
  double t6680;
  double t7532;
  double t7538;
  double t7569;
  double t7675;
  double t7679;
  double t7682;
  double t6721;
  double t6726;
  double t6737;
  double t6762;
  double t6765;
  double t6767;
  double t6780;
  double t6818;
  double t7687;
  double t7688;
  double t7689;
  double t7703;
  double t7704;
  double t7706;
  double t6854;
  double t6862;
  double t6873;
  double t6874;
  double t6894;
  double t6908;
  double t6925;
  double t7709;
  double t7754;
  double t7763;
  double t7772;
  double t7774;
  double t7786;
  double t6985;
  double t7007;
  double t7020;
  double t7112;
  double t7141;
  double t7143;
  double t7831;
  double t7847;
  double t7851;
  double t7853;
  double t7856;
  double t7858;
  double t7209;
  double t7222;
  double t7224;
  double t7863;
  double t7864;
  double t7866;
  double t7880;
  double t7881;
  double t7883;
  double t7959;
  double t7964;
  double t7965;
  double t7992;
  double t7993;
  double t7994;
  double t8020;
  double t8023;
  double t8024;
  double t8000;
  double t8006;
  double t8017;
  double t8036;
  double t8037;
  double t8041;
  double t8051;
  double t8052;
  double t8053;
  double t8059;
  double t8060;
  double t8062;
  double t8065;
  double t8074;
  double t8076;
  double t8082;
  double t8089;
  double t8091;
  double t8104;
  double t8109;
  double t8112;
  double t8135;
  double t8143;
  double t8149;
  double t8154;
  double t8156;
  double t8157;
  double t8164;
  double t8169;
  double t8170;
  double t8274;
  double t8278;
  double t8283;
  double t8289;
  double t8305;
  double t8309;
  double t8311;
  double t8314;
  double t8324;
  double t8364;
  double t8384;
  double t8396;
  double t8400;
  double t8401;
  double t8408;
  double t8410;
  double t8412;
  double t8413;
  double t8425;
  double t8429;
  double t8433;
  double t8449;
  double t8452;
  double t8453;
  double t8455;
  double t8461;
  double t8464;
  double t8485;
  double t8490;
  double t8494;
  double t8497;
  double t8506;
  double t8508;
  double t8516;
  double t8518;
  double t8521;
  double t8571;
  double t8573;
  double t8574;
  double t8584;
  double t8587;
  double t8604;
  double t8605;
  double t8608;
  double t8609;
  double t8610;
  double t8612;
  double t8620;
  double t8622;
  double t8629;
  double t8630;
  double t8631;
  double t8633;
  double t8634;
  double t8635;
  double t8637;
  double t8638;
  double t8639;
  double t8642;
  double t8643;
  double t8644;
  double t8647;
  double t8648;
  double t8649;
  double t8654;
  double t8655;
  double t8656;
  double t8689;
  double t8691;
  double t8692;
  double t8703;
  double t8712;
  double t8713;
  double t8727;
  double t8730;
  double t8732;
  double t8773;
  double t8774;
  double t8783;
  double t8787;
  double t8789;
  double t8793;
  double t8799;
  double t8801;
  double t8805;
  double t8813;
  double t8814;
  double t8816;
  double t8837;
  double t8842;
  double t8849;
  double t8851;
  double t8852;
  double t8856;
  double t8747;
  double t8748;
  double t8752;
  double t8921;
  double t8923;
  double t8924;
  double t8926;
  double t8927;
  double t8932;
  double t8934;
  double t8935;
  double t8936;
  double t8939;
  double t8962;
  double t8966;
  double t8970;
  double t8980;
  double t8989;
  double t9002;
  double t9005;
  double t9006;
  double t9008;
  double t9010;
  double t9013;
  double t9020;
  double t9022;
  double t9025;
  double t9097;
  double t9100;
  double t9101;
  double t9118;
  double t9124;
  double t9126;
  double t9127;
  double t9143;
  double t9144;
  double t9145;
  double t9169;
  double t9170;
  double t9174;
  double t9179;
  double t9185;
  double t9187;
  double t9194;
  double t9195;
  double t9196;
  double t9228;
  double t9230;
  double t9233;
  double t9236;
  double t9239;
  double t9241;
  double t9245;
  double t9248;
  double t9249;
  double t9250;
  double t9255;
  double t9258;
  double t9259;
  double t9290;
  double t9291;
  double t9292;
  double t9298;
  double t9300;
  double t9302;
  double t9303;
  double t9307;
  double t9336;
  double t9338;
  double t9340;
  double t9315;
  t2232 = Sin(var1[3]);
  t3477 = Cos(var1[3]);
  t3257 = Cos(var1[5]);
  t3359 = Sin(var1[4]);
  t3741 = Sin(var1[5]);
  t1829 = Cos(var1[4]);
  t2199 = Sin(var1[14]);
  t3852 = Cos(var1[14]);
  t3869 = t3477*t3257;
  t3908 = -1.*t2232*t3359*t3741;
  t3922 = t3869 + t3908;
  t4812 = Sin(var1[15]);
  t4332 = -1.*t1829*t2199*t2232;
  t4463 = t3852*t3922;
  t4781 = t4332 + t4463;
  t4013 = Cos(var1[15]);
  t4816 = -1.*t3852*t1829*t2232;
  t4838 = -1.*t2199*t3922;
  t4863 = t4816 + t4838;
  t2892 = Cos(var1[16]);
  t2942 = -1.*t2892;
  t2949 = 1. + t2942;
  t3050 = Sin(var1[16]);
  t3462 = t3257*t2232*t3359;
  t3771 = t3477*t3741;
  t3807 = t3462 + t3771;
  t5869 = t4013*t4781;
  t5930 = t4812*t4863;
  t6172 = t5869 + t5930;
  t4889 = Cos(var1[17]);
  t5034 = -1.*t4889;
  t5133 = 1. + t5034;
  t5358 = Sin(var1[17]);
  t5497 = -1.*t4812*t4781;
  t5636 = t4013*t4863;
  t5684 = t5497 + t5636;
  t6515 = t2892*t3807;
  t6526 = -1.*t3050*t6172;
  t6540 = t6515 + t6526;
  t6552 = Cos(var1[18]);
  t6576 = -1.*t6552;
  t6599 = 1. + t6576;
  t6628 = Sin(var1[18]);
  t6699 = t5358*t5684;
  t6704 = t4889*t6540;
  t6713 = t6699 + t6704;
  t6742 = t4889*t5684;
  t6751 = -1.*t5358*t6540;
  t6756 = t6742 + t6751;
  t6760 = Cos(var1[19]);
  t6776 = Sin(var1[19]);
  t6827 = -1.*t6628*t6713;
  t6832 = t6552*t6756;
  t6841 = t6827 + t6832;
  t6876 = t6552*t6713;
  t6879 = t6628*t6756;
  t6880 = t6876 + t6879;
  t6883 = Cos(var1[20]);
  t6887 = -1.*t6883;
  t6892 = 1. + t6887;
  t6901 = Sin(var1[20]);
  t6945 = t6776*t6841;
  t6958 = t6760*t6880;
  t6974 = t6945 + t6958;
  t7035 = t6760*t6841;
  t7049 = -1.*t6776*t6880;
  t7061 = t7035 + t7049;
  t7094 = Cos(var1[21]);
  t7105 = -1.*t7094;
  t7109 = 1. + t7105;
  t7116 = Sin(var1[21]);
  t7149 = -1.*t6901*t6974;
  t7158 = t6883*t7061;
  t7159 = t7149 + t7158;
  t7240 = t6883*t6974;
  t7254 = t6901*t7061;
  t7282 = t7240 + t7254;
  t3031 = -0.049*t2949;
  t3051 = 0.135*t3050;
  t3070 = t3031 + t3051;
  t3854 = -1.*t3852;
  t3860 = 1. + t3854;
  t4123 = -1.*t4013;
  t4217 = 1. + t4123;
  t5320 = -0.09*t5133;
  t5396 = 0.049*t5358;
  t5456 = t5320 + t5396;
  t7412 = -1.*t3477*t2199*t3359;
  t7431 = t3852*t3477*t1829*t3741;
  t7486 = t7412 + t7431;
  t7491 = -1.*t3852*t3477*t3359;
  t7501 = -1.*t3477*t1829*t2199*t3741;
  t7515 = t7491 + t7501;
  t5745 = -0.135*t2949;
  t5843 = -0.049*t3050;
  t5846 = t5745 + t5843;
  t7582 = t4013*t7486;
  t7584 = t4812*t7515;
  t7586 = t7582 + t7584;
  t6476 = -0.049*t5133;
  t6478 = -0.09*t5358;
  t6512 = t6476 + t6478;
  t6617 = -0.049*t6599;
  t6642 = -0.21*t6628;
  t6680 = t6617 + t6642;
  t7532 = -1.*t4812*t7486;
  t7538 = t4013*t7515;
  t7569 = t7532 + t7538;
  t7675 = -1.*t2892*t3477*t1829*t3257;
  t7679 = -1.*t3050*t7586;
  t7682 = t7675 + t7679;
  t6721 = -0.21*t6599;
  t6726 = 0.049*t6628;
  t6737 = t6721 + t6726;
  t6762 = -1.*t6760;
  t6765 = 1. + t6762;
  t6767 = -0.2707*t6765;
  t6780 = 0.0016*t6776;
  t6818 = t6767 + t6780;
  t7687 = t5358*t7569;
  t7688 = t4889*t7682;
  t7689 = t7687 + t7688;
  t7703 = t4889*t7569;
  t7704 = -1.*t5358*t7682;
  t7706 = t7703 + t7704;
  t6854 = -1. + t6760;
  t6862 = 0.0016*t6854;
  t6873 = -0.2707*t6776;
  t6874 = t6862 + t6873;
  t6894 = 0.0184*t6892;
  t6908 = -0.7055*t6901;
  t6925 = t6894 + t6908;
  t7709 = -1.*t6628*t7689;
  t7754 = t6552*t7706;
  t7763 = t7709 + t7754;
  t7772 = t6552*t7689;
  t7774 = t6628*t7706;
  t7786 = t7772 + t7774;
  t6985 = -0.7055*t6892;
  t7007 = -0.0184*t6901;
  t7020 = t6985 + t7007;
  t7112 = -1.1135*t7109;
  t7141 = 0.0216*t7116;
  t7143 = t7112 + t7141;
  t7831 = t6776*t7763;
  t7847 = t6760*t7786;
  t7851 = t7831 + t7847;
  t7853 = t6760*t7763;
  t7856 = -1.*t6776*t7786;
  t7858 = t7853 + t7856;
  t7209 = -0.0216*t7109;
  t7222 = -1.1135*t7116;
  t7224 = t7209 + t7222;
  t7863 = -1.*t6901*t7851;
  t7864 = t6883*t7858;
  t7866 = t7863 + t7864;
  t7880 = t6883*t7851;
  t7881 = t6901*t7858;
  t7883 = t7880 + t7881;
  t7959 = t3477*t3257*t3359;
  t7964 = -1.*t2232*t3741;
  t7965 = t7959 + t7964;
  t7992 = t3257*t2232;
  t7993 = t3477*t3359*t3741;
  t7994 = t7992 + t7993;
  t8020 = t3852*t4013*t7965;
  t8023 = -1.*t2199*t4812*t7965;
  t8024 = t8020 + t8023;
  t8000 = -1.*t4013*t2199*t7965;
  t8006 = -1.*t3852*t4812*t7965;
  t8017 = t8000 + t8006;
  t8036 = t2892*t7994;
  t8037 = -1.*t3050*t8024;
  t8041 = t8036 + t8037;
  t8051 = t5358*t8017;
  t8052 = t4889*t8041;
  t8053 = t8051 + t8052;
  t8059 = t4889*t8017;
  t8060 = -1.*t5358*t8041;
  t8062 = t8059 + t8060;
  t8065 = -1.*t6628*t8053;
  t8074 = t6552*t8062;
  t8076 = t8065 + t8074;
  t8082 = t6552*t8053;
  t8089 = t6628*t8062;
  t8091 = t8082 + t8089;
  t8104 = t6776*t8076;
  t8109 = t6760*t8091;
  t8112 = t8104 + t8109;
  t8135 = t6760*t8076;
  t8143 = -1.*t6776*t8091;
  t8149 = t8135 + t8143;
  t8154 = -1.*t6901*t8112;
  t8156 = t6883*t8149;
  t8157 = t8154 + t8156;
  t8164 = t6883*t8112;
  t8169 = t6901*t8149;
  t8170 = t8164 + t8169;
  t8274 = -1.*t3477*t1829*t2199;
  t8278 = -1.*t3852*t7994;
  t8283 = t8274 + t8278;
  t8289 = t3852*t3477*t1829;
  t8305 = -1.*t2199*t7994;
  t8309 = t8289 + t8305;
  t8311 = t4812*t8283;
  t8314 = t4013*t8309;
  t8324 = t8311 + t8314;
  t8364 = t4013*t8283;
  t8384 = -1.*t4812*t8309;
  t8396 = t8364 + t8384;
  t8400 = t3050*t5358*t8324;
  t8401 = t4889*t8396;
  t8408 = t8400 + t8401;
  t8410 = -1.*t4889*t3050*t8324;
  t8412 = t5358*t8396;
  t8413 = t8410 + t8412;
  t8425 = t6628*t8408;
  t8429 = t6552*t8413;
  t8433 = t8425 + t8429;
  t8449 = t6552*t8408;
  t8452 = -1.*t6628*t8413;
  t8453 = t8449 + t8452;
  t8455 = -1.*t6776*t8433;
  t8461 = t6760*t8453;
  t8464 = t8455 + t8461;
  t8485 = t6760*t8433;
  t8490 = t6776*t8453;
  t8494 = t8485 + t8490;
  t8497 = t6901*t8464;
  t8506 = t6883*t8494;
  t8508 = t8497 + t8506;
  t8516 = t6883*t8464;
  t8518 = -1.*t6901*t8494;
  t8521 = t8516 + t8518;
  t8571 = t3477*t1829*t2199;
  t8573 = t3852*t7994;
  t8574 = t8571 + t8573;
  t8584 = -1.*t4812*t8574;
  t8587 = t8584 + t8314;
  t8604 = -1.*t4013*t8574;
  t8605 = t8604 + t8384;
  t8608 = t3050*t5358*t8587;
  t8609 = t4889*t8605;
  t8610 = t8608 + t8609;
  t8612 = -1.*t4889*t3050*t8587;
  t8620 = t5358*t8605;
  t8622 = t8612 + t8620;
  t8629 = t6628*t8610;
  t8630 = t6552*t8622;
  t8631 = t8629 + t8630;
  t8633 = t6552*t8610;
  t8634 = -1.*t6628*t8622;
  t8635 = t8633 + t8634;
  t8637 = -1.*t6776*t8631;
  t8638 = t6760*t8635;
  t8639 = t8637 + t8638;
  t8642 = t6760*t8631;
  t8643 = t6776*t8635;
  t8644 = t8642 + t8643;
  t8647 = t6901*t8639;
  t8648 = t6883*t8644;
  t8649 = t8647 + t8648;
  t8654 = t6883*t8639;
  t8655 = -1.*t6901*t8644;
  t8656 = t8654 + t8655;
  t8689 = -1.*t3477*t3257*t3359;
  t8691 = t2232*t3741;
  t8692 = t8689 + t8691;
  t8703 = t4013*t8574;
  t8712 = t4812*t8309;
  t8713 = t8703 + t8712;
  t8727 = -1.*t3050*t8692;
  t8730 = -1.*t2892*t8713;
  t8732 = t8727 + t8730;
  t8773 = -1.*t6552*t5358*t8732;
  t8774 = -1.*t4889*t6628*t8732;
  t8783 = t8773 + t8774;
  t8787 = t4889*t6552*t8732;
  t8789 = -1.*t5358*t6628*t8732;
  t8793 = t8787 + t8789;
  t8799 = t6776*t8783;
  t8801 = t6760*t8793;
  t8805 = t8799 + t8801;
  t8813 = t6760*t8783;
  t8814 = -1.*t6776*t8793;
  t8816 = t8813 + t8814;
  t8837 = -1.*t6901*t8805;
  t8842 = t6883*t8816;
  t8849 = t8837 + t8842;
  t8851 = t6883*t8805;
  t8852 = t6901*t8816;
  t8856 = t8851 + t8852;
  t8747 = t2892*t8692;
  t8748 = -1.*t3050*t8713;
  t8752 = t8747 + t8748;
  t8921 = -1.*t5358*t8587;
  t8923 = -1.*t4889*t8752;
  t8924 = t8921 + t8923;
  t8926 = t4889*t8587;
  t8927 = -1.*t5358*t8752;
  t8932 = t8926 + t8927;
  t8934 = t6628*t8924;
  t8935 = t6552*t8932;
  t8936 = t8934 + t8935;
  t8939 = t6552*t8924;
  t8962 = -1.*t6628*t8932;
  t8966 = t8939 + t8962;
  t8970 = -1.*t6776*t8936;
  t8980 = t6760*t8966;
  t8989 = t8970 + t8980;
  t9002 = t6760*t8936;
  t9005 = t6776*t8966;
  t9006 = t9002 + t9005;
  t9008 = t6901*t8989;
  t9010 = t6883*t9006;
  t9013 = t9008 + t9010;
  t9020 = t6883*t8989;
  t9022 = -1.*t6901*t9006;
  t9025 = t9020 + t9022;
  t9097 = t5358*t8587;
  t9100 = t4889*t8752;
  t9101 = t9097 + t9100;
  t9118 = -1.*t6628*t9101;
  t9124 = t9118 + t8935;
  t9126 = -1.*t6552*t9101;
  t9127 = t9126 + t8962;
  t9143 = -1.*t6776*t9124;
  t9144 = t6760*t9127;
  t9145 = t9143 + t9144;
  t9169 = t6760*t9124;
  t9170 = t6776*t9127;
  t9174 = t9169 + t9170;
  t9179 = t6901*t9145;
  t9185 = t6883*t9174;
  t9187 = t9179 + t9185;
  t9194 = t6883*t9145;
  t9195 = -1.*t6901*t9174;
  t9196 = t9194 + t9195;
  t9228 = t6552*t9101;
  t9230 = t6628*t8932;
  t9233 = t9228 + t9230;
  t9236 = -1.*t6760*t9233;
  t9239 = t9143 + t9236;
  t9241 = -1.*t6776*t9233;
  t9245 = t9169 + t9241;
  t9248 = t6901*t9239;
  t9249 = t6883*t9245;
  t9250 = t9248 + t9249;
  t9255 = t6883*t9239;
  t9258 = -1.*t6901*t9245;
  t9259 = t9255 + t9258;
  t9290 = t6776*t9124;
  t9291 = t6760*t9233;
  t9292 = t9290 + t9291;
  t9298 = -1.*t6901*t9292;
  t9300 = t9298 + t9249;
  t9302 = -1.*t6883*t9292;
  t9303 = t9302 + t9258;
  t9307 = -1.*t7116*t9300;
  t9336 = t6883*t9292;
  t9338 = t6901*t9245;
  t9340 = t9336 + t9338;
  t9315 = t7094*t9300;
  p_output1[0]=1.;
  p_output1[1]=-0.135*t1829*t2199*t2232 + t3070*t3807 - 0.135*t3860*t3922 - 0.135*t4217*t4781 + 0.135*t4812*t4863 + t5456*t5684 + t5846*t6172 - 0.1305*(t3050*t3807 + t2892*t6172) + t6512*t6540 + t6680*t6713 + t6737*t6756 + t6818*t6841 + t6874*t6880 + t6925*t6974 + t7020*t7061 + t7143*t7159 + t7224*t7282 + 0.0306*(t7116*t7159 + t7094*t7282) - 1.1312*(t7094*t7159 - 1.*t7116*t7282);
  p_output1[2]=-1.*t1829*t3070*t3257*t3477 - 0.135*t2199*t3359*t3477 - 0.135*t1829*t3477*t3741*t3860 - 0.135*t4217*t7486 + 0.135*t4812*t7515 + t5456*t7569 + t5846*t7586 - 0.1305*(-1.*t1829*t3050*t3257*t3477 + t2892*t7586) + t6512*t7682 + t6680*t7689 + t6737*t7706 + t6818*t7763 + t6874*t7786 + t6925*t7851 + t7020*t7858 + t7143*t7866 + t7224*t7883 + 0.0306*(t7116*t7866 + t7094*t7883) - 1.1312*(t7094*t7866 - 1.*t7116*t7883);
  p_output1[3]=-0.135*t3860*t7965 - 0.135*t3852*t4217*t7965 - 0.135*t2199*t4812*t7965 + t3070*t7994 + t5456*t8017 + t5846*t8024 - 0.1305*(t3050*t7994 + t2892*t8024) + t6512*t8041 + t6680*t8053 + t6737*t8062 + t6818*t8076 + t6874*t8091 + t6925*t8112 + t7020*t8149 + t7143*t8157 + t7224*t8170 + 0.0306*(t7116*t8157 + t7094*t8170) - 1.1312*(t7094*t8157 - 1.*t7116*t8170);
  p_output1[4]=0.135*t1829*t3477*t3852 - 0.135*t2199*t7994 + 0.135*t4812*t8283 - 0.135*t4217*t8309 - 0.1305*t2892*t8324 + t5846*t8324 - 1.*t3050*t6512*t8324 + t5456*t8396 + t6737*t8408 + t6680*t8413 + t6874*t8433 + t6818*t8453 + t7020*t8464 + t6925*t8494 + t7224*t8508 + t7143*t8521 - 1.1312*(-1.*t7116*t8508 + t7094*t8521) + 0.0306*(t7094*t8508 + t7116*t8521);
  p_output1[5]=0.135*t4013*t8309 - 0.135*t4812*t8574 - 0.1305*t2892*t8587 + t5846*t8587 - 1.*t3050*t6512*t8587 + t5456*t8605 + t6737*t8610 + t6680*t8622 + t6874*t8631 + t6818*t8635 + t7020*t8639 + t6925*t8644 + t7224*t8649 + t7143*t8656 - 1.1312*(-1.*t7116*t8649 + t7094*t8656) + 0.0306*(t7094*t8649 + t7116*t8656);
  p_output1[6]=(0.135*t2892 + t5843)*t8692 + (-0.049*t2892 - 0.135*t3050)*t8713 + t6512*t8732 + t4889*t6680*t8732 - 1.*t5358*t6737*t8732 - 0.1305*t8752 + t6818*t8783 + t6874*t8793 + t6925*t8805 + t7020*t8816 + t7143*t8849 + t7224*t8856 + 0.0306*(t7116*t8849 + t7094*t8856) - 1.1312*(t7094*t8849 - 1.*t7116*t8856);
  p_output1[7]=(0.049*t4889 + t6478)*t8587 + (-0.09*t4889 - 0.049*t5358)*t8752 + t6737*t8924 + t6680*t8932 + t6874*t8936 + t6818*t8966 + t7020*t8989 + t6925*t9006 + t7224*t9013 + t7143*t9025 - 1.1312*(-1.*t7116*t9013 + t7094*t9025) + 0.0306*(t7094*t9013 + t7116*t9025);
  p_output1[8]=(0.049*t6552 + t6642)*t8932 + (-0.21*t6552 - 0.049*t6628)*t9101 + t6874*t9124 + t6818*t9127 + t7020*t9145 + t6925*t9174 + t7224*t9187 + t7143*t9196 - 1.1312*(-1.*t7116*t9187 + t7094*t9196) + 0.0306*(t7094*t9187 + t7116*t9196);
  p_output1[9]=(0.0016*t6760 + t6873)*t9124 + (-0.2707*t6760 - 0.0016*t6776)*t9233 + t7020*t9239 + t6925*t9245 + t7224*t9250 + t7143*t9259 - 1.1312*(-1.*t7116*t9250 + t7094*t9259) + 0.0306*(t7094*t9250 + t7116*t9259);
  p_output1[10]=(-0.0184*t6883 + t6908)*t9245 + (-0.7055*t6883 + 0.0184*t6901)*t9292 + t7224*t9300 + t7143*t9303 - 1.1312*(t7094*t9303 + t9307) + 0.0306*(t7116*t9303 + t9315);
  p_output1[11]=(0.0216*t7094 + t7222)*t9300 + (-1.1135*t7094 - 0.0216*t7116)*t9340 - 1.1312*(t9307 - 1.*t7094*t9340) + 0.0306*(t9315 - 1.*t7116*t9340);
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

#include "J_u_rightFootHeight_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_u_rightFootHeight_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

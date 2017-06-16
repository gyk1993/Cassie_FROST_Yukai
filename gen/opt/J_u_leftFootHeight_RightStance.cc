/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:25 GMT-04:00
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
  double t6831;
  double t219;
  double t4878;
  double t5007;
  double t5292;
  double t7520;
  double t7594;
  double t7625;
  double t7647;
  double t7878;
  double t7900;
  double t7909;
  double t7967;
  double t7969;
  double t7972;
  double t7956;
  double t7961;
  double t7962;
  double t7974;
  double t8163;
  double t8174;
  double t8176;
  double t8180;
  double t8242;
  double t8255;
  double t8266;
  double t8112;
  double t8122;
  double t8134;
  double t8017;
  double t8023;
  double t8027;
  double t8042;
  double t8064;
  double t8094;
  double t8107;
  double t8409;
  double t8416;
  double t8417;
  double t8424;
  double t8425;
  double t8426;
  double t8430;
  double t8434;
  double t8439;
  double t8445;
  double t8460;
  double t8464;
  double t8471;
  double t8485;
  double t8502;
  double t8512;
  double t8514;
  double t8519;
  double t8549;
  double t8552;
  double t8553;
  double t8556;
  double t8559;
  double t8563;
  double t8576;
  double t8582;
  double t8584;
  double t8585;
  double t8596;
  double t8597;
  double t8600;
  double t8603;
  double t8604;
  double t8605;
  double t8612;
  double t8629;
  double t8635;
  double t8637;
  double t8655;
  double t8658;
  double t8661;
  double t567;
  double t2619;
  double t7935;
  double t7952;
  double t8029;
  double t8059;
  double t8062;
  double t8708;
  double t8712;
  double t8714;
  double t8699;
  double t8701;
  double t8704;
  double t8177;
  double t8212;
  double t8235;
  double t8270;
  double t8275;
  double t8293;
  double t8729;
  double t8730;
  double t8731;
  double t8391;
  double t8400;
  double t8408;
  double t8427;
  double t8431;
  double t8432;
  double t8722;
  double t8724;
  double t8725;
  double t8739;
  double t8752;
  double t8754;
  double t8454;
  double t8456;
  double t8459;
  double t8488;
  double t8493;
  double t8495;
  double t8505;
  double t8511;
  double t8761;
  double t8766;
  double t8767;
  double t8770;
  double t8772;
  double t8777;
  double t8525;
  double t8534;
  double t8541;
  double t8547;
  double t8567;
  double t8580;
  double t8581;
  double t8781;
  double t8787;
  double t8794;
  double t8798;
  double t8801;
  double t8802;
  double t8591;
  double t8593;
  double t8594;
  double t8611;
  double t8616;
  double t8619;
  double t8807;
  double t8813;
  double t8817;
  double t8821;
  double t8823;
  double t8825;
  double t8643;
  double t8647;
  double t8654;
  double t8827;
  double t8830;
  double t8833;
  double t8838;
  double t8839;
  double t8843;
  double t8865;
  double t8867;
  double t8868;
  double t8893;
  double t8895;
  double t8898;
  double t8882;
  double t8885;
  double t8888;
  double t8875;
  double t8877;
  double t8878;
  double t8913;
  double t8916;
  double t8919;
  double t8924;
  double t8925;
  double t8927;
  double t8932;
  double t8933;
  double t8934;
  double t8937;
  double t8940;
  double t8944;
  double t8949;
  double t8957;
  double t8958;
  double t8964;
  double t8966;
  double t8967;
  double t8974;
  double t8975;
  double t8981;
  double t8989;
  double t8990;
  double t8993;
  double t8998;
  double t9006;
  double t9008;
  double t9042;
  double t9045;
  double t9046;
  double t9048;
  double t9050;
  double t9051;
  double t9053;
  double t9056;
  double t9059;
  double t9062;
  double t9064;
  double t9066;
  double t9071;
  double t9073;
  double t9075;
  double t9077;
  double t9083;
  double t9085;
  double t9090;
  double t9091;
  double t9097;
  double t9102;
  double t9105;
  double t9106;
  double t9108;
  double t9110;
  double t9111;
  double t9115;
  double t9116;
  double t9118;
  double t9120;
  double t9126;
  double t9128;
  double t9130;
  double t9136;
  double t9137;
  double t9159;
  double t9163;
  double t9164;
  double t9168;
  double t9169;
  double t9172;
  double t9173;
  double t9185;
  double t9186;
  double t9187;
  double t9194;
  double t9195;
  double t9197;
  double t9207;
  double t9209;
  double t9212;
  double t9215;
  double t9216;
  double t9217;
  double t9220;
  double t9222;
  double t9223;
  double t9225;
  double t9226;
  double t9228;
  double t9230;
  double t9233;
  double t9235;
  double t9241;
  double t9243;
  double t9244;
  double t9277;
  double t9278;
  double t9279;
  double t9265;
  double t9266;
  double t9268;
  double t9285;
  double t9286;
  double t9287;
  double t9302;
  double t9303;
  double t9306;
  double t9309;
  double t9311;
  double t9314;
  double t9317;
  double t9320;
  double t9321;
  double t9324;
  double t9325;
  double t9326;
  double t9329;
  double t9331;
  double t9332;
  double t9338;
  double t9339;
  double t9342;
  double t9294;
  double t9295;
  double t9296;
  double t9373;
  double t9374;
  double t9375;
  double t9380;
  double t9381;
  double t9382;
  double t9385;
  double t9387;
  double t9391;
  double t9394;
  double t9397;
  double t9398;
  double t9407;
  double t9409;
  double t9410;
  double t9413;
  double t9414;
  double t9415;
  double t9418;
  double t9421;
  double t9423;
  double t9426;
  double t9428;
  double t9431;
  double t9449;
  double t9450;
  double t9451;
  double t9459;
  double t9460;
  double t9463;
  double t9468;
  double t9471;
  double t9472;
  double t9475;
  double t9477;
  double t9478;
  double t9480;
  double t9484;
  double t9485;
  double t9489;
  double t9493;
  double t9494;
  double t9496;
  double t9527;
  double t9530;
  double t9532;
  double t9534;
  double t9535;
  double t9537;
  double t9538;
  double t9540;
  double t9541;
  double t9542;
  double t9545;
  double t9546;
  double t9548;
  double t9581;
  double t9586;
  double t9587;
  double t9594;
  double t9595;
  double t9602;
  double t9604;
  double t9607;
  double t9630;
  double t9631;
  double t9632;
  double t9615;
  t6831 = Sin(var1[3]);
  t219 = Cos(var1[6]);
  t4878 = Cos(var1[3]);
  t5007 = Cos(var1[5]);
  t5292 = t4878*t5007;
  t7520 = Sin(var1[4]);
  t7594 = Sin(var1[5]);
  t7625 = -1.*t6831*t7520*t7594;
  t7647 = t5292 + t7625;
  t7878 = Cos(var1[4]);
  t7900 = Sin(var1[6]);
  t7909 = Cos(var1[7]);
  t7967 = -1.*t7878*t219*t6831;
  t7969 = -1.*t7647*t7900;
  t7972 = t7967 + t7969;
  t7956 = t219*t7647;
  t7961 = -1.*t7878*t6831*t7900;
  t7962 = t7956 + t7961;
  t7974 = Sin(var1[7]);
  t8163 = Cos(var1[8]);
  t8174 = -1.*t8163;
  t8176 = 1. + t8174;
  t8180 = Sin(var1[8]);
  t8242 = t7909*t7962;
  t8255 = t7972*t7974;
  t8266 = t8242 + t8255;
  t8112 = t5007*t6831*t7520;
  t8122 = t4878*t7594;
  t8134 = t8112 + t8122;
  t8017 = Cos(var1[9]);
  t8023 = -1.*t8017;
  t8027 = 1. + t8023;
  t8042 = Sin(var1[9]);
  t8064 = t7909*t7972;
  t8094 = -1.*t7962*t7974;
  t8107 = t8064 + t8094;
  t8409 = t8163*t8134;
  t8416 = -1.*t8266*t8180;
  t8417 = t8409 + t8416;
  t8424 = Cos(var1[10]);
  t8425 = -1.*t8424;
  t8426 = 1. + t8425;
  t8430 = Sin(var1[10]);
  t8434 = t8042*t8107;
  t8439 = t8017*t8417;
  t8445 = t8434 + t8439;
  t8460 = t8017*t8107;
  t8464 = -1.*t8042*t8417;
  t8471 = t8460 + t8464;
  t8485 = Cos(var1[11]);
  t8502 = Sin(var1[11]);
  t8512 = -1.*t8430*t8445;
  t8514 = t8424*t8471;
  t8519 = t8512 + t8514;
  t8549 = t8424*t8445;
  t8552 = t8430*t8471;
  t8553 = t8549 + t8552;
  t8556 = Cos(var1[12]);
  t8559 = -1.*t8556;
  t8563 = 1. + t8559;
  t8576 = Sin(var1[12]);
  t8582 = t8502*t8519;
  t8584 = t8485*t8553;
  t8585 = t8582 + t8584;
  t8596 = t8485*t8519;
  t8597 = -1.*t8502*t8553;
  t8600 = t8596 + t8597;
  t8603 = Cos(var1[13]);
  t8604 = -1.*t8603;
  t8605 = 1. + t8604;
  t8612 = Sin(var1[13]);
  t8629 = -1.*t8576*t8585;
  t8635 = t8556*t8600;
  t8637 = t8629 + t8635;
  t8655 = t8556*t8585;
  t8658 = t8576*t8600;
  t8661 = t8655 + t8658;
  t567 = -1.*t219;
  t2619 = 1. + t567;
  t7935 = -1.*t7909;
  t7952 = 1. + t7935;
  t8029 = -0.09*t8027;
  t8059 = 0.049*t8042;
  t8062 = t8029 + t8059;
  t8708 = -1.*t4878*t219*t7520;
  t8712 = -1.*t4878*t7878*t7594*t7900;
  t8714 = t8708 + t8712;
  t8699 = t4878*t7878*t219*t7594;
  t8701 = -1.*t4878*t7520*t7900;
  t8704 = t8699 + t8701;
  t8177 = -0.049*t8176;
  t8212 = -0.135*t8180;
  t8235 = t8177 + t8212;
  t8270 = 0.135*t8176;
  t8275 = -0.049*t8180;
  t8293 = t8270 + t8275;
  t8729 = t7909*t8704;
  t8730 = t8714*t7974;
  t8731 = t8729 + t8730;
  t8391 = -0.049*t8027;
  t8400 = -0.09*t8042;
  t8408 = t8391 + t8400;
  t8427 = -0.049*t8426;
  t8431 = -0.21*t8430;
  t8432 = t8427 + t8431;
  t8722 = t7909*t8714;
  t8724 = -1.*t8704*t7974;
  t8725 = t8722 + t8724;
  t8739 = -1.*t4878*t7878*t5007*t8163;
  t8752 = -1.*t8731*t8180;
  t8754 = t8739 + t8752;
  t8454 = -0.21*t8426;
  t8456 = 0.049*t8430;
  t8459 = t8454 + t8456;
  t8488 = -1.*t8485;
  t8493 = 1. + t8488;
  t8495 = -0.2707*t8493;
  t8505 = 0.0016*t8502;
  t8511 = t8495 + t8505;
  t8761 = t8042*t8725;
  t8766 = t8017*t8754;
  t8767 = t8761 + t8766;
  t8770 = t8017*t8725;
  t8772 = -1.*t8042*t8754;
  t8777 = t8770 + t8772;
  t8525 = -1. + t8485;
  t8534 = 0.0016*t8525;
  t8541 = -0.2707*t8502;
  t8547 = t8534 + t8541;
  t8567 = 0.0184*t8563;
  t8580 = -0.7055*t8576;
  t8581 = t8567 + t8580;
  t8781 = -1.*t8430*t8767;
  t8787 = t8424*t8777;
  t8794 = t8781 + t8787;
  t8798 = t8424*t8767;
  t8801 = t8430*t8777;
  t8802 = t8798 + t8801;
  t8591 = -0.7055*t8563;
  t8593 = -0.0184*t8576;
  t8594 = t8591 + t8593;
  t8611 = -1.1135*t8605;
  t8616 = 0.0216*t8612;
  t8619 = t8611 + t8616;
  t8807 = t8502*t8794;
  t8813 = t8485*t8802;
  t8817 = t8807 + t8813;
  t8821 = t8485*t8794;
  t8823 = -1.*t8502*t8802;
  t8825 = t8821 + t8823;
  t8643 = -0.0216*t8605;
  t8647 = -1.1135*t8612;
  t8654 = t8643 + t8647;
  t8827 = -1.*t8576*t8817;
  t8830 = t8556*t8825;
  t8833 = t8827 + t8830;
  t8838 = t8556*t8817;
  t8839 = t8576*t8825;
  t8843 = t8838 + t8839;
  t8865 = t4878*t5007*t7520;
  t8867 = -1.*t6831*t7594;
  t8868 = t8865 + t8867;
  t8893 = t219*t7909*t8868;
  t8895 = -1.*t8868*t7900*t7974;
  t8898 = t8893 + t8895;
  t8882 = t5007*t6831;
  t8885 = t4878*t7520*t7594;
  t8888 = t8882 + t8885;
  t8875 = -1.*t7909*t8868*t7900;
  t8877 = -1.*t219*t8868*t7974;
  t8878 = t8875 + t8877;
  t8913 = t8163*t8888;
  t8916 = -1.*t8898*t8180;
  t8919 = t8913 + t8916;
  t8924 = t8042*t8878;
  t8925 = t8017*t8919;
  t8927 = t8924 + t8925;
  t8932 = t8017*t8878;
  t8933 = -1.*t8042*t8919;
  t8934 = t8932 + t8933;
  t8937 = -1.*t8430*t8927;
  t8940 = t8424*t8934;
  t8944 = t8937 + t8940;
  t8949 = t8424*t8927;
  t8957 = t8430*t8934;
  t8958 = t8949 + t8957;
  t8964 = t8502*t8944;
  t8966 = t8485*t8958;
  t8967 = t8964 + t8966;
  t8974 = t8485*t8944;
  t8975 = -1.*t8502*t8958;
  t8981 = t8974 + t8975;
  t8989 = -1.*t8576*t8967;
  t8990 = t8556*t8981;
  t8993 = t8989 + t8990;
  t8998 = t8556*t8967;
  t9006 = t8576*t8981;
  t9008 = t8998 + t9006;
  t9042 = t4878*t7878*t219;
  t9045 = -1.*t8888*t7900;
  t9046 = t9042 + t9045;
  t9048 = -1.*t219*t8888;
  t9050 = -1.*t4878*t7878*t7900;
  t9051 = t9048 + t9050;
  t9053 = t7909*t9046;
  t9056 = t9051*t7974;
  t9059 = t9053 + t9056;
  t9062 = t7909*t9051;
  t9064 = -1.*t9046*t7974;
  t9066 = t9062 + t9064;
  t9071 = t8042*t9066;
  t9073 = -1.*t8017*t9059*t8180;
  t9075 = t9071 + t9073;
  t9077 = t8017*t9066;
  t9083 = t8042*t9059*t8180;
  t9085 = t9077 + t9083;
  t9090 = -1.*t8430*t9075;
  t9091 = t8424*t9085;
  t9097 = t9090 + t9091;
  t9102 = t8424*t9075;
  t9105 = t8430*t9085;
  t9106 = t9102 + t9105;
  t9108 = t8502*t9097;
  t9110 = t8485*t9106;
  t9111 = t9108 + t9110;
  t9115 = t8485*t9097;
  t9116 = -1.*t8502*t9106;
  t9118 = t9115 + t9116;
  t9120 = -1.*t8576*t9111;
  t9126 = t8556*t9118;
  t9128 = t9120 + t9126;
  t9130 = t8556*t9111;
  t9136 = t8576*t9118;
  t9137 = t9130 + t9136;
  t9159 = t219*t8888;
  t9163 = t4878*t7878*t7900;
  t9164 = t9159 + t9163;
  t9168 = -1.*t9164*t7974;
  t9169 = t9053 + t9168;
  t9172 = -1.*t7909*t9164;
  t9173 = t9172 + t9064;
  t9185 = t8042*t9173;
  t9186 = -1.*t8017*t9169*t8180;
  t9187 = t9185 + t9186;
  t9194 = t8017*t9173;
  t9195 = t8042*t9169*t8180;
  t9197 = t9194 + t9195;
  t9207 = -1.*t8430*t9187;
  t9209 = t8424*t9197;
  t9212 = t9207 + t9209;
  t9215 = t8424*t9187;
  t9216 = t8430*t9197;
  t9217 = t9215 + t9216;
  t9220 = t8502*t9212;
  t9222 = t8485*t9217;
  t9223 = t9220 + t9222;
  t9225 = t8485*t9212;
  t9226 = -1.*t8502*t9217;
  t9228 = t9225 + t9226;
  t9230 = -1.*t8576*t9223;
  t9233 = t8556*t9228;
  t9235 = t9230 + t9233;
  t9241 = t8556*t9223;
  t9243 = t8576*t9228;
  t9244 = t9241 + t9243;
  t9277 = t7909*t9164;
  t9278 = t9046*t7974;
  t9279 = t9277 + t9278;
  t9265 = -1.*t4878*t5007*t7520;
  t9266 = t6831*t7594;
  t9268 = t9265 + t9266;
  t9285 = -1.*t8163*t9279;
  t9286 = -1.*t9268*t8180;
  t9287 = t9285 + t9286;
  t9302 = -1.*t8424*t8042*t9287;
  t9303 = -1.*t8017*t8430*t9287;
  t9306 = t9302 + t9303;
  t9309 = t8017*t8424*t9287;
  t9311 = -1.*t8042*t8430*t9287;
  t9314 = t9309 + t9311;
  t9317 = t8502*t9306;
  t9320 = t8485*t9314;
  t9321 = t9317 + t9320;
  t9324 = t8485*t9306;
  t9325 = -1.*t8502*t9314;
  t9326 = t9324 + t9325;
  t9329 = -1.*t8576*t9321;
  t9331 = t8556*t9326;
  t9332 = t9329 + t9331;
  t9338 = t8556*t9321;
  t9339 = t8576*t9326;
  t9342 = t9338 + t9339;
  t9294 = t8163*t9268;
  t9295 = -1.*t9279*t8180;
  t9296 = t9294 + t9295;
  t9373 = -1.*t8042*t9169;
  t9374 = -1.*t8017*t9296;
  t9375 = t9373 + t9374;
  t9380 = t8017*t9169;
  t9381 = -1.*t8042*t9296;
  t9382 = t9380 + t9381;
  t9385 = t8430*t9375;
  t9387 = t8424*t9382;
  t9391 = t9385 + t9387;
  t9394 = t8424*t9375;
  t9397 = -1.*t8430*t9382;
  t9398 = t9394 + t9397;
  t9407 = -1.*t8502*t9391;
  t9409 = t8485*t9398;
  t9410 = t9407 + t9409;
  t9413 = t8485*t9391;
  t9414 = t8502*t9398;
  t9415 = t9413 + t9414;
  t9418 = t8576*t9410;
  t9421 = t8556*t9415;
  t9423 = t9418 + t9421;
  t9426 = t8556*t9410;
  t9428 = -1.*t8576*t9415;
  t9431 = t9426 + t9428;
  t9449 = t8042*t9169;
  t9450 = t8017*t9296;
  t9451 = t9449 + t9450;
  t9459 = -1.*t8430*t9451;
  t9460 = t9459 + t9387;
  t9463 = -1.*t8424*t9451;
  t9468 = t9463 + t9397;
  t9471 = -1.*t8502*t9460;
  t9472 = t8485*t9468;
  t9475 = t9471 + t9472;
  t9477 = t8485*t9460;
  t9478 = t8502*t9468;
  t9480 = t9477 + t9478;
  t9484 = t8576*t9475;
  t9485 = t8556*t9480;
  t9489 = t9484 + t9485;
  t9493 = t8556*t9475;
  t9494 = -1.*t8576*t9480;
  t9496 = t9493 + t9494;
  t9527 = t8424*t9451;
  t9530 = t8430*t9382;
  t9532 = t9527 + t9530;
  t9534 = -1.*t8485*t9532;
  t9535 = t9471 + t9534;
  t9537 = -1.*t8502*t9532;
  t9538 = t9477 + t9537;
  t9540 = t8576*t9535;
  t9541 = t8556*t9538;
  t9542 = t9540 + t9541;
  t9545 = t8556*t9535;
  t9546 = -1.*t8576*t9538;
  t9548 = t9545 + t9546;
  t9581 = t8502*t9460;
  t9586 = t8485*t9532;
  t9587 = t9581 + t9586;
  t9594 = -1.*t8576*t9587;
  t9595 = t9594 + t9541;
  t9602 = -1.*t8556*t9587;
  t9604 = t9602 + t9546;
  t9607 = -1.*t8612*t9595;
  t9630 = t8556*t9587;
  t9631 = t8576*t9538;
  t9632 = t9630 + t9631;
  t9615 = t8603*t9595;
  p_output1[0]=1.;
  p_output1[1]=0.135*t2619*t7647 + 0.135*t6831*t7878*t7900 + 0.135*t7952*t7962 - 0.135*t7972*t7974 + t8062*t8107 + t8134*t8235 + 0.1305*(t8134*t8180 + t8163*t8266) + t8266*t8293 + t8408*t8417 + t8432*t8445 + t8459*t8471 + t8511*t8519 + t8547*t8553 + t8581*t8585 + t8594*t8600 + t8619*t8637 + t8654*t8661 + 0.0306*(t8612*t8637 + t8603*t8661) - 1.1312*(t8603*t8637 - 1.*t8612*t8661);
  p_output1[2]=0.135*t2619*t4878*t7594*t7878 + 0.135*t4878*t7520*t7900 - 1.*t4878*t5007*t7878*t8235 + 0.135*t7952*t8704 - 0.135*t7974*t8714 + t8062*t8725 + t8293*t8731 + 0.1305*(-1.*t4878*t5007*t7878*t8180 + t8163*t8731) + t8408*t8754 + t8432*t8767 + t8459*t8777 + t8511*t8794 + t8547*t8802 + t8581*t8817 + t8594*t8825 + t8619*t8833 + t8654*t8843 + 0.0306*(t8612*t8833 + t8603*t8843) - 1.1312*(t8603*t8833 - 1.*t8612*t8843);
  p_output1[3]=0.135*t2619*t8868 + 0.135*t219*t7952*t8868 + 0.135*t7900*t7974*t8868 + t8062*t8878 + t8235*t8888 + t8293*t8898 + 0.1305*(t8180*t8888 + t8163*t8898) + t8408*t8919 + t8432*t8927 + t8459*t8934 + t8511*t8944 + t8547*t8958 + t8581*t8967 + t8594*t8981 + t8619*t8993 + t8654*t9008 + 0.0306*(t8612*t8993 + t8603*t9008) - 1.1312*(t8603*t8993 - 1.*t8612*t9008);
  p_output1[4]=-0.135*t219*t4878*t7878 + 0.135*t7900*t8888 + 0.135*t7952*t9046 - 0.135*t7974*t9051 + 0.1305*t8163*t9059 + t8293*t9059 - 1.*t8180*t8408*t9059 + t8062*t9066 + t8432*t9075 + t8459*t9085 + t8511*t9097 + t8547*t9106 + t8581*t9111 + t8594*t9118 + t8619*t9128 + t8654*t9137 + 0.0306*(t8612*t9128 + t8603*t9137) - 1.1312*(t8603*t9128 - 1.*t8612*t9137);
  p_output1[5]=-0.135*t7909*t9046 + 0.135*t7974*t9164 + 0.1305*t8163*t9169 + t8293*t9169 - 1.*t8180*t8408*t9169 + t8062*t9173 + t8432*t9187 + t8459*t9197 + t8511*t9212 + t8547*t9217 + t8581*t9223 + t8594*t9228 + t8619*t9235 + t8654*t9244 + 0.0306*(t8612*t9235 + t8603*t9244) - 1.1312*(t8603*t9235 - 1.*t8612*t9244);
  p_output1[6]=(-0.135*t8163 + t8275)*t9268 + (-0.049*t8163 + 0.135*t8180)*t9279 + t8408*t9287 + t8017*t8432*t9287 - 1.*t8042*t8459*t9287 + 0.1305*t9296 + t8511*t9306 + t8547*t9314 + t8581*t9321 + t8594*t9326 + t8619*t9332 + t8654*t9342 + 0.0306*(t8612*t9332 + t8603*t9342) - 1.1312*(t8603*t9332 - 1.*t8612*t9342);
  p_output1[7]=(0.049*t8017 + t8400)*t9169 + (-0.09*t8017 - 0.049*t8042)*t9296 + t8459*t9375 + t8432*t9382 + t8547*t9391 + t8511*t9398 + t8594*t9410 + t8581*t9415 + t8654*t9423 + t8619*t9431 - 1.1312*(-1.*t8612*t9423 + t8603*t9431) + 0.0306*(t8603*t9423 + t8612*t9431);
  p_output1[8]=(0.049*t8424 + t8431)*t9382 + (-0.21*t8424 - 0.049*t8430)*t9451 + t8547*t9460 + t8511*t9468 + t8594*t9475 + t8581*t9480 + t8654*t9489 + t8619*t9496 - 1.1312*(-1.*t8612*t9489 + t8603*t9496) + 0.0306*(t8603*t9489 + t8612*t9496);
  p_output1[9]=(0.0016*t8485 + t8541)*t9460 + (-0.2707*t8485 - 0.0016*t8502)*t9532 + t8594*t9535 + t8581*t9538 + t8654*t9542 + t8619*t9548 - 1.1312*(-1.*t8612*t9542 + t8603*t9548) + 0.0306*(t8603*t9542 + t8612*t9548);
  p_output1[10]=(-0.0184*t8556 + t8580)*t9538 + (-0.7055*t8556 + 0.0184*t8576)*t9587 + t8654*t9595 + t8619*t9604 - 1.1312*(t8603*t9604 + t9607) + 0.0306*(t8612*t9604 + t9615);
  p_output1[11]=(0.0216*t8603 + t8647)*t9595 + (-1.1135*t8603 - 0.0216*t8612)*t9632 - 1.1312*(t9607 - 1.*t8603*t9632) + 0.0306*(t9615 - 1.*t8612*t9632);
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

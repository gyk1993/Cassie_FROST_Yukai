/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:22 GMT-04:00
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
  double t218;
  double t7141;
  double t6833;
  double t6938;
  double t6950;
  double t7429;
  double t7415;
  double t7422;
  double t7423;
  double t7313;
  double t7450;
  double t7468;
  double t7516;
  double t263;
  double t2452;
  double t2488;
  double t6422;
  double t225;
  double t7627;
  double t7628;
  double t7631;
  double t7521;
  double t7522;
  double t7524;
  double t7543;
  double t7559;
  double t7594;
  double t7611;
  double t7707;
  double t7710;
  double t7711;
  double t7732;
  double t7758;
  double t7760;
  double t7766;
  double t7776;
  double t7778;
  double t7788;
  double t7812;
  double t7814;
  double t7815;
  double t7819;
  double t7823;
  double t7824;
  double t7861;
  double t7894;
  double t7899;
  double t7900;
  double t7921;
  double t7929;
  double t7934;
  double t7938;
  double t7939;
  double t7943;
  double t7955;
  double t7961;
  double t7962;
  double t7965;
  double t7975;
  double t7982;
  double t7987;
  double t7993;
  double t7996;
  double t7998;
  double t8001;
  double t8004;
  double t8007;
  double t8009;
  double t8018;
  double t8019;
  double t8020;
  double t7211;
  double t8037;
  double t8043;
  double t8059;
  double t8060;
  double t8061;
  double t8052;
  double t8053;
  double t8057;
  double t8063;
  double t8097;
  double t8099;
  double t8100;
  double t8104;
  double t8112;
  double t8114;
  double t8117;
  double t8067;
  double t8069;
  double t8070;
  double t8072;
  double t8087;
  double t8089;
  double t8092;
  double t8147;
  double t8150;
  double t8155;
  double t8165;
  double t8169;
  double t8170;
  double t8173;
  double t8176;
  double t8177;
  double t8178;
  double t8184;
  double t8186;
  double t8187;
  double t8190;
  double t8194;
  double t8196;
  double t8199;
  double t8207;
  double t8209;
  double t8210;
  double t8217;
  double t8220;
  double t8221;
  double t8223;
  double t8224;
  double t8229;
  double t8232;
  double t8238;
  double t8239;
  double t8241;
  double t8248;
  double t8249;
  double t8253;
  double t8256;
  double t8262;
  double t8264;
  double t8269;
  double t8274;
  double t8275;
  double t8277;
  double t8293;
  double t8294;
  double t8295;
  double t6851;
  double t6910;
  double t6333;
  double t6458;
  double t6663;
  double t8329;
  double t6956;
  double t7070;
  double t7077;
  double t7107;
  double t8334;
  double t7239;
  double t7258;
  double t7264;
  double t7289;
  double t8347;
  double t8348;
  double t8349;
  double t7322;
  double t7349;
  double t7363;
  double t7383;
  double t7436;
  double t7442;
  double t7537;
  double t7545;
  double t7547;
  double t8362;
  double t8363;
  double t8365;
  double t8370;
  double t8373;
  double t8374;
  double t7619;
  double t7623;
  double t7624;
  double t8333;
  double t8335;
  double t8336;
  double t8383;
  double t8384;
  double t8386;
  double t7695;
  double t7698;
  double t7706;
  double t7762;
  double t7772;
  double t7774;
  double t8377;
  double t8378;
  double t8380;
  double t8396;
  double t8397;
  double t8399;
  double t7807;
  double t7808;
  double t7810;
  double t7841;
  double t7878;
  double t7890;
  double t8401;
  double t8402;
  double t8403;
  double t8406;
  double t8407;
  double t8408;
  double t7904;
  double t7909;
  double t7910;
  double t7952;
  double t7956;
  double t7960;
  double t8411;
  double t8415;
  double t8416;
  double t8419;
  double t8420;
  double t8423;
  double t7969;
  double t7972;
  double t7974;
  double t8000;
  double t8002;
  double t8003;
  double t8426;
  double t8427;
  double t8428;
  double t8432;
  double t8433;
  double t8434;
  double t8011;
  double t8012;
  double t8014;
  double t8436;
  double t8439;
  double t8440;
  double t8443;
  double t8445;
  double t8449;
  double t8039;
  double t8040;
  double t8045;
  double t8046;
  double t8048;
  double t8051;
  double t8064;
  double t8065;
  double t8071;
  double t8074;
  double t8079;
  double t8474;
  double t8478;
  double t8479;
  double t8464;
  double t8466;
  double t8468;
  double t8102;
  double t8107;
  double t8109;
  double t8121;
  double t8122;
  double t8124;
  double t8487;
  double t8488;
  double t8489;
  double t8139;
  double t8141;
  double t8145;
  double t8171;
  double t8174;
  double t8175;
  double t8482;
  double t8483;
  double t8484;
  double t8495;
  double t8496;
  double t8498;
  double t8181;
  double t8182;
  double t8183;
  double t8197;
  double t8201;
  double t8206;
  double t8501;
  double t8502;
  double t8503;
  double t8505;
  double t8509;
  double t8510;
  double t8213;
  double t8214;
  double t8216;
  double t8231;
  double t8235;
  double t8236;
  double t8513;
  double t8514;
  double t8515;
  double t8519;
  double t8520;
  double t8522;
  double t8243;
  double t8245;
  double t8246;
  double t8266;
  double t8270;
  double t8272;
  double t8525;
  double t8526;
  double t8527;
  double t8529;
  double t8532;
  double t8533;
  double t8281;
  double t8282;
  double t8283;
  double t8536;
  double t8538;
  double t8540;
  double t8545;
  double t8547;
  double t8548;
  t218 = Cos(var1[4]);
  t7141 = Sin(var1[5]);
  t6833 = Sin(var1[14]);
  t6938 = Sin(var1[4]);
  t6950 = Cos(var1[14]);
  t7429 = Sin(var1[15]);
  t7415 = t6833*t6938;
  t7422 = -1.*t6950*t218*t7141;
  t7423 = t7415 + t7422;
  t7313 = Cos(var1[15]);
  t7450 = t6950*t6938;
  t7468 = t218*t6833*t7141;
  t7516 = t7450 + t7468;
  t263 = Cos(var1[16]);
  t2452 = -1.*t263;
  t2488 = 1. + t2452;
  t6422 = Sin(var1[16]);
  t225 = Cos(var1[5]);
  t7627 = t7313*t7423;
  t7628 = t7429*t7516;
  t7631 = t7627 + t7628;
  t7521 = Cos(var1[17]);
  t7522 = -1.*t7521;
  t7524 = 1. + t7522;
  t7543 = Sin(var1[17]);
  t7559 = -1.*t7429*t7423;
  t7594 = t7313*t7516;
  t7611 = t7559 + t7594;
  t7707 = t263*t218*t225;
  t7710 = -1.*t6422*t7631;
  t7711 = t7707 + t7710;
  t7732 = Cos(var1[18]);
  t7758 = -1.*t7732;
  t7760 = 1. + t7758;
  t7766 = Sin(var1[18]);
  t7776 = t7543*t7611;
  t7778 = t7521*t7711;
  t7788 = t7776 + t7778;
  t7812 = t7521*t7611;
  t7814 = -1.*t7543*t7711;
  t7815 = t7812 + t7814;
  t7819 = Cos(var1[19]);
  t7823 = -1.*t7819;
  t7824 = 1. + t7823;
  t7861 = Sin(var1[19]);
  t7894 = -1.*t7766*t7788;
  t7899 = t7732*t7815;
  t7900 = t7894 + t7899;
  t7921 = t7732*t7788;
  t7929 = t7766*t7815;
  t7934 = t7921 + t7929;
  t7938 = Cos(var1[20]);
  t7939 = -1.*t7938;
  t7943 = 1. + t7939;
  t7955 = Sin(var1[20]);
  t7961 = t7861*t7900;
  t7962 = t7819*t7934;
  t7965 = t7961 + t7962;
  t7975 = t7819*t7900;
  t7982 = -1.*t7861*t7934;
  t7987 = t7975 + t7982;
  t7993 = Cos(var1[21]);
  t7996 = -1.*t7993;
  t7998 = 1. + t7996;
  t8001 = Sin(var1[21]);
  t8004 = -1.*t7955*t7965;
  t8007 = t7938*t7987;
  t8009 = t8004 + t8007;
  t8018 = t7938*t7965;
  t8019 = t7955*t7987;
  t8020 = t8018 + t8019;
  t7211 = Cos(var1[6]);
  t8037 = Sin(var1[6]);
  t8043 = Cos(var1[7]);
  t8059 = t7211*t6938;
  t8060 = t218*t7141*t8037;
  t8061 = t8059 + t8060;
  t8052 = -1.*t218*t7211*t7141;
  t8053 = t6938*t8037;
  t8057 = t8052 + t8053;
  t8063 = Sin(var1[7]);
  t8097 = Cos(var1[8]);
  t8099 = -1.*t8097;
  t8100 = 1. + t8099;
  t8104 = Sin(var1[8]);
  t8112 = t8043*t8057;
  t8114 = t8061*t8063;
  t8117 = t8112 + t8114;
  t8067 = Cos(var1[9]);
  t8069 = -1.*t8067;
  t8070 = 1. + t8069;
  t8072 = Sin(var1[9]);
  t8087 = t8043*t8061;
  t8089 = -1.*t8057*t8063;
  t8092 = t8087 + t8089;
  t8147 = t218*t225*t8097;
  t8150 = -1.*t8117*t8104;
  t8155 = t8147 + t8150;
  t8165 = Cos(var1[10]);
  t8169 = -1.*t8165;
  t8170 = 1. + t8169;
  t8173 = Sin(var1[10]);
  t8176 = t8072*t8092;
  t8177 = t8067*t8155;
  t8178 = t8176 + t8177;
  t8184 = t8067*t8092;
  t8186 = -1.*t8072*t8155;
  t8187 = t8184 + t8186;
  t8190 = Cos(var1[11]);
  t8194 = -1.*t8190;
  t8196 = 1. + t8194;
  t8199 = Sin(var1[11]);
  t8207 = -1.*t8173*t8178;
  t8209 = t8165*t8187;
  t8210 = t8207 + t8209;
  t8217 = t8165*t8178;
  t8220 = t8173*t8187;
  t8221 = t8217 + t8220;
  t8223 = Cos(var1[12]);
  t8224 = -1.*t8223;
  t8229 = 1. + t8224;
  t8232 = Sin(var1[12]);
  t8238 = t8199*t8210;
  t8239 = t8190*t8221;
  t8241 = t8238 + t8239;
  t8248 = t8190*t8210;
  t8249 = -1.*t8199*t8221;
  t8253 = t8248 + t8249;
  t8256 = Cos(var1[13]);
  t8262 = -1.*t8256;
  t8264 = 1. + t8262;
  t8269 = Sin(var1[13]);
  t8274 = -1.*t8232*t8241;
  t8275 = t8223*t8253;
  t8277 = t8274 + t8275;
  t8293 = t8223*t8241;
  t8294 = t8232*t8253;
  t8295 = t8293 + t8294;
  t6851 = 0.135*t6833;
  t6910 = 0. + t6851;
  t6333 = -0.049*t2488;
  t6458 = 0.135*t6422;
  t6663 = 0. + t6333 + t6458;
  t8329 = Sin(var1[3]);
  t6956 = -1.*t6950;
  t7070 = 1. + t6956;
  t7077 = -0.135*t7070;
  t7107 = 0. + t7077;
  t8334 = Cos(var1[3]);
  t7239 = -1.*t7211;
  t7258 = 1. + t7239;
  t7264 = 0.135*t7258;
  t7289 = 0. + t7264;
  t8347 = t8334*t225;
  t8348 = -1.*t8329*t6938*t7141;
  t8349 = t8347 + t8348;
  t7322 = -1.*t7313;
  t7349 = 1. + t7322;
  t7363 = -0.135*t7349;
  t7383 = 0. + t7363;
  t7436 = 0.135*t7429;
  t7442 = 0. + t7436;
  t7537 = -0.09*t7524;
  t7545 = 0.049*t7543;
  t7547 = 0. + t7537 + t7545;
  t8362 = -1.*t218*t6833*t8329;
  t8363 = t6950*t8349;
  t8365 = t8362 + t8363;
  t8370 = -1.*t6950*t218*t8329;
  t8373 = -1.*t6833*t8349;
  t8374 = t8370 + t8373;
  t7619 = -0.135*t2488;
  t7623 = -0.049*t6422;
  t7624 = 0. + t7619 + t7623;
  t8333 = t225*t8329*t6938;
  t8335 = t8334*t7141;
  t8336 = t8333 + t8335;
  t8383 = t7313*t8365;
  t8384 = t7429*t8374;
  t8386 = t8383 + t8384;
  t7695 = -0.049*t7524;
  t7698 = -0.09*t7543;
  t7706 = 0. + t7695 + t7698;
  t7762 = -0.049*t7760;
  t7772 = -0.21*t7766;
  t7774 = 0. + t7762 + t7772;
  t8377 = -1.*t7429*t8365;
  t8378 = t7313*t8374;
  t8380 = t8377 + t8378;
  t8396 = t263*t8336;
  t8397 = -1.*t6422*t8386;
  t8399 = t8396 + t8397;
  t7807 = -0.21*t7760;
  t7808 = 0.049*t7766;
  t7810 = 0. + t7807 + t7808;
  t7841 = -0.2707*t7824;
  t7878 = 0.0016*t7861;
  t7890 = 0. + t7841 + t7878;
  t8401 = t7543*t8380;
  t8402 = t7521*t8399;
  t8403 = t8401 + t8402;
  t8406 = t7521*t8380;
  t8407 = -1.*t7543*t8399;
  t8408 = t8406 + t8407;
  t7904 = -0.0016*t7824;
  t7909 = -0.2707*t7861;
  t7910 = 0. + t7904 + t7909;
  t7952 = 0.0184*t7943;
  t7956 = -0.7055*t7955;
  t7960 = 0. + t7952 + t7956;
  t8411 = -1.*t7766*t8403;
  t8415 = t7732*t8408;
  t8416 = t8411 + t8415;
  t8419 = t7732*t8403;
  t8420 = t7766*t8408;
  t8423 = t8419 + t8420;
  t7969 = -0.7055*t7943;
  t7972 = -0.0184*t7955;
  t7974 = 0. + t7969 + t7972;
  t8000 = -1.1135*t7998;
  t8002 = 0.0216*t8001;
  t8003 = 0. + t8000 + t8002;
  t8426 = t7861*t8416;
  t8427 = t7819*t8423;
  t8428 = t8426 + t8427;
  t8432 = t7819*t8416;
  t8433 = -1.*t7861*t8423;
  t8434 = t8432 + t8433;
  t8011 = -0.0216*t7998;
  t8012 = -1.1135*t8001;
  t8014 = 0. + t8011 + t8012;
  t8436 = -1.*t7955*t8428;
  t8439 = t7938*t8434;
  t8440 = t8436 + t8439;
  t8443 = t7938*t8428;
  t8445 = t7955*t8434;
  t8449 = t8443 + t8445;
  t8039 = -0.135*t8037;
  t8040 = 0. + t8039;
  t8045 = -1.*t8043;
  t8046 = 1. + t8045;
  t8048 = 0.135*t8046;
  t8051 = 0. + t8048;
  t8064 = -0.135*t8063;
  t8065 = 0. + t8064;
  t8071 = -0.09*t8070;
  t8074 = 0.049*t8072;
  t8079 = 0. + t8071 + t8074;
  t8474 = -1.*t218*t7211*t8329;
  t8478 = -1.*t8349*t8037;
  t8479 = t8474 + t8478;
  t8464 = t7211*t8349;
  t8466 = -1.*t218*t8329*t8037;
  t8468 = t8464 + t8466;
  t8102 = -0.049*t8100;
  t8107 = -0.135*t8104;
  t8109 = 0. + t8102 + t8107;
  t8121 = 0.135*t8100;
  t8122 = -0.049*t8104;
  t8124 = 0. + t8121 + t8122;
  t8487 = t8043*t8468;
  t8488 = t8479*t8063;
  t8489 = t8487 + t8488;
  t8139 = -0.049*t8070;
  t8141 = -0.09*t8072;
  t8145 = 0. + t8139 + t8141;
  t8171 = -0.049*t8170;
  t8174 = -0.21*t8173;
  t8175 = 0. + t8171 + t8174;
  t8482 = t8043*t8479;
  t8483 = -1.*t8468*t8063;
  t8484 = t8482 + t8483;
  t8495 = t8097*t8336;
  t8496 = -1.*t8489*t8104;
  t8498 = t8495 + t8496;
  t8181 = -0.21*t8170;
  t8182 = 0.049*t8173;
  t8183 = 0. + t8181 + t8182;
  t8197 = -0.2707*t8196;
  t8201 = 0.0016*t8199;
  t8206 = 0. + t8197 + t8201;
  t8501 = t8072*t8484;
  t8502 = t8067*t8498;
  t8503 = t8501 + t8502;
  t8505 = t8067*t8484;
  t8509 = -1.*t8072*t8498;
  t8510 = t8505 + t8509;
  t8213 = -0.0016*t8196;
  t8214 = -0.2707*t8199;
  t8216 = 0. + t8213 + t8214;
  t8231 = 0.0184*t8229;
  t8235 = -0.7055*t8232;
  t8236 = 0. + t8231 + t8235;
  t8513 = -1.*t8173*t8503;
  t8514 = t8165*t8510;
  t8515 = t8513 + t8514;
  t8519 = t8165*t8503;
  t8520 = t8173*t8510;
  t8522 = t8519 + t8520;
  t8243 = -0.7055*t8229;
  t8245 = -0.0184*t8232;
  t8246 = 0. + t8243 + t8245;
  t8266 = -1.1135*t8264;
  t8270 = 0.0216*t8269;
  t8272 = 0. + t8266 + t8270;
  t8525 = t8199*t8515;
  t8526 = t8190*t8522;
  t8527 = t8525 + t8526;
  t8529 = t8190*t8515;
  t8532 = -1.*t8199*t8522;
  t8533 = t8529 + t8532;
  t8281 = -0.0216*t8264;
  t8282 = -1.1135*t8269;
  t8283 = 0. + t8281 + t8282;
  t8536 = -1.*t8232*t8527;
  t8538 = t8223*t8533;
  t8540 = t8536 + t8538;
  t8545 = t8223*t8527;
  t8547 = t8232*t8533;
  t8548 = t8545 + t8547;
  p_output1[0]=Sqrt(Power(0. + t218*t225*t6663 + t6910*t6938 - 1.*t218*t7107*t7141 + t218*t7141*t7289 + t7383*t7423 + t7442*t7516 + t7547*t7611 + t7624*t7631 - 0.1305*(t218*t225*t6422 + t263*t7631) + t7706*t7711 + t7774*t7788 + t7810*t7815 + t7890*t7900 + t7910*t7934 + t7960*t7965 + t7974*t7987 + t8003*t8009 + t8014*t8020 + 0.0306*(t8001*t8009 + t7993*t8020) - 1.1312*(t7993*t8009 - 1.*t8001*t8020) - 1.*t6938*t8040 - 1.*t8051*t8057 - 1.*t8061*t8065 - 1.*t8079*t8092 - 1.*t218*t225*t8109 - 0.1305*(t218*t225*t8104 + t8097*t8117) - 1.*t8117*t8124 - 1.*t8145*t8155 - 1.*t8175*t8178 - 1.*t8183*t8187 - 1.*t8206*t8210 - 1.*t8216*t8221 - 1.*t8236*t8241 - 1.*t8246*t8253 - 1.*t8272*t8277 - 1.*t8283*t8295 - 0.0306*(t8269*t8277 + t8256*t8295) + 1.1312*(t8256*t8277 - 1.*t8269*t8295),2) + Power(0. - 1.*t218*t6910*t8329 + t218*t8040*t8329 + t6663*t8336 - 1.*t8109*t8336 + t7107*t8349 - 1.*t7289*t8349 + t7383*t8365 + t7442*t8374 + t7547*t8380 + t7624*t8386 - 0.1305*(t6422*t8336 + t263*t8386) + t7706*t8399 + t7774*t8403 + t7810*t8408 + t7890*t8416 + t7910*t8423 + t7960*t8428 + t7974*t8434 + t8003*t8440 + t8014*t8449 + 0.0306*(t8001*t8440 + t7993*t8449) - 1.1312*(t7993*t8440 - 1.*t8001*t8449) - 1.*t8051*t8468 - 1.*t8065*t8479 - 1.*t8079*t8484 - 1.*t8124*t8489 - 0.1305*(t8104*t8336 + t8097*t8489) - 1.*t8145*t8498 - 1.*t8175*t8503 - 1.*t8183*t8510 - 1.*t8206*t8515 - 1.*t8216*t8522 - 1.*t8236*t8527 - 1.*t8246*t8533 - 1.*t8272*t8540 - 1.*t8283*t8548 - 0.0306*(t8269*t8540 + t8256*t8548) + 1.1312*(t8256*t8540 - 1.*t8269*t8548),2));
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

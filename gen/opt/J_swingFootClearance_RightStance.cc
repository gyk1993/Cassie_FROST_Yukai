/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:18 GMT-04:00
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
  double t5483;
  double t1771;
  double t5359;
  double t5372;
  double t5373;
  double t5512;
  double t5519;
  double t5523;
  double t5531;
  double t5695;
  double t5708;
  double t5717;
  double t5740;
  double t5741;
  double t5742;
  double t5732;
  double t5733;
  double t5734;
  double t5751;
  double t6204;
  double t6206;
  double t6207;
  double t6210;
  double t6304;
  double t6308;
  double t6309;
  double t6178;
  double t6187;
  double t6189;
  double t5787;
  double t5804;
  double t5811;
  double t5819;
  double t5822;
  double t6156;
  double t6164;
  double t6375;
  double t6376;
  double t6380;
  double t6386;
  double t6392;
  double t6396;
  double t6404;
  double t6418;
  double t6419;
  double t6420;
  double t6432;
  double t6439;
  double t6448;
  double t6450;
  double t6459;
  double t6463;
  double t6464;
  double t6466;
  double t6548;
  double t6553;
  double t6554;
  double t6557;
  double t6558;
  double t6560;
  double t6563;
  double t6566;
  double t6567;
  double t6569;
  double t6578;
  double t6579;
  double t6583;
  double t6586;
  double t6587;
  double t6589;
  double t6592;
  double t6600;
  double t6601;
  double t6602;
  double t6636;
  double t6637;
  double t6640;
  double t5175;
  double t5331;
  double t5723;
  double t5725;
  double t5812;
  double t5820;
  double t5821;
  double t6679;
  double t6710;
  double t6746;
  double t6674;
  double t6675;
  double t6676;
  double t6208;
  double t6277;
  double t6293;
  double t6310;
  double t6313;
  double t6317;
  double t6824;
  double t6825;
  double t6827;
  double t6343;
  double t6344;
  double t6374;
  double t6400;
  double t6406;
  double t6412;
  double t6808;
  double t6810;
  double t6811;
  double t6834;
  double t6835;
  double t6836;
  double t6425;
  double t6426;
  double t6427;
  double t6452;
  double t6456;
  double t6457;
  double t6460;
  double t6462;
  double t6839;
  double t6840;
  double t6841;
  double t6845;
  double t6848;
  double t6849;
  double t6499;
  double t6538;
  double t6541;
  double t6543;
  double t6561;
  double t6564;
  double t6565;
  double t6854;
  double t6855;
  double t6856;
  double t6859;
  double t6861;
  double t6862;
  double t6571;
  double t6572;
  double t6575;
  double t6591;
  double t6594;
  double t6596;
  double t6865;
  double t6867;
  double t6868;
  double t6870;
  double t6878;
  double t6895;
  double t6611;
  double t6630;
  double t6632;
  double t6897;
  double t6901;
  double t6906;
  double t6911;
  double t6912;
  double t6921;
  double t6957;
  double t6958;
  double t6960;
  double t7102;
  double t7103;
  double t7104;
  double t7085;
  double t7088;
  double t7094;
  double t7080;
  double t7081;
  double t7082;
  double t7119;
  double t7120;
  double t7121;
  double t7127;
  double t7128;
  double t7129;
  double t7137;
  double t7138;
  double t7139;
  double t7143;
  double t7144;
  double t7145;
  double t7151;
  double t7164;
  double t7168;
  double t7175;
  double t7177;
  double t7178;
  double t7185;
  double t7190;
  double t7192;
  double t7201;
  double t7202;
  double t7203;
  double t7208;
  double t7209;
  double t7210;
  double t7261;
  double t7262;
  double t7263;
  double t7266;
  double t7267;
  double t7271;
  double t7275;
  double t7280;
  double t7282;
  double t7284;
  double t7286;
  double t7288;
  double t7293;
  double t7295;
  double t7309;
  double t7317;
  double t7319;
  double t7320;
  double t7327;
  double t7332;
  double t7347;
  double t7350;
  double t7354;
  double t7360;
  double t7370;
  double t7374;
  double t7378;
  double t7388;
  double t7390;
  double t7391;
  double t7396;
  double t7398;
  double t7399;
  double t7402;
  double t7403;
  double t7404;
  double t7437;
  double t7439;
  double t7441;
  double t7443;
  double t7444;
  double t7448;
  double t7449;
  double t7456;
  double t7458;
  double t7459;
  double t7465;
  double t7466;
  double t7467;
  double t7469;
  double t7471;
  double t7472;
  double t7482;
  double t7483;
  double t7484;
  double t7490;
  double t7492;
  double t7493;
  double t7495;
  double t7496;
  double t7497;
  double t7499;
  double t7500;
  double t7502;
  double t7507;
  double t7508;
  double t7512;
  double t7539;
  double t7540;
  double t7541;
  double t7526;
  double t7527;
  double t7529;
  double t7549;
  double t7551;
  double t7552;
  double t7568;
  double t7570;
  double t7571;
  double t7574;
  double t7575;
  double t7576;
  double t7581;
  double t7582;
  double t7586;
  double t7589;
  double t7590;
  double t7592;
  double t7595;
  double t7596;
  double t7598;
  double t7601;
  double t7602;
  double t7604;
  double t7560;
  double t7561;
  double t7564;
  double t7634;
  double t7637;
  double t7638;
  double t7643;
  double t7644;
  double t7645;
  double t7649;
  double t7650;
  double t7651;
  double t7655;
  double t7656;
  double t7657;
  double t7662;
  double t7663;
  double t7664;
  double t7670;
  double t7671;
  double t7672;
  double t7675;
  double t7677;
  double t7679;
  double t7681;
  double t7683;
  double t7684;
  double t7712;
  double t7713;
  double t7715;
  double t7724;
  double t7725;
  double t7729;
  double t7731;
  double t7733;
  double t7734;
  double t7737;
  double t7739;
  double t7740;
  double t7741;
  double t7744;
  double t7745;
  double t7747;
  double t7749;
  double t7751;
  double t7755;
  double t7779;
  double t7780;
  double t7782;
  double t7785;
  double t7786;
  double t7791;
  double t7792;
  double t7795;
  double t7799;
  double t7800;
  double t7803;
  double t7805;
  double t7806;
  double t7827;
  double t7828;
  double t7830;
  double t7838;
  double t7840;
  double t7842;
  double t7844;
  double t7847;
  double t7870;
  double t7871;
  double t7873;
  double t7853;
  t5483 = Sin(var1[3]);
  t1771 = Cos(var1[6]);
  t5359 = Cos(var1[3]);
  t5372 = Cos(var1[5]);
  t5373 = t5359*t5372;
  t5512 = Sin(var1[4]);
  t5519 = Sin(var1[5]);
  t5523 = -1.*t5483*t5512*t5519;
  t5531 = t5373 + t5523;
  t5695 = Cos(var1[4]);
  t5708 = Sin(var1[6]);
  t5717 = Cos(var1[7]);
  t5740 = -1.*t5695*t1771*t5483;
  t5741 = -1.*t5531*t5708;
  t5742 = t5740 + t5741;
  t5732 = t1771*t5531;
  t5733 = -1.*t5695*t5483*t5708;
  t5734 = t5732 + t5733;
  t5751 = Sin(var1[7]);
  t6204 = Cos(var1[8]);
  t6206 = -1.*t6204;
  t6207 = 1. + t6206;
  t6210 = Sin(var1[8]);
  t6304 = t5717*t5734;
  t6308 = t5742*t5751;
  t6309 = t6304 + t6308;
  t6178 = t5372*t5483*t5512;
  t6187 = t5359*t5519;
  t6189 = t6178 + t6187;
  t5787 = Cos(var1[9]);
  t5804 = -1.*t5787;
  t5811 = 1. + t5804;
  t5819 = Sin(var1[9]);
  t5822 = t5717*t5742;
  t6156 = -1.*t5734*t5751;
  t6164 = t5822 + t6156;
  t6375 = t6204*t6189;
  t6376 = -1.*t6309*t6210;
  t6380 = t6375 + t6376;
  t6386 = Cos(var1[10]);
  t6392 = -1.*t6386;
  t6396 = 1. + t6392;
  t6404 = Sin(var1[10]);
  t6418 = t5819*t6164;
  t6419 = t5787*t6380;
  t6420 = t6418 + t6419;
  t6432 = t5787*t6164;
  t6439 = -1.*t5819*t6380;
  t6448 = t6432 + t6439;
  t6450 = Cos(var1[11]);
  t6459 = Sin(var1[11]);
  t6463 = -1.*t6404*t6420;
  t6464 = t6386*t6448;
  t6466 = t6463 + t6464;
  t6548 = t6386*t6420;
  t6553 = t6404*t6448;
  t6554 = t6548 + t6553;
  t6557 = Cos(var1[12]);
  t6558 = -1.*t6557;
  t6560 = 1. + t6558;
  t6563 = Sin(var1[12]);
  t6566 = t6459*t6466;
  t6567 = t6450*t6554;
  t6569 = t6566 + t6567;
  t6578 = t6450*t6466;
  t6579 = -1.*t6459*t6554;
  t6583 = t6578 + t6579;
  t6586 = Cos(var1[13]);
  t6587 = -1.*t6586;
  t6589 = 1. + t6587;
  t6592 = Sin(var1[13]);
  t6600 = -1.*t6563*t6569;
  t6601 = t6557*t6583;
  t6602 = t6600 + t6601;
  t6636 = t6557*t6569;
  t6637 = t6563*t6583;
  t6640 = t6636 + t6637;
  t5175 = -1.*t1771;
  t5331 = 1. + t5175;
  t5723 = -1.*t5717;
  t5725 = 1. + t5723;
  t5812 = -0.09*t5811;
  t5820 = 0.049*t5819;
  t5821 = t5812 + t5820;
  t6679 = -1.*t5359*t1771*t5512;
  t6710 = -1.*t5359*t5695*t5519*t5708;
  t6746 = t6679 + t6710;
  t6674 = t5359*t5695*t1771*t5519;
  t6675 = -1.*t5359*t5512*t5708;
  t6676 = t6674 + t6675;
  t6208 = -0.049*t6207;
  t6277 = -0.135*t6210;
  t6293 = t6208 + t6277;
  t6310 = 0.135*t6207;
  t6313 = -0.049*t6210;
  t6317 = t6310 + t6313;
  t6824 = t5717*t6676;
  t6825 = t6746*t5751;
  t6827 = t6824 + t6825;
  t6343 = -0.049*t5811;
  t6344 = -0.09*t5819;
  t6374 = t6343 + t6344;
  t6400 = -0.049*t6396;
  t6406 = -0.21*t6404;
  t6412 = t6400 + t6406;
  t6808 = t5717*t6746;
  t6810 = -1.*t6676*t5751;
  t6811 = t6808 + t6810;
  t6834 = -1.*t5359*t5695*t5372*t6204;
  t6835 = -1.*t6827*t6210;
  t6836 = t6834 + t6835;
  t6425 = -0.21*t6396;
  t6426 = 0.049*t6404;
  t6427 = t6425 + t6426;
  t6452 = -1.*t6450;
  t6456 = 1. + t6452;
  t6457 = -0.2707*t6456;
  t6460 = 0.0016*t6459;
  t6462 = t6457 + t6460;
  t6839 = t5819*t6811;
  t6840 = t5787*t6836;
  t6841 = t6839 + t6840;
  t6845 = t5787*t6811;
  t6848 = -1.*t5819*t6836;
  t6849 = t6845 + t6848;
  t6499 = -1. + t6450;
  t6538 = 0.0016*t6499;
  t6541 = -0.2707*t6459;
  t6543 = t6538 + t6541;
  t6561 = 0.0184*t6560;
  t6564 = -0.7055*t6563;
  t6565 = t6561 + t6564;
  t6854 = -1.*t6404*t6841;
  t6855 = t6386*t6849;
  t6856 = t6854 + t6855;
  t6859 = t6386*t6841;
  t6861 = t6404*t6849;
  t6862 = t6859 + t6861;
  t6571 = -0.7055*t6560;
  t6572 = -0.0184*t6563;
  t6575 = t6571 + t6572;
  t6591 = -1.1135*t6589;
  t6594 = 0.0216*t6592;
  t6596 = t6591 + t6594;
  t6865 = t6459*t6856;
  t6867 = t6450*t6862;
  t6868 = t6865 + t6867;
  t6870 = t6450*t6856;
  t6878 = -1.*t6459*t6862;
  t6895 = t6870 + t6878;
  t6611 = -0.0216*t6589;
  t6630 = -1.1135*t6592;
  t6632 = t6611 + t6630;
  t6897 = -1.*t6563*t6868;
  t6901 = t6557*t6895;
  t6906 = t6897 + t6901;
  t6911 = t6557*t6868;
  t6912 = t6563*t6895;
  t6921 = t6911 + t6912;
  t6957 = t5359*t5372*t5512;
  t6958 = -1.*t5483*t5519;
  t6960 = t6957 + t6958;
  t7102 = t1771*t5717*t6960;
  t7103 = -1.*t6960*t5708*t5751;
  t7104 = t7102 + t7103;
  t7085 = t5372*t5483;
  t7088 = t5359*t5512*t5519;
  t7094 = t7085 + t7088;
  t7080 = -1.*t5717*t6960*t5708;
  t7081 = -1.*t1771*t6960*t5751;
  t7082 = t7080 + t7081;
  t7119 = t6204*t7094;
  t7120 = -1.*t7104*t6210;
  t7121 = t7119 + t7120;
  t7127 = t5819*t7082;
  t7128 = t5787*t7121;
  t7129 = t7127 + t7128;
  t7137 = t5787*t7082;
  t7138 = -1.*t5819*t7121;
  t7139 = t7137 + t7138;
  t7143 = -1.*t6404*t7129;
  t7144 = t6386*t7139;
  t7145 = t7143 + t7144;
  t7151 = t6386*t7129;
  t7164 = t6404*t7139;
  t7168 = t7151 + t7164;
  t7175 = t6459*t7145;
  t7177 = t6450*t7168;
  t7178 = t7175 + t7177;
  t7185 = t6450*t7145;
  t7190 = -1.*t6459*t7168;
  t7192 = t7185 + t7190;
  t7201 = -1.*t6563*t7178;
  t7202 = t6557*t7192;
  t7203 = t7201 + t7202;
  t7208 = t6557*t7178;
  t7209 = t6563*t7192;
  t7210 = t7208 + t7209;
  t7261 = t5359*t5695*t1771;
  t7262 = -1.*t7094*t5708;
  t7263 = t7261 + t7262;
  t7266 = -1.*t1771*t7094;
  t7267 = -1.*t5359*t5695*t5708;
  t7271 = t7266 + t7267;
  t7275 = t5717*t7263;
  t7280 = t7271*t5751;
  t7282 = t7275 + t7280;
  t7284 = t5717*t7271;
  t7286 = -1.*t7263*t5751;
  t7288 = t7284 + t7286;
  t7293 = t5819*t7288;
  t7295 = -1.*t5787*t7282*t6210;
  t7309 = t7293 + t7295;
  t7317 = t5787*t7288;
  t7319 = t5819*t7282*t6210;
  t7320 = t7317 + t7319;
  t7327 = -1.*t6404*t7309;
  t7332 = t6386*t7320;
  t7347 = t7327 + t7332;
  t7350 = t6386*t7309;
  t7354 = t6404*t7320;
  t7360 = t7350 + t7354;
  t7370 = t6459*t7347;
  t7374 = t6450*t7360;
  t7378 = t7370 + t7374;
  t7388 = t6450*t7347;
  t7390 = -1.*t6459*t7360;
  t7391 = t7388 + t7390;
  t7396 = -1.*t6563*t7378;
  t7398 = t6557*t7391;
  t7399 = t7396 + t7398;
  t7402 = t6557*t7378;
  t7403 = t6563*t7391;
  t7404 = t7402 + t7403;
  t7437 = t1771*t7094;
  t7439 = t5359*t5695*t5708;
  t7441 = t7437 + t7439;
  t7443 = -1.*t7441*t5751;
  t7444 = t7275 + t7443;
  t7448 = -1.*t5717*t7441;
  t7449 = t7448 + t7286;
  t7456 = t5819*t7449;
  t7458 = -1.*t5787*t7444*t6210;
  t7459 = t7456 + t7458;
  t7465 = t5787*t7449;
  t7466 = t5819*t7444*t6210;
  t7467 = t7465 + t7466;
  t7469 = -1.*t6404*t7459;
  t7471 = t6386*t7467;
  t7472 = t7469 + t7471;
  t7482 = t6386*t7459;
  t7483 = t6404*t7467;
  t7484 = t7482 + t7483;
  t7490 = t6459*t7472;
  t7492 = t6450*t7484;
  t7493 = t7490 + t7492;
  t7495 = t6450*t7472;
  t7496 = -1.*t6459*t7484;
  t7497 = t7495 + t7496;
  t7499 = -1.*t6563*t7493;
  t7500 = t6557*t7497;
  t7502 = t7499 + t7500;
  t7507 = t6557*t7493;
  t7508 = t6563*t7497;
  t7512 = t7507 + t7508;
  t7539 = t5717*t7441;
  t7540 = t7263*t5751;
  t7541 = t7539 + t7540;
  t7526 = -1.*t5359*t5372*t5512;
  t7527 = t5483*t5519;
  t7529 = t7526 + t7527;
  t7549 = -1.*t6204*t7541;
  t7551 = -1.*t7529*t6210;
  t7552 = t7549 + t7551;
  t7568 = -1.*t6386*t5819*t7552;
  t7570 = -1.*t5787*t6404*t7552;
  t7571 = t7568 + t7570;
  t7574 = t5787*t6386*t7552;
  t7575 = -1.*t5819*t6404*t7552;
  t7576 = t7574 + t7575;
  t7581 = t6459*t7571;
  t7582 = t6450*t7576;
  t7586 = t7581 + t7582;
  t7589 = t6450*t7571;
  t7590 = -1.*t6459*t7576;
  t7592 = t7589 + t7590;
  t7595 = -1.*t6563*t7586;
  t7596 = t6557*t7592;
  t7598 = t7595 + t7596;
  t7601 = t6557*t7586;
  t7602 = t6563*t7592;
  t7604 = t7601 + t7602;
  t7560 = t6204*t7529;
  t7561 = -1.*t7541*t6210;
  t7564 = t7560 + t7561;
  t7634 = -1.*t5819*t7444;
  t7637 = -1.*t5787*t7564;
  t7638 = t7634 + t7637;
  t7643 = t5787*t7444;
  t7644 = -1.*t5819*t7564;
  t7645 = t7643 + t7644;
  t7649 = t6404*t7638;
  t7650 = t6386*t7645;
  t7651 = t7649 + t7650;
  t7655 = t6386*t7638;
  t7656 = -1.*t6404*t7645;
  t7657 = t7655 + t7656;
  t7662 = -1.*t6459*t7651;
  t7663 = t6450*t7657;
  t7664 = t7662 + t7663;
  t7670 = t6450*t7651;
  t7671 = t6459*t7657;
  t7672 = t7670 + t7671;
  t7675 = t6563*t7664;
  t7677 = t6557*t7672;
  t7679 = t7675 + t7677;
  t7681 = t6557*t7664;
  t7683 = -1.*t6563*t7672;
  t7684 = t7681 + t7683;
  t7712 = t5819*t7444;
  t7713 = t5787*t7564;
  t7715 = t7712 + t7713;
  t7724 = -1.*t6404*t7715;
  t7725 = t7724 + t7650;
  t7729 = -1.*t6386*t7715;
  t7731 = t7729 + t7656;
  t7733 = -1.*t6459*t7725;
  t7734 = t6450*t7731;
  t7737 = t7733 + t7734;
  t7739 = t6450*t7725;
  t7740 = t6459*t7731;
  t7741 = t7739 + t7740;
  t7744 = t6563*t7737;
  t7745 = t6557*t7741;
  t7747 = t7744 + t7745;
  t7749 = t6557*t7737;
  t7751 = -1.*t6563*t7741;
  t7755 = t7749 + t7751;
  t7779 = t6386*t7715;
  t7780 = t6404*t7645;
  t7782 = t7779 + t7780;
  t7785 = -1.*t6450*t7782;
  t7786 = t7733 + t7785;
  t7791 = -1.*t6459*t7782;
  t7792 = t7739 + t7791;
  t7795 = t6563*t7786;
  t7799 = t6557*t7792;
  t7800 = t7795 + t7799;
  t7803 = t6557*t7786;
  t7805 = -1.*t6563*t7792;
  t7806 = t7803 + t7805;
  t7827 = t6459*t7725;
  t7828 = t6450*t7782;
  t7830 = t7827 + t7828;
  t7838 = -1.*t6563*t7830;
  t7840 = t7838 + t7799;
  t7842 = -1.*t6557*t7830;
  t7844 = t7842 + t7805;
  t7847 = -1.*t6592*t7840;
  t7870 = t6557*t7830;
  t7871 = t6563*t7792;
  t7873 = t7870 + t7871;
  t7853 = t6586*t7840;
  p_output1[0]=1.;
  p_output1[1]=0.135*t5331*t5531 + 0.135*t5483*t5695*t5708 + 0.135*t5725*t5734 - 0.135*t5742*t5751 + t5821*t6164 + t6189*t6293 + 0.1305*(t6189*t6210 + t6204*t6309) + t6309*t6317 + t6374*t6380 + t6412*t6420 + t6427*t6448 + t6462*t6466 + t6543*t6554 + t6565*t6569 + t6575*t6583 + t6596*t6602 + t6632*t6640 + 0.0306*(t6592*t6602 + t6586*t6640) - 1.1312*(t6586*t6602 - 1.*t6592*t6640);
  p_output1[2]=0.135*t5331*t5359*t5519*t5695 + 0.135*t5359*t5512*t5708 - 1.*t5359*t5372*t5695*t6293 + 0.135*t5725*t6676 - 0.135*t5751*t6746 + t5821*t6811 + t6317*t6827 + 0.1305*(-1.*t5359*t5372*t5695*t6210 + t6204*t6827) + t6374*t6836 + t6412*t6841 + t6427*t6849 + t6462*t6856 + t6543*t6862 + t6565*t6868 + t6575*t6895 + t6596*t6906 + t6632*t6921 + 0.0306*(t6592*t6906 + t6586*t6921) - 1.1312*(t6586*t6906 - 1.*t6592*t6921);
  p_output1[3]=0.135*t5331*t6960 + 0.135*t1771*t5725*t6960 + 0.135*t5708*t5751*t6960 + t5821*t7082 + t6293*t7094 + t6317*t7104 + 0.1305*(t6210*t7094 + t6204*t7104) + t6374*t7121 + t6412*t7129 + t6427*t7139 + t6462*t7145 + t6543*t7168 + t6565*t7178 + t6575*t7192 + t6596*t7203 + t6632*t7210 + 0.0306*(t6592*t7203 + t6586*t7210) - 1.1312*(t6586*t7203 - 1.*t6592*t7210);
  p_output1[4]=-0.135*t1771*t5359*t5695 + 0.135*t5708*t7094 + 0.135*t5725*t7263 - 0.135*t5751*t7271 + 0.1305*t6204*t7282 + t6317*t7282 - 1.*t6210*t6374*t7282 + t5821*t7288 + t6412*t7309 + t6427*t7320 + t6462*t7347 + t6543*t7360 + t6565*t7378 + t6575*t7391 + t6596*t7399 + t6632*t7404 + 0.0306*(t6592*t7399 + t6586*t7404) - 1.1312*(t6586*t7399 - 1.*t6592*t7404);
  p_output1[5]=-0.135*t5717*t7263 + 0.135*t5751*t7441 + 0.1305*t6204*t7444 + t6317*t7444 - 1.*t6210*t6374*t7444 + t5821*t7449 + t6412*t7459 + t6427*t7467 + t6462*t7472 + t6543*t7484 + t6565*t7493 + t6575*t7497 + t6596*t7502 + t6632*t7512 + 0.0306*(t6592*t7502 + t6586*t7512) - 1.1312*(t6586*t7502 - 1.*t6592*t7512);
  p_output1[6]=(-0.135*t6204 + t6313)*t7529 + (-0.049*t6204 + 0.135*t6210)*t7541 + t6374*t7552 + t5787*t6412*t7552 - 1.*t5819*t6427*t7552 + 0.1305*t7564 + t6462*t7571 + t6543*t7576 + t6565*t7586 + t6575*t7592 + t6596*t7598 + t6632*t7604 + 0.0306*(t6592*t7598 + t6586*t7604) - 1.1312*(t6586*t7598 - 1.*t6592*t7604);
  p_output1[7]=(0.049*t5787 + t6344)*t7444 + (-0.09*t5787 - 0.049*t5819)*t7564 + t6427*t7638 + t6412*t7645 + t6543*t7651 + t6462*t7657 + t6575*t7664 + t6565*t7672 + t6632*t7679 + t6596*t7684 - 1.1312*(-1.*t6592*t7679 + t6586*t7684) + 0.0306*(t6586*t7679 + t6592*t7684);
  p_output1[8]=(0.049*t6386 + t6406)*t7645 + (-0.21*t6386 - 0.049*t6404)*t7715 + t6543*t7725 + t6462*t7731 + t6575*t7737 + t6565*t7741 + t6632*t7747 + t6596*t7755 - 1.1312*(-1.*t6592*t7747 + t6586*t7755) + 0.0306*(t6586*t7747 + t6592*t7755);
  p_output1[9]=(0.0016*t6450 + t6541)*t7725 + (-0.2707*t6450 - 0.0016*t6459)*t7782 + t6575*t7786 + t6565*t7792 + t6632*t7800 + t6596*t7806 - 1.1312*(-1.*t6592*t7800 + t6586*t7806) + 0.0306*(t6586*t7800 + t6592*t7806);
  p_output1[10]=(-0.0184*t6557 + t6564)*t7792 + (-0.7055*t6557 + 0.0184*t6563)*t7830 + t6632*t7840 + t6596*t7844 - 1.1312*(t6586*t7844 + t7847) + 0.0306*(t6592*t7844 + t7853);
  p_output1[11]=(0.0216*t6586 + t6630)*t7840 + (-1.1135*t6586 - 0.0216*t6592)*t7873 - 1.1312*(t7847 - 1.*t6586*t7873) + 0.0306*(t7853 - 1.*t6592*t7873);
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

#include "J_swingFootClearance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_swingFootClearance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

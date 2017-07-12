/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:27 GMT-04:00
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
  double t4450;
  double t4817;
  double t4735;
  double t4751;
  double t4777;
  double t4911;
  double t4867;
  double t4871;
  double t4884;
  double t4856;
  double t4920;
  double t4926;
  double t4928;
  double t4656;
  double t4660;
  double t4686;
  double t4722;
  double t4566;
  double t5017;
  double t5018;
  double t5019;
  double t4934;
  double t4941;
  double t4962;
  double t4970;
  double t4977;
  double t4979;
  double t4980;
  double t5060;
  double t5062;
  double t5065;
  double t5071;
  double t5072;
  double t5076;
  double t5086;
  double t5094;
  double t5095;
  double t5096;
  double t5107;
  double t5118;
  double t5128;
  double t5147;
  double t5148;
  double t5153;
  double t5156;
  double t5164;
  double t5169;
  double t5176;
  double t5188;
  double t5193;
  double t5196;
  double t5200;
  double t5201;
  double t5202;
  double t5207;
  double t5211;
  double t5212;
  double t5216;
  double t5228;
  double t5230;
  double t5231;
  double t5233;
  double t5234;
  double t5236;
  double t5238;
  double t5241;
  double t5244;
  double t5245;
  double t5252;
  double t5254;
  double t5255;
  double t4826;
  double t5268;
  double t5274;
  double t5284;
  double t5285;
  double t5286;
  double t5280;
  double t5281;
  double t5282;
  double t5287;
  double t5311;
  double t5312;
  double t5313;
  double t5317;
  double t5322;
  double t5325;
  double t5327;
  double t5292;
  double t5295;
  double t5296;
  double t5299;
  double t5305;
  double t5307;
  double t5309;
  double t5348;
  double t5349;
  double t5351;
  double t5353;
  double t5354;
  double t5355;
  double t5358;
  double t5361;
  double t5362;
  double t5363;
  double t5368;
  double t5369;
  double t5370;
  double t5373;
  double t5374;
  double t5376;
  double t5379;
  double t5382;
  double t5383;
  double t5385;
  double t5393;
  double t5394;
  double t5395;
  double t5398;
  double t5400;
  double t5402;
  double t5405;
  double t5408;
  double t5411;
  double t5412;
  double t5419;
  double t5421;
  double t5423;
  double t5425;
  double t5427;
  double t5428;
  double t5430;
  double t5433;
  double t5434;
  double t5435;
  double t5441;
  double t5443;
  double t5445;
  double t4737;
  double t4741;
  double t4698;
  double t4724;
  double t4725;
  double t5461;
  double t4790;
  double t4795;
  double t4800;
  double t4808;
  double t5467;
  double t4830;
  double t4834;
  double t4838;
  double t4842;
  double t5473;
  double t5475;
  double t5476;
  double t4857;
  double t4858;
  double t4859;
  double t4864;
  double t4912;
  double t4915;
  double t4969;
  double t4972;
  double t4976;
  double t5479;
  double t5481;
  double t5482;
  double t5485;
  double t5486;
  double t5488;
  double t4983;
  double t4995;
  double t5015;
  double t5466;
  double t5469;
  double t5470;
  double t5497;
  double t5498;
  double t5499;
  double t5033;
  double t5044;
  double t5058;
  double t5082;
  double t5092;
  double t5093;
  double t5491;
  double t5493;
  double t5494;
  double t5506;
  double t5507;
  double t5508;
  double t5099;
  double t5100;
  double t5103;
  double t5154;
  double t5158;
  double t5163;
  double t5511;
  double t5512;
  double t5513;
  double t5517;
  double t5518;
  double t5519;
  double t5181;
  double t5184;
  double t5185;
  double t5205;
  double t5209;
  double t5210;
  double t5522;
  double t5523;
  double t5524;
  double t5526;
  double t5528;
  double t5529;
  double t5222;
  double t5224;
  double t5227;
  double t5237;
  double t5239;
  double t5240;
  double t5531;
  double t5532;
  double t5533;
  double t5537;
  double t5538;
  double t5540;
  double t5248;
  double t5249;
  double t5251;
  double t5543;
  double t5544;
  double t5546;
  double t5548;
  double t5549;
  double t5550;
  double t5270;
  double t5272;
  double t5276;
  double t5277;
  double t5278;
  double t5279;
  double t5288;
  double t5289;
  double t5297;
  double t5302;
  double t5304;
  double t5574;
  double t5575;
  double t5576;
  double t5569;
  double t5571;
  double t5572;
  double t5314;
  double t5318;
  double t5319;
  double t5329;
  double t5330;
  double t5331;
  double t5583;
  double t5584;
  double t5585;
  double t5343;
  double t5345;
  double t5347;
  double t5356;
  double t5359;
  double t5360;
  double t5578;
  double t5579;
  double t5580;
  double t5594;
  double t5595;
  double t5596;
  double t5365;
  double t5366;
  double t5367;
  double t5377;
  double t5380;
  double t5381;
  double t5602;
  double t5603;
  double t5604;
  double t5606;
  double t5607;
  double t5609;
  double t5387;
  double t5388;
  double t5389;
  double t5404;
  double t5406;
  double t5407;
  double t5613;
  double t5614;
  double t5616;
  double t5618;
  double t5619;
  double t5620;
  double t5415;
  double t5416;
  double t5418;
  double t5429;
  double t5431;
  double t5432;
  double t5623;
  double t5624;
  double t5626;
  double t5630;
  double t5632;
  double t5633;
  double t5437;
  double t5438;
  double t5440;
  double t5637;
  double t5638;
  double t5639;
  double t5642;
  double t5643;
  double t5644;
  t4450 = Cos(var1[4]);
  t4817 = Sin(var1[5]);
  t4735 = Sin(var1[14]);
  t4751 = Sin(var1[4]);
  t4777 = Cos(var1[14]);
  t4911 = Sin(var1[15]);
  t4867 = t4735*t4751;
  t4871 = -1.*t4777*t4450*t4817;
  t4884 = t4867 + t4871;
  t4856 = Cos(var1[15]);
  t4920 = t4777*t4751;
  t4926 = t4450*t4735*t4817;
  t4928 = t4920 + t4926;
  t4656 = Cos(var1[16]);
  t4660 = -1.*t4656;
  t4686 = 1. + t4660;
  t4722 = Sin(var1[16]);
  t4566 = Cos(var1[5]);
  t5017 = t4856*t4884;
  t5018 = t4911*t4928;
  t5019 = t5017 + t5018;
  t4934 = Cos(var1[17]);
  t4941 = -1.*t4934;
  t4962 = 1. + t4941;
  t4970 = Sin(var1[17]);
  t4977 = -1.*t4911*t4884;
  t4979 = t4856*t4928;
  t4980 = t4977 + t4979;
  t5060 = t4656*t4450*t4566;
  t5062 = -1.*t4722*t5019;
  t5065 = t5060 + t5062;
  t5071 = Cos(var1[18]);
  t5072 = -1.*t5071;
  t5076 = 1. + t5072;
  t5086 = Sin(var1[18]);
  t5094 = t4970*t4980;
  t5095 = t4934*t5065;
  t5096 = t5094 + t5095;
  t5107 = t4934*t4980;
  t5118 = -1.*t4970*t5065;
  t5128 = t5107 + t5118;
  t5147 = Cos(var1[19]);
  t5148 = -1.*t5147;
  t5153 = 1. + t5148;
  t5156 = Sin(var1[19]);
  t5164 = -1.*t5086*t5096;
  t5169 = t5071*t5128;
  t5176 = t5164 + t5169;
  t5188 = t5071*t5096;
  t5193 = t5086*t5128;
  t5196 = t5188 + t5193;
  t5200 = Cos(var1[20]);
  t5201 = -1.*t5200;
  t5202 = 1. + t5201;
  t5207 = Sin(var1[20]);
  t5211 = t5156*t5176;
  t5212 = t5147*t5196;
  t5216 = t5211 + t5212;
  t5228 = t5147*t5176;
  t5230 = -1.*t5156*t5196;
  t5231 = t5228 + t5230;
  t5233 = Cos(var1[21]);
  t5234 = -1.*t5233;
  t5236 = 1. + t5234;
  t5238 = Sin(var1[21]);
  t5241 = -1.*t5207*t5216;
  t5244 = t5200*t5231;
  t5245 = t5241 + t5244;
  t5252 = t5200*t5216;
  t5254 = t5207*t5231;
  t5255 = t5252 + t5254;
  t4826 = Cos(var1[6]);
  t5268 = Sin(var1[6]);
  t5274 = Cos(var1[7]);
  t5284 = t4826*t4751;
  t5285 = t4450*t4817*t5268;
  t5286 = t5284 + t5285;
  t5280 = -1.*t4450*t4826*t4817;
  t5281 = t4751*t5268;
  t5282 = t5280 + t5281;
  t5287 = Sin(var1[7]);
  t5311 = Cos(var1[8]);
  t5312 = -1.*t5311;
  t5313 = 1. + t5312;
  t5317 = Sin(var1[8]);
  t5322 = t5274*t5282;
  t5325 = t5286*t5287;
  t5327 = t5322 + t5325;
  t5292 = Cos(var1[9]);
  t5295 = -1.*t5292;
  t5296 = 1. + t5295;
  t5299 = Sin(var1[9]);
  t5305 = t5274*t5286;
  t5307 = -1.*t5282*t5287;
  t5309 = t5305 + t5307;
  t5348 = t4450*t4566*t5311;
  t5349 = -1.*t5327*t5317;
  t5351 = t5348 + t5349;
  t5353 = Cos(var1[10]);
  t5354 = -1.*t5353;
  t5355 = 1. + t5354;
  t5358 = Sin(var1[10]);
  t5361 = t5299*t5309;
  t5362 = t5292*t5351;
  t5363 = t5361 + t5362;
  t5368 = t5292*t5309;
  t5369 = -1.*t5299*t5351;
  t5370 = t5368 + t5369;
  t5373 = Cos(var1[11]);
  t5374 = -1.*t5373;
  t5376 = 1. + t5374;
  t5379 = Sin(var1[11]);
  t5382 = -1.*t5358*t5363;
  t5383 = t5353*t5370;
  t5385 = t5382 + t5383;
  t5393 = t5353*t5363;
  t5394 = t5358*t5370;
  t5395 = t5393 + t5394;
  t5398 = Cos(var1[12]);
  t5400 = -1.*t5398;
  t5402 = 1. + t5400;
  t5405 = Sin(var1[12]);
  t5408 = t5379*t5385;
  t5411 = t5373*t5395;
  t5412 = t5408 + t5411;
  t5419 = t5373*t5385;
  t5421 = -1.*t5379*t5395;
  t5423 = t5419 + t5421;
  t5425 = Cos(var1[13]);
  t5427 = -1.*t5425;
  t5428 = 1. + t5427;
  t5430 = Sin(var1[13]);
  t5433 = -1.*t5405*t5412;
  t5434 = t5398*t5423;
  t5435 = t5433 + t5434;
  t5441 = t5398*t5412;
  t5443 = t5405*t5423;
  t5445 = t5441 + t5443;
  t4737 = 0.135*t4735;
  t4741 = 0. + t4737;
  t4698 = -0.049*t4686;
  t4724 = 0.135*t4722;
  t4725 = 0. + t4698 + t4724;
  t5461 = Sin(var1[3]);
  t4790 = -1.*t4777;
  t4795 = 1. + t4790;
  t4800 = -0.135*t4795;
  t4808 = 0. + t4800;
  t5467 = Cos(var1[3]);
  t4830 = -1.*t4826;
  t4834 = 1. + t4830;
  t4838 = 0.135*t4834;
  t4842 = 0. + t4838;
  t5473 = t5467*t4566;
  t5475 = -1.*t5461*t4751*t4817;
  t5476 = t5473 + t5475;
  t4857 = -1.*t4856;
  t4858 = 1. + t4857;
  t4859 = -0.135*t4858;
  t4864 = 0. + t4859;
  t4912 = 0.135*t4911;
  t4915 = 0. + t4912;
  t4969 = -0.09*t4962;
  t4972 = 0.049*t4970;
  t4976 = 0. + t4969 + t4972;
  t5479 = -1.*t4450*t4735*t5461;
  t5481 = t4777*t5476;
  t5482 = t5479 + t5481;
  t5485 = -1.*t4777*t4450*t5461;
  t5486 = -1.*t4735*t5476;
  t5488 = t5485 + t5486;
  t4983 = -0.135*t4686;
  t4995 = -0.049*t4722;
  t5015 = 0. + t4983 + t4995;
  t5466 = t4566*t5461*t4751;
  t5469 = t5467*t4817;
  t5470 = t5466 + t5469;
  t5497 = t4856*t5482;
  t5498 = t4911*t5488;
  t5499 = t5497 + t5498;
  t5033 = -0.049*t4962;
  t5044 = -0.09*t4970;
  t5058 = 0. + t5033 + t5044;
  t5082 = -0.049*t5076;
  t5092 = -0.21*t5086;
  t5093 = 0. + t5082 + t5092;
  t5491 = -1.*t4911*t5482;
  t5493 = t4856*t5488;
  t5494 = t5491 + t5493;
  t5506 = t4656*t5470;
  t5507 = -1.*t4722*t5499;
  t5508 = t5506 + t5507;
  t5099 = -0.21*t5076;
  t5100 = 0.049*t5086;
  t5103 = 0. + t5099 + t5100;
  t5154 = -0.2707*t5153;
  t5158 = 0.0016*t5156;
  t5163 = 0. + t5154 + t5158;
  t5511 = t4970*t5494;
  t5512 = t4934*t5508;
  t5513 = t5511 + t5512;
  t5517 = t4934*t5494;
  t5518 = -1.*t4970*t5508;
  t5519 = t5517 + t5518;
  t5181 = -0.0016*t5153;
  t5184 = -0.2707*t5156;
  t5185 = 0. + t5181 + t5184;
  t5205 = 0.0184*t5202;
  t5209 = -0.7055*t5207;
  t5210 = 0. + t5205 + t5209;
  t5522 = -1.*t5086*t5513;
  t5523 = t5071*t5519;
  t5524 = t5522 + t5523;
  t5526 = t5071*t5513;
  t5528 = t5086*t5519;
  t5529 = t5526 + t5528;
  t5222 = -0.7055*t5202;
  t5224 = -0.0184*t5207;
  t5227 = 0. + t5222 + t5224;
  t5237 = -1.1135*t5236;
  t5239 = 0.0216*t5238;
  t5240 = 0. + t5237 + t5239;
  t5531 = t5156*t5524;
  t5532 = t5147*t5529;
  t5533 = t5531 + t5532;
  t5537 = t5147*t5524;
  t5538 = -1.*t5156*t5529;
  t5540 = t5537 + t5538;
  t5248 = -0.0216*t5236;
  t5249 = -1.1135*t5238;
  t5251 = 0. + t5248 + t5249;
  t5543 = -1.*t5207*t5533;
  t5544 = t5200*t5540;
  t5546 = t5543 + t5544;
  t5548 = t5200*t5533;
  t5549 = t5207*t5540;
  t5550 = t5548 + t5549;
  t5270 = -0.135*t5268;
  t5272 = 0. + t5270;
  t5276 = -1.*t5274;
  t5277 = 1. + t5276;
  t5278 = 0.135*t5277;
  t5279 = 0. + t5278;
  t5288 = -0.135*t5287;
  t5289 = 0. + t5288;
  t5297 = -0.09*t5296;
  t5302 = 0.049*t5299;
  t5304 = 0. + t5297 + t5302;
  t5574 = -1.*t4450*t4826*t5461;
  t5575 = -1.*t5476*t5268;
  t5576 = t5574 + t5575;
  t5569 = t4826*t5476;
  t5571 = -1.*t4450*t5461*t5268;
  t5572 = t5569 + t5571;
  t5314 = -0.049*t5313;
  t5318 = -0.135*t5317;
  t5319 = 0. + t5314 + t5318;
  t5329 = 0.135*t5313;
  t5330 = -0.049*t5317;
  t5331 = 0. + t5329 + t5330;
  t5583 = t5274*t5572;
  t5584 = t5576*t5287;
  t5585 = t5583 + t5584;
  t5343 = -0.049*t5296;
  t5345 = -0.09*t5299;
  t5347 = 0. + t5343 + t5345;
  t5356 = -0.049*t5355;
  t5359 = -0.21*t5358;
  t5360 = 0. + t5356 + t5359;
  t5578 = t5274*t5576;
  t5579 = -1.*t5572*t5287;
  t5580 = t5578 + t5579;
  t5594 = t5311*t5470;
  t5595 = -1.*t5585*t5317;
  t5596 = t5594 + t5595;
  t5365 = -0.21*t5355;
  t5366 = 0.049*t5358;
  t5367 = 0. + t5365 + t5366;
  t5377 = -0.2707*t5376;
  t5380 = 0.0016*t5379;
  t5381 = 0. + t5377 + t5380;
  t5602 = t5299*t5580;
  t5603 = t5292*t5596;
  t5604 = t5602 + t5603;
  t5606 = t5292*t5580;
  t5607 = -1.*t5299*t5596;
  t5609 = t5606 + t5607;
  t5387 = -0.0016*t5376;
  t5388 = -0.2707*t5379;
  t5389 = 0. + t5387 + t5388;
  t5404 = 0.0184*t5402;
  t5406 = -0.7055*t5405;
  t5407 = 0. + t5404 + t5406;
  t5613 = -1.*t5358*t5604;
  t5614 = t5353*t5609;
  t5616 = t5613 + t5614;
  t5618 = t5353*t5604;
  t5619 = t5358*t5609;
  t5620 = t5618 + t5619;
  t5415 = -0.7055*t5402;
  t5416 = -0.0184*t5405;
  t5418 = 0. + t5415 + t5416;
  t5429 = -1.1135*t5428;
  t5431 = 0.0216*t5430;
  t5432 = 0. + t5429 + t5431;
  t5623 = t5379*t5616;
  t5624 = t5373*t5620;
  t5626 = t5623 + t5624;
  t5630 = t5373*t5616;
  t5632 = -1.*t5379*t5620;
  t5633 = t5630 + t5632;
  t5437 = -0.0216*t5428;
  t5438 = -1.1135*t5430;
  t5440 = 0. + t5437 + t5438;
  t5637 = -1.*t5405*t5626;
  t5638 = t5398*t5633;
  t5639 = t5637 + t5638;
  t5642 = t5398*t5626;
  t5643 = t5405*t5633;
  t5644 = t5642 + t5643;
  p_output1[0]=Sqrt(Power(0. + t4450*t4566*t4725 + t4741*t4751 - 1.*t4450*t4808*t4817 + t4450*t4817*t4842 + t4864*t4884 + t4915*t4928 + t4976*t4980 + t5015*t5019 - 0.1305*(t4450*t4566*t4722 + t4656*t5019) + t5058*t5065 + t5093*t5096 + t5103*t5128 + t5163*t5176 + t5185*t5196 + t5210*t5216 + t5227*t5231 + t5240*t5245 + t5251*t5255 + 0.0306*(t5238*t5245 + t5233*t5255) - 1.1312*(t5233*t5245 - 1.*t5238*t5255) - 1.*t4751*t5272 - 1.*t5279*t5282 - 1.*t5286*t5289 - 1.*t5304*t5309 - 1.*t4450*t4566*t5319 - 0.1305*(t4450*t4566*t5317 + t5311*t5327) - 1.*t5327*t5331 - 1.*t5347*t5351 - 1.*t5360*t5363 - 1.*t5367*t5370 - 1.*t5381*t5385 - 1.*t5389*t5395 - 1.*t5407*t5412 - 1.*t5418*t5423 - 1.*t5432*t5435 - 1.*t5440*t5445 - 0.0306*(t5430*t5435 + t5425*t5445) + 1.1312*(t5425*t5435 - 1.*t5430*t5445),2) + Power(0. - 1.*t4450*t4741*t5461 + t4450*t5272*t5461 + t4725*t5470 - 1.*t5319*t5470 + t4808*t5476 - 1.*t4842*t5476 + t4864*t5482 + t4915*t5488 + t4976*t5494 + t5015*t5499 - 0.1305*(t4722*t5470 + t4656*t5499) + t5058*t5508 + t5093*t5513 + t5103*t5519 + t5163*t5524 + t5185*t5529 + t5210*t5533 + t5227*t5540 + t5240*t5546 + t5251*t5550 + 0.0306*(t5238*t5546 + t5233*t5550) - 1.1312*(t5233*t5546 - 1.*t5238*t5550) - 1.*t5279*t5572 - 1.*t5289*t5576 - 1.*t5304*t5580 - 1.*t5331*t5585 - 0.1305*(t5317*t5470 + t5311*t5585) - 1.*t5347*t5596 - 1.*t5360*t5604 - 1.*t5367*t5609 - 1.*t5381*t5616 - 1.*t5389*t5620 - 1.*t5407*t5626 - 1.*t5418*t5633 - 1.*t5432*t5639 - 1.*t5440*t5644 - 0.0306*(t5430*t5639 + t5425*t5644) + 1.1312*(t5425*t5639 - 1.*t5430*t5644),2));
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

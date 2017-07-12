/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:23 GMT-04:00
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
  double t4056;
  double t2327;
  double t4033;
  double t4037;
  double t4040;
  double t4063;
  double t4080;
  double t4085;
  double t4086;
  double t4106;
  double t4111;
  double t4118;
  double t4130;
  double t4131;
  double t4132;
  double t4126;
  double t4127;
  double t4128;
  double t4136;
  double t4347;
  double t4348;
  double t4351;
  double t4353;
  double t4396;
  double t4409;
  double t4410;
  double t4322;
  double t4330;
  double t4334;
  double t4141;
  double t4145;
  double t4150;
  double t4158;
  double t4296;
  double t4306;
  double t4314;
  double t4499;
  double t4502;
  double t4506;
  double t4514;
  double t4518;
  double t4522;
  double t4527;
  double t4535;
  double t4538;
  double t4542;
  double t4559;
  double t4560;
  double t4563;
  double t4570;
  double t4580;
  double t4587;
  double t4594;
  double t4595;
  double t4611;
  double t4612;
  double t4613;
  double t4615;
  double t4616;
  double t4617;
  double t4619;
  double t4622;
  double t4623;
  double t4624;
  double t4629;
  double t4630;
  double t4631;
  double t4633;
  double t4634;
  double t4635;
  double t4637;
  double t4640;
  double t4641;
  double t4642;
  double t4647;
  double t4648;
  double t4649;
  double t3982;
  double t4025;
  double t4124;
  double t4125;
  double t4151;
  double t4162;
  double t4292;
  double t4666;
  double t4667;
  double t4668;
  double t4662;
  double t4663;
  double t4664;
  double t4352;
  double t4368;
  double t4384;
  double t4411;
  double t4415;
  double t4431;
  double t4675;
  double t4676;
  double t4677;
  double t4482;
  double t4486;
  double t4496;
  double t4526;
  double t4528;
  double t4532;
  double t4670;
  double t4671;
  double t4672;
  double t4683;
  double t4684;
  double t4685;
  double t4550;
  double t4554;
  double t4555;
  double t4574;
  double t4575;
  double t4576;
  double t4583;
  double t4586;
  double t4687;
  double t4688;
  double t4689;
  double t4691;
  double t4692;
  double t4693;
  double t4607;
  double t4608;
  double t4609;
  double t4610;
  double t4618;
  double t4620;
  double t4621;
  double t4695;
  double t4696;
  double t4697;
  double t4699;
  double t4700;
  double t4701;
  double t4626;
  double t4627;
  double t4628;
  double t4636;
  double t4638;
  double t4639;
  double t4703;
  double t4708;
  double t4709;
  double t4711;
  double t4712;
  double t4713;
  double t4644;
  double t4645;
  double t4646;
  double t4715;
  double t4716;
  double t4717;
  double t4719;
  double t4720;
  double t4721;
  double t4732;
  double t4733;
  double t4734;
  double t4746;
  double t4747;
  double t4748;
  double t4742;
  double t4743;
  double t4744;
  double t4738;
  double t4739;
  double t4740;
  double t4754;
  double t4755;
  double t4756;
  double t4758;
  double t4759;
  double t4760;
  double t4762;
  double t4763;
  double t4764;
  double t4766;
  double t4767;
  double t4768;
  double t4770;
  double t4771;
  double t4772;
  double t4774;
  double t4775;
  double t4776;
  double t4778;
  double t4779;
  double t4780;
  double t4782;
  double t4783;
  double t4784;
  double t4786;
  double t4787;
  double t4788;
  double t4801;
  double t4802;
  double t4803;
  double t4805;
  double t4806;
  double t4807;
  double t4809;
  double t4810;
  double t4811;
  double t4813;
  double t4814;
  double t4815;
  double t4819;
  double t4820;
  double t4821;
  double t4823;
  double t4824;
  double t4825;
  double t4827;
  double t4828;
  double t4829;
  double t4831;
  double t4832;
  double t4833;
  double t4835;
  double t4836;
  double t4837;
  double t4839;
  double t4840;
  double t4841;
  double t4843;
  double t4844;
  double t4845;
  double t4847;
  double t4848;
  double t4849;
  double t4861;
  double t4862;
  double t4863;
  double t4865;
  double t4866;
  double t4868;
  double t4869;
  double t4873;
  double t4874;
  double t4875;
  double t4877;
  double t4878;
  double t4879;
  double t4881;
  double t4882;
  double t4883;
  double t4885;
  double t4886;
  double t4887;
  double t4889;
  double t4890;
  double t4891;
  double t4893;
  double t4894;
  double t4895;
  double t4897;
  double t4898;
  double t4899;
  double t4901;
  double t4902;
  double t4903;
  double t4923;
  double t4924;
  double t4925;
  double t4916;
  double t4917;
  double t4918;
  double t4931;
  double t4932;
  double t4933;
  double t4942;
  double t4943;
  double t4944;
  double t4946;
  double t4947;
  double t4948;
  double t4950;
  double t4951;
  double t4952;
  double t4954;
  double t4955;
  double t4956;
  double t4959;
  double t4960;
  double t4961;
  double t4963;
  double t4964;
  double t4965;
  double t4938;
  double t4939;
  double t4940;
  double t4984;
  double t4985;
  double t4986;
  double t4988;
  double t4989;
  double t4990;
  double t4992;
  double t4993;
  double t4994;
  double t4996;
  double t4997;
  double t4998;
  double t5000;
  double t5001;
  double t5002;
  double t5004;
  double t5005;
  double t5006;
  double t5008;
  double t5009;
  double t5010;
  double t5012;
  double t5013;
  double t5014;
  double t5028;
  double t5029;
  double t5030;
  double t5035;
  double t5036;
  double t5038;
  double t5039;
  double t5041;
  double t5042;
  double t5043;
  double t5045;
  double t5046;
  double t5047;
  double t5049;
  double t5050;
  double t5051;
  double t5053;
  double t5054;
  double t5055;
  double t5073;
  double t5074;
  double t5075;
  double t5077;
  double t5078;
  double t5080;
  double t5081;
  double t5083;
  double t5084;
  double t5085;
  double t5088;
  double t5089;
  double t5090;
  double t5104;
  double t5105;
  double t5106;
  double t5111;
  double t5112;
  double t5114;
  double t5115;
  double t5117;
  double t5133;
  double t5134;
  double t5136;
  double t5121;
  t4056 = Sin(var1[3]);
  t2327 = Cos(var1[6]);
  t4033 = Cos(var1[3]);
  t4037 = Cos(var1[5]);
  t4040 = t4033*t4037;
  t4063 = Sin(var1[4]);
  t4080 = Sin(var1[5]);
  t4085 = -1.*t4056*t4063*t4080;
  t4086 = t4040 + t4085;
  t4106 = Cos(var1[4]);
  t4111 = Sin(var1[6]);
  t4118 = Cos(var1[7]);
  t4130 = -1.*t4106*t2327*t4056;
  t4131 = -1.*t4086*t4111;
  t4132 = t4130 + t4131;
  t4126 = t2327*t4086;
  t4127 = -1.*t4106*t4056*t4111;
  t4128 = t4126 + t4127;
  t4136 = Sin(var1[7]);
  t4347 = Cos(var1[8]);
  t4348 = -1.*t4347;
  t4351 = 1. + t4348;
  t4353 = Sin(var1[8]);
  t4396 = t4118*t4128;
  t4409 = t4132*t4136;
  t4410 = t4396 + t4409;
  t4322 = t4037*t4056*t4063;
  t4330 = t4033*t4080;
  t4334 = t4322 + t4330;
  t4141 = Cos(var1[9]);
  t4145 = -1.*t4141;
  t4150 = 1. + t4145;
  t4158 = Sin(var1[9]);
  t4296 = t4118*t4132;
  t4306 = -1.*t4128*t4136;
  t4314 = t4296 + t4306;
  t4499 = t4347*t4334;
  t4502 = -1.*t4410*t4353;
  t4506 = t4499 + t4502;
  t4514 = Cos(var1[10]);
  t4518 = -1.*t4514;
  t4522 = 1. + t4518;
  t4527 = Sin(var1[10]);
  t4535 = t4158*t4314;
  t4538 = t4141*t4506;
  t4542 = t4535 + t4538;
  t4559 = t4141*t4314;
  t4560 = -1.*t4158*t4506;
  t4563 = t4559 + t4560;
  t4570 = Cos(var1[11]);
  t4580 = Sin(var1[11]);
  t4587 = -1.*t4527*t4542;
  t4594 = t4514*t4563;
  t4595 = t4587 + t4594;
  t4611 = t4514*t4542;
  t4612 = t4527*t4563;
  t4613 = t4611 + t4612;
  t4615 = Cos(var1[12]);
  t4616 = -1.*t4615;
  t4617 = 1. + t4616;
  t4619 = Sin(var1[12]);
  t4622 = t4580*t4595;
  t4623 = t4570*t4613;
  t4624 = t4622 + t4623;
  t4629 = t4570*t4595;
  t4630 = -1.*t4580*t4613;
  t4631 = t4629 + t4630;
  t4633 = Cos(var1[13]);
  t4634 = -1.*t4633;
  t4635 = 1. + t4634;
  t4637 = Sin(var1[13]);
  t4640 = -1.*t4619*t4624;
  t4641 = t4615*t4631;
  t4642 = t4640 + t4641;
  t4647 = t4615*t4624;
  t4648 = t4619*t4631;
  t4649 = t4647 + t4648;
  t3982 = -1.*t2327;
  t4025 = 1. + t3982;
  t4124 = -1.*t4118;
  t4125 = 1. + t4124;
  t4151 = -0.09*t4150;
  t4162 = 0.049*t4158;
  t4292 = t4151 + t4162;
  t4666 = -1.*t4033*t2327*t4063;
  t4667 = -1.*t4033*t4106*t4080*t4111;
  t4668 = t4666 + t4667;
  t4662 = t4033*t4106*t2327*t4080;
  t4663 = -1.*t4033*t4063*t4111;
  t4664 = t4662 + t4663;
  t4352 = -0.049*t4351;
  t4368 = -0.135*t4353;
  t4384 = t4352 + t4368;
  t4411 = 0.135*t4351;
  t4415 = -0.049*t4353;
  t4431 = t4411 + t4415;
  t4675 = t4118*t4664;
  t4676 = t4668*t4136;
  t4677 = t4675 + t4676;
  t4482 = -0.049*t4150;
  t4486 = -0.09*t4158;
  t4496 = t4482 + t4486;
  t4526 = -0.049*t4522;
  t4528 = -0.21*t4527;
  t4532 = t4526 + t4528;
  t4670 = t4118*t4668;
  t4671 = -1.*t4664*t4136;
  t4672 = t4670 + t4671;
  t4683 = -1.*t4033*t4106*t4037*t4347;
  t4684 = -1.*t4677*t4353;
  t4685 = t4683 + t4684;
  t4550 = -0.21*t4522;
  t4554 = 0.049*t4527;
  t4555 = t4550 + t4554;
  t4574 = -1.*t4570;
  t4575 = 1. + t4574;
  t4576 = -0.2707*t4575;
  t4583 = 0.0016*t4580;
  t4586 = t4576 + t4583;
  t4687 = t4158*t4672;
  t4688 = t4141*t4685;
  t4689 = t4687 + t4688;
  t4691 = t4141*t4672;
  t4692 = -1.*t4158*t4685;
  t4693 = t4691 + t4692;
  t4607 = -1. + t4570;
  t4608 = 0.0016*t4607;
  t4609 = -0.2707*t4580;
  t4610 = t4608 + t4609;
  t4618 = 0.0184*t4617;
  t4620 = -0.7055*t4619;
  t4621 = t4618 + t4620;
  t4695 = -1.*t4527*t4689;
  t4696 = t4514*t4693;
  t4697 = t4695 + t4696;
  t4699 = t4514*t4689;
  t4700 = t4527*t4693;
  t4701 = t4699 + t4700;
  t4626 = -0.7055*t4617;
  t4627 = -0.0184*t4619;
  t4628 = t4626 + t4627;
  t4636 = -1.1135*t4635;
  t4638 = 0.0216*t4637;
  t4639 = t4636 + t4638;
  t4703 = t4580*t4697;
  t4708 = t4570*t4701;
  t4709 = t4703 + t4708;
  t4711 = t4570*t4697;
  t4712 = -1.*t4580*t4701;
  t4713 = t4711 + t4712;
  t4644 = -0.0216*t4635;
  t4645 = -1.1135*t4637;
  t4646 = t4644 + t4645;
  t4715 = -1.*t4619*t4709;
  t4716 = t4615*t4713;
  t4717 = t4715 + t4716;
  t4719 = t4615*t4709;
  t4720 = t4619*t4713;
  t4721 = t4719 + t4720;
  t4732 = t4033*t4037*t4063;
  t4733 = -1.*t4056*t4080;
  t4734 = t4732 + t4733;
  t4746 = t2327*t4118*t4734;
  t4747 = -1.*t4734*t4111*t4136;
  t4748 = t4746 + t4747;
  t4742 = t4037*t4056;
  t4743 = t4033*t4063*t4080;
  t4744 = t4742 + t4743;
  t4738 = -1.*t4118*t4734*t4111;
  t4739 = -1.*t2327*t4734*t4136;
  t4740 = t4738 + t4739;
  t4754 = t4347*t4744;
  t4755 = -1.*t4748*t4353;
  t4756 = t4754 + t4755;
  t4758 = t4158*t4740;
  t4759 = t4141*t4756;
  t4760 = t4758 + t4759;
  t4762 = t4141*t4740;
  t4763 = -1.*t4158*t4756;
  t4764 = t4762 + t4763;
  t4766 = -1.*t4527*t4760;
  t4767 = t4514*t4764;
  t4768 = t4766 + t4767;
  t4770 = t4514*t4760;
  t4771 = t4527*t4764;
  t4772 = t4770 + t4771;
  t4774 = t4580*t4768;
  t4775 = t4570*t4772;
  t4776 = t4774 + t4775;
  t4778 = t4570*t4768;
  t4779 = -1.*t4580*t4772;
  t4780 = t4778 + t4779;
  t4782 = -1.*t4619*t4776;
  t4783 = t4615*t4780;
  t4784 = t4782 + t4783;
  t4786 = t4615*t4776;
  t4787 = t4619*t4780;
  t4788 = t4786 + t4787;
  t4801 = t4033*t4106*t2327;
  t4802 = -1.*t4744*t4111;
  t4803 = t4801 + t4802;
  t4805 = -1.*t2327*t4744;
  t4806 = -1.*t4033*t4106*t4111;
  t4807 = t4805 + t4806;
  t4809 = t4118*t4803;
  t4810 = t4807*t4136;
  t4811 = t4809 + t4810;
  t4813 = t4118*t4807;
  t4814 = -1.*t4803*t4136;
  t4815 = t4813 + t4814;
  t4819 = t4158*t4815;
  t4820 = -1.*t4141*t4811*t4353;
  t4821 = t4819 + t4820;
  t4823 = t4141*t4815;
  t4824 = t4158*t4811*t4353;
  t4825 = t4823 + t4824;
  t4827 = -1.*t4527*t4821;
  t4828 = t4514*t4825;
  t4829 = t4827 + t4828;
  t4831 = t4514*t4821;
  t4832 = t4527*t4825;
  t4833 = t4831 + t4832;
  t4835 = t4580*t4829;
  t4836 = t4570*t4833;
  t4837 = t4835 + t4836;
  t4839 = t4570*t4829;
  t4840 = -1.*t4580*t4833;
  t4841 = t4839 + t4840;
  t4843 = -1.*t4619*t4837;
  t4844 = t4615*t4841;
  t4845 = t4843 + t4844;
  t4847 = t4615*t4837;
  t4848 = t4619*t4841;
  t4849 = t4847 + t4848;
  t4861 = t2327*t4744;
  t4862 = t4033*t4106*t4111;
  t4863 = t4861 + t4862;
  t4865 = -1.*t4863*t4136;
  t4866 = t4809 + t4865;
  t4868 = -1.*t4118*t4863;
  t4869 = t4868 + t4814;
  t4873 = t4158*t4869;
  t4874 = -1.*t4141*t4866*t4353;
  t4875 = t4873 + t4874;
  t4877 = t4141*t4869;
  t4878 = t4158*t4866*t4353;
  t4879 = t4877 + t4878;
  t4881 = -1.*t4527*t4875;
  t4882 = t4514*t4879;
  t4883 = t4881 + t4882;
  t4885 = t4514*t4875;
  t4886 = t4527*t4879;
  t4887 = t4885 + t4886;
  t4889 = t4580*t4883;
  t4890 = t4570*t4887;
  t4891 = t4889 + t4890;
  t4893 = t4570*t4883;
  t4894 = -1.*t4580*t4887;
  t4895 = t4893 + t4894;
  t4897 = -1.*t4619*t4891;
  t4898 = t4615*t4895;
  t4899 = t4897 + t4898;
  t4901 = t4615*t4891;
  t4902 = t4619*t4895;
  t4903 = t4901 + t4902;
  t4923 = t4118*t4863;
  t4924 = t4803*t4136;
  t4925 = t4923 + t4924;
  t4916 = -1.*t4033*t4037*t4063;
  t4917 = t4056*t4080;
  t4918 = t4916 + t4917;
  t4931 = -1.*t4347*t4925;
  t4932 = -1.*t4918*t4353;
  t4933 = t4931 + t4932;
  t4942 = -1.*t4514*t4158*t4933;
  t4943 = -1.*t4141*t4527*t4933;
  t4944 = t4942 + t4943;
  t4946 = t4141*t4514*t4933;
  t4947 = -1.*t4158*t4527*t4933;
  t4948 = t4946 + t4947;
  t4950 = t4580*t4944;
  t4951 = t4570*t4948;
  t4952 = t4950 + t4951;
  t4954 = t4570*t4944;
  t4955 = -1.*t4580*t4948;
  t4956 = t4954 + t4955;
  t4959 = -1.*t4619*t4952;
  t4960 = t4615*t4956;
  t4961 = t4959 + t4960;
  t4963 = t4615*t4952;
  t4964 = t4619*t4956;
  t4965 = t4963 + t4964;
  t4938 = t4347*t4918;
  t4939 = -1.*t4925*t4353;
  t4940 = t4938 + t4939;
  t4984 = -1.*t4158*t4866;
  t4985 = -1.*t4141*t4940;
  t4986 = t4984 + t4985;
  t4988 = t4141*t4866;
  t4989 = -1.*t4158*t4940;
  t4990 = t4988 + t4989;
  t4992 = t4527*t4986;
  t4993 = t4514*t4990;
  t4994 = t4992 + t4993;
  t4996 = t4514*t4986;
  t4997 = -1.*t4527*t4990;
  t4998 = t4996 + t4997;
  t5000 = -1.*t4580*t4994;
  t5001 = t4570*t4998;
  t5002 = t5000 + t5001;
  t5004 = t4570*t4994;
  t5005 = t4580*t4998;
  t5006 = t5004 + t5005;
  t5008 = t4619*t5002;
  t5009 = t4615*t5006;
  t5010 = t5008 + t5009;
  t5012 = t4615*t5002;
  t5013 = -1.*t4619*t5006;
  t5014 = t5012 + t5013;
  t5028 = t4158*t4866;
  t5029 = t4141*t4940;
  t5030 = t5028 + t5029;
  t5035 = -1.*t4527*t5030;
  t5036 = t5035 + t4993;
  t5038 = -1.*t4514*t5030;
  t5039 = t5038 + t4997;
  t5041 = -1.*t4580*t5036;
  t5042 = t4570*t5039;
  t5043 = t5041 + t5042;
  t5045 = t4570*t5036;
  t5046 = t4580*t5039;
  t5047 = t5045 + t5046;
  t5049 = t4619*t5043;
  t5050 = t4615*t5047;
  t5051 = t5049 + t5050;
  t5053 = t4615*t5043;
  t5054 = -1.*t4619*t5047;
  t5055 = t5053 + t5054;
  t5073 = t4514*t5030;
  t5074 = t4527*t4990;
  t5075 = t5073 + t5074;
  t5077 = -1.*t4570*t5075;
  t5078 = t5041 + t5077;
  t5080 = -1.*t4580*t5075;
  t5081 = t5045 + t5080;
  t5083 = t4619*t5078;
  t5084 = t4615*t5081;
  t5085 = t5083 + t5084;
  t5088 = t4615*t5078;
  t5089 = -1.*t4619*t5081;
  t5090 = t5088 + t5089;
  t5104 = t4580*t5036;
  t5105 = t4570*t5075;
  t5106 = t5104 + t5105;
  t5111 = -1.*t4619*t5106;
  t5112 = t5111 + t5084;
  t5114 = -1.*t4615*t5106;
  t5115 = t5114 + t5089;
  t5117 = -1.*t4637*t5112;
  t5133 = t4615*t5106;
  t5134 = t4619*t5081;
  t5136 = t5133 + t5134;
  t5121 = t4633*t5112;
  p_output1[0]=1.;
  p_output1[1]=0.135*t4025*t4086 + 0.135*t4056*t4106*t4111 + 0.135*t4125*t4128 - 0.135*t4132*t4136 + t4292*t4314 + t4334*t4384 + 0.1305*(t4334*t4353 + t4347*t4410) + t4410*t4431 + t4496*t4506 + t4532*t4542 + t4555*t4563 + t4586*t4595 + t4610*t4613 + t4621*t4624 + t4628*t4631 + t4639*t4642 + t4646*t4649 + 0.0306*(t4637*t4642 + t4633*t4649) - 1.1312*(t4633*t4642 - 1.*t4637*t4649);
  p_output1[2]=0.135*t4025*t4033*t4080*t4106 + 0.135*t4033*t4063*t4111 - 1.*t4033*t4037*t4106*t4384 + 0.135*t4125*t4664 - 0.135*t4136*t4668 + t4292*t4672 + t4431*t4677 + 0.1305*(-1.*t4033*t4037*t4106*t4353 + t4347*t4677) + t4496*t4685 + t4532*t4689 + t4555*t4693 + t4586*t4697 + t4610*t4701 + t4621*t4709 + t4628*t4713 + t4639*t4717 + t4646*t4721 + 0.0306*(t4637*t4717 + t4633*t4721) - 1.1312*(t4633*t4717 - 1.*t4637*t4721);
  p_output1[3]=0.135*t4025*t4734 + 0.135*t2327*t4125*t4734 + 0.135*t4111*t4136*t4734 + t4292*t4740 + t4384*t4744 + t4431*t4748 + 0.1305*(t4353*t4744 + t4347*t4748) + t4496*t4756 + t4532*t4760 + t4555*t4764 + t4586*t4768 + t4610*t4772 + t4621*t4776 + t4628*t4780 + t4639*t4784 + t4646*t4788 + 0.0306*(t4637*t4784 + t4633*t4788) - 1.1312*(t4633*t4784 - 1.*t4637*t4788);
  p_output1[4]=-0.135*t2327*t4033*t4106 + 0.135*t4111*t4744 + 0.135*t4125*t4803 - 0.135*t4136*t4807 + 0.1305*t4347*t4811 + t4431*t4811 - 1.*t4353*t4496*t4811 + t4292*t4815 + t4532*t4821 + t4555*t4825 + t4586*t4829 + t4610*t4833 + t4621*t4837 + t4628*t4841 + t4639*t4845 + t4646*t4849 + 0.0306*(t4637*t4845 + t4633*t4849) - 1.1312*(t4633*t4845 - 1.*t4637*t4849);
  p_output1[5]=-0.135*t4118*t4803 + 0.135*t4136*t4863 + 0.1305*t4347*t4866 + t4431*t4866 - 1.*t4353*t4496*t4866 + t4292*t4869 + t4532*t4875 + t4555*t4879 + t4586*t4883 + t4610*t4887 + t4621*t4891 + t4628*t4895 + t4639*t4899 + t4646*t4903 + 0.0306*(t4637*t4899 + t4633*t4903) - 1.1312*(t4633*t4899 - 1.*t4637*t4903);
  p_output1[6]=(-0.135*t4347 + t4415)*t4918 + (-0.049*t4347 + 0.135*t4353)*t4925 + t4496*t4933 + t4141*t4532*t4933 - 1.*t4158*t4555*t4933 + 0.1305*t4940 + t4586*t4944 + t4610*t4948 + t4621*t4952 + t4628*t4956 + t4639*t4961 + t4646*t4965 + 0.0306*(t4637*t4961 + t4633*t4965) - 1.1312*(t4633*t4961 - 1.*t4637*t4965);
  p_output1[7]=(0.049*t4141 + t4486)*t4866 + (-0.09*t4141 - 0.049*t4158)*t4940 + t4555*t4986 + t4532*t4990 + t4610*t4994 + t4586*t4998 + t4628*t5002 + t4621*t5006 + t4646*t5010 + t4639*t5014 - 1.1312*(-1.*t4637*t5010 + t4633*t5014) + 0.0306*(t4633*t5010 + t4637*t5014);
  p_output1[8]=(0.049*t4514 + t4528)*t4990 + (-0.21*t4514 - 0.049*t4527)*t5030 + t4610*t5036 + t4586*t5039 + t4628*t5043 + t4621*t5047 + t4646*t5051 + t4639*t5055 - 1.1312*(-1.*t4637*t5051 + t4633*t5055) + 0.0306*(t4633*t5051 + t4637*t5055);
  p_output1[9]=(0.0016*t4570 + t4609)*t5036 + (-0.2707*t4570 - 0.0016*t4580)*t5075 + t4628*t5078 + t4621*t5081 + t4646*t5085 + t4639*t5090 - 1.1312*(-1.*t4637*t5085 + t4633*t5090) + 0.0306*(t4633*t5085 + t4637*t5090);
  p_output1[10]=(-0.0184*t4615 + t4620)*t5081 + (-0.7055*t4615 + 0.0184*t4619)*t5106 + t4646*t5112 + t4639*t5115 - 1.1312*(t4633*t5115 + t5117) + 0.0306*(t4637*t5115 + t5121);
  p_output1[11]=(0.0216*t4633 + t4645)*t5112 + (-1.1135*t4633 - 0.0216*t4637)*t5136 - 1.1312*(t5117 - 1.*t4633*t5136) + 0.0306*(t5121 - 1.*t4637*t5136);
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

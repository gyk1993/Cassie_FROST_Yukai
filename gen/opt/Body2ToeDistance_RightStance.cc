/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:24 GMT-04:00
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
  double t2487;
  double t4474;
  double t4546;
  double t4596;
  double t4650;
  double t4661;
  double t4657;
  double t4658;
  double t4659;
  double t4652;
  double t4673;
  double t4674;
  double t4678;
  double t4112;
  double t4129;
  double t4137;
  double t4392;
  double t4091;
  double t4725;
  double t4726;
  double t4727;
  double t4680;
  double t4681;
  double t4682;
  double t4690;
  double t4702;
  double t4710;
  double t4714;
  double t4745;
  double t4749;
  double t4750;
  double t4752;
  double t4753;
  double t4757;
  double t4765;
  double t4777;
  double t4781;
  double t4785;
  double t4793;
  double t4794;
  double t4795;
  double t4797;
  double t4798;
  double t4799;
  double t4804;
  double t4816;
  double t4817;
  double t4818;
  double t4838;
  double t4842;
  double t4846;
  double t4851;
  double t4852;
  double t4853;
  double t4855;
  double t4858;
  double t4859;
  double t4860;
  double t4872;
  double t4876;
  double t4880;
  double t4888;
  double t4892;
  double t4896;
  double t4904;
  double t4907;
  double t4908;
  double t4909;
  double t4920;
  double t4921;
  double t4922;
  double t4478;
  double t4510;
  double t4318;
  double t4447;
  double t4449;
  double t4957;
  double t4614;
  double t4625;
  double t4632;
  double t4643;
  double t4967;
  double t4653;
  double t4654;
  double t4655;
  double t4656;
  double t4971;
  double t4972;
  double t4973;
  double t4665;
  double t4669;
  double t4686;
  double t4694;
  double t4698;
  double t4976;
  double t4977;
  double t4978;
  double t4980;
  double t4981;
  double t4982;
  double t4722;
  double t4723;
  double t4724;
  double t4966;
  double t4968;
  double t4969;
  double t5003;
  double t5007;
  double t5011;
  double t4736;
  double t4737;
  double t4741;
  double t4761;
  double t4769;
  double t4773;
  double t4987;
  double t4991;
  double t4995;
  double t5020;
  double t5021;
  double t5022;
  double t4790;
  double t4791;
  double t4792;
  double t4800;
  double t4808;
  double t4812;
  double t5024;
  double t5025;
  double t5026;
  double t5031;
  double t5032;
  double t5033;
  double t4826;
  double t4830;
  double t4834;
  double t4854;
  double t4856;
  double t4857;
  double t5037;
  double t5040;
  double t5044;
  double t5052;
  double t5056;
  double t5057;
  double t4867;
  double t4870;
  double t4871;
  double t4900;
  double t4905;
  double t4906;
  double t5059;
  double t5060;
  double t5061;
  double t5063;
  double t5064;
  double t5065;
  double t4911;
  double t4912;
  double t4915;
  double t5068;
  double t5069;
  double t5070;
  double t5072;
  double t5076;
  double t5079;
  double t5108;
  double t5109;
  double t5110;
  double t5116;
  double t5118;
  double t5119;
  double t5122;
  double t5123;
  double t5124;
  double t5101;
  double t5102;
  double t5103;
  double t5131;
  double t5132;
  double t5137;
  double t5126;
  double t5127;
  double t5128;
  double t5143;
  double t5144;
  double t5145;
  double t5147;
  double t5148;
  double t5149;
  double t5151;
  double t5152;
  double t5153;
  double t5155;
  double t5156;
  double t5157;
  double t5159;
  double t5160;
  double t5161;
  double t5163;
  double t5164;
  double t5165;
  double t5167;
  double t5168;
  double t5169;
  double t5171;
  double t5172;
  double t5173;
  double t5175;
  double t5176;
  double t5177;
  t2487 = Cos(var1[4]);
  t4474 = Sin(var1[14]);
  t4546 = Sin(var1[4]);
  t4596 = Cos(var1[14]);
  t4650 = Sin(var1[5]);
  t4661 = Sin(var1[15]);
  t4657 = t4474*t4546;
  t4658 = -1.*t4596*t2487*t4650;
  t4659 = t4657 + t4658;
  t4652 = Cos(var1[15]);
  t4673 = t4596*t4546;
  t4674 = t2487*t4474*t4650;
  t4678 = t4673 + t4674;
  t4112 = Cos(var1[16]);
  t4129 = -1.*t4112;
  t4137 = 1. + t4129;
  t4392 = Sin(var1[16]);
  t4091 = Cos(var1[5]);
  t4725 = t4652*t4659;
  t4726 = t4661*t4678;
  t4727 = t4725 + t4726;
  t4680 = Cos(var1[17]);
  t4681 = -1.*t4680;
  t4682 = 1. + t4681;
  t4690 = Sin(var1[17]);
  t4702 = -1.*t4661*t4659;
  t4710 = t4652*t4678;
  t4714 = t4702 + t4710;
  t4745 = t4112*t2487*t4091;
  t4749 = -1.*t4392*t4727;
  t4750 = t4745 + t4749;
  t4752 = Cos(var1[18]);
  t4753 = -1.*t4752;
  t4757 = 1. + t4753;
  t4765 = Sin(var1[18]);
  t4777 = t4690*t4714;
  t4781 = t4680*t4750;
  t4785 = t4777 + t4781;
  t4793 = t4680*t4714;
  t4794 = -1.*t4690*t4750;
  t4795 = t4793 + t4794;
  t4797 = Cos(var1[19]);
  t4798 = -1.*t4797;
  t4799 = 1. + t4798;
  t4804 = Sin(var1[19]);
  t4816 = -1.*t4765*t4785;
  t4817 = t4752*t4795;
  t4818 = t4816 + t4817;
  t4838 = t4752*t4785;
  t4842 = t4765*t4795;
  t4846 = t4838 + t4842;
  t4851 = Cos(var1[20]);
  t4852 = -1.*t4851;
  t4853 = 1. + t4852;
  t4855 = Sin(var1[20]);
  t4858 = t4804*t4818;
  t4859 = t4797*t4846;
  t4860 = t4858 + t4859;
  t4872 = t4797*t4818;
  t4876 = -1.*t4804*t4846;
  t4880 = t4872 + t4876;
  t4888 = Cos(var1[21]);
  t4892 = -1.*t4888;
  t4896 = 1. + t4892;
  t4904 = Sin(var1[21]);
  t4907 = -1.*t4855*t4860;
  t4908 = t4851*t4880;
  t4909 = t4907 + t4908;
  t4920 = t4851*t4860;
  t4921 = t4855*t4880;
  t4922 = t4920 + t4921;
  t4478 = 0.135*t4474;
  t4510 = 0. + t4478;
  t4318 = -0.049*t4137;
  t4447 = 0.135*t4392;
  t4449 = 0. + t4318 + t4447;
  t4957 = Cos(var1[3]);
  t4614 = -1.*t4596;
  t4625 = 1. + t4614;
  t4632 = -0.135*t4625;
  t4643 = 0. + t4632;
  t4967 = Sin(var1[3]);
  t4653 = -1.*t4652;
  t4654 = 1. + t4653;
  t4655 = -0.135*t4654;
  t4656 = 0. + t4655;
  t4971 = t4091*t4967;
  t4972 = t4957*t4546*t4650;
  t4973 = t4971 + t4972;
  t4665 = 0.135*t4661;
  t4669 = 0. + t4665;
  t4686 = -0.09*t4682;
  t4694 = 0.049*t4690;
  t4698 = 0. + t4686 + t4694;
  t4976 = t4957*t2487*t4474;
  t4977 = t4596*t4973;
  t4978 = t4976 + t4977;
  t4980 = t4596*t4957*t2487;
  t4981 = -1.*t4474*t4973;
  t4982 = t4980 + t4981;
  t4722 = -0.135*t4137;
  t4723 = -0.049*t4392;
  t4724 = 0. + t4722 + t4723;
  t4966 = -1.*t4957*t4091*t4546;
  t4968 = t4967*t4650;
  t4969 = t4966 + t4968;
  t5003 = t4652*t4978;
  t5007 = t4661*t4982;
  t5011 = t5003 + t5007;
  t4736 = -0.049*t4682;
  t4737 = -0.09*t4690;
  t4741 = 0. + t4736 + t4737;
  t4761 = -0.049*t4757;
  t4769 = -0.21*t4765;
  t4773 = 0. + t4761 + t4769;
  t4987 = -1.*t4661*t4978;
  t4991 = t4652*t4982;
  t4995 = t4987 + t4991;
  t5020 = t4112*t4969;
  t5021 = -1.*t4392*t5011;
  t5022 = t5020 + t5021;
  t4790 = -0.21*t4757;
  t4791 = 0.049*t4765;
  t4792 = 0. + t4790 + t4791;
  t4800 = -0.2707*t4799;
  t4808 = 0.0016*t4804;
  t4812 = 0. + t4800 + t4808;
  t5024 = t4690*t4995;
  t5025 = t4680*t5022;
  t5026 = t5024 + t5025;
  t5031 = t4680*t4995;
  t5032 = -1.*t4690*t5022;
  t5033 = t5031 + t5032;
  t4826 = -0.0016*t4799;
  t4830 = -0.2707*t4804;
  t4834 = 0. + t4826 + t4830;
  t4854 = 0.0184*t4853;
  t4856 = -0.7055*t4855;
  t4857 = 0. + t4854 + t4856;
  t5037 = -1.*t4765*t5026;
  t5040 = t4752*t5033;
  t5044 = t5037 + t5040;
  t5052 = t4752*t5026;
  t5056 = t4765*t5033;
  t5057 = t5052 + t5056;
  t4867 = -0.7055*t4853;
  t4870 = -0.0184*t4855;
  t4871 = 0. + t4867 + t4870;
  t4900 = -1.1135*t4896;
  t4905 = 0.0216*t4904;
  t4906 = 0. + t4900 + t4905;
  t5059 = t4804*t5044;
  t5060 = t4797*t5057;
  t5061 = t5059 + t5060;
  t5063 = t4797*t5044;
  t5064 = -1.*t4804*t5057;
  t5065 = t5063 + t5064;
  t4911 = -0.0216*t4896;
  t4912 = -1.1135*t4904;
  t4915 = 0. + t4911 + t4912;
  t5068 = -1.*t4855*t5061;
  t5069 = t4851*t5065;
  t5070 = t5068 + t5069;
  t5072 = t4851*t5061;
  t5076 = t4855*t5065;
  t5079 = t5072 + t5076;
  t5108 = t4957*t4091;
  t5109 = -1.*t4967*t4546*t4650;
  t5110 = t5108 + t5109;
  t5116 = -1.*t2487*t4474*t4967;
  t5118 = t4596*t5110;
  t5119 = t5116 + t5118;
  t5122 = -1.*t4596*t2487*t4967;
  t5123 = -1.*t4474*t5110;
  t5124 = t5122 + t5123;
  t5101 = t4091*t4967*t4546;
  t5102 = t4957*t4650;
  t5103 = t5101 + t5102;
  t5131 = t4652*t5119;
  t5132 = t4661*t5124;
  t5137 = t5131 + t5132;
  t5126 = -1.*t4661*t5119;
  t5127 = t4652*t5124;
  t5128 = t5126 + t5127;
  t5143 = t4112*t5103;
  t5144 = -1.*t4392*t5137;
  t5145 = t5143 + t5144;
  t5147 = t4690*t5128;
  t5148 = t4680*t5145;
  t5149 = t5147 + t5148;
  t5151 = t4680*t5128;
  t5152 = -1.*t4690*t5145;
  t5153 = t5151 + t5152;
  t5155 = -1.*t4765*t5149;
  t5156 = t4752*t5153;
  t5157 = t5155 + t5156;
  t5159 = t4752*t5149;
  t5160 = t4765*t5153;
  t5161 = t5159 + t5160;
  t5163 = t4804*t5157;
  t5164 = t4797*t5161;
  t5165 = t5163 + t5164;
  t5167 = t4797*t5157;
  t5168 = -1.*t4804*t5161;
  t5169 = t5167 + t5168;
  t5171 = -1.*t4855*t5165;
  t5172 = t4851*t5169;
  t5173 = t5171 + t5172;
  t5175 = t4851*t5165;
  t5176 = t4855*t5169;
  t5177 = t5175 + t5176;
  p_output1[0]=Sqrt(Power(0. + t2487*t4091*t4449 + t4510*t4546 - 1.*t2487*t4643*t4650 + t4656*t4659 + t4669*t4678 + t4698*t4714 + t4724*t4727 - 0.1305*(t2487*t4091*t4392 + t4112*t4727) + t4741*t4750 + t4773*t4785 + t4792*t4795 + t4812*t4818 + t4834*t4846 + t4857*t4860 + t4871*t4880 + t4906*t4909 + t4915*t4922 + 0.0306*(t4904*t4909 + t4888*t4922) - 1.1312*(t4888*t4909 - 1.*t4904*t4922),2) + Power(0. + t2487*t4510*t4957 + t4449*t4969 + t4643*t4973 + t4656*t4978 + t4669*t4982 + t4698*t4995 + t4724*t5011 - 0.1305*(t4392*t4969 + t4112*t5011) + t4741*t5022 + t4773*t5026 + t4792*t5033 + t4812*t5044 + t4834*t5057 + t4857*t5061 + t4871*t5065 + t4906*t5070 + t4915*t5079 + 0.0306*(t4904*t5070 + t4888*t5079) - 1.1312*(t4888*t5070 - 1.*t4904*t5079),2) + Power(0. - 1.*t2487*t4510*t4967 + t4449*t5103 + t4643*t5110 + t4656*t5119 + t4669*t5124 + t4698*t5128 + t4724*t5137 - 0.1305*(t4392*t5103 + t4112*t5137) + t4741*t5145 + t4773*t5149 + t4792*t5153 + t4812*t5157 + t4834*t5161 + t4857*t5165 + t4871*t5169 + t4906*t5173 + t4915*t5177 + 0.0306*(t4904*t5173 + t4888*t5177) - 1.1312*(t4888*t5173 - 1.*t4904*t5177),2));
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

#include "Body2ToeDistance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void Body2ToeDistance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

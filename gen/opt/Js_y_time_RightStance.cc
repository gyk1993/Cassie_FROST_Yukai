/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:05:07 GMT-04:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=3;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=4;
  p_output1[34]=4;
  p_output1[35]=4;
  p_output1[36]=4;
  p_output1[37]=4;
  p_output1[38]=4;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=5;
  p_output1[45]=5;
  p_output1[46]=5;
  p_output1[47]=5;
  p_output1[48]=5;
  p_output1[49]=5;
  p_output1[50]=5;
  p_output1[51]=5;
  p_output1[52]=5;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=6;
  p_output1[56]=6;
  p_output1[57]=6;
  p_output1[58]=6;
  p_output1[59]=6;
  p_output1[60]=6;
  p_output1[61]=6;
  p_output1[62]=6;
  p_output1[63]=6;
  p_output1[64]=6;
  p_output1[65]=6;
  p_output1[66]=7;
  p_output1[67]=7;
  p_output1[68]=7;
  p_output1[69]=7;
  p_output1[70]=7;
  p_output1[71]=7;
  p_output1[72]=7;
  p_output1[73]=7;
  p_output1[74]=7;
  p_output1[75]=7;
  p_output1[76]=7;
  p_output1[77]=8;
  p_output1[78]=8;
  p_output1[79]=8;
  p_output1[80]=8;
  p_output1[81]=8;
  p_output1[82]=8;
  p_output1[83]=8;
  p_output1[84]=8;
  p_output1[85]=8;
  p_output1[86]=8;
  p_output1[87]=8;
  p_output1[88]=9;
  p_output1[89]=9;
  p_output1[90]=9;
  p_output1[91]=9;
  p_output1[92]=9;
  p_output1[93]=9;
  p_output1[94]=9;
  p_output1[95]=9;
  p_output1[96]=9;
  p_output1[97]=9;
  p_output1[98]=9;
  p_output1[99]=10;
  p_output1[100]=10;
  p_output1[101]=10;
  p_output1[102]=10;
  p_output1[103]=10;
  p_output1[104]=10;
  p_output1[105]=10;
  p_output1[106]=10;
  p_output1[107]=10;
  p_output1[108]=10;
  p_output1[109]=10;
  p_output1[110]=1;
  p_output1[111]=2;
  p_output1[112]=10;
  p_output1[113]=25;
  p_output1[114]=35;
  p_output1[115]=45;
  p_output1[116]=55;
  p_output1[117]=65;
  p_output1[118]=75;
  p_output1[119]=85;
  p_output1[120]=86;
  p_output1[121]=1;
  p_output1[122]=2;
  p_output1[123]=11;
  p_output1[124]=26;
  p_output1[125]=36;
  p_output1[126]=46;
  p_output1[127]=56;
  p_output1[128]=66;
  p_output1[129]=76;
  p_output1[130]=85;
  p_output1[131]=86;
  p_output1[132]=1;
  p_output1[133]=2;
  p_output1[134]=12;
  p_output1[135]=27;
  p_output1[136]=37;
  p_output1[137]=47;
  p_output1[138]=57;
  p_output1[139]=67;
  p_output1[140]=77;
  p_output1[141]=85;
  p_output1[142]=86;
  p_output1[143]=1;
  p_output1[144]=2;
  p_output1[145]=13;
  p_output1[146]=28;
  p_output1[147]=38;
  p_output1[148]=48;
  p_output1[149]=58;
  p_output1[150]=68;
  p_output1[151]=78;
  p_output1[152]=85;
  p_output1[153]=86;
  p_output1[154]=1;
  p_output1[155]=2;
  p_output1[156]=16;
  p_output1[157]=29;
  p_output1[158]=39;
  p_output1[159]=49;
  p_output1[160]=59;
  p_output1[161]=69;
  p_output1[162]=79;
  p_output1[163]=85;
  p_output1[164]=86;
  p_output1[165]=1;
  p_output1[166]=2;
  p_output1[167]=18;
  p_output1[168]=30;
  p_output1[169]=40;
  p_output1[170]=50;
  p_output1[171]=60;
  p_output1[172]=70;
  p_output1[173]=80;
  p_output1[174]=85;
  p_output1[175]=86;
  p_output1[176]=1;
  p_output1[177]=2;
  p_output1[178]=19;
  p_output1[179]=31;
  p_output1[180]=41;
  p_output1[181]=51;
  p_output1[182]=61;
  p_output1[183]=71;
  p_output1[184]=81;
  p_output1[185]=85;
  p_output1[186]=86;
  p_output1[187]=1;
  p_output1[188]=2;
  p_output1[189]=20;
  p_output1[190]=32;
  p_output1[191]=42;
  p_output1[192]=52;
  p_output1[193]=62;
  p_output1[194]=72;
  p_output1[195]=82;
  p_output1[196]=85;
  p_output1[197]=86;
  p_output1[198]=1;
  p_output1[199]=2;
  p_output1[200]=21;
  p_output1[201]=33;
  p_output1[202]=43;
  p_output1[203]=53;
  p_output1[204]=63;
  p_output1[205]=73;
  p_output1[206]=83;
  p_output1[207]=85;
  p_output1[208]=86;
  p_output1[209]=1;
  p_output1[210]=2;
  p_output1[211]=24;
  p_output1[212]=34;
  p_output1[213]=44;
  p_output1[214]=54;
  p_output1[215]=64;
  p_output1[216]=74;
  p_output1[217]=84;
  p_output1[218]=85;
  p_output1[219]=86;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 110, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_y_time_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_y_time_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

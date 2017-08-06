/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:43:38 GMT-04:00
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
  p_output1[2]=2;
  p_output1[3]=2;
  p_output1[4]=3;
  p_output1[5]=3;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=5;
  p_output1[9]=5;
  p_output1[10]=6;
  p_output1[11]=6;
  p_output1[12]=7;
  p_output1[13]=7;
  p_output1[14]=8;
  p_output1[15]=8;
  p_output1[16]=9;
  p_output1[17]=9;
  p_output1[18]=10;
  p_output1[19]=10;
  p_output1[20]=11;
  p_output1[21]=11;
  p_output1[22]=12;
  p_output1[23]=12;
  p_output1[24]=13;
  p_output1[25]=13;
  p_output1[26]=14;
  p_output1[27]=14;
  p_output1[28]=15;
  p_output1[29]=15;
  p_output1[30]=16;
  p_output1[31]=16;
  p_output1[32]=17;
  p_output1[33]=17;
  p_output1[34]=18;
  p_output1[35]=18;
  p_output1[36]=19;
  p_output1[37]=19;
  p_output1[38]=20;
  p_output1[39]=20;
  p_output1[40]=3;
  p_output1[41]=25;
  p_output1[42]=4;
  p_output1[43]=26;
  p_output1[44]=5;
  p_output1[45]=27;
  p_output1[46]=6;
  p_output1[47]=28;
  p_output1[48]=15;
  p_output1[49]=29;
  p_output1[50]=16;
  p_output1[51]=30;
  p_output1[52]=17;
  p_output1[53]=31;
  p_output1[54]=18;
  p_output1[55]=32;
  p_output1[56]=19;
  p_output1[57]=33;
  p_output1[58]=20;
  p_output1[59]=34;
  p_output1[60]=21;
  p_output1[61]=35;
  p_output1[62]=22;
  p_output1[63]=36;
  p_output1[64]=7;
  p_output1[65]=37;
  p_output1[66]=8;
  p_output1[67]=38;
  p_output1[68]=9;
  p_output1[69]=39;
  p_output1[70]=10;
  p_output1[71]=40;
  p_output1[72]=11;
  p_output1[73]=41;
  p_output1[74]=12;
  p_output1[75]=42;
  p_output1[76]=13;
  p_output1[77]=43;
  p_output1[78]=14;
  p_output1[79]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_xDiscreteMapRightImpact.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void Js_xDiscreteMapRightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

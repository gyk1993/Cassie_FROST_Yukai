/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:37 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double _NotUsed;
  NULL;
  p_output1[0]=var1[0] - var2[0];
  p_output1[1]=var1[1] - var2[1];
  p_output1[2]=var1[2] - var2[2];
  p_output1[3]=var1[3] - var2[3];
  p_output1[4]=var1[4] - var2[4];
  p_output1[5]=var1[5] - var2[5];
  p_output1[6]=var1[6] - var2[6];
  p_output1[7]=var1[7] - var2[7];
  p_output1[8]=var1[8] - var2[8];
  p_output1[9]=var1[9] - var2[9];
  p_output1[10]=var1[10] - var2[10];
  p_output1[11]=var1[11] - var2[11];
  p_output1[12]=var1[12] - var2[12];
  p_output1[13]=var1[13] - var2[13];
  p_output1[14]=var1[14] - var2[14];
  p_output1[15]=var1[15] - var2[15];
  p_output1[16]=var1[16] - var2[16];
  p_output1[17]=var1[17] - var2[17];
  p_output1[18]=var1[18] - var2[18];
  p_output1[19]=var1[19] - var2[19];
  p_output1[20]=var1[20] - var2[20];
  p_output1[21]=var1[21] - var2[21];
  p_output1[22]=var1[22] - var2[22];
  p_output1[23]=var1[23] - var2[23];
  p_output1[24]=var1[24] - var2[24];
  p_output1[25]=var1[25] - var2[25];
  p_output1[26]=var1[26] - var2[26];
  p_output1[27]=var1[27] - var2[27];
  p_output1[28]=var1[28] - var2[28];
  p_output1[29]=var1[29] - var2[29];
  p_output1[30]=var1[30] - var2[30];
  p_output1[31]=var1[31] - var2[31];
  p_output1[32]=var1[32] - var2[32];
  p_output1[33]=var1[33] - var2[33];
  p_output1[34]=var1[34] - var2[34];
  p_output1[35]=var1[35] - var2[35];
  p_output1[36]=var1[36] - var2[36];
  p_output1[37]=var1[37] - var2[37];
  p_output1[38]=var1[38] - var2[38];
  p_output1[39]=var1[39] - var2[39];
  p_output1[40]=var1[40] - var2[40];
  p_output1[41]=var1[41] - var2[41];
  p_output1[42]=var1[42] - var2[42];
  p_output1[43]=var1[43] - var2[43];
  p_output1[44]=var1[44] - var2[44];
  p_output1[45]=var1[45] - var2[45];
  p_output1[46]=var1[46] - var2[46];
  p_output1[47]=var1[47] - var2[47];
  p_output1[48]=var1[48] - var2[48];
  p_output1[49]=var1[49] - var2[49];
  p_output1[50]=var1[50] - var2[50];
  p_output1[51]=var1[51] - var2[51];
  p_output1[52]=var1[52] - var2[52];
  p_output1[53]=var1[53] - var2[53];
  p_output1[54]=var1[54] - var2[54];
  p_output1[55]=var1[55] - var2[55];
  p_output1[56]=var1[56] - var2[56];
  p_output1[57]=var1[57] - var2[57];
  p_output1[58]=var1[58] - var2[58];
  p_output1[59]=var1[59] - var2[59];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 60) && 
      !(mrows == 60 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 60) && 
      !(mrows == 60 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 60, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "atimeCont_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void atimeCont_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:04:08 GMT-04:00
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
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=3;
  p_output1[40]=3;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=4;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=4;
  p_output1[53]=4;
  p_output1[54]=4;
  p_output1[55]=4;
  p_output1[56]=5;
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=5;
  p_output1[63]=5;
  p_output1[64]=5;
  p_output1[65]=5;
  p_output1[66]=5;
  p_output1[67]=5;
  p_output1[68]=5;
  p_output1[69]=5;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=6;
  p_output1[75]=6;
  p_output1[76]=6;
  p_output1[77]=6;
  p_output1[78]=6;
  p_output1[79]=6;
  p_output1[80]=6;
  p_output1[81]=6;
  p_output1[82]=6;
  p_output1[83]=15;
  p_output1[84]=15;
  p_output1[85]=15;
  p_output1[86]=15;
  p_output1[87]=15;
  p_output1[88]=15;
  p_output1[89]=15;
  p_output1[90]=15;
  p_output1[91]=15;
  p_output1[92]=15;
  p_output1[93]=15;
  p_output1[94]=15;
  p_output1[95]=16;
  p_output1[96]=16;
  p_output1[97]=16;
  p_output1[98]=16;
  p_output1[99]=16;
  p_output1[100]=16;
  p_output1[101]=16;
  p_output1[102]=16;
  p_output1[103]=16;
  p_output1[104]=16;
  p_output1[105]=16;
  p_output1[106]=17;
  p_output1[107]=17;
  p_output1[108]=17;
  p_output1[109]=17;
  p_output1[110]=17;
  p_output1[111]=17;
  p_output1[112]=17;
  p_output1[113]=17;
  p_output1[114]=17;
  p_output1[115]=18;
  p_output1[116]=18;
  p_output1[117]=18;
  p_output1[118]=18;
  p_output1[119]=18;
  p_output1[120]=18;
  p_output1[121]=18;
  p_output1[122]=19;
  p_output1[123]=19;
  p_output1[124]=19;
  p_output1[125]=19;
  p_output1[126]=19;
  p_output1[127]=19;
  p_output1[128]=20;
  p_output1[129]=20;
  p_output1[130]=20;
  p_output1[131]=20;
  p_output1[132]=20;
  p_output1[133]=21;
  p_output1[134]=21;
  p_output1[135]=21;
  p_output1[136]=21;
  p_output1[137]=22;
  p_output1[138]=22;
  p_output1[139]=22;
  p_output1[140]=5;
  p_output1[141]=6;
  p_output1[142]=15;
  p_output1[143]=16;
  p_output1[144]=17;
  p_output1[145]=18;
  p_output1[146]=19;
  p_output1[147]=20;
  p_output1[148]=21;
  p_output1[149]=22;
  p_output1[150]=23;
  p_output1[151]=24;
  p_output1[152]=25;
  p_output1[153]=4;
  p_output1[154]=5;
  p_output1[155]=6;
  p_output1[156]=15;
  p_output1[157]=16;
  p_output1[158]=17;
  p_output1[159]=18;
  p_output1[160]=19;
  p_output1[161]=20;
  p_output1[162]=21;
  p_output1[163]=22;
  p_output1[164]=23;
  p_output1[165]=24;
  p_output1[166]=25;
  p_output1[167]=4;
  p_output1[168]=5;
  p_output1[169]=6;
  p_output1[170]=15;
  p_output1[171]=16;
  p_output1[172]=17;
  p_output1[173]=18;
  p_output1[174]=19;
  p_output1[175]=20;
  p_output1[176]=21;
  p_output1[177]=22;
  p_output1[178]=23;
  p_output1[179]=24;
  p_output1[180]=25;
  p_output1[181]=5;
  p_output1[182]=6;
  p_output1[183]=15;
  p_output1[184]=16;
  p_output1[185]=17;
  p_output1[186]=18;
  p_output1[187]=19;
  p_output1[188]=20;
  p_output1[189]=21;
  p_output1[190]=22;
  p_output1[191]=23;
  p_output1[192]=24;
  p_output1[193]=25;
  p_output1[194]=26;
  p_output1[195]=27;
  p_output1[196]=6;
  p_output1[197]=15;
  p_output1[198]=16;
  p_output1[199]=17;
  p_output1[200]=18;
  p_output1[201]=19;
  p_output1[202]=20;
  p_output1[203]=21;
  p_output1[204]=22;
  p_output1[205]=23;
  p_output1[206]=24;
  p_output1[207]=25;
  p_output1[208]=26;
  p_output1[209]=27;
  p_output1[210]=15;
  p_output1[211]=16;
  p_output1[212]=17;
  p_output1[213]=18;
  p_output1[214]=19;
  p_output1[215]=20;
  p_output1[216]=21;
  p_output1[217]=22;
  p_output1[218]=23;
  p_output1[219]=24;
  p_output1[220]=25;
  p_output1[221]=26;
  p_output1[222]=27;
  p_output1[223]=16;
  p_output1[224]=17;
  p_output1[225]=18;
  p_output1[226]=19;
  p_output1[227]=20;
  p_output1[228]=21;
  p_output1[229]=22;
  p_output1[230]=23;
  p_output1[231]=24;
  p_output1[232]=25;
  p_output1[233]=26;
  p_output1[234]=27;
  p_output1[235]=17;
  p_output1[236]=18;
  p_output1[237]=19;
  p_output1[238]=20;
  p_output1[239]=21;
  p_output1[240]=22;
  p_output1[241]=23;
  p_output1[242]=24;
  p_output1[243]=25;
  p_output1[244]=26;
  p_output1[245]=27;
  p_output1[246]=18;
  p_output1[247]=19;
  p_output1[248]=20;
  p_output1[249]=21;
  p_output1[250]=22;
  p_output1[251]=23;
  p_output1[252]=24;
  p_output1[253]=25;
  p_output1[254]=27;
  p_output1[255]=19;
  p_output1[256]=20;
  p_output1[257]=21;
  p_output1[258]=22;
  p_output1[259]=24;
  p_output1[260]=25;
  p_output1[261]=26;
  p_output1[262]=20;
  p_output1[263]=21;
  p_output1[264]=22;
  p_output1[265]=24;
  p_output1[266]=25;
  p_output1[267]=26;
  p_output1[268]=21;
  p_output1[269]=22;
  p_output1[270]=24;
  p_output1[271]=25;
  p_output1[272]=26;
  p_output1[273]=22;
  p_output1[274]=24;
  p_output1[275]=25;
  p_output1[276]=26;
  p_output1[277]=24;
  p_output1[278]=25;
  p_output1[279]=26;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 140, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_fRightToeBottom_vec_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_fRightToeBottom_vec_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:52 GMT-04:00
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
  p_output1[83]=7;
  p_output1[84]=7;
  p_output1[85]=7;
  p_output1[86]=7;
  p_output1[87]=7;
  p_output1[88]=7;
  p_output1[89]=7;
  p_output1[90]=7;
  p_output1[91]=7;
  p_output1[92]=7;
  p_output1[93]=7;
  p_output1[94]=7;
  p_output1[95]=8;
  p_output1[96]=8;
  p_output1[97]=8;
  p_output1[98]=8;
  p_output1[99]=8;
  p_output1[100]=8;
  p_output1[101]=8;
  p_output1[102]=8;
  p_output1[103]=8;
  p_output1[104]=8;
  p_output1[105]=8;
  p_output1[106]=9;
  p_output1[107]=9;
  p_output1[108]=9;
  p_output1[109]=9;
  p_output1[110]=9;
  p_output1[111]=9;
  p_output1[112]=9;
  p_output1[113]=9;
  p_output1[114]=9;
  p_output1[115]=10;
  p_output1[116]=10;
  p_output1[117]=10;
  p_output1[118]=10;
  p_output1[119]=10;
  p_output1[120]=10;
  p_output1[121]=10;
  p_output1[122]=11;
  p_output1[123]=11;
  p_output1[124]=11;
  p_output1[125]=11;
  p_output1[126]=11;
  p_output1[127]=11;
  p_output1[128]=12;
  p_output1[129]=12;
  p_output1[130]=12;
  p_output1[131]=12;
  p_output1[132]=12;
  p_output1[133]=13;
  p_output1[134]=13;
  p_output1[135]=13;
  p_output1[136]=13;
  p_output1[137]=14;
  p_output1[138]=14;
  p_output1[139]=14;
  p_output1[140]=5;
  p_output1[141]=6;
  p_output1[142]=7;
  p_output1[143]=8;
  p_output1[144]=9;
  p_output1[145]=10;
  p_output1[146]=11;
  p_output1[147]=12;
  p_output1[148]=13;
  p_output1[149]=14;
  p_output1[150]=23;
  p_output1[151]=24;
  p_output1[152]=25;
  p_output1[153]=4;
  p_output1[154]=5;
  p_output1[155]=6;
  p_output1[156]=7;
  p_output1[157]=8;
  p_output1[158]=9;
  p_output1[159]=10;
  p_output1[160]=11;
  p_output1[161]=12;
  p_output1[162]=13;
  p_output1[163]=14;
  p_output1[164]=23;
  p_output1[165]=24;
  p_output1[166]=25;
  p_output1[167]=4;
  p_output1[168]=5;
  p_output1[169]=6;
  p_output1[170]=7;
  p_output1[171]=8;
  p_output1[172]=9;
  p_output1[173]=10;
  p_output1[174]=11;
  p_output1[175]=12;
  p_output1[176]=13;
  p_output1[177]=14;
  p_output1[178]=23;
  p_output1[179]=24;
  p_output1[180]=25;
  p_output1[181]=5;
  p_output1[182]=6;
  p_output1[183]=7;
  p_output1[184]=8;
  p_output1[185]=9;
  p_output1[186]=10;
  p_output1[187]=11;
  p_output1[188]=12;
  p_output1[189]=13;
  p_output1[190]=14;
  p_output1[191]=23;
  p_output1[192]=24;
  p_output1[193]=25;
  p_output1[194]=26;
  p_output1[195]=27;
  p_output1[196]=6;
  p_output1[197]=7;
  p_output1[198]=8;
  p_output1[199]=9;
  p_output1[200]=10;
  p_output1[201]=11;
  p_output1[202]=12;
  p_output1[203]=13;
  p_output1[204]=14;
  p_output1[205]=23;
  p_output1[206]=24;
  p_output1[207]=25;
  p_output1[208]=26;
  p_output1[209]=27;
  p_output1[210]=7;
  p_output1[211]=8;
  p_output1[212]=9;
  p_output1[213]=10;
  p_output1[214]=11;
  p_output1[215]=12;
  p_output1[216]=13;
  p_output1[217]=14;
  p_output1[218]=23;
  p_output1[219]=24;
  p_output1[220]=25;
  p_output1[221]=26;
  p_output1[222]=27;
  p_output1[223]=8;
  p_output1[224]=9;
  p_output1[225]=10;
  p_output1[226]=11;
  p_output1[227]=12;
  p_output1[228]=13;
  p_output1[229]=14;
  p_output1[230]=23;
  p_output1[231]=24;
  p_output1[232]=25;
  p_output1[233]=26;
  p_output1[234]=27;
  p_output1[235]=9;
  p_output1[236]=10;
  p_output1[237]=11;
  p_output1[238]=12;
  p_output1[239]=13;
  p_output1[240]=14;
  p_output1[241]=23;
  p_output1[242]=24;
  p_output1[243]=25;
  p_output1[244]=26;
  p_output1[245]=27;
  p_output1[246]=10;
  p_output1[247]=11;
  p_output1[248]=12;
  p_output1[249]=13;
  p_output1[250]=14;
  p_output1[251]=23;
  p_output1[252]=24;
  p_output1[253]=25;
  p_output1[254]=27;
  p_output1[255]=11;
  p_output1[256]=12;
  p_output1[257]=13;
  p_output1[258]=14;
  p_output1[259]=24;
  p_output1[260]=25;
  p_output1[261]=26;
  p_output1[262]=12;
  p_output1[263]=13;
  p_output1[264]=14;
  p_output1[265]=24;
  p_output1[266]=25;
  p_output1[267]=26;
  p_output1[268]=13;
  p_output1[269]=14;
  p_output1[270]=24;
  p_output1[271]=25;
  p_output1[272]=26;
  p_output1[273]=14;
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

#include "Js_fLeftToeBottom_vec_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_fLeftToeBottom_vec_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:49:10 GMT-04:00
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
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=3;
  p_output1[62]=3;
  p_output1[63]=3;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=4;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=4;
  p_output1[81]=4;
  p_output1[82]=4;
  p_output1[83]=4;
  p_output1[84]=5;
  p_output1[85]=5;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=5;
  p_output1[91]=5;
  p_output1[92]=5;
  p_output1[93]=5;
  p_output1[94]=5;
  p_output1[95]=5;
  p_output1[96]=5;
  p_output1[97]=5;
  p_output1[98]=5;
  p_output1[99]=5;
  p_output1[100]=5;
  p_output1[101]=5;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=6;
  p_output1[107]=6;
  p_output1[108]=6;
  p_output1[109]=6;
  p_output1[110]=6;
  p_output1[111]=6;
  p_output1[112]=6;
  p_output1[113]=6;
  p_output1[114]=6;
  p_output1[115]=6;
  p_output1[116]=6;
  p_output1[117]=6;
  p_output1[118]=15;
  p_output1[119]=15;
  p_output1[120]=15;
  p_output1[121]=15;
  p_output1[122]=15;
  p_output1[123]=15;
  p_output1[124]=15;
  p_output1[125]=15;
  p_output1[126]=15;
  p_output1[127]=15;
  p_output1[128]=15;
  p_output1[129]=15;
  p_output1[130]=15;
  p_output1[131]=15;
  p_output1[132]=16;
  p_output1[133]=16;
  p_output1[134]=16;
  p_output1[135]=16;
  p_output1[136]=16;
  p_output1[137]=16;
  p_output1[138]=16;
  p_output1[139]=16;
  p_output1[140]=16;
  p_output1[141]=16;
  p_output1[142]=16;
  p_output1[143]=16;
  p_output1[144]=17;
  p_output1[145]=17;
  p_output1[146]=17;
  p_output1[147]=17;
  p_output1[148]=17;
  p_output1[149]=17;
  p_output1[150]=17;
  p_output1[151]=17;
  p_output1[152]=17;
  p_output1[153]=17;
  p_output1[154]=18;
  p_output1[155]=18;
  p_output1[156]=18;
  p_output1[157]=18;
  p_output1[158]=18;
  p_output1[159]=18;
  p_output1[160]=18;
  p_output1[161]=18;
  p_output1[162]=19;
  p_output1[163]=19;
  p_output1[164]=19;
  p_output1[165]=19;
  p_output1[166]=19;
  p_output1[167]=19;
  p_output1[168]=20;
  p_output1[169]=20;
  p_output1[170]=20;
  p_output1[171]=20;
  p_output1[172]=21;
  p_output1[173]=21;
  p_output1[174]=21;
  p_output1[175]=22;
  p_output1[176]=22;
  p_output1[177]=22;
  p_output1[178]=5;
  p_output1[179]=6;
  p_output1[180]=15;
  p_output1[181]=16;
  p_output1[182]=17;
  p_output1[183]=18;
  p_output1[184]=19;
  p_output1[185]=20;
  p_output1[186]=21;
  p_output1[187]=22;
  p_output1[188]=27;
  p_output1[189]=28;
  p_output1[190]=37;
  p_output1[191]=38;
  p_output1[192]=39;
  p_output1[193]=40;
  p_output1[194]=41;
  p_output1[195]=42;
  p_output1[196]=43;
  p_output1[197]=44;
  p_output1[198]=4;
  p_output1[199]=5;
  p_output1[200]=6;
  p_output1[201]=15;
  p_output1[202]=16;
  p_output1[203]=17;
  p_output1[204]=18;
  p_output1[205]=19;
  p_output1[206]=20;
  p_output1[207]=21;
  p_output1[208]=22;
  p_output1[209]=26;
  p_output1[210]=27;
  p_output1[211]=28;
  p_output1[212]=37;
  p_output1[213]=38;
  p_output1[214]=39;
  p_output1[215]=40;
  p_output1[216]=41;
  p_output1[217]=42;
  p_output1[218]=43;
  p_output1[219]=44;
  p_output1[220]=4;
  p_output1[221]=5;
  p_output1[222]=6;
  p_output1[223]=15;
  p_output1[224]=16;
  p_output1[225]=17;
  p_output1[226]=18;
  p_output1[227]=19;
  p_output1[228]=20;
  p_output1[229]=21;
  p_output1[230]=22;
  p_output1[231]=26;
  p_output1[232]=27;
  p_output1[233]=28;
  p_output1[234]=37;
  p_output1[235]=38;
  p_output1[236]=39;
  p_output1[237]=40;
  p_output1[238]=41;
  p_output1[239]=42;
  p_output1[240]=43;
  p_output1[241]=44;
  p_output1[242]=5;
  p_output1[243]=6;
  p_output1[244]=15;
  p_output1[245]=16;
  p_output1[246]=17;
  p_output1[247]=18;
  p_output1[248]=19;
  p_output1[249]=20;
  p_output1[250]=21;
  p_output1[251]=22;
  p_output1[252]=27;
  p_output1[253]=28;
  p_output1[254]=37;
  p_output1[255]=38;
  p_output1[256]=39;
  p_output1[257]=40;
  p_output1[258]=41;
  p_output1[259]=42;
  p_output1[260]=43;
  p_output1[261]=44;
  p_output1[262]=6;
  p_output1[263]=15;
  p_output1[264]=16;
  p_output1[265]=17;
  p_output1[266]=18;
  p_output1[267]=19;
  p_output1[268]=20;
  p_output1[269]=21;
  p_output1[270]=22;
  p_output1[271]=28;
  p_output1[272]=37;
  p_output1[273]=38;
  p_output1[274]=39;
  p_output1[275]=40;
  p_output1[276]=41;
  p_output1[277]=42;
  p_output1[278]=43;
  p_output1[279]=44;
  p_output1[280]=15;
  p_output1[281]=16;
  p_output1[282]=17;
  p_output1[283]=18;
  p_output1[284]=19;
  p_output1[285]=20;
  p_output1[286]=21;
  p_output1[287]=22;
  p_output1[288]=37;
  p_output1[289]=38;
  p_output1[290]=39;
  p_output1[291]=40;
  p_output1[292]=41;
  p_output1[293]=42;
  p_output1[294]=43;
  p_output1[295]=44;
  p_output1[296]=16;
  p_output1[297]=17;
  p_output1[298]=18;
  p_output1[299]=19;
  p_output1[300]=20;
  p_output1[301]=21;
  p_output1[302]=22;
  p_output1[303]=38;
  p_output1[304]=39;
  p_output1[305]=40;
  p_output1[306]=41;
  p_output1[307]=42;
  p_output1[308]=43;
  p_output1[309]=44;
  p_output1[310]=17;
  p_output1[311]=18;
  p_output1[312]=19;
  p_output1[313]=20;
  p_output1[314]=21;
  p_output1[315]=22;
  p_output1[316]=39;
  p_output1[317]=40;
  p_output1[318]=41;
  p_output1[319]=42;
  p_output1[320]=43;
  p_output1[321]=44;
  p_output1[322]=18;
  p_output1[323]=19;
  p_output1[324]=20;
  p_output1[325]=21;
  p_output1[326]=22;
  p_output1[327]=40;
  p_output1[328]=41;
  p_output1[329]=42;
  p_output1[330]=43;
  p_output1[331]=44;
  p_output1[332]=19;
  p_output1[333]=20;
  p_output1[334]=21;
  p_output1[335]=22;
  p_output1[336]=41;
  p_output1[337]=42;
  p_output1[338]=43;
  p_output1[339]=44;
  p_output1[340]=20;
  p_output1[341]=21;
  p_output1[342]=22;
  p_output1[343]=42;
  p_output1[344]=43;
  p_output1[345]=44;
  p_output1[346]=21;
  p_output1[347]=22;
  p_output1[348]=43;
  p_output1[349]=44;
  p_output1[350]=22;
  p_output1[351]=43;
  p_output1[352]=44;
  p_output1[353]=22;
  p_output1[354]=43;
  p_output1[355]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 178, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec21_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec21_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

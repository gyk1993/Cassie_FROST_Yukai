/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:48:42 GMT-04:00
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
  p_output1[172]=20;
  p_output1[173]=21;
  p_output1[174]=21;
  p_output1[175]=21;
  p_output1[176]=21;
  p_output1[177]=21;
  p_output1[178]=22;
  p_output1[179]=22;
  p_output1[180]=22;
  p_output1[181]=22;
  p_output1[182]=22;
  p_output1[183]=5;
  p_output1[184]=6;
  p_output1[185]=15;
  p_output1[186]=16;
  p_output1[187]=17;
  p_output1[188]=18;
  p_output1[189]=19;
  p_output1[190]=20;
  p_output1[191]=21;
  p_output1[192]=22;
  p_output1[193]=27;
  p_output1[194]=28;
  p_output1[195]=37;
  p_output1[196]=38;
  p_output1[197]=39;
  p_output1[198]=40;
  p_output1[199]=41;
  p_output1[200]=42;
  p_output1[201]=43;
  p_output1[202]=44;
  p_output1[203]=4;
  p_output1[204]=5;
  p_output1[205]=6;
  p_output1[206]=15;
  p_output1[207]=16;
  p_output1[208]=17;
  p_output1[209]=18;
  p_output1[210]=19;
  p_output1[211]=20;
  p_output1[212]=21;
  p_output1[213]=22;
  p_output1[214]=26;
  p_output1[215]=27;
  p_output1[216]=28;
  p_output1[217]=37;
  p_output1[218]=38;
  p_output1[219]=39;
  p_output1[220]=40;
  p_output1[221]=41;
  p_output1[222]=42;
  p_output1[223]=43;
  p_output1[224]=44;
  p_output1[225]=4;
  p_output1[226]=5;
  p_output1[227]=6;
  p_output1[228]=15;
  p_output1[229]=16;
  p_output1[230]=17;
  p_output1[231]=18;
  p_output1[232]=19;
  p_output1[233]=20;
  p_output1[234]=21;
  p_output1[235]=22;
  p_output1[236]=26;
  p_output1[237]=27;
  p_output1[238]=28;
  p_output1[239]=37;
  p_output1[240]=38;
  p_output1[241]=39;
  p_output1[242]=40;
  p_output1[243]=41;
  p_output1[244]=42;
  p_output1[245]=43;
  p_output1[246]=44;
  p_output1[247]=5;
  p_output1[248]=6;
  p_output1[249]=15;
  p_output1[250]=16;
  p_output1[251]=17;
  p_output1[252]=18;
  p_output1[253]=19;
  p_output1[254]=20;
  p_output1[255]=21;
  p_output1[256]=22;
  p_output1[257]=27;
  p_output1[258]=28;
  p_output1[259]=37;
  p_output1[260]=38;
  p_output1[261]=39;
  p_output1[262]=40;
  p_output1[263]=41;
  p_output1[264]=42;
  p_output1[265]=43;
  p_output1[266]=44;
  p_output1[267]=6;
  p_output1[268]=15;
  p_output1[269]=16;
  p_output1[270]=17;
  p_output1[271]=18;
  p_output1[272]=19;
  p_output1[273]=20;
  p_output1[274]=21;
  p_output1[275]=22;
  p_output1[276]=28;
  p_output1[277]=37;
  p_output1[278]=38;
  p_output1[279]=39;
  p_output1[280]=40;
  p_output1[281]=41;
  p_output1[282]=42;
  p_output1[283]=43;
  p_output1[284]=44;
  p_output1[285]=15;
  p_output1[286]=16;
  p_output1[287]=17;
  p_output1[288]=18;
  p_output1[289]=19;
  p_output1[290]=20;
  p_output1[291]=21;
  p_output1[292]=22;
  p_output1[293]=37;
  p_output1[294]=38;
  p_output1[295]=39;
  p_output1[296]=40;
  p_output1[297]=41;
  p_output1[298]=42;
  p_output1[299]=43;
  p_output1[300]=44;
  p_output1[301]=16;
  p_output1[302]=17;
  p_output1[303]=18;
  p_output1[304]=19;
  p_output1[305]=20;
  p_output1[306]=21;
  p_output1[307]=22;
  p_output1[308]=38;
  p_output1[309]=39;
  p_output1[310]=40;
  p_output1[311]=41;
  p_output1[312]=42;
  p_output1[313]=43;
  p_output1[314]=44;
  p_output1[315]=17;
  p_output1[316]=18;
  p_output1[317]=19;
  p_output1[318]=20;
  p_output1[319]=21;
  p_output1[320]=22;
  p_output1[321]=39;
  p_output1[322]=40;
  p_output1[323]=41;
  p_output1[324]=42;
  p_output1[325]=43;
  p_output1[326]=44;
  p_output1[327]=18;
  p_output1[328]=19;
  p_output1[329]=20;
  p_output1[330]=21;
  p_output1[331]=22;
  p_output1[332]=40;
  p_output1[333]=41;
  p_output1[334]=42;
  p_output1[335]=43;
  p_output1[336]=44;
  p_output1[337]=19;
  p_output1[338]=20;
  p_output1[339]=21;
  p_output1[340]=22;
  p_output1[341]=41;
  p_output1[342]=42;
  p_output1[343]=43;
  p_output1[344]=44;
  p_output1[345]=20;
  p_output1[346]=21;
  p_output1[347]=22;
  p_output1[348]=42;
  p_output1[349]=43;
  p_output1[350]=44;
  p_output1[351]=21;
  p_output1[352]=22;
  p_output1[353]=42;
  p_output1[354]=43;
  p_output1[355]=44;
  p_output1[356]=21;
  p_output1[357]=22;
  p_output1[358]=42;
  p_output1[359]=43;
  p_output1[360]=44;
  p_output1[361]=21;
  p_output1[362]=22;
  p_output1[363]=42;
  p_output1[364]=43;
  p_output1[365]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 183, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec20_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec20_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

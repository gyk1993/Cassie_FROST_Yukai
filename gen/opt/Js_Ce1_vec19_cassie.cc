/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:48:07 GMT-04:00
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
  p_output1[168]=19;
  p_output1[169]=20;
  p_output1[170]=20;
  p_output1[171]=20;
  p_output1[172]=20;
  p_output1[173]=20;
  p_output1[174]=20;
  p_output1[175]=20;
  p_output1[176]=21;
  p_output1[177]=21;
  p_output1[178]=21;
  p_output1[179]=21;
  p_output1[180]=21;
  p_output1[181]=21;
  p_output1[182]=21;
  p_output1[183]=22;
  p_output1[184]=22;
  p_output1[185]=22;
  p_output1[186]=22;
  p_output1[187]=22;
  p_output1[188]=22;
  p_output1[189]=22;
  p_output1[190]=5;
  p_output1[191]=6;
  p_output1[192]=15;
  p_output1[193]=16;
  p_output1[194]=17;
  p_output1[195]=18;
  p_output1[196]=19;
  p_output1[197]=20;
  p_output1[198]=21;
  p_output1[199]=22;
  p_output1[200]=27;
  p_output1[201]=28;
  p_output1[202]=37;
  p_output1[203]=38;
  p_output1[204]=39;
  p_output1[205]=40;
  p_output1[206]=41;
  p_output1[207]=42;
  p_output1[208]=43;
  p_output1[209]=44;
  p_output1[210]=4;
  p_output1[211]=5;
  p_output1[212]=6;
  p_output1[213]=15;
  p_output1[214]=16;
  p_output1[215]=17;
  p_output1[216]=18;
  p_output1[217]=19;
  p_output1[218]=20;
  p_output1[219]=21;
  p_output1[220]=22;
  p_output1[221]=26;
  p_output1[222]=27;
  p_output1[223]=28;
  p_output1[224]=37;
  p_output1[225]=38;
  p_output1[226]=39;
  p_output1[227]=40;
  p_output1[228]=41;
  p_output1[229]=42;
  p_output1[230]=43;
  p_output1[231]=44;
  p_output1[232]=4;
  p_output1[233]=5;
  p_output1[234]=6;
  p_output1[235]=15;
  p_output1[236]=16;
  p_output1[237]=17;
  p_output1[238]=18;
  p_output1[239]=19;
  p_output1[240]=20;
  p_output1[241]=21;
  p_output1[242]=22;
  p_output1[243]=26;
  p_output1[244]=27;
  p_output1[245]=28;
  p_output1[246]=37;
  p_output1[247]=38;
  p_output1[248]=39;
  p_output1[249]=40;
  p_output1[250]=41;
  p_output1[251]=42;
  p_output1[252]=43;
  p_output1[253]=44;
  p_output1[254]=5;
  p_output1[255]=6;
  p_output1[256]=15;
  p_output1[257]=16;
  p_output1[258]=17;
  p_output1[259]=18;
  p_output1[260]=19;
  p_output1[261]=20;
  p_output1[262]=21;
  p_output1[263]=22;
  p_output1[264]=27;
  p_output1[265]=28;
  p_output1[266]=37;
  p_output1[267]=38;
  p_output1[268]=39;
  p_output1[269]=40;
  p_output1[270]=41;
  p_output1[271]=42;
  p_output1[272]=43;
  p_output1[273]=44;
  p_output1[274]=6;
  p_output1[275]=15;
  p_output1[276]=16;
  p_output1[277]=17;
  p_output1[278]=18;
  p_output1[279]=19;
  p_output1[280]=20;
  p_output1[281]=21;
  p_output1[282]=22;
  p_output1[283]=28;
  p_output1[284]=37;
  p_output1[285]=38;
  p_output1[286]=39;
  p_output1[287]=40;
  p_output1[288]=41;
  p_output1[289]=42;
  p_output1[290]=43;
  p_output1[291]=44;
  p_output1[292]=15;
  p_output1[293]=16;
  p_output1[294]=17;
  p_output1[295]=18;
  p_output1[296]=19;
  p_output1[297]=20;
  p_output1[298]=21;
  p_output1[299]=22;
  p_output1[300]=37;
  p_output1[301]=38;
  p_output1[302]=39;
  p_output1[303]=40;
  p_output1[304]=41;
  p_output1[305]=42;
  p_output1[306]=43;
  p_output1[307]=44;
  p_output1[308]=16;
  p_output1[309]=17;
  p_output1[310]=18;
  p_output1[311]=19;
  p_output1[312]=20;
  p_output1[313]=21;
  p_output1[314]=22;
  p_output1[315]=38;
  p_output1[316]=39;
  p_output1[317]=40;
  p_output1[318]=41;
  p_output1[319]=42;
  p_output1[320]=43;
  p_output1[321]=44;
  p_output1[322]=17;
  p_output1[323]=18;
  p_output1[324]=19;
  p_output1[325]=20;
  p_output1[326]=21;
  p_output1[327]=22;
  p_output1[328]=39;
  p_output1[329]=40;
  p_output1[330]=41;
  p_output1[331]=42;
  p_output1[332]=43;
  p_output1[333]=44;
  p_output1[334]=18;
  p_output1[335]=19;
  p_output1[336]=20;
  p_output1[337]=21;
  p_output1[338]=22;
  p_output1[339]=40;
  p_output1[340]=41;
  p_output1[341]=42;
  p_output1[342]=43;
  p_output1[343]=44;
  p_output1[344]=19;
  p_output1[345]=20;
  p_output1[346]=21;
  p_output1[347]=22;
  p_output1[348]=41;
  p_output1[349]=42;
  p_output1[350]=43;
  p_output1[351]=44;
  p_output1[352]=20;
  p_output1[353]=21;
  p_output1[354]=22;
  p_output1[355]=41;
  p_output1[356]=42;
  p_output1[357]=43;
  p_output1[358]=44;
  p_output1[359]=20;
  p_output1[360]=21;
  p_output1[361]=22;
  p_output1[362]=41;
  p_output1[363]=42;
  p_output1[364]=43;
  p_output1[365]=44;
  p_output1[366]=20;
  p_output1[367]=21;
  p_output1[368]=22;
  p_output1[369]=41;
  p_output1[370]=42;
  p_output1[371]=43;
  p_output1[372]=44;
  p_output1[373]=20;
  p_output1[374]=21;
  p_output1[375]=22;
  p_output1[376]=41;
  p_output1[377]=42;
  p_output1[378]=43;
  p_output1[379]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 190, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec19_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec19_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
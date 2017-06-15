/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:03:40 GMT-04:00
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
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=4;
  p_output1[11]=4;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=5;
  p_output1[15]=5;
  p_output1[16]=5;
  p_output1[17]=5;
  p_output1[18]=5;
  p_output1[19]=5;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=6;
  p_output1[31]=6;
  p_output1[32]=6;
  p_output1[33]=6;
  p_output1[34]=6;
  p_output1[35]=6;
  p_output1[36]=6;
  p_output1[37]=6;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=6;
  p_output1[43]=6;
  p_output1[44]=6;
  p_output1[45]=6;
  p_output1[46]=6;
  p_output1[47]=15;
  p_output1[48]=15;
  p_output1[49]=15;
  p_output1[50]=15;
  p_output1[51]=15;
  p_output1[52]=15;
  p_output1[53]=15;
  p_output1[54]=15;
  p_output1[55]=15;
  p_output1[56]=15;
  p_output1[57]=15;
  p_output1[58]=15;
  p_output1[59]=15;
  p_output1[60]=15;
  p_output1[61]=15;
  p_output1[62]=15;
  p_output1[63]=15;
  p_output1[64]=15;
  p_output1[65]=16;
  p_output1[66]=16;
  p_output1[67]=16;
  p_output1[68]=16;
  p_output1[69]=16;
  p_output1[70]=16;
  p_output1[71]=16;
  p_output1[72]=16;
  p_output1[73]=16;
  p_output1[74]=16;
  p_output1[75]=16;
  p_output1[76]=16;
  p_output1[77]=16;
  p_output1[78]=16;
  p_output1[79]=16;
  p_output1[80]=16;
  p_output1[81]=16;
  p_output1[82]=16;
  p_output1[83]=16;
  p_output1[84]=17;
  p_output1[85]=17;
  p_output1[86]=17;
  p_output1[87]=17;
  p_output1[88]=17;
  p_output1[89]=17;
  p_output1[90]=17;
  p_output1[91]=17;
  p_output1[92]=17;
  p_output1[93]=17;
  p_output1[94]=17;
  p_output1[95]=17;
  p_output1[96]=17;
  p_output1[97]=17;
  p_output1[98]=17;
  p_output1[99]=17;
  p_output1[100]=17;
  p_output1[101]=17;
  p_output1[102]=17;
  p_output1[103]=17;
  p_output1[104]=18;
  p_output1[105]=18;
  p_output1[106]=18;
  p_output1[107]=18;
  p_output1[108]=18;
  p_output1[109]=18;
  p_output1[110]=18;
  p_output1[111]=18;
  p_output1[112]=18;
  p_output1[113]=18;
  p_output1[114]=18;
  p_output1[115]=18;
  p_output1[116]=18;
  p_output1[117]=18;
  p_output1[118]=18;
  p_output1[119]=18;
  p_output1[120]=18;
  p_output1[121]=18;
  p_output1[122]=18;
  p_output1[123]=18;
  p_output1[124]=18;
  p_output1[125]=19;
  p_output1[126]=19;
  p_output1[127]=19;
  p_output1[128]=19;
  p_output1[129]=19;
  p_output1[130]=19;
  p_output1[131]=19;
  p_output1[132]=19;
  p_output1[133]=19;
  p_output1[134]=19;
  p_output1[135]=19;
  p_output1[136]=19;
  p_output1[137]=19;
  p_output1[138]=19;
  p_output1[139]=19;
  p_output1[140]=19;
  p_output1[141]=19;
  p_output1[142]=19;
  p_output1[143]=19;
  p_output1[144]=19;
  p_output1[145]=19;
  p_output1[146]=19;
  p_output1[147]=20;
  p_output1[148]=20;
  p_output1[149]=20;
  p_output1[150]=20;
  p_output1[151]=20;
  p_output1[152]=20;
  p_output1[153]=20;
  p_output1[154]=20;
  p_output1[155]=20;
  p_output1[156]=20;
  p_output1[157]=20;
  p_output1[158]=20;
  p_output1[159]=20;
  p_output1[160]=20;
  p_output1[161]=20;
  p_output1[162]=20;
  p_output1[163]=20;
  p_output1[164]=20;
  p_output1[165]=20;
  p_output1[166]=20;
  p_output1[167]=20;
  p_output1[168]=20;
  p_output1[169]=20;
  p_output1[170]=21;
  p_output1[171]=21;
  p_output1[172]=21;
  p_output1[173]=21;
  p_output1[174]=21;
  p_output1[175]=21;
  p_output1[176]=21;
  p_output1[177]=21;
  p_output1[178]=21;
  p_output1[179]=21;
  p_output1[180]=21;
  p_output1[181]=21;
  p_output1[182]=21;
  p_output1[183]=21;
  p_output1[184]=21;
  p_output1[185]=21;
  p_output1[186]=21;
  p_output1[187]=21;
  p_output1[188]=21;
  p_output1[189]=21;
  p_output1[190]=21;
  p_output1[191]=21;
  p_output1[192]=21;
  p_output1[193]=21;
  p_output1[194]=22;
  p_output1[195]=22;
  p_output1[196]=22;
  p_output1[197]=22;
  p_output1[198]=22;
  p_output1[199]=22;
  p_output1[200]=22;
  p_output1[201]=22;
  p_output1[202]=22;
  p_output1[203]=22;
  p_output1[204]=22;
  p_output1[205]=22;
  p_output1[206]=22;
  p_output1[207]=22;
  p_output1[208]=22;
  p_output1[209]=22;
  p_output1[210]=22;
  p_output1[211]=22;
  p_output1[212]=22;
  p_output1[213]=22;
  p_output1[214]=22;
  p_output1[215]=22;
  p_output1[216]=22;
  p_output1[217]=22;
  p_output1[218]=22;
  p_output1[219]=4;
  p_output1[220]=5;
  p_output1[221]=6;
  p_output1[222]=15;
  p_output1[223]=16;
  p_output1[224]=17;
  p_output1[225]=18;
  p_output1[226]=19;
  p_output1[227]=20;
  p_output1[228]=21;
  p_output1[229]=22;
  p_output1[230]=24;
  p_output1[231]=25;
  p_output1[232]=43;
  p_output1[233]=4;
  p_output1[234]=5;
  p_output1[235]=6;
  p_output1[236]=15;
  p_output1[237]=16;
  p_output1[238]=17;
  p_output1[239]=18;
  p_output1[240]=19;
  p_output1[241]=20;
  p_output1[242]=21;
  p_output1[243]=22;
  p_output1[244]=23;
  p_output1[245]=24;
  p_output1[246]=25;
  p_output1[247]=26;
  p_output1[248]=43;
  p_output1[249]=4;
  p_output1[250]=5;
  p_output1[251]=6;
  p_output1[252]=15;
  p_output1[253]=16;
  p_output1[254]=17;
  p_output1[255]=18;
  p_output1[256]=19;
  p_output1[257]=20;
  p_output1[258]=21;
  p_output1[259]=22;
  p_output1[260]=23;
  p_output1[261]=24;
  p_output1[262]=25;
  p_output1[263]=26;
  p_output1[264]=27;
  p_output1[265]=43;
  p_output1[266]=4;
  p_output1[267]=5;
  p_output1[268]=6;
  p_output1[269]=15;
  p_output1[270]=16;
  p_output1[271]=17;
  p_output1[272]=18;
  p_output1[273]=19;
  p_output1[274]=20;
  p_output1[275]=21;
  p_output1[276]=22;
  p_output1[277]=23;
  p_output1[278]=24;
  p_output1[279]=25;
  p_output1[280]=26;
  p_output1[281]=27;
  p_output1[282]=28;
  p_output1[283]=43;
  p_output1[284]=4;
  p_output1[285]=5;
  p_output1[286]=6;
  p_output1[287]=15;
  p_output1[288]=16;
  p_output1[289]=17;
  p_output1[290]=18;
  p_output1[291]=19;
  p_output1[292]=20;
  p_output1[293]=21;
  p_output1[294]=22;
  p_output1[295]=23;
  p_output1[296]=24;
  p_output1[297]=25;
  p_output1[298]=26;
  p_output1[299]=27;
  p_output1[300]=28;
  p_output1[301]=37;
  p_output1[302]=43;
  p_output1[303]=4;
  p_output1[304]=5;
  p_output1[305]=6;
  p_output1[306]=15;
  p_output1[307]=16;
  p_output1[308]=17;
  p_output1[309]=18;
  p_output1[310]=19;
  p_output1[311]=20;
  p_output1[312]=21;
  p_output1[313]=22;
  p_output1[314]=23;
  p_output1[315]=24;
  p_output1[316]=25;
  p_output1[317]=26;
  p_output1[318]=27;
  p_output1[319]=28;
  p_output1[320]=37;
  p_output1[321]=38;
  p_output1[322]=43;
  p_output1[323]=4;
  p_output1[324]=5;
  p_output1[325]=6;
  p_output1[326]=15;
  p_output1[327]=16;
  p_output1[328]=17;
  p_output1[329]=18;
  p_output1[330]=19;
  p_output1[331]=20;
  p_output1[332]=21;
  p_output1[333]=22;
  p_output1[334]=23;
  p_output1[335]=24;
  p_output1[336]=25;
  p_output1[337]=26;
  p_output1[338]=27;
  p_output1[339]=28;
  p_output1[340]=37;
  p_output1[341]=38;
  p_output1[342]=39;
  p_output1[343]=43;
  p_output1[344]=4;
  p_output1[345]=5;
  p_output1[346]=6;
  p_output1[347]=15;
  p_output1[348]=16;
  p_output1[349]=17;
  p_output1[350]=18;
  p_output1[351]=19;
  p_output1[352]=20;
  p_output1[353]=21;
  p_output1[354]=22;
  p_output1[355]=23;
  p_output1[356]=24;
  p_output1[357]=25;
  p_output1[358]=26;
  p_output1[359]=27;
  p_output1[360]=28;
  p_output1[361]=37;
  p_output1[362]=38;
  p_output1[363]=39;
  p_output1[364]=40;
  p_output1[365]=43;
  p_output1[366]=4;
  p_output1[367]=5;
  p_output1[368]=6;
  p_output1[369]=15;
  p_output1[370]=16;
  p_output1[371]=17;
  p_output1[372]=18;
  p_output1[373]=19;
  p_output1[374]=20;
  p_output1[375]=21;
  p_output1[376]=22;
  p_output1[377]=23;
  p_output1[378]=24;
  p_output1[379]=25;
  p_output1[380]=26;
  p_output1[381]=27;
  p_output1[382]=28;
  p_output1[383]=37;
  p_output1[384]=38;
  p_output1[385]=39;
  p_output1[386]=40;
  p_output1[387]=41;
  p_output1[388]=43;
  p_output1[389]=4;
  p_output1[390]=5;
  p_output1[391]=6;
  p_output1[392]=15;
  p_output1[393]=16;
  p_output1[394]=17;
  p_output1[395]=18;
  p_output1[396]=19;
  p_output1[397]=20;
  p_output1[398]=21;
  p_output1[399]=22;
  p_output1[400]=23;
  p_output1[401]=24;
  p_output1[402]=25;
  p_output1[403]=26;
  p_output1[404]=27;
  p_output1[405]=28;
  p_output1[406]=37;
  p_output1[407]=38;
  p_output1[408]=39;
  p_output1[409]=40;
  p_output1[410]=41;
  p_output1[411]=42;
  p_output1[412]=43;
  p_output1[413]=4;
  p_output1[414]=5;
  p_output1[415]=6;
  p_output1[416]=15;
  p_output1[417]=16;
  p_output1[418]=17;
  p_output1[419]=18;
  p_output1[420]=19;
  p_output1[421]=20;
  p_output1[422]=21;
  p_output1[423]=22;
  p_output1[424]=23;
  p_output1[425]=24;
  p_output1[426]=25;
  p_output1[427]=26;
  p_output1[428]=27;
  p_output1[429]=28;
  p_output1[430]=37;
  p_output1[431]=38;
  p_output1[432]=39;
  p_output1[433]=40;
  p_output1[434]=41;
  p_output1[435]=42;
  p_output1[436]=43;
  p_output1[437]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 219, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec21_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce3_vec21_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

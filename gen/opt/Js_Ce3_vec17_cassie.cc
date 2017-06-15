/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:01:03 GMT-04:00
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
  p_output1[125]=18;
  p_output1[126]=18;
  p_output1[127]=18;
  p_output1[128]=18;
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
  p_output1[147]=19;
  p_output1[148]=19;
  p_output1[149]=19;
  p_output1[150]=19;
  p_output1[151]=19;
  p_output1[152]=19;
  p_output1[153]=19;
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
  p_output1[170]=20;
  p_output1[171]=20;
  p_output1[172]=20;
  p_output1[173]=20;
  p_output1[174]=20;
  p_output1[175]=20;
  p_output1[176]=20;
  p_output1[177]=20;
  p_output1[178]=20;
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
  p_output1[194]=21;
  p_output1[195]=21;
  p_output1[196]=21;
  p_output1[197]=21;
  p_output1[198]=21;
  p_output1[199]=21;
  p_output1[200]=21;
  p_output1[201]=21;
  p_output1[202]=21;
  p_output1[203]=21;
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
  p_output1[219]=22;
  p_output1[220]=22;
  p_output1[221]=22;
  p_output1[222]=22;
  p_output1[223]=22;
  p_output1[224]=22;
  p_output1[225]=22;
  p_output1[226]=22;
  p_output1[227]=22;
  p_output1[228]=22;
  p_output1[229]=4;
  p_output1[230]=5;
  p_output1[231]=6;
  p_output1[232]=15;
  p_output1[233]=16;
  p_output1[234]=17;
  p_output1[235]=18;
  p_output1[236]=19;
  p_output1[237]=20;
  p_output1[238]=21;
  p_output1[239]=22;
  p_output1[240]=24;
  p_output1[241]=25;
  p_output1[242]=39;
  p_output1[243]=4;
  p_output1[244]=5;
  p_output1[245]=6;
  p_output1[246]=15;
  p_output1[247]=16;
  p_output1[248]=17;
  p_output1[249]=18;
  p_output1[250]=19;
  p_output1[251]=20;
  p_output1[252]=21;
  p_output1[253]=22;
  p_output1[254]=23;
  p_output1[255]=24;
  p_output1[256]=25;
  p_output1[257]=26;
  p_output1[258]=39;
  p_output1[259]=4;
  p_output1[260]=5;
  p_output1[261]=6;
  p_output1[262]=15;
  p_output1[263]=16;
  p_output1[264]=17;
  p_output1[265]=18;
  p_output1[266]=19;
  p_output1[267]=20;
  p_output1[268]=21;
  p_output1[269]=22;
  p_output1[270]=23;
  p_output1[271]=24;
  p_output1[272]=25;
  p_output1[273]=26;
  p_output1[274]=27;
  p_output1[275]=39;
  p_output1[276]=4;
  p_output1[277]=5;
  p_output1[278]=6;
  p_output1[279]=15;
  p_output1[280]=16;
  p_output1[281]=17;
  p_output1[282]=18;
  p_output1[283]=19;
  p_output1[284]=20;
  p_output1[285]=21;
  p_output1[286]=22;
  p_output1[287]=23;
  p_output1[288]=24;
  p_output1[289]=25;
  p_output1[290]=26;
  p_output1[291]=27;
  p_output1[292]=28;
  p_output1[293]=39;
  p_output1[294]=4;
  p_output1[295]=5;
  p_output1[296]=6;
  p_output1[297]=15;
  p_output1[298]=16;
  p_output1[299]=17;
  p_output1[300]=18;
  p_output1[301]=19;
  p_output1[302]=20;
  p_output1[303]=21;
  p_output1[304]=22;
  p_output1[305]=23;
  p_output1[306]=24;
  p_output1[307]=25;
  p_output1[308]=26;
  p_output1[309]=27;
  p_output1[310]=28;
  p_output1[311]=37;
  p_output1[312]=39;
  p_output1[313]=4;
  p_output1[314]=5;
  p_output1[315]=6;
  p_output1[316]=15;
  p_output1[317]=16;
  p_output1[318]=17;
  p_output1[319]=18;
  p_output1[320]=19;
  p_output1[321]=20;
  p_output1[322]=21;
  p_output1[323]=22;
  p_output1[324]=23;
  p_output1[325]=24;
  p_output1[326]=25;
  p_output1[327]=26;
  p_output1[328]=27;
  p_output1[329]=28;
  p_output1[330]=37;
  p_output1[331]=38;
  p_output1[332]=39;
  p_output1[333]=4;
  p_output1[334]=5;
  p_output1[335]=6;
  p_output1[336]=15;
  p_output1[337]=16;
  p_output1[338]=17;
  p_output1[339]=18;
  p_output1[340]=19;
  p_output1[341]=20;
  p_output1[342]=21;
  p_output1[343]=22;
  p_output1[344]=23;
  p_output1[345]=24;
  p_output1[346]=25;
  p_output1[347]=26;
  p_output1[348]=27;
  p_output1[349]=28;
  p_output1[350]=37;
  p_output1[351]=38;
  p_output1[352]=39;
  p_output1[353]=40;
  p_output1[354]=41;
  p_output1[355]=42;
  p_output1[356]=43;
  p_output1[357]=44;
  p_output1[358]=4;
  p_output1[359]=5;
  p_output1[360]=6;
  p_output1[361]=15;
  p_output1[362]=16;
  p_output1[363]=17;
  p_output1[364]=18;
  p_output1[365]=19;
  p_output1[366]=20;
  p_output1[367]=21;
  p_output1[368]=22;
  p_output1[369]=23;
  p_output1[370]=24;
  p_output1[371]=25;
  p_output1[372]=26;
  p_output1[373]=27;
  p_output1[374]=28;
  p_output1[375]=37;
  p_output1[376]=38;
  p_output1[377]=39;
  p_output1[378]=40;
  p_output1[379]=41;
  p_output1[380]=42;
  p_output1[381]=43;
  p_output1[382]=44;
  p_output1[383]=4;
  p_output1[384]=5;
  p_output1[385]=6;
  p_output1[386]=15;
  p_output1[387]=16;
  p_output1[388]=17;
  p_output1[389]=18;
  p_output1[390]=19;
  p_output1[391]=20;
  p_output1[392]=21;
  p_output1[393]=22;
  p_output1[394]=23;
  p_output1[395]=24;
  p_output1[396]=25;
  p_output1[397]=26;
  p_output1[398]=27;
  p_output1[399]=28;
  p_output1[400]=37;
  p_output1[401]=38;
  p_output1[402]=39;
  p_output1[403]=40;
  p_output1[404]=41;
  p_output1[405]=42;
  p_output1[406]=43;
  p_output1[407]=44;
  p_output1[408]=4;
  p_output1[409]=5;
  p_output1[410]=6;
  p_output1[411]=15;
  p_output1[412]=16;
  p_output1[413]=17;
  p_output1[414]=18;
  p_output1[415]=19;
  p_output1[416]=20;
  p_output1[417]=21;
  p_output1[418]=22;
  p_output1[419]=23;
  p_output1[420]=24;
  p_output1[421]=25;
  p_output1[422]=26;
  p_output1[423]=27;
  p_output1[424]=28;
  p_output1[425]=37;
  p_output1[426]=38;
  p_output1[427]=39;
  p_output1[428]=40;
  p_output1[429]=41;
  p_output1[430]=42;
  p_output1[431]=43;
  p_output1[432]=44;
  p_output1[433]=4;
  p_output1[434]=5;
  p_output1[435]=6;
  p_output1[436]=15;
  p_output1[437]=16;
  p_output1[438]=17;
  p_output1[439]=18;
  p_output1[440]=19;
  p_output1[441]=20;
  p_output1[442]=21;
  p_output1[443]=22;
  p_output1[444]=23;
  p_output1[445]=24;
  p_output1[446]=25;
  p_output1[447]=26;
  p_output1[448]=27;
  p_output1[449]=28;
  p_output1[450]=37;
  p_output1[451]=38;
  p_output1[452]=39;
  p_output1[453]=40;
  p_output1[454]=41;
  p_output1[455]=42;
  p_output1[456]=43;
  p_output1[457]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 229, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec17_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce3_vec17_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

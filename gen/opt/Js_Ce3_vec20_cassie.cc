/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:03:12 GMT-04:00
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
  p_output1[194]=21;
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
  p_output1[219]=22;
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
  p_output1[231]=24;
  p_output1[232]=25;
  p_output1[233]=42;
  p_output1[234]=4;
  p_output1[235]=5;
  p_output1[236]=6;
  p_output1[237]=15;
  p_output1[238]=16;
  p_output1[239]=17;
  p_output1[240]=18;
  p_output1[241]=19;
  p_output1[242]=20;
  p_output1[243]=21;
  p_output1[244]=22;
  p_output1[245]=23;
  p_output1[246]=24;
  p_output1[247]=25;
  p_output1[248]=26;
  p_output1[249]=42;
  p_output1[250]=4;
  p_output1[251]=5;
  p_output1[252]=6;
  p_output1[253]=15;
  p_output1[254]=16;
  p_output1[255]=17;
  p_output1[256]=18;
  p_output1[257]=19;
  p_output1[258]=20;
  p_output1[259]=21;
  p_output1[260]=22;
  p_output1[261]=23;
  p_output1[262]=24;
  p_output1[263]=25;
  p_output1[264]=26;
  p_output1[265]=27;
  p_output1[266]=42;
  p_output1[267]=4;
  p_output1[268]=5;
  p_output1[269]=6;
  p_output1[270]=15;
  p_output1[271]=16;
  p_output1[272]=17;
  p_output1[273]=18;
  p_output1[274]=19;
  p_output1[275]=20;
  p_output1[276]=21;
  p_output1[277]=22;
  p_output1[278]=23;
  p_output1[279]=24;
  p_output1[280]=25;
  p_output1[281]=26;
  p_output1[282]=27;
  p_output1[283]=28;
  p_output1[284]=42;
  p_output1[285]=4;
  p_output1[286]=5;
  p_output1[287]=6;
  p_output1[288]=15;
  p_output1[289]=16;
  p_output1[290]=17;
  p_output1[291]=18;
  p_output1[292]=19;
  p_output1[293]=20;
  p_output1[294]=21;
  p_output1[295]=22;
  p_output1[296]=23;
  p_output1[297]=24;
  p_output1[298]=25;
  p_output1[299]=26;
  p_output1[300]=27;
  p_output1[301]=28;
  p_output1[302]=37;
  p_output1[303]=42;
  p_output1[304]=4;
  p_output1[305]=5;
  p_output1[306]=6;
  p_output1[307]=15;
  p_output1[308]=16;
  p_output1[309]=17;
  p_output1[310]=18;
  p_output1[311]=19;
  p_output1[312]=20;
  p_output1[313]=21;
  p_output1[314]=22;
  p_output1[315]=23;
  p_output1[316]=24;
  p_output1[317]=25;
  p_output1[318]=26;
  p_output1[319]=27;
  p_output1[320]=28;
  p_output1[321]=37;
  p_output1[322]=38;
  p_output1[323]=42;
  p_output1[324]=4;
  p_output1[325]=5;
  p_output1[326]=6;
  p_output1[327]=15;
  p_output1[328]=16;
  p_output1[329]=17;
  p_output1[330]=18;
  p_output1[331]=19;
  p_output1[332]=20;
  p_output1[333]=21;
  p_output1[334]=22;
  p_output1[335]=23;
  p_output1[336]=24;
  p_output1[337]=25;
  p_output1[338]=26;
  p_output1[339]=27;
  p_output1[340]=28;
  p_output1[341]=37;
  p_output1[342]=38;
  p_output1[343]=39;
  p_output1[344]=42;
  p_output1[345]=4;
  p_output1[346]=5;
  p_output1[347]=6;
  p_output1[348]=15;
  p_output1[349]=16;
  p_output1[350]=17;
  p_output1[351]=18;
  p_output1[352]=19;
  p_output1[353]=20;
  p_output1[354]=21;
  p_output1[355]=22;
  p_output1[356]=23;
  p_output1[357]=24;
  p_output1[358]=25;
  p_output1[359]=26;
  p_output1[360]=27;
  p_output1[361]=28;
  p_output1[362]=37;
  p_output1[363]=38;
  p_output1[364]=39;
  p_output1[365]=40;
  p_output1[366]=42;
  p_output1[367]=4;
  p_output1[368]=5;
  p_output1[369]=6;
  p_output1[370]=15;
  p_output1[371]=16;
  p_output1[372]=17;
  p_output1[373]=18;
  p_output1[374]=19;
  p_output1[375]=20;
  p_output1[376]=21;
  p_output1[377]=22;
  p_output1[378]=23;
  p_output1[379]=24;
  p_output1[380]=25;
  p_output1[381]=26;
  p_output1[382]=27;
  p_output1[383]=28;
  p_output1[384]=37;
  p_output1[385]=38;
  p_output1[386]=39;
  p_output1[387]=40;
  p_output1[388]=41;
  p_output1[389]=42;
  p_output1[390]=4;
  p_output1[391]=5;
  p_output1[392]=6;
  p_output1[393]=15;
  p_output1[394]=16;
  p_output1[395]=17;
  p_output1[396]=18;
  p_output1[397]=19;
  p_output1[398]=20;
  p_output1[399]=21;
  p_output1[400]=22;
  p_output1[401]=23;
  p_output1[402]=24;
  p_output1[403]=25;
  p_output1[404]=26;
  p_output1[405]=27;
  p_output1[406]=28;
  p_output1[407]=37;
  p_output1[408]=38;
  p_output1[409]=39;
  p_output1[410]=40;
  p_output1[411]=41;
  p_output1[412]=42;
  p_output1[413]=43;
  p_output1[414]=44;
  p_output1[415]=4;
  p_output1[416]=5;
  p_output1[417]=6;
  p_output1[418]=15;
  p_output1[419]=16;
  p_output1[420]=17;
  p_output1[421]=18;
  p_output1[422]=19;
  p_output1[423]=20;
  p_output1[424]=21;
  p_output1[425]=22;
  p_output1[426]=23;
  p_output1[427]=24;
  p_output1[428]=25;
  p_output1[429]=26;
  p_output1[430]=27;
  p_output1[431]=28;
  p_output1[432]=37;
  p_output1[433]=38;
  p_output1[434]=39;
  p_output1[435]=40;
  p_output1[436]=41;
  p_output1[437]=42;
  p_output1[438]=43;
  p_output1[439]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 220, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec20_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce3_vec20_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

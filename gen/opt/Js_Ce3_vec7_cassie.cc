/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 21:48:14 GMT-04:00
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
  p_output1[47]=7;
  p_output1[48]=7;
  p_output1[49]=7;
  p_output1[50]=7;
  p_output1[51]=7;
  p_output1[52]=7;
  p_output1[53]=7;
  p_output1[54]=7;
  p_output1[55]=7;
  p_output1[56]=7;
  p_output1[57]=7;
  p_output1[58]=7;
  p_output1[59]=7;
  p_output1[60]=7;
  p_output1[61]=7;
  p_output1[62]=7;
  p_output1[63]=7;
  p_output1[64]=7;
  p_output1[65]=8;
  p_output1[66]=8;
  p_output1[67]=8;
  p_output1[68]=8;
  p_output1[69]=8;
  p_output1[70]=8;
  p_output1[71]=8;
  p_output1[72]=8;
  p_output1[73]=8;
  p_output1[74]=8;
  p_output1[75]=8;
  p_output1[76]=8;
  p_output1[77]=8;
  p_output1[78]=8;
  p_output1[79]=8;
  p_output1[80]=8;
  p_output1[81]=8;
  p_output1[82]=8;
  p_output1[83]=8;
  p_output1[84]=8;
  p_output1[85]=8;
  p_output1[86]=8;
  p_output1[87]=8;
  p_output1[88]=8;
  p_output1[89]=8;
  p_output1[90]=9;
  p_output1[91]=9;
  p_output1[92]=9;
  p_output1[93]=9;
  p_output1[94]=9;
  p_output1[95]=9;
  p_output1[96]=9;
  p_output1[97]=9;
  p_output1[98]=9;
  p_output1[99]=9;
  p_output1[100]=9;
  p_output1[101]=9;
  p_output1[102]=9;
  p_output1[103]=9;
  p_output1[104]=9;
  p_output1[105]=9;
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
  p_output1[122]=10;
  p_output1[123]=10;
  p_output1[124]=10;
  p_output1[125]=10;
  p_output1[126]=10;
  p_output1[127]=10;
  p_output1[128]=10;
  p_output1[129]=10;
  p_output1[130]=10;
  p_output1[131]=10;
  p_output1[132]=10;
  p_output1[133]=10;
  p_output1[134]=10;
  p_output1[135]=10;
  p_output1[136]=10;
  p_output1[137]=10;
  p_output1[138]=10;
  p_output1[139]=10;
  p_output1[140]=11;
  p_output1[141]=11;
  p_output1[142]=11;
  p_output1[143]=11;
  p_output1[144]=11;
  p_output1[145]=11;
  p_output1[146]=11;
  p_output1[147]=11;
  p_output1[148]=11;
  p_output1[149]=11;
  p_output1[150]=11;
  p_output1[151]=11;
  p_output1[152]=11;
  p_output1[153]=11;
  p_output1[154]=11;
  p_output1[155]=11;
  p_output1[156]=11;
  p_output1[157]=11;
  p_output1[158]=11;
  p_output1[159]=11;
  p_output1[160]=11;
  p_output1[161]=11;
  p_output1[162]=11;
  p_output1[163]=11;
  p_output1[164]=11;
  p_output1[165]=12;
  p_output1[166]=12;
  p_output1[167]=12;
  p_output1[168]=12;
  p_output1[169]=12;
  p_output1[170]=12;
  p_output1[171]=12;
  p_output1[172]=12;
  p_output1[173]=12;
  p_output1[174]=12;
  p_output1[175]=12;
  p_output1[176]=12;
  p_output1[177]=12;
  p_output1[178]=12;
  p_output1[179]=12;
  p_output1[180]=12;
  p_output1[181]=12;
  p_output1[182]=12;
  p_output1[183]=12;
  p_output1[184]=12;
  p_output1[185]=12;
  p_output1[186]=12;
  p_output1[187]=12;
  p_output1[188]=12;
  p_output1[189]=12;
  p_output1[190]=13;
  p_output1[191]=13;
  p_output1[192]=13;
  p_output1[193]=13;
  p_output1[194]=13;
  p_output1[195]=13;
  p_output1[196]=13;
  p_output1[197]=13;
  p_output1[198]=13;
  p_output1[199]=13;
  p_output1[200]=13;
  p_output1[201]=13;
  p_output1[202]=13;
  p_output1[203]=13;
  p_output1[204]=13;
  p_output1[205]=13;
  p_output1[206]=13;
  p_output1[207]=13;
  p_output1[208]=13;
  p_output1[209]=13;
  p_output1[210]=13;
  p_output1[211]=13;
  p_output1[212]=13;
  p_output1[213]=13;
  p_output1[214]=13;
  p_output1[215]=14;
  p_output1[216]=14;
  p_output1[217]=14;
  p_output1[218]=14;
  p_output1[219]=14;
  p_output1[220]=14;
  p_output1[221]=14;
  p_output1[222]=14;
  p_output1[223]=14;
  p_output1[224]=14;
  p_output1[225]=14;
  p_output1[226]=14;
  p_output1[227]=14;
  p_output1[228]=14;
  p_output1[229]=14;
  p_output1[230]=14;
  p_output1[231]=14;
  p_output1[232]=14;
  p_output1[233]=14;
  p_output1[234]=14;
  p_output1[235]=14;
  p_output1[236]=14;
  p_output1[237]=14;
  p_output1[238]=14;
  p_output1[239]=14;
  p_output1[240]=4;
  p_output1[241]=5;
  p_output1[242]=6;
  p_output1[243]=7;
  p_output1[244]=8;
  p_output1[245]=9;
  p_output1[246]=10;
  p_output1[247]=11;
  p_output1[248]=12;
  p_output1[249]=13;
  p_output1[250]=14;
  p_output1[251]=24;
  p_output1[252]=25;
  p_output1[253]=29;
  p_output1[254]=4;
  p_output1[255]=5;
  p_output1[256]=6;
  p_output1[257]=7;
  p_output1[258]=8;
  p_output1[259]=9;
  p_output1[260]=10;
  p_output1[261]=11;
  p_output1[262]=12;
  p_output1[263]=13;
  p_output1[264]=14;
  p_output1[265]=23;
  p_output1[266]=24;
  p_output1[267]=25;
  p_output1[268]=26;
  p_output1[269]=29;
  p_output1[270]=4;
  p_output1[271]=5;
  p_output1[272]=6;
  p_output1[273]=7;
  p_output1[274]=8;
  p_output1[275]=9;
  p_output1[276]=10;
  p_output1[277]=11;
  p_output1[278]=12;
  p_output1[279]=13;
  p_output1[280]=14;
  p_output1[281]=23;
  p_output1[282]=24;
  p_output1[283]=25;
  p_output1[284]=26;
  p_output1[285]=27;
  p_output1[286]=29;
  p_output1[287]=4;
  p_output1[288]=5;
  p_output1[289]=6;
  p_output1[290]=7;
  p_output1[291]=8;
  p_output1[292]=9;
  p_output1[293]=10;
  p_output1[294]=11;
  p_output1[295]=12;
  p_output1[296]=13;
  p_output1[297]=14;
  p_output1[298]=23;
  p_output1[299]=24;
  p_output1[300]=25;
  p_output1[301]=26;
  p_output1[302]=27;
  p_output1[303]=28;
  p_output1[304]=29;
  p_output1[305]=4;
  p_output1[306]=5;
  p_output1[307]=6;
  p_output1[308]=7;
  p_output1[309]=8;
  p_output1[310]=9;
  p_output1[311]=10;
  p_output1[312]=11;
  p_output1[313]=12;
  p_output1[314]=13;
  p_output1[315]=14;
  p_output1[316]=23;
  p_output1[317]=24;
  p_output1[318]=25;
  p_output1[319]=26;
  p_output1[320]=27;
  p_output1[321]=28;
  p_output1[322]=29;
  p_output1[323]=30;
  p_output1[324]=31;
  p_output1[325]=32;
  p_output1[326]=33;
  p_output1[327]=34;
  p_output1[328]=35;
  p_output1[329]=36;
  p_output1[330]=4;
  p_output1[331]=5;
  p_output1[332]=6;
  p_output1[333]=7;
  p_output1[334]=8;
  p_output1[335]=9;
  p_output1[336]=10;
  p_output1[337]=11;
  p_output1[338]=12;
  p_output1[339]=13;
  p_output1[340]=14;
  p_output1[341]=23;
  p_output1[342]=24;
  p_output1[343]=25;
  p_output1[344]=26;
  p_output1[345]=27;
  p_output1[346]=28;
  p_output1[347]=29;
  p_output1[348]=30;
  p_output1[349]=31;
  p_output1[350]=32;
  p_output1[351]=33;
  p_output1[352]=34;
  p_output1[353]=35;
  p_output1[354]=36;
  p_output1[355]=4;
  p_output1[356]=5;
  p_output1[357]=6;
  p_output1[358]=7;
  p_output1[359]=8;
  p_output1[360]=9;
  p_output1[361]=10;
  p_output1[362]=11;
  p_output1[363]=12;
  p_output1[364]=13;
  p_output1[365]=14;
  p_output1[366]=23;
  p_output1[367]=24;
  p_output1[368]=25;
  p_output1[369]=26;
  p_output1[370]=27;
  p_output1[371]=28;
  p_output1[372]=29;
  p_output1[373]=30;
  p_output1[374]=31;
  p_output1[375]=32;
  p_output1[376]=33;
  p_output1[377]=34;
  p_output1[378]=35;
  p_output1[379]=36;
  p_output1[380]=4;
  p_output1[381]=5;
  p_output1[382]=6;
  p_output1[383]=7;
  p_output1[384]=8;
  p_output1[385]=9;
  p_output1[386]=10;
  p_output1[387]=11;
  p_output1[388]=12;
  p_output1[389]=13;
  p_output1[390]=14;
  p_output1[391]=23;
  p_output1[392]=24;
  p_output1[393]=25;
  p_output1[394]=26;
  p_output1[395]=27;
  p_output1[396]=28;
  p_output1[397]=29;
  p_output1[398]=30;
  p_output1[399]=31;
  p_output1[400]=32;
  p_output1[401]=33;
  p_output1[402]=34;
  p_output1[403]=35;
  p_output1[404]=36;
  p_output1[405]=4;
  p_output1[406]=5;
  p_output1[407]=6;
  p_output1[408]=7;
  p_output1[409]=8;
  p_output1[410]=9;
  p_output1[411]=10;
  p_output1[412]=11;
  p_output1[413]=12;
  p_output1[414]=13;
  p_output1[415]=14;
  p_output1[416]=23;
  p_output1[417]=24;
  p_output1[418]=25;
  p_output1[419]=26;
  p_output1[420]=27;
  p_output1[421]=28;
  p_output1[422]=29;
  p_output1[423]=30;
  p_output1[424]=31;
  p_output1[425]=32;
  p_output1[426]=33;
  p_output1[427]=34;
  p_output1[428]=35;
  p_output1[429]=36;
  p_output1[430]=4;
  p_output1[431]=5;
  p_output1[432]=6;
  p_output1[433]=7;
  p_output1[434]=8;
  p_output1[435]=9;
  p_output1[436]=10;
  p_output1[437]=11;
  p_output1[438]=12;
  p_output1[439]=13;
  p_output1[440]=14;
  p_output1[441]=23;
  p_output1[442]=24;
  p_output1[443]=25;
  p_output1[444]=26;
  p_output1[445]=27;
  p_output1[446]=28;
  p_output1[447]=29;
  p_output1[448]=30;
  p_output1[449]=31;
  p_output1[450]=32;
  p_output1[451]=33;
  p_output1[452]=34;
  p_output1[453]=35;
  p_output1[454]=36;
  p_output1[455]=4;
  p_output1[456]=5;
  p_output1[457]=6;
  p_output1[458]=7;
  p_output1[459]=8;
  p_output1[460]=9;
  p_output1[461]=10;
  p_output1[462]=11;
  p_output1[463]=12;
  p_output1[464]=13;
  p_output1[465]=14;
  p_output1[466]=23;
  p_output1[467]=24;
  p_output1[468]=25;
  p_output1[469]=26;
  p_output1[470]=27;
  p_output1[471]=28;
  p_output1[472]=29;
  p_output1[473]=30;
  p_output1[474]=31;
  p_output1[475]=32;
  p_output1[476]=33;
  p_output1[477]=34;
  p_output1[478]=35;
  p_output1[479]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 240, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec7_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce3_vec7_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

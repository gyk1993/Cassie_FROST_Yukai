/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:33:28 GMT-04:00
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
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=7;
  p_output1[125]=7;
  p_output1[126]=7;
  p_output1[127]=7;
  p_output1[128]=7;
  p_output1[129]=7;
  p_output1[130]=7;
  p_output1[131]=7;
  p_output1[132]=7;
  p_output1[133]=8;
  p_output1[134]=8;
  p_output1[135]=8;
  p_output1[136]=8;
  p_output1[137]=8;
  p_output1[138]=8;
  p_output1[139]=8;
  p_output1[140]=8;
  p_output1[141]=8;
  p_output1[142]=8;
  p_output1[143]=8;
  p_output1[144]=8;
  p_output1[145]=8;
  p_output1[146]=8;
  p_output1[147]=8;
  p_output1[148]=9;
  p_output1[149]=9;
  p_output1[150]=9;
  p_output1[151]=9;
  p_output1[152]=9;
  p_output1[153]=9;
  p_output1[154]=9;
  p_output1[155]=9;
  p_output1[156]=9;
  p_output1[157]=9;
  p_output1[158]=9;
  p_output1[159]=9;
  p_output1[160]=9;
  p_output1[161]=9;
  p_output1[162]=9;
  p_output1[163]=10;
  p_output1[164]=10;
  p_output1[165]=10;
  p_output1[166]=10;
  p_output1[167]=10;
  p_output1[168]=10;
  p_output1[169]=10;
  p_output1[170]=10;
  p_output1[171]=10;
  p_output1[172]=10;
  p_output1[173]=10;
  p_output1[174]=10;
  p_output1[175]=10;
  p_output1[176]=10;
  p_output1[177]=10;
  p_output1[178]=11;
  p_output1[179]=11;
  p_output1[180]=11;
  p_output1[181]=11;
  p_output1[182]=11;
  p_output1[183]=11;
  p_output1[184]=11;
  p_output1[185]=11;
  p_output1[186]=11;
  p_output1[187]=11;
  p_output1[188]=11;
  p_output1[189]=11;
  p_output1[190]=11;
  p_output1[191]=11;
  p_output1[192]=11;
  p_output1[193]=12;
  p_output1[194]=12;
  p_output1[195]=12;
  p_output1[196]=12;
  p_output1[197]=12;
  p_output1[198]=12;
  p_output1[199]=12;
  p_output1[200]=12;
  p_output1[201]=12;
  p_output1[202]=12;
  p_output1[203]=12;
  p_output1[204]=12;
  p_output1[205]=12;
  p_output1[206]=12;
  p_output1[207]=12;
  p_output1[208]=13;
  p_output1[209]=13;
  p_output1[210]=13;
  p_output1[211]=13;
  p_output1[212]=13;
  p_output1[213]=13;
  p_output1[214]=13;
  p_output1[215]=13;
  p_output1[216]=13;
  p_output1[217]=13;
  p_output1[218]=13;
  p_output1[219]=13;
  p_output1[220]=13;
  p_output1[221]=13;
  p_output1[222]=13;
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
  p_output1[238]=5;
  p_output1[239]=6;
  p_output1[240]=7;
  p_output1[241]=8;
  p_output1[242]=9;
  p_output1[243]=10;
  p_output1[244]=11;
  p_output1[245]=12;
  p_output1[246]=13;
  p_output1[247]=14;
  p_output1[248]=27;
  p_output1[249]=28;
  p_output1[250]=29;
  p_output1[251]=30;
  p_output1[252]=31;
  p_output1[253]=32;
  p_output1[254]=33;
  p_output1[255]=34;
  p_output1[256]=35;
  p_output1[257]=36;
  p_output1[258]=4;
  p_output1[259]=5;
  p_output1[260]=6;
  p_output1[261]=7;
  p_output1[262]=8;
  p_output1[263]=9;
  p_output1[264]=10;
  p_output1[265]=11;
  p_output1[266]=12;
  p_output1[267]=13;
  p_output1[268]=14;
  p_output1[269]=26;
  p_output1[270]=27;
  p_output1[271]=28;
  p_output1[272]=29;
  p_output1[273]=30;
  p_output1[274]=31;
  p_output1[275]=32;
  p_output1[276]=33;
  p_output1[277]=34;
  p_output1[278]=35;
  p_output1[279]=36;
  p_output1[280]=4;
  p_output1[281]=5;
  p_output1[282]=6;
  p_output1[283]=7;
  p_output1[284]=8;
  p_output1[285]=9;
  p_output1[286]=10;
  p_output1[287]=11;
  p_output1[288]=12;
  p_output1[289]=13;
  p_output1[290]=14;
  p_output1[291]=26;
  p_output1[292]=27;
  p_output1[293]=28;
  p_output1[294]=29;
  p_output1[295]=30;
  p_output1[296]=31;
  p_output1[297]=32;
  p_output1[298]=33;
  p_output1[299]=34;
  p_output1[300]=35;
  p_output1[301]=36;
  p_output1[302]=5;
  p_output1[303]=6;
  p_output1[304]=7;
  p_output1[305]=8;
  p_output1[306]=9;
  p_output1[307]=10;
  p_output1[308]=11;
  p_output1[309]=12;
  p_output1[310]=13;
  p_output1[311]=14;
  p_output1[312]=27;
  p_output1[313]=28;
  p_output1[314]=29;
  p_output1[315]=30;
  p_output1[316]=31;
  p_output1[317]=32;
  p_output1[318]=33;
  p_output1[319]=34;
  p_output1[320]=35;
  p_output1[321]=36;
  p_output1[322]=6;
  p_output1[323]=7;
  p_output1[324]=8;
  p_output1[325]=9;
  p_output1[326]=10;
  p_output1[327]=11;
  p_output1[328]=12;
  p_output1[329]=13;
  p_output1[330]=14;
  p_output1[331]=28;
  p_output1[332]=29;
  p_output1[333]=30;
  p_output1[334]=31;
  p_output1[335]=32;
  p_output1[336]=33;
  p_output1[337]=34;
  p_output1[338]=35;
  p_output1[339]=36;
  p_output1[340]=7;
  p_output1[341]=8;
  p_output1[342]=9;
  p_output1[343]=10;
  p_output1[344]=11;
  p_output1[345]=12;
  p_output1[346]=13;
  p_output1[347]=14;
  p_output1[348]=29;
  p_output1[349]=30;
  p_output1[350]=31;
  p_output1[351]=32;
  p_output1[352]=33;
  p_output1[353]=34;
  p_output1[354]=35;
  p_output1[355]=36;
  p_output1[356]=8;
  p_output1[357]=9;
  p_output1[358]=10;
  p_output1[359]=11;
  p_output1[360]=12;
  p_output1[361]=13;
  p_output1[362]=14;
  p_output1[363]=29;
  p_output1[364]=30;
  p_output1[365]=31;
  p_output1[366]=32;
  p_output1[367]=33;
  p_output1[368]=34;
  p_output1[369]=35;
  p_output1[370]=36;
  p_output1[371]=8;
  p_output1[372]=9;
  p_output1[373]=10;
  p_output1[374]=11;
  p_output1[375]=12;
  p_output1[376]=13;
  p_output1[377]=14;
  p_output1[378]=29;
  p_output1[379]=30;
  p_output1[380]=31;
  p_output1[381]=32;
  p_output1[382]=33;
  p_output1[383]=34;
  p_output1[384]=35;
  p_output1[385]=36;
  p_output1[386]=8;
  p_output1[387]=9;
  p_output1[388]=10;
  p_output1[389]=11;
  p_output1[390]=12;
  p_output1[391]=13;
  p_output1[392]=14;
  p_output1[393]=29;
  p_output1[394]=30;
  p_output1[395]=31;
  p_output1[396]=32;
  p_output1[397]=33;
  p_output1[398]=34;
  p_output1[399]=35;
  p_output1[400]=36;
  p_output1[401]=8;
  p_output1[402]=9;
  p_output1[403]=10;
  p_output1[404]=11;
  p_output1[405]=12;
  p_output1[406]=13;
  p_output1[407]=14;
  p_output1[408]=29;
  p_output1[409]=30;
  p_output1[410]=31;
  p_output1[411]=32;
  p_output1[412]=33;
  p_output1[413]=34;
  p_output1[414]=35;
  p_output1[415]=36;
  p_output1[416]=8;
  p_output1[417]=9;
  p_output1[418]=10;
  p_output1[419]=11;
  p_output1[420]=12;
  p_output1[421]=13;
  p_output1[422]=14;
  p_output1[423]=29;
  p_output1[424]=30;
  p_output1[425]=31;
  p_output1[426]=32;
  p_output1[427]=33;
  p_output1[428]=34;
  p_output1[429]=35;
  p_output1[430]=36;
  p_output1[431]=8;
  p_output1[432]=9;
  p_output1[433]=10;
  p_output1[434]=11;
  p_output1[435]=12;
  p_output1[436]=13;
  p_output1[437]=14;
  p_output1[438]=29;
  p_output1[439]=30;
  p_output1[440]=31;
  p_output1[441]=32;
  p_output1[442]=33;
  p_output1[443]=34;
  p_output1[444]=35;
  p_output1[445]=36;
  p_output1[446]=8;
  p_output1[447]=9;
  p_output1[448]=10;
  p_output1[449]=11;
  p_output1[450]=12;
  p_output1[451]=13;
  p_output1[452]=14;
  p_output1[453]=29;
  p_output1[454]=30;
  p_output1[455]=31;
  p_output1[456]=32;
  p_output1[457]=33;
  p_output1[458]=34;
  p_output1[459]=35;
  p_output1[460]=36;
  p_output1[461]=8;
  p_output1[462]=9;
  p_output1[463]=10;
  p_output1[464]=11;
  p_output1[465]=12;
  p_output1[466]=13;
  p_output1[467]=14;
  p_output1[468]=29;
  p_output1[469]=30;
  p_output1[470]=31;
  p_output1[471]=32;
  p_output1[472]=33;
  p_output1[473]=34;
  p_output1[474]=35;
  p_output1[475]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 238, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec7_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec7_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

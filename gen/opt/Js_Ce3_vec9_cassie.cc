/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 21:51:57 GMT-04:00
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
  p_output1[84]=9;
  p_output1[85]=9;
  p_output1[86]=9;
  p_output1[87]=9;
  p_output1[88]=9;
  p_output1[89]=9;
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
  p_output1[104]=10;
  p_output1[105]=10;
  p_output1[106]=10;
  p_output1[107]=10;
  p_output1[108]=10;
  p_output1[109]=10;
  p_output1[110]=10;
  p_output1[111]=10;
  p_output1[112]=10;
  p_output1[113]=10;
  p_output1[114]=10;
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
  p_output1[129]=11;
  p_output1[130]=11;
  p_output1[131]=11;
  p_output1[132]=11;
  p_output1[133]=11;
  p_output1[134]=11;
  p_output1[135]=11;
  p_output1[136]=11;
  p_output1[137]=11;
  p_output1[138]=11;
  p_output1[139]=11;
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
  p_output1[154]=12;
  p_output1[155]=12;
  p_output1[156]=12;
  p_output1[157]=12;
  p_output1[158]=12;
  p_output1[159]=12;
  p_output1[160]=12;
  p_output1[161]=12;
  p_output1[162]=12;
  p_output1[163]=12;
  p_output1[164]=12;
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
  p_output1[179]=13;
  p_output1[180]=13;
  p_output1[181]=13;
  p_output1[182]=13;
  p_output1[183]=13;
  p_output1[184]=13;
  p_output1[185]=13;
  p_output1[186]=13;
  p_output1[187]=13;
  p_output1[188]=13;
  p_output1[189]=13;
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
  p_output1[204]=14;
  p_output1[205]=14;
  p_output1[206]=14;
  p_output1[207]=14;
  p_output1[208]=14;
  p_output1[209]=14;
  p_output1[210]=14;
  p_output1[211]=14;
  p_output1[212]=14;
  p_output1[213]=14;
  p_output1[214]=14;
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
  p_output1[229]=4;
  p_output1[230]=5;
  p_output1[231]=6;
  p_output1[232]=7;
  p_output1[233]=8;
  p_output1[234]=9;
  p_output1[235]=10;
  p_output1[236]=11;
  p_output1[237]=12;
  p_output1[238]=13;
  p_output1[239]=14;
  p_output1[240]=24;
  p_output1[241]=25;
  p_output1[242]=31;
  p_output1[243]=4;
  p_output1[244]=5;
  p_output1[245]=6;
  p_output1[246]=7;
  p_output1[247]=8;
  p_output1[248]=9;
  p_output1[249]=10;
  p_output1[250]=11;
  p_output1[251]=12;
  p_output1[252]=13;
  p_output1[253]=14;
  p_output1[254]=23;
  p_output1[255]=24;
  p_output1[256]=25;
  p_output1[257]=26;
  p_output1[258]=31;
  p_output1[259]=4;
  p_output1[260]=5;
  p_output1[261]=6;
  p_output1[262]=7;
  p_output1[263]=8;
  p_output1[264]=9;
  p_output1[265]=10;
  p_output1[266]=11;
  p_output1[267]=12;
  p_output1[268]=13;
  p_output1[269]=14;
  p_output1[270]=23;
  p_output1[271]=24;
  p_output1[272]=25;
  p_output1[273]=26;
  p_output1[274]=27;
  p_output1[275]=31;
  p_output1[276]=4;
  p_output1[277]=5;
  p_output1[278]=6;
  p_output1[279]=7;
  p_output1[280]=8;
  p_output1[281]=9;
  p_output1[282]=10;
  p_output1[283]=11;
  p_output1[284]=12;
  p_output1[285]=13;
  p_output1[286]=14;
  p_output1[287]=23;
  p_output1[288]=24;
  p_output1[289]=25;
  p_output1[290]=26;
  p_output1[291]=27;
  p_output1[292]=28;
  p_output1[293]=31;
  p_output1[294]=4;
  p_output1[295]=5;
  p_output1[296]=6;
  p_output1[297]=7;
  p_output1[298]=8;
  p_output1[299]=9;
  p_output1[300]=10;
  p_output1[301]=11;
  p_output1[302]=12;
  p_output1[303]=13;
  p_output1[304]=14;
  p_output1[305]=23;
  p_output1[306]=24;
  p_output1[307]=25;
  p_output1[308]=26;
  p_output1[309]=27;
  p_output1[310]=28;
  p_output1[311]=29;
  p_output1[312]=31;
  p_output1[313]=4;
  p_output1[314]=5;
  p_output1[315]=6;
  p_output1[316]=7;
  p_output1[317]=8;
  p_output1[318]=9;
  p_output1[319]=10;
  p_output1[320]=11;
  p_output1[321]=12;
  p_output1[322]=13;
  p_output1[323]=14;
  p_output1[324]=23;
  p_output1[325]=24;
  p_output1[326]=25;
  p_output1[327]=26;
  p_output1[328]=27;
  p_output1[329]=28;
  p_output1[330]=29;
  p_output1[331]=30;
  p_output1[332]=31;
  p_output1[333]=4;
  p_output1[334]=5;
  p_output1[335]=6;
  p_output1[336]=7;
  p_output1[337]=8;
  p_output1[338]=9;
  p_output1[339]=10;
  p_output1[340]=11;
  p_output1[341]=12;
  p_output1[342]=13;
  p_output1[343]=14;
  p_output1[344]=23;
  p_output1[345]=24;
  p_output1[346]=25;
  p_output1[347]=26;
  p_output1[348]=27;
  p_output1[349]=28;
  p_output1[350]=29;
  p_output1[351]=30;
  p_output1[352]=31;
  p_output1[353]=32;
  p_output1[354]=33;
  p_output1[355]=34;
  p_output1[356]=35;
  p_output1[357]=36;
  p_output1[358]=4;
  p_output1[359]=5;
  p_output1[360]=6;
  p_output1[361]=7;
  p_output1[362]=8;
  p_output1[363]=9;
  p_output1[364]=10;
  p_output1[365]=11;
  p_output1[366]=12;
  p_output1[367]=13;
  p_output1[368]=14;
  p_output1[369]=23;
  p_output1[370]=24;
  p_output1[371]=25;
  p_output1[372]=26;
  p_output1[373]=27;
  p_output1[374]=28;
  p_output1[375]=29;
  p_output1[376]=30;
  p_output1[377]=31;
  p_output1[378]=32;
  p_output1[379]=33;
  p_output1[380]=34;
  p_output1[381]=35;
  p_output1[382]=36;
  p_output1[383]=4;
  p_output1[384]=5;
  p_output1[385]=6;
  p_output1[386]=7;
  p_output1[387]=8;
  p_output1[388]=9;
  p_output1[389]=10;
  p_output1[390]=11;
  p_output1[391]=12;
  p_output1[392]=13;
  p_output1[393]=14;
  p_output1[394]=23;
  p_output1[395]=24;
  p_output1[396]=25;
  p_output1[397]=26;
  p_output1[398]=27;
  p_output1[399]=28;
  p_output1[400]=29;
  p_output1[401]=30;
  p_output1[402]=31;
  p_output1[403]=32;
  p_output1[404]=33;
  p_output1[405]=34;
  p_output1[406]=35;
  p_output1[407]=36;
  p_output1[408]=4;
  p_output1[409]=5;
  p_output1[410]=6;
  p_output1[411]=7;
  p_output1[412]=8;
  p_output1[413]=9;
  p_output1[414]=10;
  p_output1[415]=11;
  p_output1[416]=12;
  p_output1[417]=13;
  p_output1[418]=14;
  p_output1[419]=23;
  p_output1[420]=24;
  p_output1[421]=25;
  p_output1[422]=26;
  p_output1[423]=27;
  p_output1[424]=28;
  p_output1[425]=29;
  p_output1[426]=30;
  p_output1[427]=31;
  p_output1[428]=32;
  p_output1[429]=33;
  p_output1[430]=34;
  p_output1[431]=35;
  p_output1[432]=36;
  p_output1[433]=4;
  p_output1[434]=5;
  p_output1[435]=6;
  p_output1[436]=7;
  p_output1[437]=8;
  p_output1[438]=9;
  p_output1[439]=10;
  p_output1[440]=11;
  p_output1[441]=12;
  p_output1[442]=13;
  p_output1[443]=14;
  p_output1[444]=23;
  p_output1[445]=24;
  p_output1[446]=25;
  p_output1[447]=26;
  p_output1[448]=27;
  p_output1[449]=28;
  p_output1[450]=29;
  p_output1[451]=30;
  p_output1[452]=31;
  p_output1[453]=32;
  p_output1[454]=33;
  p_output1[455]=34;
  p_output1[456]=35;
  p_output1[457]=36;
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

#include "Js_Ce3_vec9_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce3_vec9_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:35:37 GMT-04:00
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
  p_output1[132]=8;
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
  p_output1[145]=9;
  p_output1[146]=9;
  p_output1[147]=9;
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
  p_output1[158]=10;
  p_output1[159]=10;
  p_output1[160]=10;
  p_output1[161]=10;
  p_output1[162]=10;
  p_output1[163]=10;
  p_output1[164]=10;
  p_output1[165]=10;
  p_output1[166]=10;
  p_output1[167]=10;
  p_output1[168]=10;
  p_output1[169]=10;
  p_output1[170]=10;
  p_output1[171]=11;
  p_output1[172]=11;
  p_output1[173]=11;
  p_output1[174]=11;
  p_output1[175]=11;
  p_output1[176]=11;
  p_output1[177]=11;
  p_output1[178]=11;
  p_output1[179]=11;
  p_output1[180]=11;
  p_output1[181]=11;
  p_output1[182]=11;
  p_output1[183]=11;
  p_output1[184]=12;
  p_output1[185]=12;
  p_output1[186]=12;
  p_output1[187]=12;
  p_output1[188]=12;
  p_output1[189]=12;
  p_output1[190]=12;
  p_output1[191]=12;
  p_output1[192]=12;
  p_output1[193]=12;
  p_output1[194]=12;
  p_output1[195]=12;
  p_output1[196]=12;
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
  p_output1[223]=5;
  p_output1[224]=6;
  p_output1[225]=7;
  p_output1[226]=8;
  p_output1[227]=9;
  p_output1[228]=10;
  p_output1[229]=11;
  p_output1[230]=12;
  p_output1[231]=13;
  p_output1[232]=14;
  p_output1[233]=27;
  p_output1[234]=28;
  p_output1[235]=29;
  p_output1[236]=30;
  p_output1[237]=31;
  p_output1[238]=32;
  p_output1[239]=33;
  p_output1[240]=34;
  p_output1[241]=35;
  p_output1[242]=36;
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
  p_output1[254]=26;
  p_output1[255]=27;
  p_output1[256]=28;
  p_output1[257]=29;
  p_output1[258]=30;
  p_output1[259]=31;
  p_output1[260]=32;
  p_output1[261]=33;
  p_output1[262]=34;
  p_output1[263]=35;
  p_output1[264]=36;
  p_output1[265]=4;
  p_output1[266]=5;
  p_output1[267]=6;
  p_output1[268]=7;
  p_output1[269]=8;
  p_output1[270]=9;
  p_output1[271]=10;
  p_output1[272]=11;
  p_output1[273]=12;
  p_output1[274]=13;
  p_output1[275]=14;
  p_output1[276]=26;
  p_output1[277]=27;
  p_output1[278]=28;
  p_output1[279]=29;
  p_output1[280]=30;
  p_output1[281]=31;
  p_output1[282]=32;
  p_output1[283]=33;
  p_output1[284]=34;
  p_output1[285]=35;
  p_output1[286]=36;
  p_output1[287]=5;
  p_output1[288]=6;
  p_output1[289]=7;
  p_output1[290]=8;
  p_output1[291]=9;
  p_output1[292]=10;
  p_output1[293]=11;
  p_output1[294]=12;
  p_output1[295]=13;
  p_output1[296]=14;
  p_output1[297]=27;
  p_output1[298]=28;
  p_output1[299]=29;
  p_output1[300]=30;
  p_output1[301]=31;
  p_output1[302]=32;
  p_output1[303]=33;
  p_output1[304]=34;
  p_output1[305]=35;
  p_output1[306]=36;
  p_output1[307]=6;
  p_output1[308]=7;
  p_output1[309]=8;
  p_output1[310]=9;
  p_output1[311]=10;
  p_output1[312]=11;
  p_output1[313]=12;
  p_output1[314]=13;
  p_output1[315]=14;
  p_output1[316]=28;
  p_output1[317]=29;
  p_output1[318]=30;
  p_output1[319]=31;
  p_output1[320]=32;
  p_output1[321]=33;
  p_output1[322]=34;
  p_output1[323]=35;
  p_output1[324]=36;
  p_output1[325]=7;
  p_output1[326]=8;
  p_output1[327]=9;
  p_output1[328]=10;
  p_output1[329]=11;
  p_output1[330]=12;
  p_output1[331]=13;
  p_output1[332]=14;
  p_output1[333]=29;
  p_output1[334]=30;
  p_output1[335]=31;
  p_output1[336]=32;
  p_output1[337]=33;
  p_output1[338]=34;
  p_output1[339]=35;
  p_output1[340]=36;
  p_output1[341]=8;
  p_output1[342]=9;
  p_output1[343]=10;
  p_output1[344]=11;
  p_output1[345]=12;
  p_output1[346]=13;
  p_output1[347]=14;
  p_output1[348]=30;
  p_output1[349]=31;
  p_output1[350]=32;
  p_output1[351]=33;
  p_output1[352]=34;
  p_output1[353]=35;
  p_output1[354]=36;
  p_output1[355]=9;
  p_output1[356]=10;
  p_output1[357]=11;
  p_output1[358]=12;
  p_output1[359]=13;
  p_output1[360]=14;
  p_output1[361]=30;
  p_output1[362]=31;
  p_output1[363]=32;
  p_output1[364]=33;
  p_output1[365]=34;
  p_output1[366]=35;
  p_output1[367]=36;
  p_output1[368]=9;
  p_output1[369]=10;
  p_output1[370]=11;
  p_output1[371]=12;
  p_output1[372]=13;
  p_output1[373]=14;
  p_output1[374]=30;
  p_output1[375]=31;
  p_output1[376]=32;
  p_output1[377]=33;
  p_output1[378]=34;
  p_output1[379]=35;
  p_output1[380]=36;
  p_output1[381]=9;
  p_output1[382]=10;
  p_output1[383]=11;
  p_output1[384]=12;
  p_output1[385]=13;
  p_output1[386]=14;
  p_output1[387]=30;
  p_output1[388]=31;
  p_output1[389]=32;
  p_output1[390]=33;
  p_output1[391]=34;
  p_output1[392]=35;
  p_output1[393]=36;
  p_output1[394]=9;
  p_output1[395]=10;
  p_output1[396]=11;
  p_output1[397]=12;
  p_output1[398]=13;
  p_output1[399]=14;
  p_output1[400]=30;
  p_output1[401]=31;
  p_output1[402]=32;
  p_output1[403]=33;
  p_output1[404]=34;
  p_output1[405]=35;
  p_output1[406]=36;
  p_output1[407]=9;
  p_output1[408]=10;
  p_output1[409]=11;
  p_output1[410]=12;
  p_output1[411]=13;
  p_output1[412]=14;
  p_output1[413]=30;
  p_output1[414]=31;
  p_output1[415]=32;
  p_output1[416]=33;
  p_output1[417]=34;
  p_output1[418]=35;
  p_output1[419]=36;
  p_output1[420]=9;
  p_output1[421]=10;
  p_output1[422]=11;
  p_output1[423]=12;
  p_output1[424]=13;
  p_output1[425]=14;
  p_output1[426]=30;
  p_output1[427]=31;
  p_output1[428]=32;
  p_output1[429]=33;
  p_output1[430]=34;
  p_output1[431]=35;
  p_output1[432]=36;
  p_output1[433]=9;
  p_output1[434]=10;
  p_output1[435]=11;
  p_output1[436]=12;
  p_output1[437]=13;
  p_output1[438]=14;
  p_output1[439]=30;
  p_output1[440]=31;
  p_output1[441]=32;
  p_output1[442]=33;
  p_output1[443]=34;
  p_output1[444]=35;
  p_output1[445]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 223, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec8_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec8_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

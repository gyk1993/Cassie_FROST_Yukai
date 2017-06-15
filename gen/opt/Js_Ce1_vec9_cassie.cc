/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:37:19 GMT-04:00
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
  p_output1[144]=9;
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
  p_output1[155]=10;
  p_output1[156]=10;
  p_output1[157]=10;
  p_output1[158]=10;
  p_output1[159]=10;
  p_output1[160]=10;
  p_output1[161]=10;
  p_output1[162]=10;
  p_output1[163]=10;
  p_output1[164]=10;
  p_output1[165]=10;
  p_output1[166]=11;
  p_output1[167]=11;
  p_output1[168]=11;
  p_output1[169]=11;
  p_output1[170]=11;
  p_output1[171]=11;
  p_output1[172]=11;
  p_output1[173]=11;
  p_output1[174]=11;
  p_output1[175]=11;
  p_output1[176]=11;
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
  p_output1[199]=14;
  p_output1[200]=14;
  p_output1[201]=14;
  p_output1[202]=14;
  p_output1[203]=14;
  p_output1[204]=14;
  p_output1[205]=14;
  p_output1[206]=14;
  p_output1[207]=14;
  p_output1[208]=14;
  p_output1[209]=14;
  p_output1[210]=5;
  p_output1[211]=6;
  p_output1[212]=7;
  p_output1[213]=8;
  p_output1[214]=9;
  p_output1[215]=10;
  p_output1[216]=11;
  p_output1[217]=12;
  p_output1[218]=13;
  p_output1[219]=14;
  p_output1[220]=27;
  p_output1[221]=28;
  p_output1[222]=29;
  p_output1[223]=30;
  p_output1[224]=31;
  p_output1[225]=32;
  p_output1[226]=33;
  p_output1[227]=34;
  p_output1[228]=35;
  p_output1[229]=36;
  p_output1[230]=4;
  p_output1[231]=5;
  p_output1[232]=6;
  p_output1[233]=7;
  p_output1[234]=8;
  p_output1[235]=9;
  p_output1[236]=10;
  p_output1[237]=11;
  p_output1[238]=12;
  p_output1[239]=13;
  p_output1[240]=14;
  p_output1[241]=26;
  p_output1[242]=27;
  p_output1[243]=28;
  p_output1[244]=29;
  p_output1[245]=30;
  p_output1[246]=31;
  p_output1[247]=32;
  p_output1[248]=33;
  p_output1[249]=34;
  p_output1[250]=35;
  p_output1[251]=36;
  p_output1[252]=4;
  p_output1[253]=5;
  p_output1[254]=6;
  p_output1[255]=7;
  p_output1[256]=8;
  p_output1[257]=9;
  p_output1[258]=10;
  p_output1[259]=11;
  p_output1[260]=12;
  p_output1[261]=13;
  p_output1[262]=14;
  p_output1[263]=26;
  p_output1[264]=27;
  p_output1[265]=28;
  p_output1[266]=29;
  p_output1[267]=30;
  p_output1[268]=31;
  p_output1[269]=32;
  p_output1[270]=33;
  p_output1[271]=34;
  p_output1[272]=35;
  p_output1[273]=36;
  p_output1[274]=5;
  p_output1[275]=6;
  p_output1[276]=7;
  p_output1[277]=8;
  p_output1[278]=9;
  p_output1[279]=10;
  p_output1[280]=11;
  p_output1[281]=12;
  p_output1[282]=13;
  p_output1[283]=14;
  p_output1[284]=27;
  p_output1[285]=28;
  p_output1[286]=29;
  p_output1[287]=30;
  p_output1[288]=31;
  p_output1[289]=32;
  p_output1[290]=33;
  p_output1[291]=34;
  p_output1[292]=35;
  p_output1[293]=36;
  p_output1[294]=6;
  p_output1[295]=7;
  p_output1[296]=8;
  p_output1[297]=9;
  p_output1[298]=10;
  p_output1[299]=11;
  p_output1[300]=12;
  p_output1[301]=13;
  p_output1[302]=14;
  p_output1[303]=28;
  p_output1[304]=29;
  p_output1[305]=30;
  p_output1[306]=31;
  p_output1[307]=32;
  p_output1[308]=33;
  p_output1[309]=34;
  p_output1[310]=35;
  p_output1[311]=36;
  p_output1[312]=7;
  p_output1[313]=8;
  p_output1[314]=9;
  p_output1[315]=10;
  p_output1[316]=11;
  p_output1[317]=12;
  p_output1[318]=13;
  p_output1[319]=14;
  p_output1[320]=29;
  p_output1[321]=30;
  p_output1[322]=31;
  p_output1[323]=32;
  p_output1[324]=33;
  p_output1[325]=34;
  p_output1[326]=35;
  p_output1[327]=36;
  p_output1[328]=8;
  p_output1[329]=9;
  p_output1[330]=10;
  p_output1[331]=11;
  p_output1[332]=12;
  p_output1[333]=13;
  p_output1[334]=14;
  p_output1[335]=30;
  p_output1[336]=31;
  p_output1[337]=32;
  p_output1[338]=33;
  p_output1[339]=34;
  p_output1[340]=35;
  p_output1[341]=36;
  p_output1[342]=9;
  p_output1[343]=10;
  p_output1[344]=11;
  p_output1[345]=12;
  p_output1[346]=13;
  p_output1[347]=14;
  p_output1[348]=31;
  p_output1[349]=32;
  p_output1[350]=33;
  p_output1[351]=34;
  p_output1[352]=35;
  p_output1[353]=36;
  p_output1[354]=10;
  p_output1[355]=11;
  p_output1[356]=12;
  p_output1[357]=13;
  p_output1[358]=14;
  p_output1[359]=31;
  p_output1[360]=32;
  p_output1[361]=33;
  p_output1[362]=34;
  p_output1[363]=35;
  p_output1[364]=36;
  p_output1[365]=10;
  p_output1[366]=11;
  p_output1[367]=12;
  p_output1[368]=13;
  p_output1[369]=14;
  p_output1[370]=31;
  p_output1[371]=32;
  p_output1[372]=33;
  p_output1[373]=34;
  p_output1[374]=35;
  p_output1[375]=36;
  p_output1[376]=10;
  p_output1[377]=11;
  p_output1[378]=12;
  p_output1[379]=13;
  p_output1[380]=14;
  p_output1[381]=31;
  p_output1[382]=32;
  p_output1[383]=33;
  p_output1[384]=34;
  p_output1[385]=35;
  p_output1[386]=36;
  p_output1[387]=10;
  p_output1[388]=11;
  p_output1[389]=12;
  p_output1[390]=13;
  p_output1[391]=14;
  p_output1[392]=31;
  p_output1[393]=32;
  p_output1[394]=33;
  p_output1[395]=34;
  p_output1[396]=35;
  p_output1[397]=36;
  p_output1[398]=10;
  p_output1[399]=11;
  p_output1[400]=12;
  p_output1[401]=13;
  p_output1[402]=14;
  p_output1[403]=31;
  p_output1[404]=32;
  p_output1[405]=33;
  p_output1[406]=34;
  p_output1[407]=35;
  p_output1[408]=36;
  p_output1[409]=10;
  p_output1[410]=11;
  p_output1[411]=12;
  p_output1[412]=13;
  p_output1[413]=14;
  p_output1[414]=31;
  p_output1[415]=32;
  p_output1[416]=33;
  p_output1[417]=34;
  p_output1[418]=35;
  p_output1[419]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 210, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec9_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec9_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

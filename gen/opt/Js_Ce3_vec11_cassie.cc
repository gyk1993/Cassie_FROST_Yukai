/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 21:53:31 GMT-04:00
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
  p_output1[125]=11;
  p_output1[126]=11;
  p_output1[127]=11;
  p_output1[128]=11;
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
  p_output1[147]=12;
  p_output1[148]=12;
  p_output1[149]=12;
  p_output1[150]=12;
  p_output1[151]=12;
  p_output1[152]=12;
  p_output1[153]=12;
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
  p_output1[172]=13;
  p_output1[173]=13;
  p_output1[174]=13;
  p_output1[175]=13;
  p_output1[176]=13;
  p_output1[177]=13;
  p_output1[178]=13;
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
  p_output1[197]=14;
  p_output1[198]=14;
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
  p_output1[222]=4;
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
  p_output1[233]=24;
  p_output1[234]=25;
  p_output1[235]=33;
  p_output1[236]=4;
  p_output1[237]=5;
  p_output1[238]=6;
  p_output1[239]=7;
  p_output1[240]=8;
  p_output1[241]=9;
  p_output1[242]=10;
  p_output1[243]=11;
  p_output1[244]=12;
  p_output1[245]=13;
  p_output1[246]=14;
  p_output1[247]=23;
  p_output1[248]=24;
  p_output1[249]=25;
  p_output1[250]=26;
  p_output1[251]=33;
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
  p_output1[263]=23;
  p_output1[264]=24;
  p_output1[265]=25;
  p_output1[266]=26;
  p_output1[267]=27;
  p_output1[268]=33;
  p_output1[269]=4;
  p_output1[270]=5;
  p_output1[271]=6;
  p_output1[272]=7;
  p_output1[273]=8;
  p_output1[274]=9;
  p_output1[275]=10;
  p_output1[276]=11;
  p_output1[277]=12;
  p_output1[278]=13;
  p_output1[279]=14;
  p_output1[280]=23;
  p_output1[281]=24;
  p_output1[282]=25;
  p_output1[283]=26;
  p_output1[284]=27;
  p_output1[285]=28;
  p_output1[286]=33;
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
  p_output1[305]=33;
  p_output1[306]=4;
  p_output1[307]=5;
  p_output1[308]=6;
  p_output1[309]=7;
  p_output1[310]=8;
  p_output1[311]=9;
  p_output1[312]=10;
  p_output1[313]=11;
  p_output1[314]=12;
  p_output1[315]=13;
  p_output1[316]=14;
  p_output1[317]=23;
  p_output1[318]=24;
  p_output1[319]=25;
  p_output1[320]=26;
  p_output1[321]=27;
  p_output1[322]=28;
  p_output1[323]=29;
  p_output1[324]=30;
  p_output1[325]=33;
  p_output1[326]=4;
  p_output1[327]=5;
  p_output1[328]=6;
  p_output1[329]=7;
  p_output1[330]=8;
  p_output1[331]=9;
  p_output1[332]=10;
  p_output1[333]=11;
  p_output1[334]=12;
  p_output1[335]=13;
  p_output1[336]=14;
  p_output1[337]=23;
  p_output1[338]=24;
  p_output1[339]=25;
  p_output1[340]=26;
  p_output1[341]=27;
  p_output1[342]=28;
  p_output1[343]=29;
  p_output1[344]=30;
  p_output1[345]=31;
  p_output1[346]=33;
  p_output1[347]=4;
  p_output1[348]=5;
  p_output1[349]=6;
  p_output1[350]=7;
  p_output1[351]=8;
  p_output1[352]=9;
  p_output1[353]=10;
  p_output1[354]=11;
  p_output1[355]=12;
  p_output1[356]=13;
  p_output1[357]=14;
  p_output1[358]=23;
  p_output1[359]=24;
  p_output1[360]=25;
  p_output1[361]=26;
  p_output1[362]=27;
  p_output1[363]=28;
  p_output1[364]=29;
  p_output1[365]=30;
  p_output1[366]=31;
  p_output1[367]=32;
  p_output1[368]=33;
  p_output1[369]=4;
  p_output1[370]=5;
  p_output1[371]=6;
  p_output1[372]=7;
  p_output1[373]=8;
  p_output1[374]=9;
  p_output1[375]=10;
  p_output1[376]=11;
  p_output1[377]=12;
  p_output1[378]=13;
  p_output1[379]=14;
  p_output1[380]=23;
  p_output1[381]=24;
  p_output1[382]=25;
  p_output1[383]=26;
  p_output1[384]=27;
  p_output1[385]=28;
  p_output1[386]=29;
  p_output1[387]=30;
  p_output1[388]=31;
  p_output1[389]=32;
  p_output1[390]=33;
  p_output1[391]=34;
  p_output1[392]=35;
  p_output1[393]=36;
  p_output1[394]=4;
  p_output1[395]=5;
  p_output1[396]=6;
  p_output1[397]=7;
  p_output1[398]=8;
  p_output1[399]=9;
  p_output1[400]=10;
  p_output1[401]=11;
  p_output1[402]=12;
  p_output1[403]=13;
  p_output1[404]=14;
  p_output1[405]=23;
  p_output1[406]=24;
  p_output1[407]=25;
  p_output1[408]=26;
  p_output1[409]=27;
  p_output1[410]=28;
  p_output1[411]=29;
  p_output1[412]=30;
  p_output1[413]=31;
  p_output1[414]=32;
  p_output1[415]=33;
  p_output1[416]=34;
  p_output1[417]=35;
  p_output1[418]=36;
  p_output1[419]=4;
  p_output1[420]=5;
  p_output1[421]=6;
  p_output1[422]=7;
  p_output1[423]=8;
  p_output1[424]=9;
  p_output1[425]=10;
  p_output1[426]=11;
  p_output1[427]=12;
  p_output1[428]=13;
  p_output1[429]=14;
  p_output1[430]=23;
  p_output1[431]=24;
  p_output1[432]=25;
  p_output1[433]=26;
  p_output1[434]=27;
  p_output1[435]=28;
  p_output1[436]=29;
  p_output1[437]=30;
  p_output1[438]=31;
  p_output1[439]=32;
  p_output1[440]=33;
  p_output1[441]=34;
  p_output1[442]=35;
  p_output1[443]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 222, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec11_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce3_vec11_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

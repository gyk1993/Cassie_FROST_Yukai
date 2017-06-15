/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:39:58 GMT-04:00
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
  p_output1[154]=10;
  p_output1[155]=10;
  p_output1[156]=10;
  p_output1[157]=10;
  p_output1[158]=10;
  p_output1[159]=10;
  p_output1[160]=10;
  p_output1[161]=10;
  p_output1[162]=11;
  p_output1[163]=11;
  p_output1[164]=11;
  p_output1[165]=11;
  p_output1[166]=11;
  p_output1[167]=11;
  p_output1[168]=12;
  p_output1[169]=12;
  p_output1[170]=12;
  p_output1[171]=12;
  p_output1[172]=13;
  p_output1[173]=13;
  p_output1[174]=13;
  p_output1[175]=14;
  p_output1[176]=14;
  p_output1[177]=14;
  p_output1[178]=5;
  p_output1[179]=6;
  p_output1[180]=7;
  p_output1[181]=8;
  p_output1[182]=9;
  p_output1[183]=10;
  p_output1[184]=11;
  p_output1[185]=12;
  p_output1[186]=13;
  p_output1[187]=14;
  p_output1[188]=27;
  p_output1[189]=28;
  p_output1[190]=29;
  p_output1[191]=30;
  p_output1[192]=31;
  p_output1[193]=32;
  p_output1[194]=33;
  p_output1[195]=34;
  p_output1[196]=35;
  p_output1[197]=36;
  p_output1[198]=4;
  p_output1[199]=5;
  p_output1[200]=6;
  p_output1[201]=7;
  p_output1[202]=8;
  p_output1[203]=9;
  p_output1[204]=10;
  p_output1[205]=11;
  p_output1[206]=12;
  p_output1[207]=13;
  p_output1[208]=14;
  p_output1[209]=26;
  p_output1[210]=27;
  p_output1[211]=28;
  p_output1[212]=29;
  p_output1[213]=30;
  p_output1[214]=31;
  p_output1[215]=32;
  p_output1[216]=33;
  p_output1[217]=34;
  p_output1[218]=35;
  p_output1[219]=36;
  p_output1[220]=4;
  p_output1[221]=5;
  p_output1[222]=6;
  p_output1[223]=7;
  p_output1[224]=8;
  p_output1[225]=9;
  p_output1[226]=10;
  p_output1[227]=11;
  p_output1[228]=12;
  p_output1[229]=13;
  p_output1[230]=14;
  p_output1[231]=26;
  p_output1[232]=27;
  p_output1[233]=28;
  p_output1[234]=29;
  p_output1[235]=30;
  p_output1[236]=31;
  p_output1[237]=32;
  p_output1[238]=33;
  p_output1[239]=34;
  p_output1[240]=35;
  p_output1[241]=36;
  p_output1[242]=5;
  p_output1[243]=6;
  p_output1[244]=7;
  p_output1[245]=8;
  p_output1[246]=9;
  p_output1[247]=10;
  p_output1[248]=11;
  p_output1[249]=12;
  p_output1[250]=13;
  p_output1[251]=14;
  p_output1[252]=27;
  p_output1[253]=28;
  p_output1[254]=29;
  p_output1[255]=30;
  p_output1[256]=31;
  p_output1[257]=32;
  p_output1[258]=33;
  p_output1[259]=34;
  p_output1[260]=35;
  p_output1[261]=36;
  p_output1[262]=6;
  p_output1[263]=7;
  p_output1[264]=8;
  p_output1[265]=9;
  p_output1[266]=10;
  p_output1[267]=11;
  p_output1[268]=12;
  p_output1[269]=13;
  p_output1[270]=14;
  p_output1[271]=28;
  p_output1[272]=29;
  p_output1[273]=30;
  p_output1[274]=31;
  p_output1[275]=32;
  p_output1[276]=33;
  p_output1[277]=34;
  p_output1[278]=35;
  p_output1[279]=36;
  p_output1[280]=7;
  p_output1[281]=8;
  p_output1[282]=9;
  p_output1[283]=10;
  p_output1[284]=11;
  p_output1[285]=12;
  p_output1[286]=13;
  p_output1[287]=14;
  p_output1[288]=29;
  p_output1[289]=30;
  p_output1[290]=31;
  p_output1[291]=32;
  p_output1[292]=33;
  p_output1[293]=34;
  p_output1[294]=35;
  p_output1[295]=36;
  p_output1[296]=8;
  p_output1[297]=9;
  p_output1[298]=10;
  p_output1[299]=11;
  p_output1[300]=12;
  p_output1[301]=13;
  p_output1[302]=14;
  p_output1[303]=30;
  p_output1[304]=31;
  p_output1[305]=32;
  p_output1[306]=33;
  p_output1[307]=34;
  p_output1[308]=35;
  p_output1[309]=36;
  p_output1[310]=9;
  p_output1[311]=10;
  p_output1[312]=11;
  p_output1[313]=12;
  p_output1[314]=13;
  p_output1[315]=14;
  p_output1[316]=31;
  p_output1[317]=32;
  p_output1[318]=33;
  p_output1[319]=34;
  p_output1[320]=35;
  p_output1[321]=36;
  p_output1[322]=10;
  p_output1[323]=11;
  p_output1[324]=12;
  p_output1[325]=13;
  p_output1[326]=14;
  p_output1[327]=32;
  p_output1[328]=33;
  p_output1[329]=34;
  p_output1[330]=35;
  p_output1[331]=36;
  p_output1[332]=11;
  p_output1[333]=12;
  p_output1[334]=13;
  p_output1[335]=14;
  p_output1[336]=33;
  p_output1[337]=34;
  p_output1[338]=35;
  p_output1[339]=36;
  p_output1[340]=12;
  p_output1[341]=13;
  p_output1[342]=14;
  p_output1[343]=34;
  p_output1[344]=35;
  p_output1[345]=36;
  p_output1[346]=13;
  p_output1[347]=14;
  p_output1[348]=35;
  p_output1[349]=36;
  p_output1[350]=14;
  p_output1[351]=35;
  p_output1[352]=36;
  p_output1[353]=14;
  p_output1[354]=35;
  p_output1[355]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 178, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce1_vec13_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce1_vec13_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

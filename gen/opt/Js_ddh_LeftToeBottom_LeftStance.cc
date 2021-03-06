/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:41 GMT-04:00
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
  p_output1[20]=1;
  p_output1[21]=1;
  p_output1[22]=1;
  p_output1[23]=1;
  p_output1[24]=1;
  p_output1[25]=1;
  p_output1[26]=1;
  p_output1[27]=1;
  p_output1[28]=1;
  p_output1[29]=1;
  p_output1[30]=1;
  p_output1[31]=1;
  p_output1[32]=1;
  p_output1[33]=1;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
  p_output1[50]=2;
  p_output1[51]=2;
  p_output1[52]=2;
  p_output1[53]=2;
  p_output1[54]=2;
  p_output1[55]=2;
  p_output1[56]=2;
  p_output1[57]=2;
  p_output1[58]=2;
  p_output1[59]=2;
  p_output1[60]=2;
  p_output1[61]=2;
  p_output1[62]=2;
  p_output1[63]=2;
  p_output1[64]=2;
  p_output1[65]=2;
  p_output1[66]=2;
  p_output1[67]=2;
  p_output1[68]=2;
  p_output1[69]=2;
  p_output1[70]=2;
  p_output1[71]=2;
  p_output1[72]=2;
  p_output1[73]=3;
  p_output1[74]=3;
  p_output1[75]=3;
  p_output1[76]=3;
  p_output1[77]=3;
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=3;
  p_output1[88]=3;
  p_output1[89]=3;
  p_output1[90]=3;
  p_output1[91]=3;
  p_output1[92]=3;
  p_output1[93]=3;
  p_output1[94]=3;
  p_output1[95]=3;
  p_output1[96]=3;
  p_output1[97]=3;
  p_output1[98]=3;
  p_output1[99]=3;
  p_output1[100]=3;
  p_output1[101]=3;
  p_output1[102]=3;
  p_output1[103]=3;
  p_output1[104]=3;
  p_output1[105]=3;
  p_output1[106]=3;
  p_output1[107]=3;
  p_output1[108]=3;
  p_output1[109]=3;
  p_output1[110]=3;
  p_output1[111]=3;
  p_output1[112]=4;
  p_output1[113]=4;
  p_output1[114]=4;
  p_output1[115]=4;
  p_output1[116]=4;
  p_output1[117]=4;
  p_output1[118]=4;
  p_output1[119]=4;
  p_output1[120]=4;
  p_output1[121]=4;
  p_output1[122]=4;
  p_output1[123]=4;
  p_output1[124]=4;
  p_output1[125]=4;
  p_output1[126]=4;
  p_output1[127]=4;
  p_output1[128]=4;
  p_output1[129]=4;
  p_output1[130]=4;
  p_output1[131]=4;
  p_output1[132]=4;
  p_output1[133]=5;
  p_output1[134]=5;
  p_output1[135]=5;
  p_output1[136]=5;
  p_output1[137]=5;
  p_output1[138]=5;
  p_output1[139]=5;
  p_output1[140]=5;
  p_output1[141]=5;
  p_output1[142]=5;
  p_output1[143]=5;
  p_output1[144]=5;
  p_output1[145]=5;
  p_output1[146]=5;
  p_output1[147]=5;
  p_output1[148]=5;
  p_output1[149]=5;
  p_output1[150]=5;
  p_output1[151]=5;
  p_output1[152]=5;
  p_output1[153]=5;
  p_output1[154]=5;
  p_output1[155]=5;
  p_output1[156]=5;
  p_output1[157]=5;
  p_output1[158]=5;
  p_output1[159]=5;
  p_output1[160]=4;
  p_output1[161]=5;
  p_output1[162]=6;
  p_output1[163]=7;
  p_output1[164]=8;
  p_output1[165]=9;
  p_output1[166]=10;
  p_output1[167]=11;
  p_output1[168]=12;
  p_output1[169]=13;
  p_output1[170]=14;
  p_output1[171]=23;
  p_output1[172]=24;
  p_output1[173]=25;
  p_output1[174]=26;
  p_output1[175]=27;
  p_output1[176]=28;
  p_output1[177]=29;
  p_output1[178]=30;
  p_output1[179]=31;
  p_output1[180]=32;
  p_output1[181]=33;
  p_output1[182]=34;
  p_output1[183]=35;
  p_output1[184]=36;
  p_output1[185]=45;
  p_output1[186]=46;
  p_output1[187]=47;
  p_output1[188]=48;
  p_output1[189]=49;
  p_output1[190]=50;
  p_output1[191]=51;
  p_output1[192]=52;
  p_output1[193]=53;
  p_output1[194]=4;
  p_output1[195]=5;
  p_output1[196]=6;
  p_output1[197]=7;
  p_output1[198]=8;
  p_output1[199]=9;
  p_output1[200]=10;
  p_output1[201]=11;
  p_output1[202]=12;
  p_output1[203]=13;
  p_output1[204]=14;
  p_output1[205]=23;
  p_output1[206]=24;
  p_output1[207]=25;
  p_output1[208]=26;
  p_output1[209]=27;
  p_output1[210]=28;
  p_output1[211]=29;
  p_output1[212]=30;
  p_output1[213]=31;
  p_output1[214]=32;
  p_output1[215]=33;
  p_output1[216]=34;
  p_output1[217]=35;
  p_output1[218]=36;
  p_output1[219]=45;
  p_output1[220]=46;
  p_output1[221]=47;
  p_output1[222]=48;
  p_output1[223]=49;
  p_output1[224]=50;
  p_output1[225]=51;
  p_output1[226]=52;
  p_output1[227]=53;
  p_output1[228]=54;
  p_output1[229]=55;
  p_output1[230]=56;
  p_output1[231]=57;
  p_output1[232]=58;
  p_output1[233]=4;
  p_output1[234]=5;
  p_output1[235]=6;
  p_output1[236]=7;
  p_output1[237]=8;
  p_output1[238]=9;
  p_output1[239]=10;
  p_output1[240]=11;
  p_output1[241]=12;
  p_output1[242]=13;
  p_output1[243]=14;
  p_output1[244]=23;
  p_output1[245]=24;
  p_output1[246]=25;
  p_output1[247]=26;
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
  p_output1[258]=45;
  p_output1[259]=46;
  p_output1[260]=47;
  p_output1[261]=48;
  p_output1[262]=49;
  p_output1[263]=50;
  p_output1[264]=51;
  p_output1[265]=52;
  p_output1[266]=53;
  p_output1[267]=54;
  p_output1[268]=55;
  p_output1[269]=56;
  p_output1[270]=57;
  p_output1[271]=58;
  p_output1[272]=5;
  p_output1[273]=6;
  p_output1[274]=7;
  p_output1[275]=8;
  p_output1[276]=9;
  p_output1[277]=26;
  p_output1[278]=27;
  p_output1[279]=28;
  p_output1[280]=29;
  p_output1[281]=30;
  p_output1[282]=31;
  p_output1[283]=48;
  p_output1[284]=49;
  p_output1[285]=50;
  p_output1[286]=51;
  p_output1[287]=52;
  p_output1[288]=54;
  p_output1[289]=55;
  p_output1[290]=56;
  p_output1[291]=57;
  p_output1[292]=58;
  p_output1[293]=5;
  p_output1[294]=6;
  p_output1[295]=7;
  p_output1[296]=8;
  p_output1[297]=9;
  p_output1[298]=10;
  p_output1[299]=11;
  p_output1[300]=12;
  p_output1[301]=13;
  p_output1[302]=14;
  p_output1[303]=26;
  p_output1[304]=27;
  p_output1[305]=28;
  p_output1[306]=29;
  p_output1[307]=30;
  p_output1[308]=31;
  p_output1[309]=32;
  p_output1[310]=33;
  p_output1[311]=34;
  p_output1[312]=35;
  p_output1[313]=36;
  p_output1[314]=48;
  p_output1[315]=49;
  p_output1[316]=50;
  p_output1[317]=51;
  p_output1[318]=52;
  p_output1[319]=53;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 160, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_ddh_LeftToeBottom_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_ddh_LeftToeBottom_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

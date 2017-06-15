/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:02:29 GMT-04:00
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
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
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
  p_output1[64]=3;
  p_output1[65]=3;
  p_output1[66]=3;
  p_output1[67]=3;
  p_output1[68]=3;
  p_output1[69]=3;
  p_output1[70]=3;
  p_output1[71]=3;
  p_output1[72]=3;
  p_output1[73]=3;
  p_output1[74]=3;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=4;
  p_output1[81]=4;
  p_output1[82]=4;
  p_output1[83]=4;
  p_output1[84]=4;
  p_output1[85]=4;
  p_output1[86]=4;
  p_output1[87]=4;
  p_output1[88]=4;
  p_output1[89]=4;
  p_output1[90]=4;
  p_output1[91]=4;
  p_output1[92]=4;
  p_output1[93]=4;
  p_output1[94]=4;
  p_output1[95]=4;
  p_output1[96]=4;
  p_output1[97]=4;
  p_output1[98]=4;
  p_output1[99]=4;
  p_output1[100]=5;
  p_output1[101]=5;
  p_output1[102]=5;
  p_output1[103]=5;
  p_output1[104]=5;
  p_output1[105]=5;
  p_output1[106]=5;
  p_output1[107]=5;
  p_output1[108]=5;
  p_output1[109]=5;
  p_output1[110]=5;
  p_output1[111]=5;
  p_output1[112]=5;
  p_output1[113]=5;
  p_output1[114]=5;
  p_output1[115]=5;
  p_output1[116]=5;
  p_output1[117]=5;
  p_output1[118]=5;
  p_output1[119]=5;
  p_output1[120]=5;
  p_output1[121]=5;
  p_output1[122]=5;
  p_output1[123]=5;
  p_output1[124]=5;
  p_output1[125]=6;
  p_output1[126]=6;
  p_output1[127]=6;
  p_output1[128]=6;
  p_output1[129]=6;
  p_output1[130]=6;
  p_output1[131]=6;
  p_output1[132]=6;
  p_output1[133]=6;
  p_output1[134]=6;
  p_output1[135]=6;
  p_output1[136]=6;
  p_output1[137]=6;
  p_output1[138]=6;
  p_output1[139]=6;
  p_output1[140]=6;
  p_output1[141]=6;
  p_output1[142]=6;
  p_output1[143]=6;
  p_output1[144]=6;
  p_output1[145]=6;
  p_output1[146]=6;
  p_output1[147]=6;
  p_output1[148]=6;
  p_output1[149]=6;
  p_output1[150]=7;
  p_output1[151]=7;
  p_output1[152]=7;
  p_output1[153]=7;
  p_output1[154]=7;
  p_output1[155]=7;
  p_output1[156]=7;
  p_output1[157]=7;
  p_output1[158]=7;
  p_output1[159]=7;
  p_output1[160]=7;
  p_output1[161]=7;
  p_output1[162]=7;
  p_output1[163]=7;
  p_output1[164]=7;
  p_output1[165]=7;
  p_output1[166]=7;
  p_output1[167]=7;
  p_output1[168]=8;
  p_output1[169]=8;
  p_output1[170]=8;
  p_output1[171]=8;
  p_output1[172]=8;
  p_output1[173]=8;
  p_output1[174]=8;
  p_output1[175]=8;
  p_output1[176]=8;
  p_output1[177]=8;
  p_output1[178]=8;
  p_output1[179]=8;
  p_output1[180]=8;
  p_output1[181]=8;
  p_output1[182]=8;
  p_output1[183]=8;
  p_output1[184]=8;
  p_output1[185]=8;
  p_output1[186]=9;
  p_output1[187]=9;
  p_output1[188]=9;
  p_output1[189]=9;
  p_output1[190]=9;
  p_output1[191]=9;
  p_output1[192]=9;
  p_output1[193]=9;
  p_output1[194]=9;
  p_output1[195]=9;
  p_output1[196]=9;
  p_output1[197]=9;
  p_output1[198]=9;
  p_output1[199]=9;
  p_output1[200]=9;
  p_output1[201]=9;
  p_output1[202]=9;
  p_output1[203]=9;
  p_output1[204]=10;
  p_output1[205]=10;
  p_output1[206]=10;
  p_output1[207]=10;
  p_output1[208]=10;
  p_output1[209]=10;
  p_output1[210]=10;
  p_output1[211]=10;
  p_output1[212]=10;
  p_output1[213]=10;
  p_output1[214]=10;
  p_output1[215]=10;
  p_output1[216]=10;
  p_output1[217]=10;
  p_output1[218]=10;
  p_output1[219]=10;
  p_output1[220]=10;
  p_output1[221]=10;
  p_output1[222]=11;
  p_output1[223]=11;
  p_output1[224]=11;
  p_output1[225]=11;
  p_output1[226]=11;
  p_output1[227]=11;
  p_output1[228]=11;
  p_output1[229]=11;
  p_output1[230]=11;
  p_output1[231]=11;
  p_output1[232]=11;
  p_output1[233]=11;
  p_output1[234]=11;
  p_output1[235]=11;
  p_output1[236]=11;
  p_output1[237]=11;
  p_output1[238]=11;
  p_output1[239]=11;
  p_output1[240]=12;
  p_output1[241]=12;
  p_output1[242]=12;
  p_output1[243]=12;
  p_output1[244]=12;
  p_output1[245]=12;
  p_output1[246]=12;
  p_output1[247]=12;
  p_output1[248]=12;
  p_output1[249]=12;
  p_output1[250]=12;
  p_output1[251]=12;
  p_output1[252]=12;
  p_output1[253]=12;
  p_output1[254]=12;
  p_output1[255]=12;
  p_output1[256]=12;
  p_output1[257]=12;
  p_output1[258]=13;
  p_output1[259]=13;
  p_output1[260]=13;
  p_output1[261]=13;
  p_output1[262]=13;
  p_output1[263]=13;
  p_output1[264]=13;
  p_output1[265]=13;
  p_output1[266]=13;
  p_output1[267]=13;
  p_output1[268]=13;
  p_output1[269]=13;
  p_output1[270]=13;
  p_output1[271]=13;
  p_output1[272]=13;
  p_output1[273]=13;
  p_output1[274]=13;
  p_output1[275]=13;
  p_output1[276]=14;
  p_output1[277]=14;
  p_output1[278]=14;
  p_output1[279]=14;
  p_output1[280]=14;
  p_output1[281]=14;
  p_output1[282]=14;
  p_output1[283]=14;
  p_output1[284]=14;
  p_output1[285]=14;
  p_output1[286]=14;
  p_output1[287]=14;
  p_output1[288]=14;
  p_output1[289]=14;
  p_output1[290]=14;
  p_output1[291]=14;
  p_output1[292]=14;
  p_output1[293]=14;
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
  p_output1[312]=30;
  p_output1[313]=31;
  p_output1[314]=32;
  p_output1[315]=33;
  p_output1[316]=34;
  p_output1[317]=35;
  p_output1[318]=36;
  p_output1[319]=4;
  p_output1[320]=5;
  p_output1[321]=6;
  p_output1[322]=7;
  p_output1[323]=8;
  p_output1[324]=9;
  p_output1[325]=10;
  p_output1[326]=11;
  p_output1[327]=12;
  p_output1[328]=13;
  p_output1[329]=14;
  p_output1[330]=23;
  p_output1[331]=24;
  p_output1[332]=25;
  p_output1[333]=26;
  p_output1[334]=27;
  p_output1[335]=28;
  p_output1[336]=29;
  p_output1[337]=30;
  p_output1[338]=31;
  p_output1[339]=32;
  p_output1[340]=33;
  p_output1[341]=34;
  p_output1[342]=35;
  p_output1[343]=36;
  p_output1[344]=4;
  p_output1[345]=5;
  p_output1[346]=6;
  p_output1[347]=7;
  p_output1[348]=8;
  p_output1[349]=9;
  p_output1[350]=10;
  p_output1[351]=11;
  p_output1[352]=12;
  p_output1[353]=13;
  p_output1[354]=14;
  p_output1[355]=23;
  p_output1[356]=24;
  p_output1[357]=25;
  p_output1[358]=26;
  p_output1[359]=27;
  p_output1[360]=28;
  p_output1[361]=29;
  p_output1[362]=30;
  p_output1[363]=31;
  p_output1[364]=32;
  p_output1[365]=33;
  p_output1[366]=34;
  p_output1[367]=35;
  p_output1[368]=36;
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
  p_output1[444]=4;
  p_output1[445]=5;
  p_output1[446]=6;
  p_output1[447]=7;
  p_output1[448]=8;
  p_output1[449]=9;
  p_output1[450]=10;
  p_output1[451]=11;
  p_output1[452]=12;
  p_output1[453]=13;
  p_output1[454]=14;
  p_output1[455]=23;
  p_output1[456]=24;
  p_output1[457]=25;
  p_output1[458]=26;
  p_output1[459]=27;
  p_output1[460]=28;
  p_output1[461]=29;
  p_output1[462]=4;
  p_output1[463]=5;
  p_output1[464]=6;
  p_output1[465]=7;
  p_output1[466]=8;
  p_output1[467]=9;
  p_output1[468]=10;
  p_output1[469]=11;
  p_output1[470]=12;
  p_output1[471]=13;
  p_output1[472]=14;
  p_output1[473]=23;
  p_output1[474]=24;
  p_output1[475]=25;
  p_output1[476]=26;
  p_output1[477]=27;
  p_output1[478]=28;
  p_output1[479]=29;
  p_output1[480]=4;
  p_output1[481]=5;
  p_output1[482]=6;
  p_output1[483]=7;
  p_output1[484]=8;
  p_output1[485]=9;
  p_output1[486]=10;
  p_output1[487]=11;
  p_output1[488]=12;
  p_output1[489]=13;
  p_output1[490]=14;
  p_output1[491]=23;
  p_output1[492]=24;
  p_output1[493]=25;
  p_output1[494]=26;
  p_output1[495]=27;
  p_output1[496]=28;
  p_output1[497]=29;
  p_output1[498]=4;
  p_output1[499]=5;
  p_output1[500]=6;
  p_output1[501]=7;
  p_output1[502]=8;
  p_output1[503]=9;
  p_output1[504]=10;
  p_output1[505]=11;
  p_output1[506]=12;
  p_output1[507]=13;
  p_output1[508]=14;
  p_output1[509]=23;
  p_output1[510]=24;
  p_output1[511]=25;
  p_output1[512]=26;
  p_output1[513]=27;
  p_output1[514]=28;
  p_output1[515]=29;
  p_output1[516]=4;
  p_output1[517]=5;
  p_output1[518]=6;
  p_output1[519]=7;
  p_output1[520]=8;
  p_output1[521]=9;
  p_output1[522]=10;
  p_output1[523]=11;
  p_output1[524]=12;
  p_output1[525]=13;
  p_output1[526]=14;
  p_output1[527]=23;
  p_output1[528]=24;
  p_output1[529]=25;
  p_output1[530]=26;
  p_output1[531]=27;
  p_output1[532]=28;
  p_output1[533]=29;
  p_output1[534]=4;
  p_output1[535]=5;
  p_output1[536]=6;
  p_output1[537]=7;
  p_output1[538]=8;
  p_output1[539]=9;
  p_output1[540]=10;
  p_output1[541]=11;
  p_output1[542]=12;
  p_output1[543]=13;
  p_output1[544]=14;
  p_output1[545]=23;
  p_output1[546]=24;
  p_output1[547]=25;
  p_output1[548]=26;
  p_output1[549]=27;
  p_output1[550]=28;
  p_output1[551]=29;
  p_output1[552]=4;
  p_output1[553]=5;
  p_output1[554]=6;
  p_output1[555]=7;
  p_output1[556]=8;
  p_output1[557]=9;
  p_output1[558]=10;
  p_output1[559]=11;
  p_output1[560]=12;
  p_output1[561]=13;
  p_output1[562]=14;
  p_output1[563]=23;
  p_output1[564]=24;
  p_output1[565]=25;
  p_output1[566]=26;
  p_output1[567]=27;
  p_output1[568]=28;
  p_output1[569]=29;
  p_output1[570]=4;
  p_output1[571]=5;
  p_output1[572]=6;
  p_output1[573]=7;
  p_output1[574]=8;
  p_output1[575]=9;
  p_output1[576]=10;
  p_output1[577]=11;
  p_output1[578]=12;
  p_output1[579]=13;
  p_output1[580]=14;
  p_output1[581]=23;
  p_output1[582]=24;
  p_output1[583]=25;
  p_output1[584]=26;
  p_output1[585]=27;
  p_output1[586]=28;
  p_output1[587]=29;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 294, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec7_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec7_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

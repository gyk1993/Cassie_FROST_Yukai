/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:05:59 GMT-04:00
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
  p_output1[168]=7;
  p_output1[169]=7;
  p_output1[170]=7;
  p_output1[171]=7;
  p_output1[172]=7;
  p_output1[173]=7;
  p_output1[174]=7;
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
  p_output1[186]=8;
  p_output1[187]=8;
  p_output1[188]=8;
  p_output1[189]=8;
  p_output1[190]=8;
  p_output1[191]=8;
  p_output1[192]=8;
  p_output1[193]=8;
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
  p_output1[204]=9;
  p_output1[205]=9;
  p_output1[206]=9;
  p_output1[207]=9;
  p_output1[208]=9;
  p_output1[209]=9;
  p_output1[210]=9;
  p_output1[211]=9;
  p_output1[212]=9;
  p_output1[213]=10;
  p_output1[214]=10;
  p_output1[215]=10;
  p_output1[216]=10;
  p_output1[217]=10;
  p_output1[218]=10;
  p_output1[219]=10;
  p_output1[220]=10;
  p_output1[221]=10;
  p_output1[222]=10;
  p_output1[223]=10;
  p_output1[224]=10;
  p_output1[225]=10;
  p_output1[226]=10;
  p_output1[227]=10;
  p_output1[228]=10;
  p_output1[229]=10;
  p_output1[230]=10;
  p_output1[231]=10;
  p_output1[232]=11;
  p_output1[233]=11;
  p_output1[234]=11;
  p_output1[235]=11;
  p_output1[236]=11;
  p_output1[237]=11;
  p_output1[238]=11;
  p_output1[239]=11;
  p_output1[240]=11;
  p_output1[241]=11;
  p_output1[242]=11;
  p_output1[243]=11;
  p_output1[244]=11;
  p_output1[245]=11;
  p_output1[246]=11;
  p_output1[247]=11;
  p_output1[248]=11;
  p_output1[249]=11;
  p_output1[250]=11;
  p_output1[251]=12;
  p_output1[252]=12;
  p_output1[253]=12;
  p_output1[254]=12;
  p_output1[255]=12;
  p_output1[256]=12;
  p_output1[257]=12;
  p_output1[258]=12;
  p_output1[259]=12;
  p_output1[260]=12;
  p_output1[261]=12;
  p_output1[262]=12;
  p_output1[263]=12;
  p_output1[264]=12;
  p_output1[265]=12;
  p_output1[266]=12;
  p_output1[267]=12;
  p_output1[268]=12;
  p_output1[269]=12;
  p_output1[270]=13;
  p_output1[271]=13;
  p_output1[272]=13;
  p_output1[273]=13;
  p_output1[274]=13;
  p_output1[275]=13;
  p_output1[276]=13;
  p_output1[277]=13;
  p_output1[278]=13;
  p_output1[279]=13;
  p_output1[280]=13;
  p_output1[281]=13;
  p_output1[282]=13;
  p_output1[283]=13;
  p_output1[284]=13;
  p_output1[285]=13;
  p_output1[286]=13;
  p_output1[287]=13;
  p_output1[288]=13;
  p_output1[289]=14;
  p_output1[290]=14;
  p_output1[291]=14;
  p_output1[292]=14;
  p_output1[293]=14;
  p_output1[294]=14;
  p_output1[295]=14;
  p_output1[296]=14;
  p_output1[297]=14;
  p_output1[298]=14;
  p_output1[299]=14;
  p_output1[300]=14;
  p_output1[301]=14;
  p_output1[302]=14;
  p_output1[303]=14;
  p_output1[304]=14;
  p_output1[305]=14;
  p_output1[306]=14;
  p_output1[307]=14;
  p_output1[308]=4;
  p_output1[309]=5;
  p_output1[310]=6;
  p_output1[311]=7;
  p_output1[312]=8;
  p_output1[313]=9;
  p_output1[314]=10;
  p_output1[315]=11;
  p_output1[316]=12;
  p_output1[317]=13;
  p_output1[318]=14;
  p_output1[319]=23;
  p_output1[320]=24;
  p_output1[321]=25;
  p_output1[322]=26;
  p_output1[323]=27;
  p_output1[324]=28;
  p_output1[325]=29;
  p_output1[326]=30;
  p_output1[327]=31;
  p_output1[328]=32;
  p_output1[329]=33;
  p_output1[330]=34;
  p_output1[331]=35;
  p_output1[332]=36;
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
  p_output1[458]=4;
  p_output1[459]=5;
  p_output1[460]=6;
  p_output1[461]=7;
  p_output1[462]=8;
  p_output1[463]=9;
  p_output1[464]=10;
  p_output1[465]=11;
  p_output1[466]=12;
  p_output1[467]=13;
  p_output1[468]=14;
  p_output1[469]=23;
  p_output1[470]=24;
  p_output1[471]=25;
  p_output1[472]=26;
  p_output1[473]=27;
  p_output1[474]=28;
  p_output1[475]=29;
  p_output1[476]=30;
  p_output1[477]=31;
  p_output1[478]=32;
  p_output1[479]=33;
  p_output1[480]=34;
  p_output1[481]=35;
  p_output1[482]=36;
  p_output1[483]=4;
  p_output1[484]=5;
  p_output1[485]=6;
  p_output1[486]=7;
  p_output1[487]=8;
  p_output1[488]=9;
  p_output1[489]=10;
  p_output1[490]=11;
  p_output1[491]=12;
  p_output1[492]=13;
  p_output1[493]=14;
  p_output1[494]=23;
  p_output1[495]=24;
  p_output1[496]=25;
  p_output1[497]=26;
  p_output1[498]=27;
  p_output1[499]=28;
  p_output1[500]=29;
  p_output1[501]=30;
  p_output1[502]=4;
  p_output1[503]=5;
  p_output1[504]=6;
  p_output1[505]=7;
  p_output1[506]=8;
  p_output1[507]=9;
  p_output1[508]=10;
  p_output1[509]=11;
  p_output1[510]=12;
  p_output1[511]=13;
  p_output1[512]=14;
  p_output1[513]=23;
  p_output1[514]=24;
  p_output1[515]=25;
  p_output1[516]=26;
  p_output1[517]=27;
  p_output1[518]=28;
  p_output1[519]=29;
  p_output1[520]=30;
  p_output1[521]=4;
  p_output1[522]=5;
  p_output1[523]=6;
  p_output1[524]=7;
  p_output1[525]=8;
  p_output1[526]=9;
  p_output1[527]=10;
  p_output1[528]=11;
  p_output1[529]=12;
  p_output1[530]=13;
  p_output1[531]=14;
  p_output1[532]=23;
  p_output1[533]=24;
  p_output1[534]=25;
  p_output1[535]=26;
  p_output1[536]=27;
  p_output1[537]=28;
  p_output1[538]=29;
  p_output1[539]=30;
  p_output1[540]=4;
  p_output1[541]=5;
  p_output1[542]=6;
  p_output1[543]=7;
  p_output1[544]=8;
  p_output1[545]=9;
  p_output1[546]=10;
  p_output1[547]=11;
  p_output1[548]=12;
  p_output1[549]=13;
  p_output1[550]=14;
  p_output1[551]=23;
  p_output1[552]=24;
  p_output1[553]=25;
  p_output1[554]=26;
  p_output1[555]=27;
  p_output1[556]=28;
  p_output1[557]=29;
  p_output1[558]=30;
  p_output1[559]=4;
  p_output1[560]=5;
  p_output1[561]=6;
  p_output1[562]=7;
  p_output1[563]=8;
  p_output1[564]=9;
  p_output1[565]=10;
  p_output1[566]=11;
  p_output1[567]=12;
  p_output1[568]=13;
  p_output1[569]=14;
  p_output1[570]=23;
  p_output1[571]=24;
  p_output1[572]=25;
  p_output1[573]=26;
  p_output1[574]=27;
  p_output1[575]=28;
  p_output1[576]=29;
  p_output1[577]=30;
  p_output1[578]=4;
  p_output1[579]=5;
  p_output1[580]=6;
  p_output1[581]=7;
  p_output1[582]=8;
  p_output1[583]=9;
  p_output1[584]=10;
  p_output1[585]=11;
  p_output1[586]=12;
  p_output1[587]=13;
  p_output1[588]=14;
  p_output1[589]=23;
  p_output1[590]=24;
  p_output1[591]=25;
  p_output1[592]=26;
  p_output1[593]=27;
  p_output1[594]=28;
  p_output1[595]=29;
  p_output1[596]=30;
  p_output1[597]=4;
  p_output1[598]=5;
  p_output1[599]=6;
  p_output1[600]=7;
  p_output1[601]=8;
  p_output1[602]=9;
  p_output1[603]=10;
  p_output1[604]=11;
  p_output1[605]=12;
  p_output1[606]=13;
  p_output1[607]=14;
  p_output1[608]=23;
  p_output1[609]=24;
  p_output1[610]=25;
  p_output1[611]=26;
  p_output1[612]=27;
  p_output1[613]=28;
  p_output1[614]=29;
  p_output1[615]=30;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 308, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec8_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec8_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

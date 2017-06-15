/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:29:23 GMT-04:00
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
  p_output1[150]=15;
  p_output1[151]=15;
  p_output1[152]=15;
  p_output1[153]=15;
  p_output1[154]=15;
  p_output1[155]=15;
  p_output1[156]=15;
  p_output1[157]=15;
  p_output1[158]=15;
  p_output1[159]=15;
  p_output1[160]=15;
  p_output1[161]=15;
  p_output1[162]=15;
  p_output1[163]=15;
  p_output1[164]=15;
  p_output1[165]=15;
  p_output1[166]=15;
  p_output1[167]=15;
  p_output1[168]=15;
  p_output1[169]=15;
  p_output1[170]=15;
  p_output1[171]=15;
  p_output1[172]=15;
  p_output1[173]=15;
  p_output1[174]=15;
  p_output1[175]=16;
  p_output1[176]=16;
  p_output1[177]=16;
  p_output1[178]=16;
  p_output1[179]=16;
  p_output1[180]=16;
  p_output1[181]=16;
  p_output1[182]=16;
  p_output1[183]=16;
  p_output1[184]=16;
  p_output1[185]=16;
  p_output1[186]=16;
  p_output1[187]=16;
  p_output1[188]=16;
  p_output1[189]=16;
  p_output1[190]=16;
  p_output1[191]=16;
  p_output1[192]=16;
  p_output1[193]=16;
  p_output1[194]=17;
  p_output1[195]=17;
  p_output1[196]=17;
  p_output1[197]=17;
  p_output1[198]=17;
  p_output1[199]=17;
  p_output1[200]=17;
  p_output1[201]=17;
  p_output1[202]=17;
  p_output1[203]=17;
  p_output1[204]=17;
  p_output1[205]=17;
  p_output1[206]=17;
  p_output1[207]=17;
  p_output1[208]=17;
  p_output1[209]=17;
  p_output1[210]=17;
  p_output1[211]=17;
  p_output1[212]=17;
  p_output1[213]=18;
  p_output1[214]=18;
  p_output1[215]=18;
  p_output1[216]=18;
  p_output1[217]=18;
  p_output1[218]=18;
  p_output1[219]=18;
  p_output1[220]=18;
  p_output1[221]=18;
  p_output1[222]=18;
  p_output1[223]=18;
  p_output1[224]=18;
  p_output1[225]=18;
  p_output1[226]=18;
  p_output1[227]=18;
  p_output1[228]=18;
  p_output1[229]=18;
  p_output1[230]=18;
  p_output1[231]=18;
  p_output1[232]=19;
  p_output1[233]=19;
  p_output1[234]=19;
  p_output1[235]=19;
  p_output1[236]=19;
  p_output1[237]=19;
  p_output1[238]=19;
  p_output1[239]=19;
  p_output1[240]=19;
  p_output1[241]=19;
  p_output1[242]=19;
  p_output1[243]=19;
  p_output1[244]=19;
  p_output1[245]=19;
  p_output1[246]=19;
  p_output1[247]=19;
  p_output1[248]=19;
  p_output1[249]=19;
  p_output1[250]=19;
  p_output1[251]=20;
  p_output1[252]=20;
  p_output1[253]=20;
  p_output1[254]=20;
  p_output1[255]=20;
  p_output1[256]=20;
  p_output1[257]=20;
  p_output1[258]=20;
  p_output1[259]=20;
  p_output1[260]=20;
  p_output1[261]=20;
  p_output1[262]=20;
  p_output1[263]=20;
  p_output1[264]=20;
  p_output1[265]=20;
  p_output1[266]=20;
  p_output1[267]=20;
  p_output1[268]=20;
  p_output1[269]=20;
  p_output1[270]=21;
  p_output1[271]=21;
  p_output1[272]=21;
  p_output1[273]=21;
  p_output1[274]=21;
  p_output1[275]=21;
  p_output1[276]=21;
  p_output1[277]=21;
  p_output1[278]=21;
  p_output1[279]=21;
  p_output1[280]=21;
  p_output1[281]=21;
  p_output1[282]=21;
  p_output1[283]=21;
  p_output1[284]=21;
  p_output1[285]=21;
  p_output1[286]=21;
  p_output1[287]=21;
  p_output1[288]=21;
  p_output1[289]=22;
  p_output1[290]=22;
  p_output1[291]=22;
  p_output1[292]=22;
  p_output1[293]=22;
  p_output1[294]=22;
  p_output1[295]=22;
  p_output1[296]=22;
  p_output1[297]=22;
  p_output1[298]=22;
  p_output1[299]=22;
  p_output1[300]=22;
  p_output1[301]=22;
  p_output1[302]=22;
  p_output1[303]=22;
  p_output1[304]=22;
  p_output1[305]=22;
  p_output1[306]=22;
  p_output1[307]=22;
  p_output1[308]=4;
  p_output1[309]=5;
  p_output1[310]=6;
  p_output1[311]=15;
  p_output1[312]=16;
  p_output1[313]=17;
  p_output1[314]=18;
  p_output1[315]=19;
  p_output1[316]=20;
  p_output1[317]=21;
  p_output1[318]=22;
  p_output1[319]=23;
  p_output1[320]=24;
  p_output1[321]=25;
  p_output1[322]=26;
  p_output1[323]=27;
  p_output1[324]=28;
  p_output1[325]=37;
  p_output1[326]=38;
  p_output1[327]=39;
  p_output1[328]=40;
  p_output1[329]=41;
  p_output1[330]=42;
  p_output1[331]=43;
  p_output1[332]=44;
  p_output1[333]=4;
  p_output1[334]=5;
  p_output1[335]=6;
  p_output1[336]=15;
  p_output1[337]=16;
  p_output1[338]=17;
  p_output1[339]=18;
  p_output1[340]=19;
  p_output1[341]=20;
  p_output1[342]=21;
  p_output1[343]=22;
  p_output1[344]=23;
  p_output1[345]=24;
  p_output1[346]=25;
  p_output1[347]=26;
  p_output1[348]=27;
  p_output1[349]=28;
  p_output1[350]=37;
  p_output1[351]=38;
  p_output1[352]=39;
  p_output1[353]=40;
  p_output1[354]=41;
  p_output1[355]=42;
  p_output1[356]=43;
  p_output1[357]=44;
  p_output1[358]=4;
  p_output1[359]=5;
  p_output1[360]=6;
  p_output1[361]=15;
  p_output1[362]=16;
  p_output1[363]=17;
  p_output1[364]=18;
  p_output1[365]=19;
  p_output1[366]=20;
  p_output1[367]=21;
  p_output1[368]=22;
  p_output1[369]=23;
  p_output1[370]=24;
  p_output1[371]=25;
  p_output1[372]=26;
  p_output1[373]=27;
  p_output1[374]=28;
  p_output1[375]=37;
  p_output1[376]=38;
  p_output1[377]=39;
  p_output1[378]=40;
  p_output1[379]=41;
  p_output1[380]=42;
  p_output1[381]=43;
  p_output1[382]=44;
  p_output1[383]=4;
  p_output1[384]=5;
  p_output1[385]=6;
  p_output1[386]=15;
  p_output1[387]=16;
  p_output1[388]=17;
  p_output1[389]=18;
  p_output1[390]=19;
  p_output1[391]=20;
  p_output1[392]=21;
  p_output1[393]=22;
  p_output1[394]=23;
  p_output1[395]=24;
  p_output1[396]=25;
  p_output1[397]=26;
  p_output1[398]=27;
  p_output1[399]=28;
  p_output1[400]=37;
  p_output1[401]=38;
  p_output1[402]=39;
  p_output1[403]=40;
  p_output1[404]=41;
  p_output1[405]=42;
  p_output1[406]=43;
  p_output1[407]=44;
  p_output1[408]=4;
  p_output1[409]=5;
  p_output1[410]=6;
  p_output1[411]=15;
  p_output1[412]=16;
  p_output1[413]=17;
  p_output1[414]=18;
  p_output1[415]=19;
  p_output1[416]=20;
  p_output1[417]=21;
  p_output1[418]=22;
  p_output1[419]=23;
  p_output1[420]=24;
  p_output1[421]=25;
  p_output1[422]=26;
  p_output1[423]=27;
  p_output1[424]=28;
  p_output1[425]=37;
  p_output1[426]=38;
  p_output1[427]=39;
  p_output1[428]=40;
  p_output1[429]=41;
  p_output1[430]=42;
  p_output1[431]=43;
  p_output1[432]=44;
  p_output1[433]=4;
  p_output1[434]=5;
  p_output1[435]=6;
  p_output1[436]=15;
  p_output1[437]=16;
  p_output1[438]=17;
  p_output1[439]=18;
  p_output1[440]=19;
  p_output1[441]=20;
  p_output1[442]=21;
  p_output1[443]=22;
  p_output1[444]=23;
  p_output1[445]=24;
  p_output1[446]=25;
  p_output1[447]=26;
  p_output1[448]=27;
  p_output1[449]=28;
  p_output1[450]=37;
  p_output1[451]=38;
  p_output1[452]=39;
  p_output1[453]=40;
  p_output1[454]=41;
  p_output1[455]=42;
  p_output1[456]=43;
  p_output1[457]=44;
  p_output1[458]=4;
  p_output1[459]=5;
  p_output1[460]=6;
  p_output1[461]=15;
  p_output1[462]=16;
  p_output1[463]=17;
  p_output1[464]=18;
  p_output1[465]=19;
  p_output1[466]=20;
  p_output1[467]=21;
  p_output1[468]=22;
  p_output1[469]=23;
  p_output1[470]=24;
  p_output1[471]=25;
  p_output1[472]=26;
  p_output1[473]=27;
  p_output1[474]=28;
  p_output1[475]=37;
  p_output1[476]=38;
  p_output1[477]=39;
  p_output1[478]=40;
  p_output1[479]=41;
  p_output1[480]=42;
  p_output1[481]=43;
  p_output1[482]=44;
  p_output1[483]=4;
  p_output1[484]=5;
  p_output1[485]=6;
  p_output1[486]=15;
  p_output1[487]=16;
  p_output1[488]=17;
  p_output1[489]=18;
  p_output1[490]=19;
  p_output1[491]=20;
  p_output1[492]=21;
  p_output1[493]=22;
  p_output1[494]=23;
  p_output1[495]=24;
  p_output1[496]=25;
  p_output1[497]=26;
  p_output1[498]=27;
  p_output1[499]=28;
  p_output1[500]=37;
  p_output1[501]=38;
  p_output1[502]=4;
  p_output1[503]=5;
  p_output1[504]=6;
  p_output1[505]=15;
  p_output1[506]=16;
  p_output1[507]=17;
  p_output1[508]=18;
  p_output1[509]=19;
  p_output1[510]=20;
  p_output1[511]=21;
  p_output1[512]=22;
  p_output1[513]=23;
  p_output1[514]=24;
  p_output1[515]=25;
  p_output1[516]=26;
  p_output1[517]=27;
  p_output1[518]=28;
  p_output1[519]=37;
  p_output1[520]=38;
  p_output1[521]=4;
  p_output1[522]=5;
  p_output1[523]=6;
  p_output1[524]=15;
  p_output1[525]=16;
  p_output1[526]=17;
  p_output1[527]=18;
  p_output1[528]=19;
  p_output1[529]=20;
  p_output1[530]=21;
  p_output1[531]=22;
  p_output1[532]=23;
  p_output1[533]=24;
  p_output1[534]=25;
  p_output1[535]=26;
  p_output1[536]=27;
  p_output1[537]=28;
  p_output1[538]=37;
  p_output1[539]=38;
  p_output1[540]=4;
  p_output1[541]=5;
  p_output1[542]=6;
  p_output1[543]=15;
  p_output1[544]=16;
  p_output1[545]=17;
  p_output1[546]=18;
  p_output1[547]=19;
  p_output1[548]=20;
  p_output1[549]=21;
  p_output1[550]=22;
  p_output1[551]=23;
  p_output1[552]=24;
  p_output1[553]=25;
  p_output1[554]=26;
  p_output1[555]=27;
  p_output1[556]=28;
  p_output1[557]=37;
  p_output1[558]=38;
  p_output1[559]=4;
  p_output1[560]=5;
  p_output1[561]=6;
  p_output1[562]=15;
  p_output1[563]=16;
  p_output1[564]=17;
  p_output1[565]=18;
  p_output1[566]=19;
  p_output1[567]=20;
  p_output1[568]=21;
  p_output1[569]=22;
  p_output1[570]=23;
  p_output1[571]=24;
  p_output1[572]=25;
  p_output1[573]=26;
  p_output1[574]=27;
  p_output1[575]=28;
  p_output1[576]=37;
  p_output1[577]=38;
  p_output1[578]=4;
  p_output1[579]=5;
  p_output1[580]=6;
  p_output1[581]=15;
  p_output1[582]=16;
  p_output1[583]=17;
  p_output1[584]=18;
  p_output1[585]=19;
  p_output1[586]=20;
  p_output1[587]=21;
  p_output1[588]=22;
  p_output1[589]=23;
  p_output1[590]=24;
  p_output1[591]=25;
  p_output1[592]=26;
  p_output1[593]=27;
  p_output1[594]=28;
  p_output1[595]=37;
  p_output1[596]=38;
  p_output1[597]=4;
  p_output1[598]=5;
  p_output1[599]=6;
  p_output1[600]=15;
  p_output1[601]=16;
  p_output1[602]=17;
  p_output1[603]=18;
  p_output1[604]=19;
  p_output1[605]=20;
  p_output1[606]=21;
  p_output1[607]=22;
  p_output1[608]=23;
  p_output1[609]=24;
  p_output1[610]=25;
  p_output1[611]=26;
  p_output1[612]=27;
  p_output1[613]=28;
  p_output1[614]=37;
  p_output1[615]=38;
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

#include "Js_Ce2_vec16_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec16_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

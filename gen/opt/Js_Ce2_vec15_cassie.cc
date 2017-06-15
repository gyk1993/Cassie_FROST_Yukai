/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:26:00 GMT-04:00
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
  p_output1[168]=16;
  p_output1[169]=16;
  p_output1[170]=16;
  p_output1[171]=16;
  p_output1[172]=16;
  p_output1[173]=16;
  p_output1[174]=16;
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
  p_output1[186]=17;
  p_output1[187]=17;
  p_output1[188]=17;
  p_output1[189]=17;
  p_output1[190]=17;
  p_output1[191]=17;
  p_output1[192]=17;
  p_output1[193]=17;
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
  p_output1[204]=18;
  p_output1[205]=18;
  p_output1[206]=18;
  p_output1[207]=18;
  p_output1[208]=18;
  p_output1[209]=18;
  p_output1[210]=18;
  p_output1[211]=18;
  p_output1[212]=18;
  p_output1[213]=18;
  p_output1[214]=18;
  p_output1[215]=18;
  p_output1[216]=18;
  p_output1[217]=18;
  p_output1[218]=18;
  p_output1[219]=18;
  p_output1[220]=18;
  p_output1[221]=18;
  p_output1[222]=19;
  p_output1[223]=19;
  p_output1[224]=19;
  p_output1[225]=19;
  p_output1[226]=19;
  p_output1[227]=19;
  p_output1[228]=19;
  p_output1[229]=19;
  p_output1[230]=19;
  p_output1[231]=19;
  p_output1[232]=19;
  p_output1[233]=19;
  p_output1[234]=19;
  p_output1[235]=19;
  p_output1[236]=19;
  p_output1[237]=19;
  p_output1[238]=19;
  p_output1[239]=19;
  p_output1[240]=20;
  p_output1[241]=20;
  p_output1[242]=20;
  p_output1[243]=20;
  p_output1[244]=20;
  p_output1[245]=20;
  p_output1[246]=20;
  p_output1[247]=20;
  p_output1[248]=20;
  p_output1[249]=20;
  p_output1[250]=20;
  p_output1[251]=20;
  p_output1[252]=20;
  p_output1[253]=20;
  p_output1[254]=20;
  p_output1[255]=20;
  p_output1[256]=20;
  p_output1[257]=20;
  p_output1[258]=21;
  p_output1[259]=21;
  p_output1[260]=21;
  p_output1[261]=21;
  p_output1[262]=21;
  p_output1[263]=21;
  p_output1[264]=21;
  p_output1[265]=21;
  p_output1[266]=21;
  p_output1[267]=21;
  p_output1[268]=21;
  p_output1[269]=21;
  p_output1[270]=21;
  p_output1[271]=21;
  p_output1[272]=21;
  p_output1[273]=21;
  p_output1[274]=21;
  p_output1[275]=21;
  p_output1[276]=22;
  p_output1[277]=22;
  p_output1[278]=22;
  p_output1[279]=22;
  p_output1[280]=22;
  p_output1[281]=22;
  p_output1[282]=22;
  p_output1[283]=22;
  p_output1[284]=22;
  p_output1[285]=22;
  p_output1[286]=22;
  p_output1[287]=22;
  p_output1[288]=22;
  p_output1[289]=22;
  p_output1[290]=22;
  p_output1[291]=22;
  p_output1[292]=22;
  p_output1[293]=22;
  p_output1[294]=4;
  p_output1[295]=5;
  p_output1[296]=6;
  p_output1[297]=15;
  p_output1[298]=16;
  p_output1[299]=17;
  p_output1[300]=18;
  p_output1[301]=19;
  p_output1[302]=20;
  p_output1[303]=21;
  p_output1[304]=22;
  p_output1[305]=23;
  p_output1[306]=24;
  p_output1[307]=25;
  p_output1[308]=26;
  p_output1[309]=27;
  p_output1[310]=28;
  p_output1[311]=37;
  p_output1[312]=38;
  p_output1[313]=39;
  p_output1[314]=40;
  p_output1[315]=41;
  p_output1[316]=42;
  p_output1[317]=43;
  p_output1[318]=44;
  p_output1[319]=4;
  p_output1[320]=5;
  p_output1[321]=6;
  p_output1[322]=15;
  p_output1[323]=16;
  p_output1[324]=17;
  p_output1[325]=18;
  p_output1[326]=19;
  p_output1[327]=20;
  p_output1[328]=21;
  p_output1[329]=22;
  p_output1[330]=23;
  p_output1[331]=24;
  p_output1[332]=25;
  p_output1[333]=26;
  p_output1[334]=27;
  p_output1[335]=28;
  p_output1[336]=37;
  p_output1[337]=38;
  p_output1[338]=39;
  p_output1[339]=40;
  p_output1[340]=41;
  p_output1[341]=42;
  p_output1[342]=43;
  p_output1[343]=44;
  p_output1[344]=4;
  p_output1[345]=5;
  p_output1[346]=6;
  p_output1[347]=15;
  p_output1[348]=16;
  p_output1[349]=17;
  p_output1[350]=18;
  p_output1[351]=19;
  p_output1[352]=20;
  p_output1[353]=21;
  p_output1[354]=22;
  p_output1[355]=23;
  p_output1[356]=24;
  p_output1[357]=25;
  p_output1[358]=26;
  p_output1[359]=27;
  p_output1[360]=28;
  p_output1[361]=37;
  p_output1[362]=38;
  p_output1[363]=39;
  p_output1[364]=40;
  p_output1[365]=41;
  p_output1[366]=42;
  p_output1[367]=43;
  p_output1[368]=44;
  p_output1[369]=4;
  p_output1[370]=5;
  p_output1[371]=6;
  p_output1[372]=15;
  p_output1[373]=16;
  p_output1[374]=17;
  p_output1[375]=18;
  p_output1[376]=19;
  p_output1[377]=20;
  p_output1[378]=21;
  p_output1[379]=22;
  p_output1[380]=23;
  p_output1[381]=24;
  p_output1[382]=25;
  p_output1[383]=26;
  p_output1[384]=27;
  p_output1[385]=28;
  p_output1[386]=37;
  p_output1[387]=38;
  p_output1[388]=39;
  p_output1[389]=40;
  p_output1[390]=41;
  p_output1[391]=42;
  p_output1[392]=43;
  p_output1[393]=44;
  p_output1[394]=4;
  p_output1[395]=5;
  p_output1[396]=6;
  p_output1[397]=15;
  p_output1[398]=16;
  p_output1[399]=17;
  p_output1[400]=18;
  p_output1[401]=19;
  p_output1[402]=20;
  p_output1[403]=21;
  p_output1[404]=22;
  p_output1[405]=23;
  p_output1[406]=24;
  p_output1[407]=25;
  p_output1[408]=26;
  p_output1[409]=27;
  p_output1[410]=28;
  p_output1[411]=37;
  p_output1[412]=38;
  p_output1[413]=39;
  p_output1[414]=40;
  p_output1[415]=41;
  p_output1[416]=42;
  p_output1[417]=43;
  p_output1[418]=44;
  p_output1[419]=4;
  p_output1[420]=5;
  p_output1[421]=6;
  p_output1[422]=15;
  p_output1[423]=16;
  p_output1[424]=17;
  p_output1[425]=18;
  p_output1[426]=19;
  p_output1[427]=20;
  p_output1[428]=21;
  p_output1[429]=22;
  p_output1[430]=23;
  p_output1[431]=24;
  p_output1[432]=25;
  p_output1[433]=26;
  p_output1[434]=27;
  p_output1[435]=28;
  p_output1[436]=37;
  p_output1[437]=38;
  p_output1[438]=39;
  p_output1[439]=40;
  p_output1[440]=41;
  p_output1[441]=42;
  p_output1[442]=43;
  p_output1[443]=44;
  p_output1[444]=4;
  p_output1[445]=5;
  p_output1[446]=6;
  p_output1[447]=15;
  p_output1[448]=16;
  p_output1[449]=17;
  p_output1[450]=18;
  p_output1[451]=19;
  p_output1[452]=20;
  p_output1[453]=21;
  p_output1[454]=22;
  p_output1[455]=23;
  p_output1[456]=24;
  p_output1[457]=25;
  p_output1[458]=26;
  p_output1[459]=27;
  p_output1[460]=28;
  p_output1[461]=37;
  p_output1[462]=4;
  p_output1[463]=5;
  p_output1[464]=6;
  p_output1[465]=15;
  p_output1[466]=16;
  p_output1[467]=17;
  p_output1[468]=18;
  p_output1[469]=19;
  p_output1[470]=20;
  p_output1[471]=21;
  p_output1[472]=22;
  p_output1[473]=23;
  p_output1[474]=24;
  p_output1[475]=25;
  p_output1[476]=26;
  p_output1[477]=27;
  p_output1[478]=28;
  p_output1[479]=37;
  p_output1[480]=4;
  p_output1[481]=5;
  p_output1[482]=6;
  p_output1[483]=15;
  p_output1[484]=16;
  p_output1[485]=17;
  p_output1[486]=18;
  p_output1[487]=19;
  p_output1[488]=20;
  p_output1[489]=21;
  p_output1[490]=22;
  p_output1[491]=23;
  p_output1[492]=24;
  p_output1[493]=25;
  p_output1[494]=26;
  p_output1[495]=27;
  p_output1[496]=28;
  p_output1[497]=37;
  p_output1[498]=4;
  p_output1[499]=5;
  p_output1[500]=6;
  p_output1[501]=15;
  p_output1[502]=16;
  p_output1[503]=17;
  p_output1[504]=18;
  p_output1[505]=19;
  p_output1[506]=20;
  p_output1[507]=21;
  p_output1[508]=22;
  p_output1[509]=23;
  p_output1[510]=24;
  p_output1[511]=25;
  p_output1[512]=26;
  p_output1[513]=27;
  p_output1[514]=28;
  p_output1[515]=37;
  p_output1[516]=4;
  p_output1[517]=5;
  p_output1[518]=6;
  p_output1[519]=15;
  p_output1[520]=16;
  p_output1[521]=17;
  p_output1[522]=18;
  p_output1[523]=19;
  p_output1[524]=20;
  p_output1[525]=21;
  p_output1[526]=22;
  p_output1[527]=23;
  p_output1[528]=24;
  p_output1[529]=25;
  p_output1[530]=26;
  p_output1[531]=27;
  p_output1[532]=28;
  p_output1[533]=37;
  p_output1[534]=4;
  p_output1[535]=5;
  p_output1[536]=6;
  p_output1[537]=15;
  p_output1[538]=16;
  p_output1[539]=17;
  p_output1[540]=18;
  p_output1[541]=19;
  p_output1[542]=20;
  p_output1[543]=21;
  p_output1[544]=22;
  p_output1[545]=23;
  p_output1[546]=24;
  p_output1[547]=25;
  p_output1[548]=26;
  p_output1[549]=27;
  p_output1[550]=28;
  p_output1[551]=37;
  p_output1[552]=4;
  p_output1[553]=5;
  p_output1[554]=6;
  p_output1[555]=15;
  p_output1[556]=16;
  p_output1[557]=17;
  p_output1[558]=18;
  p_output1[559]=19;
  p_output1[560]=20;
  p_output1[561]=21;
  p_output1[562]=22;
  p_output1[563]=23;
  p_output1[564]=24;
  p_output1[565]=25;
  p_output1[566]=26;
  p_output1[567]=27;
  p_output1[568]=28;
  p_output1[569]=37;
  p_output1[570]=4;
  p_output1[571]=5;
  p_output1[572]=6;
  p_output1[573]=15;
  p_output1[574]=16;
  p_output1[575]=17;
  p_output1[576]=18;
  p_output1[577]=19;
  p_output1[578]=20;
  p_output1[579]=21;
  p_output1[580]=22;
  p_output1[581]=23;
  p_output1[582]=24;
  p_output1[583]=25;
  p_output1[584]=26;
  p_output1[585]=27;
  p_output1[586]=28;
  p_output1[587]=37;
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

#include "Js_Ce2_vec15_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec15_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

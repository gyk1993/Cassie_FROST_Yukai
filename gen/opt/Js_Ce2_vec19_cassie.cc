/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:39:01 GMT-04:00
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
  p_output1[194]=16;
  p_output1[195]=16;
  p_output1[196]=16;
  p_output1[197]=16;
  p_output1[198]=16;
  p_output1[199]=16;
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
  p_output1[213]=17;
  p_output1[214]=17;
  p_output1[215]=17;
  p_output1[216]=17;
  p_output1[217]=17;
  p_output1[218]=17;
  p_output1[219]=17;
  p_output1[220]=17;
  p_output1[221]=17;
  p_output1[222]=17;
  p_output1[223]=17;
  p_output1[224]=17;
  p_output1[225]=18;
  p_output1[226]=18;
  p_output1[227]=18;
  p_output1[228]=18;
  p_output1[229]=18;
  p_output1[230]=18;
  p_output1[231]=18;
  p_output1[232]=18;
  p_output1[233]=18;
  p_output1[234]=18;
  p_output1[235]=18;
  p_output1[236]=18;
  p_output1[237]=18;
  p_output1[238]=18;
  p_output1[239]=18;
  p_output1[240]=18;
  p_output1[241]=18;
  p_output1[242]=18;
  p_output1[243]=18;
  p_output1[244]=18;
  p_output1[245]=18;
  p_output1[246]=18;
  p_output1[247]=18;
  p_output1[248]=18;
  p_output1[249]=18;
  p_output1[250]=19;
  p_output1[251]=19;
  p_output1[252]=19;
  p_output1[253]=19;
  p_output1[254]=19;
  p_output1[255]=19;
  p_output1[256]=19;
  p_output1[257]=19;
  p_output1[258]=19;
  p_output1[259]=19;
  p_output1[260]=19;
  p_output1[261]=19;
  p_output1[262]=19;
  p_output1[263]=19;
  p_output1[264]=19;
  p_output1[265]=19;
  p_output1[266]=19;
  p_output1[267]=19;
  p_output1[268]=19;
  p_output1[269]=19;
  p_output1[270]=19;
  p_output1[271]=19;
  p_output1[272]=20;
  p_output1[273]=20;
  p_output1[274]=20;
  p_output1[275]=20;
  p_output1[276]=20;
  p_output1[277]=20;
  p_output1[278]=20;
  p_output1[279]=20;
  p_output1[280]=20;
  p_output1[281]=20;
  p_output1[282]=20;
  p_output1[283]=20;
  p_output1[284]=20;
  p_output1[285]=20;
  p_output1[286]=20;
  p_output1[287]=20;
  p_output1[288]=20;
  p_output1[289]=20;
  p_output1[290]=20;
  p_output1[291]=20;
  p_output1[292]=20;
  p_output1[293]=20;
  p_output1[294]=21;
  p_output1[295]=21;
  p_output1[296]=21;
  p_output1[297]=21;
  p_output1[298]=21;
  p_output1[299]=21;
  p_output1[300]=21;
  p_output1[301]=21;
  p_output1[302]=21;
  p_output1[303]=21;
  p_output1[304]=21;
  p_output1[305]=21;
  p_output1[306]=21;
  p_output1[307]=21;
  p_output1[308]=21;
  p_output1[309]=21;
  p_output1[310]=21;
  p_output1[311]=21;
  p_output1[312]=21;
  p_output1[313]=21;
  p_output1[314]=21;
  p_output1[315]=21;
  p_output1[316]=22;
  p_output1[317]=22;
  p_output1[318]=22;
  p_output1[319]=22;
  p_output1[320]=22;
  p_output1[321]=22;
  p_output1[322]=22;
  p_output1[323]=22;
  p_output1[324]=22;
  p_output1[325]=22;
  p_output1[326]=22;
  p_output1[327]=22;
  p_output1[328]=22;
  p_output1[329]=22;
  p_output1[330]=22;
  p_output1[331]=22;
  p_output1[332]=22;
  p_output1[333]=22;
  p_output1[334]=22;
  p_output1[335]=22;
  p_output1[336]=22;
  p_output1[337]=22;
  p_output1[338]=4;
  p_output1[339]=5;
  p_output1[340]=6;
  p_output1[341]=15;
  p_output1[342]=16;
  p_output1[343]=17;
  p_output1[344]=18;
  p_output1[345]=19;
  p_output1[346]=20;
  p_output1[347]=21;
  p_output1[348]=22;
  p_output1[349]=23;
  p_output1[350]=24;
  p_output1[351]=25;
  p_output1[352]=26;
  p_output1[353]=27;
  p_output1[354]=28;
  p_output1[355]=37;
  p_output1[356]=38;
  p_output1[357]=39;
  p_output1[358]=40;
  p_output1[359]=41;
  p_output1[360]=42;
  p_output1[361]=43;
  p_output1[362]=44;
  p_output1[363]=4;
  p_output1[364]=5;
  p_output1[365]=6;
  p_output1[366]=15;
  p_output1[367]=16;
  p_output1[368]=17;
  p_output1[369]=18;
  p_output1[370]=19;
  p_output1[371]=20;
  p_output1[372]=21;
  p_output1[373]=22;
  p_output1[374]=23;
  p_output1[375]=24;
  p_output1[376]=25;
  p_output1[377]=26;
  p_output1[378]=27;
  p_output1[379]=28;
  p_output1[380]=37;
  p_output1[381]=38;
  p_output1[382]=39;
  p_output1[383]=40;
  p_output1[384]=41;
  p_output1[385]=42;
  p_output1[386]=43;
  p_output1[387]=44;
  p_output1[388]=4;
  p_output1[389]=5;
  p_output1[390]=6;
  p_output1[391]=15;
  p_output1[392]=16;
  p_output1[393]=17;
  p_output1[394]=18;
  p_output1[395]=19;
  p_output1[396]=20;
  p_output1[397]=21;
  p_output1[398]=22;
  p_output1[399]=23;
  p_output1[400]=24;
  p_output1[401]=25;
  p_output1[402]=26;
  p_output1[403]=27;
  p_output1[404]=28;
  p_output1[405]=37;
  p_output1[406]=38;
  p_output1[407]=39;
  p_output1[408]=40;
  p_output1[409]=41;
  p_output1[410]=42;
  p_output1[411]=43;
  p_output1[412]=44;
  p_output1[413]=4;
  p_output1[414]=5;
  p_output1[415]=6;
  p_output1[416]=15;
  p_output1[417]=16;
  p_output1[418]=17;
  p_output1[419]=18;
  p_output1[420]=19;
  p_output1[421]=20;
  p_output1[422]=21;
  p_output1[423]=22;
  p_output1[424]=23;
  p_output1[425]=24;
  p_output1[426]=25;
  p_output1[427]=26;
  p_output1[428]=27;
  p_output1[429]=28;
  p_output1[430]=37;
  p_output1[431]=38;
  p_output1[432]=39;
  p_output1[433]=40;
  p_output1[434]=41;
  p_output1[435]=42;
  p_output1[436]=43;
  p_output1[437]=44;
  p_output1[438]=4;
  p_output1[439]=5;
  p_output1[440]=6;
  p_output1[441]=15;
  p_output1[442]=16;
  p_output1[443]=17;
  p_output1[444]=18;
  p_output1[445]=19;
  p_output1[446]=20;
  p_output1[447]=21;
  p_output1[448]=22;
  p_output1[449]=23;
  p_output1[450]=24;
  p_output1[451]=25;
  p_output1[452]=26;
  p_output1[453]=27;
  p_output1[454]=28;
  p_output1[455]=37;
  p_output1[456]=38;
  p_output1[457]=39;
  p_output1[458]=40;
  p_output1[459]=41;
  p_output1[460]=42;
  p_output1[461]=43;
  p_output1[462]=44;
  p_output1[463]=4;
  p_output1[464]=5;
  p_output1[465]=6;
  p_output1[466]=15;
  p_output1[467]=16;
  p_output1[468]=17;
  p_output1[469]=18;
  p_output1[470]=19;
  p_output1[471]=20;
  p_output1[472]=21;
  p_output1[473]=22;
  p_output1[474]=23;
  p_output1[475]=24;
  p_output1[476]=25;
  p_output1[477]=26;
  p_output1[478]=27;
  p_output1[479]=28;
  p_output1[480]=37;
  p_output1[481]=38;
  p_output1[482]=39;
  p_output1[483]=40;
  p_output1[484]=41;
  p_output1[485]=42;
  p_output1[486]=43;
  p_output1[487]=44;
  p_output1[488]=4;
  p_output1[489]=5;
  p_output1[490]=6;
  p_output1[491]=15;
  p_output1[492]=16;
  p_output1[493]=17;
  p_output1[494]=18;
  p_output1[495]=19;
  p_output1[496]=20;
  p_output1[497]=21;
  p_output1[498]=22;
  p_output1[499]=23;
  p_output1[500]=24;
  p_output1[501]=25;
  p_output1[502]=26;
  p_output1[503]=27;
  p_output1[504]=28;
  p_output1[505]=37;
  p_output1[506]=38;
  p_output1[507]=39;
  p_output1[508]=40;
  p_output1[509]=41;
  p_output1[510]=42;
  p_output1[511]=43;
  p_output1[512]=44;
  p_output1[513]=4;
  p_output1[514]=5;
  p_output1[515]=6;
  p_output1[516]=15;
  p_output1[517]=16;
  p_output1[518]=17;
  p_output1[519]=18;
  p_output1[520]=19;
  p_output1[521]=20;
  p_output1[522]=21;
  p_output1[523]=22;
  p_output1[524]=23;
  p_output1[525]=24;
  p_output1[526]=25;
  p_output1[527]=26;
  p_output1[528]=27;
  p_output1[529]=28;
  p_output1[530]=37;
  p_output1[531]=38;
  p_output1[532]=39;
  p_output1[533]=40;
  p_output1[534]=41;
  p_output1[535]=42;
  p_output1[536]=43;
  p_output1[537]=44;
  p_output1[538]=4;
  p_output1[539]=5;
  p_output1[540]=6;
  p_output1[541]=15;
  p_output1[542]=16;
  p_output1[543]=17;
  p_output1[544]=18;
  p_output1[545]=19;
  p_output1[546]=20;
  p_output1[547]=21;
  p_output1[548]=22;
  p_output1[549]=23;
  p_output1[550]=24;
  p_output1[551]=25;
  p_output1[552]=26;
  p_output1[553]=27;
  p_output1[554]=28;
  p_output1[555]=37;
  p_output1[556]=38;
  p_output1[557]=39;
  p_output1[558]=40;
  p_output1[559]=41;
  p_output1[560]=42;
  p_output1[561]=43;
  p_output1[562]=44;
  p_output1[563]=4;
  p_output1[564]=5;
  p_output1[565]=6;
  p_output1[566]=15;
  p_output1[567]=16;
  p_output1[568]=17;
  p_output1[569]=18;
  p_output1[570]=19;
  p_output1[571]=20;
  p_output1[572]=21;
  p_output1[573]=22;
  p_output1[574]=23;
  p_output1[575]=24;
  p_output1[576]=25;
  p_output1[577]=26;
  p_output1[578]=27;
  p_output1[579]=28;
  p_output1[580]=37;
  p_output1[581]=38;
  p_output1[582]=39;
  p_output1[583]=40;
  p_output1[584]=41;
  p_output1[585]=42;
  p_output1[586]=43;
  p_output1[587]=44;
  p_output1[588]=4;
  p_output1[589]=5;
  p_output1[590]=6;
  p_output1[591]=15;
  p_output1[592]=16;
  p_output1[593]=17;
  p_output1[594]=18;
  p_output1[595]=19;
  p_output1[596]=20;
  p_output1[597]=21;
  p_output1[598]=22;
  p_output1[599]=23;
  p_output1[600]=24;
  p_output1[601]=25;
  p_output1[602]=26;
  p_output1[603]=27;
  p_output1[604]=28;
  p_output1[605]=37;
  p_output1[606]=38;
  p_output1[607]=39;
  p_output1[608]=40;
  p_output1[609]=41;
  p_output1[610]=4;
  p_output1[611]=5;
  p_output1[612]=6;
  p_output1[613]=15;
  p_output1[614]=16;
  p_output1[615]=17;
  p_output1[616]=18;
  p_output1[617]=19;
  p_output1[618]=20;
  p_output1[619]=21;
  p_output1[620]=22;
  p_output1[621]=23;
  p_output1[622]=24;
  p_output1[623]=25;
  p_output1[624]=26;
  p_output1[625]=27;
  p_output1[626]=28;
  p_output1[627]=37;
  p_output1[628]=38;
  p_output1[629]=39;
  p_output1[630]=40;
  p_output1[631]=41;
  p_output1[632]=4;
  p_output1[633]=5;
  p_output1[634]=6;
  p_output1[635]=15;
  p_output1[636]=16;
  p_output1[637]=17;
  p_output1[638]=18;
  p_output1[639]=19;
  p_output1[640]=20;
  p_output1[641]=21;
  p_output1[642]=22;
  p_output1[643]=23;
  p_output1[644]=24;
  p_output1[645]=25;
  p_output1[646]=26;
  p_output1[647]=27;
  p_output1[648]=28;
  p_output1[649]=37;
  p_output1[650]=38;
  p_output1[651]=39;
  p_output1[652]=40;
  p_output1[653]=41;
  p_output1[654]=4;
  p_output1[655]=5;
  p_output1[656]=6;
  p_output1[657]=15;
  p_output1[658]=16;
  p_output1[659]=17;
  p_output1[660]=18;
  p_output1[661]=19;
  p_output1[662]=20;
  p_output1[663]=21;
  p_output1[664]=22;
  p_output1[665]=23;
  p_output1[666]=24;
  p_output1[667]=25;
  p_output1[668]=26;
  p_output1[669]=27;
  p_output1[670]=28;
  p_output1[671]=37;
  p_output1[672]=38;
  p_output1[673]=39;
  p_output1[674]=40;
  p_output1[675]=41;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 338, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec19_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec19_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

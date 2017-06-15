/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:15:53 GMT-04:00
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
  p_output1[194]=8;
  p_output1[195]=8;
  p_output1[196]=8;
  p_output1[197]=8;
  p_output1[198]=8;
  p_output1[199]=8;
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
  p_output1[213]=9;
  p_output1[214]=9;
  p_output1[215]=9;
  p_output1[216]=9;
  p_output1[217]=9;
  p_output1[218]=9;
  p_output1[219]=9;
  p_output1[220]=9;
  p_output1[221]=9;
  p_output1[222]=9;
  p_output1[223]=9;
  p_output1[224]=9;
  p_output1[225]=10;
  p_output1[226]=10;
  p_output1[227]=10;
  p_output1[228]=10;
  p_output1[229]=10;
  p_output1[230]=10;
  p_output1[231]=10;
  p_output1[232]=10;
  p_output1[233]=10;
  p_output1[234]=10;
  p_output1[235]=10;
  p_output1[236]=10;
  p_output1[237]=10;
  p_output1[238]=10;
  p_output1[239]=10;
  p_output1[240]=10;
  p_output1[241]=10;
  p_output1[242]=10;
  p_output1[243]=10;
  p_output1[244]=10;
  p_output1[245]=10;
  p_output1[246]=10;
  p_output1[247]=10;
  p_output1[248]=10;
  p_output1[249]=10;
  p_output1[250]=11;
  p_output1[251]=11;
  p_output1[252]=11;
  p_output1[253]=11;
  p_output1[254]=11;
  p_output1[255]=11;
  p_output1[256]=11;
  p_output1[257]=11;
  p_output1[258]=11;
  p_output1[259]=11;
  p_output1[260]=11;
  p_output1[261]=11;
  p_output1[262]=11;
  p_output1[263]=11;
  p_output1[264]=11;
  p_output1[265]=11;
  p_output1[266]=11;
  p_output1[267]=11;
  p_output1[268]=11;
  p_output1[269]=11;
  p_output1[270]=11;
  p_output1[271]=11;
  p_output1[272]=12;
  p_output1[273]=12;
  p_output1[274]=12;
  p_output1[275]=12;
  p_output1[276]=12;
  p_output1[277]=12;
  p_output1[278]=12;
  p_output1[279]=12;
  p_output1[280]=12;
  p_output1[281]=12;
  p_output1[282]=12;
  p_output1[283]=12;
  p_output1[284]=12;
  p_output1[285]=12;
  p_output1[286]=12;
  p_output1[287]=12;
  p_output1[288]=12;
  p_output1[289]=12;
  p_output1[290]=12;
  p_output1[291]=12;
  p_output1[292]=12;
  p_output1[293]=12;
  p_output1[294]=13;
  p_output1[295]=13;
  p_output1[296]=13;
  p_output1[297]=13;
  p_output1[298]=13;
  p_output1[299]=13;
  p_output1[300]=13;
  p_output1[301]=13;
  p_output1[302]=13;
  p_output1[303]=13;
  p_output1[304]=13;
  p_output1[305]=13;
  p_output1[306]=13;
  p_output1[307]=13;
  p_output1[308]=13;
  p_output1[309]=13;
  p_output1[310]=13;
  p_output1[311]=13;
  p_output1[312]=13;
  p_output1[313]=13;
  p_output1[314]=13;
  p_output1[315]=13;
  p_output1[316]=14;
  p_output1[317]=14;
  p_output1[318]=14;
  p_output1[319]=14;
  p_output1[320]=14;
  p_output1[321]=14;
  p_output1[322]=14;
  p_output1[323]=14;
  p_output1[324]=14;
  p_output1[325]=14;
  p_output1[326]=14;
  p_output1[327]=14;
  p_output1[328]=14;
  p_output1[329]=14;
  p_output1[330]=14;
  p_output1[331]=14;
  p_output1[332]=14;
  p_output1[333]=14;
  p_output1[334]=14;
  p_output1[335]=14;
  p_output1[336]=14;
  p_output1[337]=14;
  p_output1[338]=4;
  p_output1[339]=5;
  p_output1[340]=6;
  p_output1[341]=7;
  p_output1[342]=8;
  p_output1[343]=9;
  p_output1[344]=10;
  p_output1[345]=11;
  p_output1[346]=12;
  p_output1[347]=13;
  p_output1[348]=14;
  p_output1[349]=23;
  p_output1[350]=24;
  p_output1[351]=25;
  p_output1[352]=26;
  p_output1[353]=27;
  p_output1[354]=28;
  p_output1[355]=29;
  p_output1[356]=30;
  p_output1[357]=31;
  p_output1[358]=32;
  p_output1[359]=33;
  p_output1[360]=34;
  p_output1[361]=35;
  p_output1[362]=36;
  p_output1[363]=4;
  p_output1[364]=5;
  p_output1[365]=6;
  p_output1[366]=7;
  p_output1[367]=8;
  p_output1[368]=9;
  p_output1[369]=10;
  p_output1[370]=11;
  p_output1[371]=12;
  p_output1[372]=13;
  p_output1[373]=14;
  p_output1[374]=23;
  p_output1[375]=24;
  p_output1[376]=25;
  p_output1[377]=26;
  p_output1[378]=27;
  p_output1[379]=28;
  p_output1[380]=29;
  p_output1[381]=30;
  p_output1[382]=31;
  p_output1[383]=32;
  p_output1[384]=33;
  p_output1[385]=34;
  p_output1[386]=35;
  p_output1[387]=36;
  p_output1[388]=4;
  p_output1[389]=5;
  p_output1[390]=6;
  p_output1[391]=7;
  p_output1[392]=8;
  p_output1[393]=9;
  p_output1[394]=10;
  p_output1[395]=11;
  p_output1[396]=12;
  p_output1[397]=13;
  p_output1[398]=14;
  p_output1[399]=23;
  p_output1[400]=24;
  p_output1[401]=25;
  p_output1[402]=26;
  p_output1[403]=27;
  p_output1[404]=28;
  p_output1[405]=29;
  p_output1[406]=30;
  p_output1[407]=31;
  p_output1[408]=32;
  p_output1[409]=33;
  p_output1[410]=34;
  p_output1[411]=35;
  p_output1[412]=36;
  p_output1[413]=4;
  p_output1[414]=5;
  p_output1[415]=6;
  p_output1[416]=7;
  p_output1[417]=8;
  p_output1[418]=9;
  p_output1[419]=10;
  p_output1[420]=11;
  p_output1[421]=12;
  p_output1[422]=13;
  p_output1[423]=14;
  p_output1[424]=23;
  p_output1[425]=24;
  p_output1[426]=25;
  p_output1[427]=26;
  p_output1[428]=27;
  p_output1[429]=28;
  p_output1[430]=29;
  p_output1[431]=30;
  p_output1[432]=31;
  p_output1[433]=32;
  p_output1[434]=33;
  p_output1[435]=34;
  p_output1[436]=35;
  p_output1[437]=36;
  p_output1[438]=4;
  p_output1[439]=5;
  p_output1[440]=6;
  p_output1[441]=7;
  p_output1[442]=8;
  p_output1[443]=9;
  p_output1[444]=10;
  p_output1[445]=11;
  p_output1[446]=12;
  p_output1[447]=13;
  p_output1[448]=14;
  p_output1[449]=23;
  p_output1[450]=24;
  p_output1[451]=25;
  p_output1[452]=26;
  p_output1[453]=27;
  p_output1[454]=28;
  p_output1[455]=29;
  p_output1[456]=30;
  p_output1[457]=31;
  p_output1[458]=32;
  p_output1[459]=33;
  p_output1[460]=34;
  p_output1[461]=35;
  p_output1[462]=36;
  p_output1[463]=4;
  p_output1[464]=5;
  p_output1[465]=6;
  p_output1[466]=7;
  p_output1[467]=8;
  p_output1[468]=9;
  p_output1[469]=10;
  p_output1[470]=11;
  p_output1[471]=12;
  p_output1[472]=13;
  p_output1[473]=14;
  p_output1[474]=23;
  p_output1[475]=24;
  p_output1[476]=25;
  p_output1[477]=26;
  p_output1[478]=27;
  p_output1[479]=28;
  p_output1[480]=29;
  p_output1[481]=30;
  p_output1[482]=31;
  p_output1[483]=32;
  p_output1[484]=33;
  p_output1[485]=34;
  p_output1[486]=35;
  p_output1[487]=36;
  p_output1[488]=4;
  p_output1[489]=5;
  p_output1[490]=6;
  p_output1[491]=7;
  p_output1[492]=8;
  p_output1[493]=9;
  p_output1[494]=10;
  p_output1[495]=11;
  p_output1[496]=12;
  p_output1[497]=13;
  p_output1[498]=14;
  p_output1[499]=23;
  p_output1[500]=24;
  p_output1[501]=25;
  p_output1[502]=26;
  p_output1[503]=27;
  p_output1[504]=28;
  p_output1[505]=29;
  p_output1[506]=30;
  p_output1[507]=31;
  p_output1[508]=32;
  p_output1[509]=33;
  p_output1[510]=34;
  p_output1[511]=35;
  p_output1[512]=36;
  p_output1[513]=4;
  p_output1[514]=5;
  p_output1[515]=6;
  p_output1[516]=7;
  p_output1[517]=8;
  p_output1[518]=9;
  p_output1[519]=10;
  p_output1[520]=11;
  p_output1[521]=12;
  p_output1[522]=13;
  p_output1[523]=14;
  p_output1[524]=23;
  p_output1[525]=24;
  p_output1[526]=25;
  p_output1[527]=26;
  p_output1[528]=27;
  p_output1[529]=28;
  p_output1[530]=29;
  p_output1[531]=30;
  p_output1[532]=31;
  p_output1[533]=32;
  p_output1[534]=33;
  p_output1[535]=34;
  p_output1[536]=35;
  p_output1[537]=36;
  p_output1[538]=4;
  p_output1[539]=5;
  p_output1[540]=6;
  p_output1[541]=7;
  p_output1[542]=8;
  p_output1[543]=9;
  p_output1[544]=10;
  p_output1[545]=11;
  p_output1[546]=12;
  p_output1[547]=13;
  p_output1[548]=14;
  p_output1[549]=23;
  p_output1[550]=24;
  p_output1[551]=25;
  p_output1[552]=26;
  p_output1[553]=27;
  p_output1[554]=28;
  p_output1[555]=29;
  p_output1[556]=30;
  p_output1[557]=31;
  p_output1[558]=32;
  p_output1[559]=33;
  p_output1[560]=34;
  p_output1[561]=35;
  p_output1[562]=36;
  p_output1[563]=4;
  p_output1[564]=5;
  p_output1[565]=6;
  p_output1[566]=7;
  p_output1[567]=8;
  p_output1[568]=9;
  p_output1[569]=10;
  p_output1[570]=11;
  p_output1[571]=12;
  p_output1[572]=13;
  p_output1[573]=14;
  p_output1[574]=23;
  p_output1[575]=24;
  p_output1[576]=25;
  p_output1[577]=26;
  p_output1[578]=27;
  p_output1[579]=28;
  p_output1[580]=29;
  p_output1[581]=30;
  p_output1[582]=31;
  p_output1[583]=32;
  p_output1[584]=33;
  p_output1[585]=34;
  p_output1[586]=35;
  p_output1[587]=36;
  p_output1[588]=4;
  p_output1[589]=5;
  p_output1[590]=6;
  p_output1[591]=7;
  p_output1[592]=8;
  p_output1[593]=9;
  p_output1[594]=10;
  p_output1[595]=11;
  p_output1[596]=12;
  p_output1[597]=13;
  p_output1[598]=14;
  p_output1[599]=23;
  p_output1[600]=24;
  p_output1[601]=25;
  p_output1[602]=26;
  p_output1[603]=27;
  p_output1[604]=28;
  p_output1[605]=29;
  p_output1[606]=30;
  p_output1[607]=31;
  p_output1[608]=32;
  p_output1[609]=33;
  p_output1[610]=4;
  p_output1[611]=5;
  p_output1[612]=6;
  p_output1[613]=7;
  p_output1[614]=8;
  p_output1[615]=9;
  p_output1[616]=10;
  p_output1[617]=11;
  p_output1[618]=12;
  p_output1[619]=13;
  p_output1[620]=14;
  p_output1[621]=23;
  p_output1[622]=24;
  p_output1[623]=25;
  p_output1[624]=26;
  p_output1[625]=27;
  p_output1[626]=28;
  p_output1[627]=29;
  p_output1[628]=30;
  p_output1[629]=31;
  p_output1[630]=32;
  p_output1[631]=33;
  p_output1[632]=4;
  p_output1[633]=5;
  p_output1[634]=6;
  p_output1[635]=7;
  p_output1[636]=8;
  p_output1[637]=9;
  p_output1[638]=10;
  p_output1[639]=11;
  p_output1[640]=12;
  p_output1[641]=13;
  p_output1[642]=14;
  p_output1[643]=23;
  p_output1[644]=24;
  p_output1[645]=25;
  p_output1[646]=26;
  p_output1[647]=27;
  p_output1[648]=28;
  p_output1[649]=29;
  p_output1[650]=30;
  p_output1[651]=31;
  p_output1[652]=32;
  p_output1[653]=33;
  p_output1[654]=4;
  p_output1[655]=5;
  p_output1[656]=6;
  p_output1[657]=7;
  p_output1[658]=8;
  p_output1[659]=9;
  p_output1[660]=10;
  p_output1[661]=11;
  p_output1[662]=12;
  p_output1[663]=13;
  p_output1[664]=14;
  p_output1[665]=23;
  p_output1[666]=24;
  p_output1[667]=25;
  p_output1[668]=26;
  p_output1[669]=27;
  p_output1[670]=28;
  p_output1[671]=29;
  p_output1[672]=30;
  p_output1[673]=31;
  p_output1[674]=32;
  p_output1[675]=33;
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

#include "Js_Ce2_vec11_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec11_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

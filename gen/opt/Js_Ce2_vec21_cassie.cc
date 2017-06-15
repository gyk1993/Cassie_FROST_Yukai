/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:44:17 GMT-04:00
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
  p_output1[272]=19;
  p_output1[273]=19;
  p_output1[274]=19;
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
  p_output1[294]=20;
  p_output1[295]=20;
  p_output1[296]=20;
  p_output1[297]=20;
  p_output1[298]=20;
  p_output1[299]=20;
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
  p_output1[316]=21;
  p_output1[317]=21;
  p_output1[318]=21;
  p_output1[319]=21;
  p_output1[320]=21;
  p_output1[321]=21;
  p_output1[322]=21;
  p_output1[323]=21;
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
  p_output1[338]=22;
  p_output1[339]=22;
  p_output1[340]=22;
  p_output1[341]=22;
  p_output1[342]=22;
  p_output1[343]=22;
  p_output1[344]=22;
  p_output1[345]=22;
  p_output1[346]=22;
  p_output1[347]=22;
  p_output1[348]=4;
  p_output1[349]=5;
  p_output1[350]=6;
  p_output1[351]=15;
  p_output1[352]=16;
  p_output1[353]=17;
  p_output1[354]=18;
  p_output1[355]=19;
  p_output1[356]=20;
  p_output1[357]=21;
  p_output1[358]=22;
  p_output1[359]=23;
  p_output1[360]=24;
  p_output1[361]=25;
  p_output1[362]=26;
  p_output1[363]=27;
  p_output1[364]=28;
  p_output1[365]=37;
  p_output1[366]=38;
  p_output1[367]=39;
  p_output1[368]=40;
  p_output1[369]=41;
  p_output1[370]=42;
  p_output1[371]=43;
  p_output1[372]=44;
  p_output1[373]=4;
  p_output1[374]=5;
  p_output1[375]=6;
  p_output1[376]=15;
  p_output1[377]=16;
  p_output1[378]=17;
  p_output1[379]=18;
  p_output1[380]=19;
  p_output1[381]=20;
  p_output1[382]=21;
  p_output1[383]=22;
  p_output1[384]=23;
  p_output1[385]=24;
  p_output1[386]=25;
  p_output1[387]=26;
  p_output1[388]=27;
  p_output1[389]=28;
  p_output1[390]=37;
  p_output1[391]=38;
  p_output1[392]=39;
  p_output1[393]=40;
  p_output1[394]=41;
  p_output1[395]=42;
  p_output1[396]=43;
  p_output1[397]=44;
  p_output1[398]=4;
  p_output1[399]=5;
  p_output1[400]=6;
  p_output1[401]=15;
  p_output1[402]=16;
  p_output1[403]=17;
  p_output1[404]=18;
  p_output1[405]=19;
  p_output1[406]=20;
  p_output1[407]=21;
  p_output1[408]=22;
  p_output1[409]=23;
  p_output1[410]=24;
  p_output1[411]=25;
  p_output1[412]=26;
  p_output1[413]=27;
  p_output1[414]=28;
  p_output1[415]=37;
  p_output1[416]=38;
  p_output1[417]=39;
  p_output1[418]=40;
  p_output1[419]=41;
  p_output1[420]=42;
  p_output1[421]=43;
  p_output1[422]=44;
  p_output1[423]=4;
  p_output1[424]=5;
  p_output1[425]=6;
  p_output1[426]=15;
  p_output1[427]=16;
  p_output1[428]=17;
  p_output1[429]=18;
  p_output1[430]=19;
  p_output1[431]=20;
  p_output1[432]=21;
  p_output1[433]=22;
  p_output1[434]=23;
  p_output1[435]=24;
  p_output1[436]=25;
  p_output1[437]=26;
  p_output1[438]=27;
  p_output1[439]=28;
  p_output1[440]=37;
  p_output1[441]=38;
  p_output1[442]=39;
  p_output1[443]=40;
  p_output1[444]=41;
  p_output1[445]=42;
  p_output1[446]=43;
  p_output1[447]=44;
  p_output1[448]=4;
  p_output1[449]=5;
  p_output1[450]=6;
  p_output1[451]=15;
  p_output1[452]=16;
  p_output1[453]=17;
  p_output1[454]=18;
  p_output1[455]=19;
  p_output1[456]=20;
  p_output1[457]=21;
  p_output1[458]=22;
  p_output1[459]=23;
  p_output1[460]=24;
  p_output1[461]=25;
  p_output1[462]=26;
  p_output1[463]=27;
  p_output1[464]=28;
  p_output1[465]=37;
  p_output1[466]=38;
  p_output1[467]=39;
  p_output1[468]=40;
  p_output1[469]=41;
  p_output1[470]=42;
  p_output1[471]=43;
  p_output1[472]=44;
  p_output1[473]=4;
  p_output1[474]=5;
  p_output1[475]=6;
  p_output1[476]=15;
  p_output1[477]=16;
  p_output1[478]=17;
  p_output1[479]=18;
  p_output1[480]=19;
  p_output1[481]=20;
  p_output1[482]=21;
  p_output1[483]=22;
  p_output1[484]=23;
  p_output1[485]=24;
  p_output1[486]=25;
  p_output1[487]=26;
  p_output1[488]=27;
  p_output1[489]=28;
  p_output1[490]=37;
  p_output1[491]=38;
  p_output1[492]=39;
  p_output1[493]=40;
  p_output1[494]=41;
  p_output1[495]=42;
  p_output1[496]=43;
  p_output1[497]=44;
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
  p_output1[516]=38;
  p_output1[517]=39;
  p_output1[518]=40;
  p_output1[519]=41;
  p_output1[520]=42;
  p_output1[521]=43;
  p_output1[522]=44;
  p_output1[523]=4;
  p_output1[524]=5;
  p_output1[525]=6;
  p_output1[526]=15;
  p_output1[527]=16;
  p_output1[528]=17;
  p_output1[529]=18;
  p_output1[530]=19;
  p_output1[531]=20;
  p_output1[532]=21;
  p_output1[533]=22;
  p_output1[534]=23;
  p_output1[535]=24;
  p_output1[536]=25;
  p_output1[537]=26;
  p_output1[538]=27;
  p_output1[539]=28;
  p_output1[540]=37;
  p_output1[541]=38;
  p_output1[542]=39;
  p_output1[543]=40;
  p_output1[544]=41;
  p_output1[545]=42;
  p_output1[546]=43;
  p_output1[547]=44;
  p_output1[548]=4;
  p_output1[549]=5;
  p_output1[550]=6;
  p_output1[551]=15;
  p_output1[552]=16;
  p_output1[553]=17;
  p_output1[554]=18;
  p_output1[555]=19;
  p_output1[556]=20;
  p_output1[557]=21;
  p_output1[558]=22;
  p_output1[559]=23;
  p_output1[560]=24;
  p_output1[561]=25;
  p_output1[562]=26;
  p_output1[563]=27;
  p_output1[564]=28;
  p_output1[565]=37;
  p_output1[566]=38;
  p_output1[567]=39;
  p_output1[568]=40;
  p_output1[569]=41;
  p_output1[570]=42;
  p_output1[571]=43;
  p_output1[572]=44;
  p_output1[573]=4;
  p_output1[574]=5;
  p_output1[575]=6;
  p_output1[576]=15;
  p_output1[577]=16;
  p_output1[578]=17;
  p_output1[579]=18;
  p_output1[580]=19;
  p_output1[581]=20;
  p_output1[582]=21;
  p_output1[583]=22;
  p_output1[584]=23;
  p_output1[585]=24;
  p_output1[586]=25;
  p_output1[587]=26;
  p_output1[588]=27;
  p_output1[589]=28;
  p_output1[590]=37;
  p_output1[591]=38;
  p_output1[592]=39;
  p_output1[593]=40;
  p_output1[594]=41;
  p_output1[595]=42;
  p_output1[596]=43;
  p_output1[597]=44;
  p_output1[598]=4;
  p_output1[599]=5;
  p_output1[600]=6;
  p_output1[601]=15;
  p_output1[602]=16;
  p_output1[603]=17;
  p_output1[604]=18;
  p_output1[605]=19;
  p_output1[606]=20;
  p_output1[607]=21;
  p_output1[608]=22;
  p_output1[609]=23;
  p_output1[610]=24;
  p_output1[611]=25;
  p_output1[612]=26;
  p_output1[613]=27;
  p_output1[614]=28;
  p_output1[615]=37;
  p_output1[616]=38;
  p_output1[617]=39;
  p_output1[618]=40;
  p_output1[619]=41;
  p_output1[620]=42;
  p_output1[621]=43;
  p_output1[622]=44;
  p_output1[623]=4;
  p_output1[624]=5;
  p_output1[625]=6;
  p_output1[626]=15;
  p_output1[627]=16;
  p_output1[628]=17;
  p_output1[629]=18;
  p_output1[630]=19;
  p_output1[631]=20;
  p_output1[632]=21;
  p_output1[633]=22;
  p_output1[634]=23;
  p_output1[635]=24;
  p_output1[636]=25;
  p_output1[637]=26;
  p_output1[638]=27;
  p_output1[639]=28;
  p_output1[640]=37;
  p_output1[641]=38;
  p_output1[642]=39;
  p_output1[643]=40;
  p_output1[644]=41;
  p_output1[645]=42;
  p_output1[646]=43;
  p_output1[647]=44;
  p_output1[648]=4;
  p_output1[649]=5;
  p_output1[650]=6;
  p_output1[651]=15;
  p_output1[652]=16;
  p_output1[653]=17;
  p_output1[654]=18;
  p_output1[655]=19;
  p_output1[656]=20;
  p_output1[657]=21;
  p_output1[658]=22;
  p_output1[659]=23;
  p_output1[660]=24;
  p_output1[661]=25;
  p_output1[662]=26;
  p_output1[663]=27;
  p_output1[664]=28;
  p_output1[665]=37;
  p_output1[666]=38;
  p_output1[667]=39;
  p_output1[668]=40;
  p_output1[669]=41;
  p_output1[670]=42;
  p_output1[671]=43;
  p_output1[672]=4;
  p_output1[673]=5;
  p_output1[674]=6;
  p_output1[675]=15;
  p_output1[676]=16;
  p_output1[677]=17;
  p_output1[678]=18;
  p_output1[679]=19;
  p_output1[680]=20;
  p_output1[681]=21;
  p_output1[682]=22;
  p_output1[683]=23;
  p_output1[684]=24;
  p_output1[685]=25;
  p_output1[686]=26;
  p_output1[687]=27;
  p_output1[688]=28;
  p_output1[689]=37;
  p_output1[690]=38;
  p_output1[691]=39;
  p_output1[692]=40;
  p_output1[693]=41;
  p_output1[694]=42;
  p_output1[695]=43;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 348, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec21_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec21_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

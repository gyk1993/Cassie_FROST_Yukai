/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:45:50 GMT-04:00
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
  p_output1[324]=21;
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
  p_output1[348]=22;
  p_output1[349]=22;
  p_output1[350]=4;
  p_output1[351]=5;
  p_output1[352]=6;
  p_output1[353]=15;
  p_output1[354]=16;
  p_output1[355]=17;
  p_output1[356]=18;
  p_output1[357]=19;
  p_output1[358]=20;
  p_output1[359]=21;
  p_output1[360]=22;
  p_output1[361]=23;
  p_output1[362]=24;
  p_output1[363]=25;
  p_output1[364]=26;
  p_output1[365]=27;
  p_output1[366]=28;
  p_output1[367]=37;
  p_output1[368]=38;
  p_output1[369]=39;
  p_output1[370]=40;
  p_output1[371]=41;
  p_output1[372]=42;
  p_output1[373]=43;
  p_output1[374]=44;
  p_output1[375]=4;
  p_output1[376]=5;
  p_output1[377]=6;
  p_output1[378]=15;
  p_output1[379]=16;
  p_output1[380]=17;
  p_output1[381]=18;
  p_output1[382]=19;
  p_output1[383]=20;
  p_output1[384]=21;
  p_output1[385]=22;
  p_output1[386]=23;
  p_output1[387]=24;
  p_output1[388]=25;
  p_output1[389]=26;
  p_output1[390]=27;
  p_output1[391]=28;
  p_output1[392]=37;
  p_output1[393]=38;
  p_output1[394]=39;
  p_output1[395]=40;
  p_output1[396]=41;
  p_output1[397]=42;
  p_output1[398]=43;
  p_output1[399]=44;
  p_output1[400]=4;
  p_output1[401]=5;
  p_output1[402]=6;
  p_output1[403]=15;
  p_output1[404]=16;
  p_output1[405]=17;
  p_output1[406]=18;
  p_output1[407]=19;
  p_output1[408]=20;
  p_output1[409]=21;
  p_output1[410]=22;
  p_output1[411]=23;
  p_output1[412]=24;
  p_output1[413]=25;
  p_output1[414]=26;
  p_output1[415]=27;
  p_output1[416]=28;
  p_output1[417]=37;
  p_output1[418]=38;
  p_output1[419]=39;
  p_output1[420]=40;
  p_output1[421]=41;
  p_output1[422]=42;
  p_output1[423]=43;
  p_output1[424]=44;
  p_output1[425]=4;
  p_output1[426]=5;
  p_output1[427]=6;
  p_output1[428]=15;
  p_output1[429]=16;
  p_output1[430]=17;
  p_output1[431]=18;
  p_output1[432]=19;
  p_output1[433]=20;
  p_output1[434]=21;
  p_output1[435]=22;
  p_output1[436]=23;
  p_output1[437]=24;
  p_output1[438]=25;
  p_output1[439]=26;
  p_output1[440]=27;
  p_output1[441]=28;
  p_output1[442]=37;
  p_output1[443]=38;
  p_output1[444]=39;
  p_output1[445]=40;
  p_output1[446]=41;
  p_output1[447]=42;
  p_output1[448]=43;
  p_output1[449]=44;
  p_output1[450]=4;
  p_output1[451]=5;
  p_output1[452]=6;
  p_output1[453]=15;
  p_output1[454]=16;
  p_output1[455]=17;
  p_output1[456]=18;
  p_output1[457]=19;
  p_output1[458]=20;
  p_output1[459]=21;
  p_output1[460]=22;
  p_output1[461]=23;
  p_output1[462]=24;
  p_output1[463]=25;
  p_output1[464]=26;
  p_output1[465]=27;
  p_output1[466]=28;
  p_output1[467]=37;
  p_output1[468]=38;
  p_output1[469]=39;
  p_output1[470]=40;
  p_output1[471]=41;
  p_output1[472]=42;
  p_output1[473]=43;
  p_output1[474]=44;
  p_output1[475]=4;
  p_output1[476]=5;
  p_output1[477]=6;
  p_output1[478]=15;
  p_output1[479]=16;
  p_output1[480]=17;
  p_output1[481]=18;
  p_output1[482]=19;
  p_output1[483]=20;
  p_output1[484]=21;
  p_output1[485]=22;
  p_output1[486]=23;
  p_output1[487]=24;
  p_output1[488]=25;
  p_output1[489]=26;
  p_output1[490]=27;
  p_output1[491]=28;
  p_output1[492]=37;
  p_output1[493]=38;
  p_output1[494]=39;
  p_output1[495]=40;
  p_output1[496]=41;
  p_output1[497]=42;
  p_output1[498]=43;
  p_output1[499]=44;
  p_output1[500]=4;
  p_output1[501]=5;
  p_output1[502]=6;
  p_output1[503]=15;
  p_output1[504]=16;
  p_output1[505]=17;
  p_output1[506]=18;
  p_output1[507]=19;
  p_output1[508]=20;
  p_output1[509]=21;
  p_output1[510]=22;
  p_output1[511]=23;
  p_output1[512]=24;
  p_output1[513]=25;
  p_output1[514]=26;
  p_output1[515]=27;
  p_output1[516]=28;
  p_output1[517]=37;
  p_output1[518]=38;
  p_output1[519]=39;
  p_output1[520]=40;
  p_output1[521]=41;
  p_output1[522]=42;
  p_output1[523]=43;
  p_output1[524]=44;
  p_output1[525]=4;
  p_output1[526]=5;
  p_output1[527]=6;
  p_output1[528]=15;
  p_output1[529]=16;
  p_output1[530]=17;
  p_output1[531]=18;
  p_output1[532]=19;
  p_output1[533]=20;
  p_output1[534]=21;
  p_output1[535]=22;
  p_output1[536]=23;
  p_output1[537]=24;
  p_output1[538]=25;
  p_output1[539]=26;
  p_output1[540]=27;
  p_output1[541]=28;
  p_output1[542]=37;
  p_output1[543]=38;
  p_output1[544]=39;
  p_output1[545]=40;
  p_output1[546]=41;
  p_output1[547]=42;
  p_output1[548]=43;
  p_output1[549]=44;
  p_output1[550]=4;
  p_output1[551]=5;
  p_output1[552]=6;
  p_output1[553]=15;
  p_output1[554]=16;
  p_output1[555]=17;
  p_output1[556]=18;
  p_output1[557]=19;
  p_output1[558]=20;
  p_output1[559]=21;
  p_output1[560]=22;
  p_output1[561]=23;
  p_output1[562]=24;
  p_output1[563]=25;
  p_output1[564]=26;
  p_output1[565]=27;
  p_output1[566]=28;
  p_output1[567]=37;
  p_output1[568]=38;
  p_output1[569]=39;
  p_output1[570]=40;
  p_output1[571]=41;
  p_output1[572]=42;
  p_output1[573]=43;
  p_output1[574]=44;
  p_output1[575]=4;
  p_output1[576]=5;
  p_output1[577]=6;
  p_output1[578]=15;
  p_output1[579]=16;
  p_output1[580]=17;
  p_output1[581]=18;
  p_output1[582]=19;
  p_output1[583]=20;
  p_output1[584]=21;
  p_output1[585]=22;
  p_output1[586]=23;
  p_output1[587]=24;
  p_output1[588]=25;
  p_output1[589]=26;
  p_output1[590]=27;
  p_output1[591]=28;
  p_output1[592]=37;
  p_output1[593]=38;
  p_output1[594]=39;
  p_output1[595]=40;
  p_output1[596]=41;
  p_output1[597]=42;
  p_output1[598]=43;
  p_output1[599]=44;
  p_output1[600]=4;
  p_output1[601]=5;
  p_output1[602]=6;
  p_output1[603]=15;
  p_output1[604]=16;
  p_output1[605]=17;
  p_output1[606]=18;
  p_output1[607]=19;
  p_output1[608]=20;
  p_output1[609]=21;
  p_output1[610]=22;
  p_output1[611]=23;
  p_output1[612]=24;
  p_output1[613]=25;
  p_output1[614]=26;
  p_output1[615]=27;
  p_output1[616]=28;
  p_output1[617]=37;
  p_output1[618]=38;
  p_output1[619]=39;
  p_output1[620]=40;
  p_output1[621]=41;
  p_output1[622]=42;
  p_output1[623]=43;
  p_output1[624]=44;
  p_output1[625]=4;
  p_output1[626]=5;
  p_output1[627]=6;
  p_output1[628]=15;
  p_output1[629]=16;
  p_output1[630]=17;
  p_output1[631]=18;
  p_output1[632]=19;
  p_output1[633]=20;
  p_output1[634]=21;
  p_output1[635]=22;
  p_output1[636]=23;
  p_output1[637]=24;
  p_output1[638]=25;
  p_output1[639]=26;
  p_output1[640]=27;
  p_output1[641]=28;
  p_output1[642]=37;
  p_output1[643]=38;
  p_output1[644]=39;
  p_output1[645]=40;
  p_output1[646]=41;
  p_output1[647]=42;
  p_output1[648]=43;
  p_output1[649]=44;
  p_output1[650]=4;
  p_output1[651]=5;
  p_output1[652]=6;
  p_output1[653]=15;
  p_output1[654]=16;
  p_output1[655]=17;
  p_output1[656]=18;
  p_output1[657]=19;
  p_output1[658]=20;
  p_output1[659]=21;
  p_output1[660]=22;
  p_output1[661]=23;
  p_output1[662]=24;
  p_output1[663]=25;
  p_output1[664]=26;
  p_output1[665]=27;
  p_output1[666]=28;
  p_output1[667]=37;
  p_output1[668]=38;
  p_output1[669]=39;
  p_output1[670]=40;
  p_output1[671]=41;
  p_output1[672]=42;
  p_output1[673]=43;
  p_output1[674]=44;
  p_output1[675]=4;
  p_output1[676]=5;
  p_output1[677]=6;
  p_output1[678]=15;
  p_output1[679]=16;
  p_output1[680]=17;
  p_output1[681]=18;
  p_output1[682]=19;
  p_output1[683]=20;
  p_output1[684]=21;
  p_output1[685]=22;
  p_output1[686]=23;
  p_output1[687]=24;
  p_output1[688]=25;
  p_output1[689]=26;
  p_output1[690]=27;
  p_output1[691]=28;
  p_output1[692]=37;
  p_output1[693]=38;
  p_output1[694]=39;
  p_output1[695]=40;
  p_output1[696]=41;
  p_output1[697]=42;
  p_output1[698]=43;
  p_output1[699]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 350, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec22_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec22_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

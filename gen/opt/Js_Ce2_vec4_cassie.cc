/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 19:50:16 GMT-04:00
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
  p_output1[104]=4;
  p_output1[105]=4;
  p_output1[106]=4;
  p_output1[107]=4;
  p_output1[108]=4;
  p_output1[109]=4;
  p_output1[110]=4;
  p_output1[111]=4;
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
  p_output1[126]=5;
  p_output1[127]=5;
  p_output1[128]=5;
  p_output1[129]=5;
  p_output1[130]=5;
  p_output1[131]=5;
  p_output1[132]=5;
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
  p_output1[148]=6;
  p_output1[149]=6;
  p_output1[150]=6;
  p_output1[151]=6;
  p_output1[152]=6;
  p_output1[153]=6;
  p_output1[154]=6;
  p_output1[155]=6;
  p_output1[156]=6;
  p_output1[157]=6;
  p_output1[158]=6;
  p_output1[159]=6;
  p_output1[160]=6;
  p_output1[161]=6;
  p_output1[162]=6;
  p_output1[163]=6;
  p_output1[164]=6;
  p_output1[165]=6;
  p_output1[166]=6;
  p_output1[167]=6;
  p_output1[168]=6;
  p_output1[169]=6;
  p_output1[170]=7;
  p_output1[171]=7;
  p_output1[172]=7;
  p_output1[173]=7;
  p_output1[174]=7;
  p_output1[175]=7;
  p_output1[176]=7;
  p_output1[177]=7;
  p_output1[178]=7;
  p_output1[179]=7;
  p_output1[180]=7;
  p_output1[181]=7;
  p_output1[182]=7;
  p_output1[183]=7;
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
  p_output1[222]=10;
  p_output1[223]=10;
  p_output1[224]=10;
  p_output1[225]=10;
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
  p_output1[254]=13;
  p_output1[255]=13;
  p_output1[256]=13;
  p_output1[257]=13;
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
  p_output1[268]=14;
  p_output1[269]=14;
  p_output1[270]=14;
  p_output1[271]=14;
  p_output1[272]=14;
  p_output1[273]=14;
  p_output1[274]=14;
  p_output1[275]=14;
  p_output1[276]=14;
  p_output1[277]=14;
  p_output1[278]=14;
  p_output1[279]=14;
  p_output1[280]=14;
  p_output1[281]=14;
  p_output1[282]=15;
  p_output1[283]=15;
  p_output1[284]=15;
  p_output1[285]=15;
  p_output1[286]=15;
  p_output1[287]=15;
  p_output1[288]=15;
  p_output1[289]=15;
  p_output1[290]=15;
  p_output1[291]=15;
  p_output1[292]=15;
  p_output1[293]=15;
  p_output1[294]=15;
  p_output1[295]=15;
  p_output1[296]=16;
  p_output1[297]=16;
  p_output1[298]=16;
  p_output1[299]=16;
  p_output1[300]=16;
  p_output1[301]=16;
  p_output1[302]=16;
  p_output1[303]=16;
  p_output1[304]=16;
  p_output1[305]=16;
  p_output1[306]=16;
  p_output1[307]=16;
  p_output1[308]=16;
  p_output1[309]=16;
  p_output1[310]=17;
  p_output1[311]=17;
  p_output1[312]=17;
  p_output1[313]=17;
  p_output1[314]=17;
  p_output1[315]=17;
  p_output1[316]=17;
  p_output1[317]=17;
  p_output1[318]=17;
  p_output1[319]=17;
  p_output1[320]=17;
  p_output1[321]=17;
  p_output1[322]=17;
  p_output1[323]=17;
  p_output1[324]=18;
  p_output1[325]=18;
  p_output1[326]=18;
  p_output1[327]=18;
  p_output1[328]=18;
  p_output1[329]=18;
  p_output1[330]=18;
  p_output1[331]=18;
  p_output1[332]=18;
  p_output1[333]=18;
  p_output1[334]=18;
  p_output1[335]=18;
  p_output1[336]=18;
  p_output1[337]=18;
  p_output1[338]=19;
  p_output1[339]=19;
  p_output1[340]=19;
  p_output1[341]=19;
  p_output1[342]=19;
  p_output1[343]=19;
  p_output1[344]=19;
  p_output1[345]=19;
  p_output1[346]=19;
  p_output1[347]=19;
  p_output1[348]=19;
  p_output1[349]=19;
  p_output1[350]=19;
  p_output1[351]=19;
  p_output1[352]=20;
  p_output1[353]=20;
  p_output1[354]=20;
  p_output1[355]=20;
  p_output1[356]=20;
  p_output1[357]=20;
  p_output1[358]=20;
  p_output1[359]=20;
  p_output1[360]=20;
  p_output1[361]=20;
  p_output1[362]=20;
  p_output1[363]=20;
  p_output1[364]=20;
  p_output1[365]=20;
  p_output1[366]=21;
  p_output1[367]=21;
  p_output1[368]=21;
  p_output1[369]=21;
  p_output1[370]=21;
  p_output1[371]=21;
  p_output1[372]=21;
  p_output1[373]=21;
  p_output1[374]=21;
  p_output1[375]=21;
  p_output1[376]=21;
  p_output1[377]=21;
  p_output1[378]=21;
  p_output1[379]=21;
  p_output1[380]=22;
  p_output1[381]=22;
  p_output1[382]=22;
  p_output1[383]=22;
  p_output1[384]=22;
  p_output1[385]=22;
  p_output1[386]=22;
  p_output1[387]=22;
  p_output1[388]=22;
  p_output1[389]=22;
  p_output1[390]=22;
  p_output1[391]=22;
  p_output1[392]=22;
  p_output1[393]=22;
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
  p_output1[405]=15;
  p_output1[406]=16;
  p_output1[407]=17;
  p_output1[408]=18;
  p_output1[409]=19;
  p_output1[410]=20;
  p_output1[411]=21;
  p_output1[412]=22;
  p_output1[413]=24;
  p_output1[414]=25;
  p_output1[415]=26;
  p_output1[416]=4;
  p_output1[417]=5;
  p_output1[418]=6;
  p_output1[419]=7;
  p_output1[420]=8;
  p_output1[421]=9;
  p_output1[422]=10;
  p_output1[423]=11;
  p_output1[424]=12;
  p_output1[425]=13;
  p_output1[426]=14;
  p_output1[427]=15;
  p_output1[428]=16;
  p_output1[429]=17;
  p_output1[430]=18;
  p_output1[431]=19;
  p_output1[432]=20;
  p_output1[433]=21;
  p_output1[434]=22;
  p_output1[435]=23;
  p_output1[436]=24;
  p_output1[437]=25;
  p_output1[438]=26;
  p_output1[439]=27;
  p_output1[440]=28;
  p_output1[441]=29;
  p_output1[442]=30;
  p_output1[443]=31;
  p_output1[444]=32;
  p_output1[445]=33;
  p_output1[446]=34;
  p_output1[447]=35;
  p_output1[448]=36;
  p_output1[449]=37;
  p_output1[450]=38;
  p_output1[451]=39;
  p_output1[452]=40;
  p_output1[453]=41;
  p_output1[454]=42;
  p_output1[455]=43;
  p_output1[456]=44;
  p_output1[457]=4;
  p_output1[458]=5;
  p_output1[459]=6;
  p_output1[460]=7;
  p_output1[461]=8;
  p_output1[462]=9;
  p_output1[463]=10;
  p_output1[464]=11;
  p_output1[465]=12;
  p_output1[466]=13;
  p_output1[467]=14;
  p_output1[468]=15;
  p_output1[469]=16;
  p_output1[470]=17;
  p_output1[471]=18;
  p_output1[472]=19;
  p_output1[473]=20;
  p_output1[474]=21;
  p_output1[475]=22;
  p_output1[476]=23;
  p_output1[477]=24;
  p_output1[478]=25;
  p_output1[479]=26;
  p_output1[480]=27;
  p_output1[481]=28;
  p_output1[482]=29;
  p_output1[483]=30;
  p_output1[484]=31;
  p_output1[485]=32;
  p_output1[486]=33;
  p_output1[487]=34;
  p_output1[488]=35;
  p_output1[489]=36;
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
  p_output1[501]=7;
  p_output1[502]=8;
  p_output1[503]=9;
  p_output1[504]=10;
  p_output1[505]=11;
  p_output1[506]=12;
  p_output1[507]=13;
  p_output1[508]=14;
  p_output1[509]=15;
  p_output1[510]=16;
  p_output1[511]=17;
  p_output1[512]=18;
  p_output1[513]=19;
  p_output1[514]=20;
  p_output1[515]=21;
  p_output1[516]=22;
  p_output1[517]=24;
  p_output1[518]=25;
  p_output1[519]=26;
  p_output1[520]=4;
  p_output1[521]=5;
  p_output1[522]=6;
  p_output1[523]=7;
  p_output1[524]=8;
  p_output1[525]=9;
  p_output1[526]=10;
  p_output1[527]=11;
  p_output1[528]=12;
  p_output1[529]=13;
  p_output1[530]=14;
  p_output1[531]=15;
  p_output1[532]=16;
  p_output1[533]=17;
  p_output1[534]=18;
  p_output1[535]=19;
  p_output1[536]=20;
  p_output1[537]=21;
  p_output1[538]=22;
  p_output1[539]=24;
  p_output1[540]=25;
  p_output1[541]=26;
  p_output1[542]=4;
  p_output1[543]=5;
  p_output1[544]=6;
  p_output1[545]=7;
  p_output1[546]=8;
  p_output1[547]=9;
  p_output1[548]=10;
  p_output1[549]=11;
  p_output1[550]=12;
  p_output1[551]=13;
  p_output1[552]=14;
  p_output1[553]=15;
  p_output1[554]=16;
  p_output1[555]=17;
  p_output1[556]=18;
  p_output1[557]=19;
  p_output1[558]=20;
  p_output1[559]=21;
  p_output1[560]=22;
  p_output1[561]=24;
  p_output1[562]=25;
  p_output1[563]=26;
  p_output1[564]=4;
  p_output1[565]=5;
  p_output1[566]=6;
  p_output1[567]=7;
  p_output1[568]=8;
  p_output1[569]=9;
  p_output1[570]=10;
  p_output1[571]=11;
  p_output1[572]=12;
  p_output1[573]=13;
  p_output1[574]=14;
  p_output1[575]=24;
  p_output1[576]=25;
  p_output1[577]=26;
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
  p_output1[589]=24;
  p_output1[590]=25;
  p_output1[591]=26;
  p_output1[592]=4;
  p_output1[593]=5;
  p_output1[594]=6;
  p_output1[595]=7;
  p_output1[596]=8;
  p_output1[597]=9;
  p_output1[598]=10;
  p_output1[599]=11;
  p_output1[600]=12;
  p_output1[601]=13;
  p_output1[602]=14;
  p_output1[603]=24;
  p_output1[604]=25;
  p_output1[605]=26;
  p_output1[606]=4;
  p_output1[607]=5;
  p_output1[608]=6;
  p_output1[609]=7;
  p_output1[610]=8;
  p_output1[611]=9;
  p_output1[612]=10;
  p_output1[613]=11;
  p_output1[614]=12;
  p_output1[615]=13;
  p_output1[616]=14;
  p_output1[617]=24;
  p_output1[618]=25;
  p_output1[619]=26;
  p_output1[620]=4;
  p_output1[621]=5;
  p_output1[622]=6;
  p_output1[623]=7;
  p_output1[624]=8;
  p_output1[625]=9;
  p_output1[626]=10;
  p_output1[627]=11;
  p_output1[628]=12;
  p_output1[629]=13;
  p_output1[630]=14;
  p_output1[631]=24;
  p_output1[632]=25;
  p_output1[633]=26;
  p_output1[634]=4;
  p_output1[635]=5;
  p_output1[636]=6;
  p_output1[637]=7;
  p_output1[638]=8;
  p_output1[639]=9;
  p_output1[640]=10;
  p_output1[641]=11;
  p_output1[642]=12;
  p_output1[643]=13;
  p_output1[644]=14;
  p_output1[645]=24;
  p_output1[646]=25;
  p_output1[647]=26;
  p_output1[648]=4;
  p_output1[649]=5;
  p_output1[650]=6;
  p_output1[651]=7;
  p_output1[652]=8;
  p_output1[653]=9;
  p_output1[654]=10;
  p_output1[655]=11;
  p_output1[656]=12;
  p_output1[657]=13;
  p_output1[658]=14;
  p_output1[659]=24;
  p_output1[660]=25;
  p_output1[661]=26;
  p_output1[662]=4;
  p_output1[663]=5;
  p_output1[664]=6;
  p_output1[665]=7;
  p_output1[666]=8;
  p_output1[667]=9;
  p_output1[668]=10;
  p_output1[669]=11;
  p_output1[670]=12;
  p_output1[671]=13;
  p_output1[672]=14;
  p_output1[673]=24;
  p_output1[674]=25;
  p_output1[675]=26;
  p_output1[676]=4;
  p_output1[677]=5;
  p_output1[678]=6;
  p_output1[679]=15;
  p_output1[680]=16;
  p_output1[681]=17;
  p_output1[682]=18;
  p_output1[683]=19;
  p_output1[684]=20;
  p_output1[685]=21;
  p_output1[686]=22;
  p_output1[687]=24;
  p_output1[688]=25;
  p_output1[689]=26;
  p_output1[690]=4;
  p_output1[691]=5;
  p_output1[692]=6;
  p_output1[693]=15;
  p_output1[694]=16;
  p_output1[695]=17;
  p_output1[696]=18;
  p_output1[697]=19;
  p_output1[698]=20;
  p_output1[699]=21;
  p_output1[700]=22;
  p_output1[701]=24;
  p_output1[702]=25;
  p_output1[703]=26;
  p_output1[704]=4;
  p_output1[705]=5;
  p_output1[706]=6;
  p_output1[707]=15;
  p_output1[708]=16;
  p_output1[709]=17;
  p_output1[710]=18;
  p_output1[711]=19;
  p_output1[712]=20;
  p_output1[713]=21;
  p_output1[714]=22;
  p_output1[715]=24;
  p_output1[716]=25;
  p_output1[717]=26;
  p_output1[718]=4;
  p_output1[719]=5;
  p_output1[720]=6;
  p_output1[721]=15;
  p_output1[722]=16;
  p_output1[723]=17;
  p_output1[724]=18;
  p_output1[725]=19;
  p_output1[726]=20;
  p_output1[727]=21;
  p_output1[728]=22;
  p_output1[729]=24;
  p_output1[730]=25;
  p_output1[731]=26;
  p_output1[732]=4;
  p_output1[733]=5;
  p_output1[734]=6;
  p_output1[735]=15;
  p_output1[736]=16;
  p_output1[737]=17;
  p_output1[738]=18;
  p_output1[739]=19;
  p_output1[740]=20;
  p_output1[741]=21;
  p_output1[742]=22;
  p_output1[743]=24;
  p_output1[744]=25;
  p_output1[745]=26;
  p_output1[746]=4;
  p_output1[747]=5;
  p_output1[748]=6;
  p_output1[749]=15;
  p_output1[750]=16;
  p_output1[751]=17;
  p_output1[752]=18;
  p_output1[753]=19;
  p_output1[754]=20;
  p_output1[755]=21;
  p_output1[756]=22;
  p_output1[757]=24;
  p_output1[758]=25;
  p_output1[759]=26;
  p_output1[760]=4;
  p_output1[761]=5;
  p_output1[762]=6;
  p_output1[763]=15;
  p_output1[764]=16;
  p_output1[765]=17;
  p_output1[766]=18;
  p_output1[767]=19;
  p_output1[768]=20;
  p_output1[769]=21;
  p_output1[770]=22;
  p_output1[771]=24;
  p_output1[772]=25;
  p_output1[773]=26;
  p_output1[774]=4;
  p_output1[775]=5;
  p_output1[776]=6;
  p_output1[777]=15;
  p_output1[778]=16;
  p_output1[779]=17;
  p_output1[780]=18;
  p_output1[781]=19;
  p_output1[782]=20;
  p_output1[783]=21;
  p_output1[784]=22;
  p_output1[785]=24;
  p_output1[786]=25;
  p_output1[787]=26;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 394, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec4_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec4_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

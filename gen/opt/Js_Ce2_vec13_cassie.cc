/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:21:12 GMT-04:00
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
  p_output1[272]=11;
  p_output1[273]=11;
  p_output1[274]=11;
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
  p_output1[294]=12;
  p_output1[295]=12;
  p_output1[296]=12;
  p_output1[297]=12;
  p_output1[298]=12;
  p_output1[299]=12;
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
  p_output1[316]=13;
  p_output1[317]=13;
  p_output1[318]=13;
  p_output1[319]=13;
  p_output1[320]=13;
  p_output1[321]=13;
  p_output1[322]=13;
  p_output1[323]=13;
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
  p_output1[338]=14;
  p_output1[339]=14;
  p_output1[340]=14;
  p_output1[341]=14;
  p_output1[342]=14;
  p_output1[343]=14;
  p_output1[344]=14;
  p_output1[345]=14;
  p_output1[346]=14;
  p_output1[347]=14;
  p_output1[348]=4;
  p_output1[349]=5;
  p_output1[350]=6;
  p_output1[351]=7;
  p_output1[352]=8;
  p_output1[353]=9;
  p_output1[354]=10;
  p_output1[355]=11;
  p_output1[356]=12;
  p_output1[357]=13;
  p_output1[358]=14;
  p_output1[359]=23;
  p_output1[360]=24;
  p_output1[361]=25;
  p_output1[362]=26;
  p_output1[363]=27;
  p_output1[364]=28;
  p_output1[365]=29;
  p_output1[366]=30;
  p_output1[367]=31;
  p_output1[368]=32;
  p_output1[369]=33;
  p_output1[370]=34;
  p_output1[371]=35;
  p_output1[372]=36;
  p_output1[373]=4;
  p_output1[374]=5;
  p_output1[375]=6;
  p_output1[376]=7;
  p_output1[377]=8;
  p_output1[378]=9;
  p_output1[379]=10;
  p_output1[380]=11;
  p_output1[381]=12;
  p_output1[382]=13;
  p_output1[383]=14;
  p_output1[384]=23;
  p_output1[385]=24;
  p_output1[386]=25;
  p_output1[387]=26;
  p_output1[388]=27;
  p_output1[389]=28;
  p_output1[390]=29;
  p_output1[391]=30;
  p_output1[392]=31;
  p_output1[393]=32;
  p_output1[394]=33;
  p_output1[395]=34;
  p_output1[396]=35;
  p_output1[397]=36;
  p_output1[398]=4;
  p_output1[399]=5;
  p_output1[400]=6;
  p_output1[401]=7;
  p_output1[402]=8;
  p_output1[403]=9;
  p_output1[404]=10;
  p_output1[405]=11;
  p_output1[406]=12;
  p_output1[407]=13;
  p_output1[408]=14;
  p_output1[409]=23;
  p_output1[410]=24;
  p_output1[411]=25;
  p_output1[412]=26;
  p_output1[413]=27;
  p_output1[414]=28;
  p_output1[415]=29;
  p_output1[416]=30;
  p_output1[417]=31;
  p_output1[418]=32;
  p_output1[419]=33;
  p_output1[420]=34;
  p_output1[421]=35;
  p_output1[422]=36;
  p_output1[423]=4;
  p_output1[424]=5;
  p_output1[425]=6;
  p_output1[426]=7;
  p_output1[427]=8;
  p_output1[428]=9;
  p_output1[429]=10;
  p_output1[430]=11;
  p_output1[431]=12;
  p_output1[432]=13;
  p_output1[433]=14;
  p_output1[434]=23;
  p_output1[435]=24;
  p_output1[436]=25;
  p_output1[437]=26;
  p_output1[438]=27;
  p_output1[439]=28;
  p_output1[440]=29;
  p_output1[441]=30;
  p_output1[442]=31;
  p_output1[443]=32;
  p_output1[444]=33;
  p_output1[445]=34;
  p_output1[446]=35;
  p_output1[447]=36;
  p_output1[448]=4;
  p_output1[449]=5;
  p_output1[450]=6;
  p_output1[451]=7;
  p_output1[452]=8;
  p_output1[453]=9;
  p_output1[454]=10;
  p_output1[455]=11;
  p_output1[456]=12;
  p_output1[457]=13;
  p_output1[458]=14;
  p_output1[459]=23;
  p_output1[460]=24;
  p_output1[461]=25;
  p_output1[462]=26;
  p_output1[463]=27;
  p_output1[464]=28;
  p_output1[465]=29;
  p_output1[466]=30;
  p_output1[467]=31;
  p_output1[468]=32;
  p_output1[469]=33;
  p_output1[470]=34;
  p_output1[471]=35;
  p_output1[472]=36;
  p_output1[473]=4;
  p_output1[474]=5;
  p_output1[475]=6;
  p_output1[476]=7;
  p_output1[477]=8;
  p_output1[478]=9;
  p_output1[479]=10;
  p_output1[480]=11;
  p_output1[481]=12;
  p_output1[482]=13;
  p_output1[483]=14;
  p_output1[484]=23;
  p_output1[485]=24;
  p_output1[486]=25;
  p_output1[487]=26;
  p_output1[488]=27;
  p_output1[489]=28;
  p_output1[490]=29;
  p_output1[491]=30;
  p_output1[492]=31;
  p_output1[493]=32;
  p_output1[494]=33;
  p_output1[495]=34;
  p_output1[496]=35;
  p_output1[497]=36;
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
  p_output1[516]=30;
  p_output1[517]=31;
  p_output1[518]=32;
  p_output1[519]=33;
  p_output1[520]=34;
  p_output1[521]=35;
  p_output1[522]=36;
  p_output1[523]=4;
  p_output1[524]=5;
  p_output1[525]=6;
  p_output1[526]=7;
  p_output1[527]=8;
  p_output1[528]=9;
  p_output1[529]=10;
  p_output1[530]=11;
  p_output1[531]=12;
  p_output1[532]=13;
  p_output1[533]=14;
  p_output1[534]=23;
  p_output1[535]=24;
  p_output1[536]=25;
  p_output1[537]=26;
  p_output1[538]=27;
  p_output1[539]=28;
  p_output1[540]=29;
  p_output1[541]=30;
  p_output1[542]=31;
  p_output1[543]=32;
  p_output1[544]=33;
  p_output1[545]=34;
  p_output1[546]=35;
  p_output1[547]=36;
  p_output1[548]=4;
  p_output1[549]=5;
  p_output1[550]=6;
  p_output1[551]=7;
  p_output1[552]=8;
  p_output1[553]=9;
  p_output1[554]=10;
  p_output1[555]=11;
  p_output1[556]=12;
  p_output1[557]=13;
  p_output1[558]=14;
  p_output1[559]=23;
  p_output1[560]=24;
  p_output1[561]=25;
  p_output1[562]=26;
  p_output1[563]=27;
  p_output1[564]=28;
  p_output1[565]=29;
  p_output1[566]=30;
  p_output1[567]=31;
  p_output1[568]=32;
  p_output1[569]=33;
  p_output1[570]=34;
  p_output1[571]=35;
  p_output1[572]=36;
  p_output1[573]=4;
  p_output1[574]=5;
  p_output1[575]=6;
  p_output1[576]=7;
  p_output1[577]=8;
  p_output1[578]=9;
  p_output1[579]=10;
  p_output1[580]=11;
  p_output1[581]=12;
  p_output1[582]=13;
  p_output1[583]=14;
  p_output1[584]=23;
  p_output1[585]=24;
  p_output1[586]=25;
  p_output1[587]=26;
  p_output1[588]=27;
  p_output1[589]=28;
  p_output1[590]=29;
  p_output1[591]=30;
  p_output1[592]=31;
  p_output1[593]=32;
  p_output1[594]=33;
  p_output1[595]=34;
  p_output1[596]=35;
  p_output1[597]=36;
  p_output1[598]=4;
  p_output1[599]=5;
  p_output1[600]=6;
  p_output1[601]=7;
  p_output1[602]=8;
  p_output1[603]=9;
  p_output1[604]=10;
  p_output1[605]=11;
  p_output1[606]=12;
  p_output1[607]=13;
  p_output1[608]=14;
  p_output1[609]=23;
  p_output1[610]=24;
  p_output1[611]=25;
  p_output1[612]=26;
  p_output1[613]=27;
  p_output1[614]=28;
  p_output1[615]=29;
  p_output1[616]=30;
  p_output1[617]=31;
  p_output1[618]=32;
  p_output1[619]=33;
  p_output1[620]=34;
  p_output1[621]=35;
  p_output1[622]=36;
  p_output1[623]=4;
  p_output1[624]=5;
  p_output1[625]=6;
  p_output1[626]=7;
  p_output1[627]=8;
  p_output1[628]=9;
  p_output1[629]=10;
  p_output1[630]=11;
  p_output1[631]=12;
  p_output1[632]=13;
  p_output1[633]=14;
  p_output1[634]=23;
  p_output1[635]=24;
  p_output1[636]=25;
  p_output1[637]=26;
  p_output1[638]=27;
  p_output1[639]=28;
  p_output1[640]=29;
  p_output1[641]=30;
  p_output1[642]=31;
  p_output1[643]=32;
  p_output1[644]=33;
  p_output1[645]=34;
  p_output1[646]=35;
  p_output1[647]=36;
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
  p_output1[659]=23;
  p_output1[660]=24;
  p_output1[661]=25;
  p_output1[662]=26;
  p_output1[663]=27;
  p_output1[664]=28;
  p_output1[665]=29;
  p_output1[666]=30;
  p_output1[667]=31;
  p_output1[668]=32;
  p_output1[669]=33;
  p_output1[670]=34;
  p_output1[671]=35;
  p_output1[672]=4;
  p_output1[673]=5;
  p_output1[674]=6;
  p_output1[675]=7;
  p_output1[676]=8;
  p_output1[677]=9;
  p_output1[678]=10;
  p_output1[679]=11;
  p_output1[680]=12;
  p_output1[681]=13;
  p_output1[682]=14;
  p_output1[683]=23;
  p_output1[684]=24;
  p_output1[685]=25;
  p_output1[686]=26;
  p_output1[687]=27;
  p_output1[688]=28;
  p_output1[689]=29;
  p_output1[690]=30;
  p_output1[691]=31;
  p_output1[692]=32;
  p_output1[693]=33;
  p_output1[694]=34;
  p_output1[695]=35;
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

#include "Js_Ce2_vec13_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec13_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

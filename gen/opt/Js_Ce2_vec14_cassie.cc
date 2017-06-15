/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:22:49 GMT-04:00
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
  p_output1[324]=13;
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
  p_output1[348]=14;
  p_output1[349]=14;
  p_output1[350]=4;
  p_output1[351]=5;
  p_output1[352]=6;
  p_output1[353]=7;
  p_output1[354]=8;
  p_output1[355]=9;
  p_output1[356]=10;
  p_output1[357]=11;
  p_output1[358]=12;
  p_output1[359]=13;
  p_output1[360]=14;
  p_output1[361]=23;
  p_output1[362]=24;
  p_output1[363]=25;
  p_output1[364]=26;
  p_output1[365]=27;
  p_output1[366]=28;
  p_output1[367]=29;
  p_output1[368]=30;
  p_output1[369]=31;
  p_output1[370]=32;
  p_output1[371]=33;
  p_output1[372]=34;
  p_output1[373]=35;
  p_output1[374]=36;
  p_output1[375]=4;
  p_output1[376]=5;
  p_output1[377]=6;
  p_output1[378]=7;
  p_output1[379]=8;
  p_output1[380]=9;
  p_output1[381]=10;
  p_output1[382]=11;
  p_output1[383]=12;
  p_output1[384]=13;
  p_output1[385]=14;
  p_output1[386]=23;
  p_output1[387]=24;
  p_output1[388]=25;
  p_output1[389]=26;
  p_output1[390]=27;
  p_output1[391]=28;
  p_output1[392]=29;
  p_output1[393]=30;
  p_output1[394]=31;
  p_output1[395]=32;
  p_output1[396]=33;
  p_output1[397]=34;
  p_output1[398]=35;
  p_output1[399]=36;
  p_output1[400]=4;
  p_output1[401]=5;
  p_output1[402]=6;
  p_output1[403]=7;
  p_output1[404]=8;
  p_output1[405]=9;
  p_output1[406]=10;
  p_output1[407]=11;
  p_output1[408]=12;
  p_output1[409]=13;
  p_output1[410]=14;
  p_output1[411]=23;
  p_output1[412]=24;
  p_output1[413]=25;
  p_output1[414]=26;
  p_output1[415]=27;
  p_output1[416]=28;
  p_output1[417]=29;
  p_output1[418]=30;
  p_output1[419]=31;
  p_output1[420]=32;
  p_output1[421]=33;
  p_output1[422]=34;
  p_output1[423]=35;
  p_output1[424]=36;
  p_output1[425]=4;
  p_output1[426]=5;
  p_output1[427]=6;
  p_output1[428]=7;
  p_output1[429]=8;
  p_output1[430]=9;
  p_output1[431]=10;
  p_output1[432]=11;
  p_output1[433]=12;
  p_output1[434]=13;
  p_output1[435]=14;
  p_output1[436]=23;
  p_output1[437]=24;
  p_output1[438]=25;
  p_output1[439]=26;
  p_output1[440]=27;
  p_output1[441]=28;
  p_output1[442]=29;
  p_output1[443]=30;
  p_output1[444]=31;
  p_output1[445]=32;
  p_output1[446]=33;
  p_output1[447]=34;
  p_output1[448]=35;
  p_output1[449]=36;
  p_output1[450]=4;
  p_output1[451]=5;
  p_output1[452]=6;
  p_output1[453]=7;
  p_output1[454]=8;
  p_output1[455]=9;
  p_output1[456]=10;
  p_output1[457]=11;
  p_output1[458]=12;
  p_output1[459]=13;
  p_output1[460]=14;
  p_output1[461]=23;
  p_output1[462]=24;
  p_output1[463]=25;
  p_output1[464]=26;
  p_output1[465]=27;
  p_output1[466]=28;
  p_output1[467]=29;
  p_output1[468]=30;
  p_output1[469]=31;
  p_output1[470]=32;
  p_output1[471]=33;
  p_output1[472]=34;
  p_output1[473]=35;
  p_output1[474]=36;
  p_output1[475]=4;
  p_output1[476]=5;
  p_output1[477]=6;
  p_output1[478]=7;
  p_output1[479]=8;
  p_output1[480]=9;
  p_output1[481]=10;
  p_output1[482]=11;
  p_output1[483]=12;
  p_output1[484]=13;
  p_output1[485]=14;
  p_output1[486]=23;
  p_output1[487]=24;
  p_output1[488]=25;
  p_output1[489]=26;
  p_output1[490]=27;
  p_output1[491]=28;
  p_output1[492]=29;
  p_output1[493]=30;
  p_output1[494]=31;
  p_output1[495]=32;
  p_output1[496]=33;
  p_output1[497]=34;
  p_output1[498]=35;
  p_output1[499]=36;
  p_output1[500]=4;
  p_output1[501]=5;
  p_output1[502]=6;
  p_output1[503]=7;
  p_output1[504]=8;
  p_output1[505]=9;
  p_output1[506]=10;
  p_output1[507]=11;
  p_output1[508]=12;
  p_output1[509]=13;
  p_output1[510]=14;
  p_output1[511]=23;
  p_output1[512]=24;
  p_output1[513]=25;
  p_output1[514]=26;
  p_output1[515]=27;
  p_output1[516]=28;
  p_output1[517]=29;
  p_output1[518]=30;
  p_output1[519]=31;
  p_output1[520]=32;
  p_output1[521]=33;
  p_output1[522]=34;
  p_output1[523]=35;
  p_output1[524]=36;
  p_output1[525]=4;
  p_output1[526]=5;
  p_output1[527]=6;
  p_output1[528]=7;
  p_output1[529]=8;
  p_output1[530]=9;
  p_output1[531]=10;
  p_output1[532]=11;
  p_output1[533]=12;
  p_output1[534]=13;
  p_output1[535]=14;
  p_output1[536]=23;
  p_output1[537]=24;
  p_output1[538]=25;
  p_output1[539]=26;
  p_output1[540]=27;
  p_output1[541]=28;
  p_output1[542]=29;
  p_output1[543]=30;
  p_output1[544]=31;
  p_output1[545]=32;
  p_output1[546]=33;
  p_output1[547]=34;
  p_output1[548]=35;
  p_output1[549]=36;
  p_output1[550]=4;
  p_output1[551]=5;
  p_output1[552]=6;
  p_output1[553]=7;
  p_output1[554]=8;
  p_output1[555]=9;
  p_output1[556]=10;
  p_output1[557]=11;
  p_output1[558]=12;
  p_output1[559]=13;
  p_output1[560]=14;
  p_output1[561]=23;
  p_output1[562]=24;
  p_output1[563]=25;
  p_output1[564]=26;
  p_output1[565]=27;
  p_output1[566]=28;
  p_output1[567]=29;
  p_output1[568]=30;
  p_output1[569]=31;
  p_output1[570]=32;
  p_output1[571]=33;
  p_output1[572]=34;
  p_output1[573]=35;
  p_output1[574]=36;
  p_output1[575]=4;
  p_output1[576]=5;
  p_output1[577]=6;
  p_output1[578]=7;
  p_output1[579]=8;
  p_output1[580]=9;
  p_output1[581]=10;
  p_output1[582]=11;
  p_output1[583]=12;
  p_output1[584]=13;
  p_output1[585]=14;
  p_output1[586]=23;
  p_output1[587]=24;
  p_output1[588]=25;
  p_output1[589]=26;
  p_output1[590]=27;
  p_output1[591]=28;
  p_output1[592]=29;
  p_output1[593]=30;
  p_output1[594]=31;
  p_output1[595]=32;
  p_output1[596]=33;
  p_output1[597]=34;
  p_output1[598]=35;
  p_output1[599]=36;
  p_output1[600]=4;
  p_output1[601]=5;
  p_output1[602]=6;
  p_output1[603]=7;
  p_output1[604]=8;
  p_output1[605]=9;
  p_output1[606]=10;
  p_output1[607]=11;
  p_output1[608]=12;
  p_output1[609]=13;
  p_output1[610]=14;
  p_output1[611]=23;
  p_output1[612]=24;
  p_output1[613]=25;
  p_output1[614]=26;
  p_output1[615]=27;
  p_output1[616]=28;
  p_output1[617]=29;
  p_output1[618]=30;
  p_output1[619]=31;
  p_output1[620]=32;
  p_output1[621]=33;
  p_output1[622]=34;
  p_output1[623]=35;
  p_output1[624]=36;
  p_output1[625]=4;
  p_output1[626]=5;
  p_output1[627]=6;
  p_output1[628]=7;
  p_output1[629]=8;
  p_output1[630]=9;
  p_output1[631]=10;
  p_output1[632]=11;
  p_output1[633]=12;
  p_output1[634]=13;
  p_output1[635]=14;
  p_output1[636]=23;
  p_output1[637]=24;
  p_output1[638]=25;
  p_output1[639]=26;
  p_output1[640]=27;
  p_output1[641]=28;
  p_output1[642]=29;
  p_output1[643]=30;
  p_output1[644]=31;
  p_output1[645]=32;
  p_output1[646]=33;
  p_output1[647]=34;
  p_output1[648]=35;
  p_output1[649]=36;
  p_output1[650]=4;
  p_output1[651]=5;
  p_output1[652]=6;
  p_output1[653]=7;
  p_output1[654]=8;
  p_output1[655]=9;
  p_output1[656]=10;
  p_output1[657]=11;
  p_output1[658]=12;
  p_output1[659]=13;
  p_output1[660]=14;
  p_output1[661]=23;
  p_output1[662]=24;
  p_output1[663]=25;
  p_output1[664]=26;
  p_output1[665]=27;
  p_output1[666]=28;
  p_output1[667]=29;
  p_output1[668]=30;
  p_output1[669]=31;
  p_output1[670]=32;
  p_output1[671]=33;
  p_output1[672]=34;
  p_output1[673]=35;
  p_output1[674]=36;
  p_output1[675]=4;
  p_output1[676]=5;
  p_output1[677]=6;
  p_output1[678]=7;
  p_output1[679]=8;
  p_output1[680]=9;
  p_output1[681]=10;
  p_output1[682]=11;
  p_output1[683]=12;
  p_output1[684]=13;
  p_output1[685]=14;
  p_output1[686]=23;
  p_output1[687]=24;
  p_output1[688]=25;
  p_output1[689]=26;
  p_output1[690]=27;
  p_output1[691]=28;
  p_output1[692]=29;
  p_output1[693]=30;
  p_output1[694]=31;
  p_output1[695]=32;
  p_output1[696]=33;
  p_output1[697]=34;
  p_output1[698]=35;
  p_output1[699]=36;
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

#include "Js_Ce2_vec14_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec14_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

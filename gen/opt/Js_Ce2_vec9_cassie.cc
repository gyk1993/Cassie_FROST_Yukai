/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 20:09:30 GMT-04:00
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
  p_output1[232]=10;
  p_output1[233]=10;
  p_output1[234]=10;
  p_output1[235]=10;
  p_output1[236]=10;
  p_output1[237]=10;
  p_output1[238]=10;
  p_output1[239]=10;
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
  p_output1[251]=11;
  p_output1[252]=11;
  p_output1[253]=11;
  p_output1[254]=11;
  p_output1[255]=11;
  p_output1[256]=11;
  p_output1[257]=11;
  p_output1[258]=11;
  p_output1[259]=11;
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
  p_output1[270]=12;
  p_output1[271]=12;
  p_output1[272]=12;
  p_output1[273]=12;
  p_output1[274]=12;
  p_output1[275]=12;
  p_output1[276]=12;
  p_output1[277]=12;
  p_output1[278]=12;
  p_output1[279]=12;
  p_output1[280]=13;
  p_output1[281]=13;
  p_output1[282]=13;
  p_output1[283]=13;
  p_output1[284]=13;
  p_output1[285]=13;
  p_output1[286]=13;
  p_output1[287]=13;
  p_output1[288]=13;
  p_output1[289]=13;
  p_output1[290]=13;
  p_output1[291]=13;
  p_output1[292]=13;
  p_output1[293]=13;
  p_output1[294]=13;
  p_output1[295]=13;
  p_output1[296]=13;
  p_output1[297]=13;
  p_output1[298]=13;
  p_output1[299]=13;
  p_output1[300]=14;
  p_output1[301]=14;
  p_output1[302]=14;
  p_output1[303]=14;
  p_output1[304]=14;
  p_output1[305]=14;
  p_output1[306]=14;
  p_output1[307]=14;
  p_output1[308]=14;
  p_output1[309]=14;
  p_output1[310]=14;
  p_output1[311]=14;
  p_output1[312]=14;
  p_output1[313]=14;
  p_output1[314]=14;
  p_output1[315]=14;
  p_output1[316]=14;
  p_output1[317]=14;
  p_output1[318]=14;
  p_output1[319]=14;
  p_output1[320]=4;
  p_output1[321]=5;
  p_output1[322]=6;
  p_output1[323]=7;
  p_output1[324]=8;
  p_output1[325]=9;
  p_output1[326]=10;
  p_output1[327]=11;
  p_output1[328]=12;
  p_output1[329]=13;
  p_output1[330]=14;
  p_output1[331]=23;
  p_output1[332]=24;
  p_output1[333]=25;
  p_output1[334]=26;
  p_output1[335]=27;
  p_output1[336]=28;
  p_output1[337]=29;
  p_output1[338]=30;
  p_output1[339]=31;
  p_output1[340]=32;
  p_output1[341]=33;
  p_output1[342]=34;
  p_output1[343]=35;
  p_output1[344]=36;
  p_output1[345]=4;
  p_output1[346]=5;
  p_output1[347]=6;
  p_output1[348]=7;
  p_output1[349]=8;
  p_output1[350]=9;
  p_output1[351]=10;
  p_output1[352]=11;
  p_output1[353]=12;
  p_output1[354]=13;
  p_output1[355]=14;
  p_output1[356]=23;
  p_output1[357]=24;
  p_output1[358]=25;
  p_output1[359]=26;
  p_output1[360]=27;
  p_output1[361]=28;
  p_output1[362]=29;
  p_output1[363]=30;
  p_output1[364]=31;
  p_output1[365]=32;
  p_output1[366]=33;
  p_output1[367]=34;
  p_output1[368]=35;
  p_output1[369]=36;
  p_output1[370]=4;
  p_output1[371]=5;
  p_output1[372]=6;
  p_output1[373]=7;
  p_output1[374]=8;
  p_output1[375]=9;
  p_output1[376]=10;
  p_output1[377]=11;
  p_output1[378]=12;
  p_output1[379]=13;
  p_output1[380]=14;
  p_output1[381]=23;
  p_output1[382]=24;
  p_output1[383]=25;
  p_output1[384]=26;
  p_output1[385]=27;
  p_output1[386]=28;
  p_output1[387]=29;
  p_output1[388]=30;
  p_output1[389]=31;
  p_output1[390]=32;
  p_output1[391]=33;
  p_output1[392]=34;
  p_output1[393]=35;
  p_output1[394]=36;
  p_output1[395]=4;
  p_output1[396]=5;
  p_output1[397]=6;
  p_output1[398]=7;
  p_output1[399]=8;
  p_output1[400]=9;
  p_output1[401]=10;
  p_output1[402]=11;
  p_output1[403]=12;
  p_output1[404]=13;
  p_output1[405]=14;
  p_output1[406]=23;
  p_output1[407]=24;
  p_output1[408]=25;
  p_output1[409]=26;
  p_output1[410]=27;
  p_output1[411]=28;
  p_output1[412]=29;
  p_output1[413]=30;
  p_output1[414]=31;
  p_output1[415]=32;
  p_output1[416]=33;
  p_output1[417]=34;
  p_output1[418]=35;
  p_output1[419]=36;
  p_output1[420]=4;
  p_output1[421]=5;
  p_output1[422]=6;
  p_output1[423]=7;
  p_output1[424]=8;
  p_output1[425]=9;
  p_output1[426]=10;
  p_output1[427]=11;
  p_output1[428]=12;
  p_output1[429]=13;
  p_output1[430]=14;
  p_output1[431]=23;
  p_output1[432]=24;
  p_output1[433]=25;
  p_output1[434]=26;
  p_output1[435]=27;
  p_output1[436]=28;
  p_output1[437]=29;
  p_output1[438]=30;
  p_output1[439]=31;
  p_output1[440]=32;
  p_output1[441]=33;
  p_output1[442]=34;
  p_output1[443]=35;
  p_output1[444]=36;
  p_output1[445]=4;
  p_output1[446]=5;
  p_output1[447]=6;
  p_output1[448]=7;
  p_output1[449]=8;
  p_output1[450]=9;
  p_output1[451]=10;
  p_output1[452]=11;
  p_output1[453]=12;
  p_output1[454]=13;
  p_output1[455]=14;
  p_output1[456]=23;
  p_output1[457]=24;
  p_output1[458]=25;
  p_output1[459]=26;
  p_output1[460]=27;
  p_output1[461]=28;
  p_output1[462]=29;
  p_output1[463]=30;
  p_output1[464]=31;
  p_output1[465]=32;
  p_output1[466]=33;
  p_output1[467]=34;
  p_output1[468]=35;
  p_output1[469]=36;
  p_output1[470]=4;
  p_output1[471]=5;
  p_output1[472]=6;
  p_output1[473]=7;
  p_output1[474]=8;
  p_output1[475]=9;
  p_output1[476]=10;
  p_output1[477]=11;
  p_output1[478]=12;
  p_output1[479]=13;
  p_output1[480]=14;
  p_output1[481]=23;
  p_output1[482]=24;
  p_output1[483]=25;
  p_output1[484]=26;
  p_output1[485]=27;
  p_output1[486]=28;
  p_output1[487]=29;
  p_output1[488]=30;
  p_output1[489]=31;
  p_output1[490]=32;
  p_output1[491]=33;
  p_output1[492]=34;
  p_output1[493]=35;
  p_output1[494]=36;
  p_output1[495]=4;
  p_output1[496]=5;
  p_output1[497]=6;
  p_output1[498]=7;
  p_output1[499]=8;
  p_output1[500]=9;
  p_output1[501]=10;
  p_output1[502]=11;
  p_output1[503]=12;
  p_output1[504]=13;
  p_output1[505]=14;
  p_output1[506]=23;
  p_output1[507]=24;
  p_output1[508]=25;
  p_output1[509]=26;
  p_output1[510]=27;
  p_output1[511]=28;
  p_output1[512]=29;
  p_output1[513]=30;
  p_output1[514]=31;
  p_output1[515]=32;
  p_output1[516]=33;
  p_output1[517]=34;
  p_output1[518]=35;
  p_output1[519]=36;
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
  p_output1[531]=23;
  p_output1[532]=24;
  p_output1[533]=25;
  p_output1[534]=26;
  p_output1[535]=27;
  p_output1[536]=28;
  p_output1[537]=29;
  p_output1[538]=30;
  p_output1[539]=31;
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
  p_output1[559]=31;
  p_output1[560]=4;
  p_output1[561]=5;
  p_output1[562]=6;
  p_output1[563]=7;
  p_output1[564]=8;
  p_output1[565]=9;
  p_output1[566]=10;
  p_output1[567]=11;
  p_output1[568]=12;
  p_output1[569]=13;
  p_output1[570]=14;
  p_output1[571]=23;
  p_output1[572]=24;
  p_output1[573]=25;
  p_output1[574]=26;
  p_output1[575]=27;
  p_output1[576]=28;
  p_output1[577]=29;
  p_output1[578]=30;
  p_output1[579]=31;
  p_output1[580]=4;
  p_output1[581]=5;
  p_output1[582]=6;
  p_output1[583]=7;
  p_output1[584]=8;
  p_output1[585]=9;
  p_output1[586]=10;
  p_output1[587]=11;
  p_output1[588]=12;
  p_output1[589]=13;
  p_output1[590]=14;
  p_output1[591]=23;
  p_output1[592]=24;
  p_output1[593]=25;
  p_output1[594]=26;
  p_output1[595]=27;
  p_output1[596]=28;
  p_output1[597]=29;
  p_output1[598]=30;
  p_output1[599]=31;
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
  p_output1[631]=23;
  p_output1[632]=24;
  p_output1[633]=25;
  p_output1[634]=26;
  p_output1[635]=27;
  p_output1[636]=28;
  p_output1[637]=29;
  p_output1[638]=30;
  p_output1[639]=31;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 320, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec9_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ce2_vec9_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

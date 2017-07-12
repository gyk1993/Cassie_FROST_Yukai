/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:41:12 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t624;
  double t2728;
  double t2738;
  double t2747;
  double t2761;
  double t2809;
  double t2789;
  double t2792;
  double t2800;
  double t2772;
  double t2812;
  double t2820;
  double t2821;
  double t2638;
  double t2680;
  double t2681;
  double t2699;
  double t2636;
  double t2865;
  double t2868;
  double t2869;
  double t2832;
  double t2836;
  double t2837;
  double t2842;
  double t2851;
  double t2852;
  double t2856;
  double t2890;
  double t2891;
  double t2894;
  double t2898;
  double t2899;
  double t2902;
  double t2906;
  double t2911;
  double t2914;
  double t2915;
  double t2926;
  double t2927;
  double t2930;
  double t2934;
  double t2942;
  double t2947;
  double t2950;
  double t2951;
  double t2959;
  double t2960;
  double t2961;
  double t2963;
  double t2964;
  double t2965;
  double t2967;
  double t2970;
  double t2971;
  double t2972;
  double t2977;
  double t2978;
  double t2979;
  double t2981;
  double t2982;
  double t2983;
  double t2985;
  double t2988;
  double t2989;
  double t2990;
  double t2995;
  double t2996;
  double t2997;
  double t2693;
  double t2711;
  double t2712;
  double t3009;
  double t2752;
  double t2760;
  double t3012;
  double t2780;
  double t2781;
  double t3016;
  double t3017;
  double t3018;
  double t2841;
  double t2846;
  double t2847;
  double t3020;
  double t3021;
  double t3022;
  double t3024;
  double t3025;
  double t3026;
  double t2860;
  double t2861;
  double t2864;
  double t3011;
  double t3013;
  double t3014;
  double t3032;
  double t3033;
  double t3034;
  double t2883;
  double t2886;
  double t2887;
  double t2903;
  double t2907;
  double t2910;
  double t3028;
  double t3029;
  double t3030;
  double t3040;
  double t3041;
  double t3042;
  double t2919;
  double t2922;
  double t2923;
  double t2935;
  double t2938;
  double t2939;
  double t2943;
  double t2946;
  double t3044;
  double t3045;
  double t3046;
  double t3048;
  double t3049;
  double t3050;
  double t2955;
  double t2956;
  double t2957;
  double t2958;
  double t2966;
  double t2968;
  double t2969;
  double t3052;
  double t3053;
  double t3054;
  double t3056;
  double t3057;
  double t3058;
  double t2974;
  double t2975;
  double t2976;
  double t2984;
  double t2986;
  double t2987;
  double t3060;
  double t3061;
  double t3062;
  double t3064;
  double t3065;
  double t3066;
  double t2992;
  double t2993;
  double t2994;
  double t3068;
  double t3069;
  double t3070;
  double t3072;
  double t3073;
  double t3074;
  double t3091;
  double t3092;
  double t3093;
  double t3095;
  double t3096;
  double t3097;
  double t3099;
  double t3100;
  double t3101;
  double t3087;
  double t3088;
  double t3089;
  double t3107;
  double t3108;
  double t3109;
  double t3103;
  double t3104;
  double t3105;
  double t3115;
  double t3116;
  double t3117;
  double t3119;
  double t3120;
  double t3121;
  double t3123;
  double t3124;
  double t3125;
  double t3127;
  double t3128;
  double t3129;
  double t3131;
  double t3132;
  double t3133;
  double t3135;
  double t3136;
  double t3137;
  double t3139;
  double t3140;
  double t3141;
  double t3143;
  double t3144;
  double t3145;
  double t3147;
  double t3148;
  double t3149;
  double t3151;
  double t3152;
  double t3153;
  double t3155;
  double t3156;
  double t3157;
  t624 = Cos(var1[4]);
  t2728 = Sin(var1[14]);
  t2738 = Sin(var1[4]);
  t2747 = Cos(var1[14]);
  t2761 = Sin(var1[5]);
  t2809 = Sin(var1[15]);
  t2789 = t2728*t2738;
  t2792 = -1.*t2747*t624*t2761;
  t2800 = t2789 + t2792;
  t2772 = Cos(var1[15]);
  t2812 = t2747*t2738;
  t2820 = t624*t2728*t2761;
  t2821 = t2812 + t2820;
  t2638 = Cos(var1[16]);
  t2680 = -1.*t2638;
  t2681 = 1. + t2680;
  t2699 = Sin(var1[16]);
  t2636 = Cos(var1[5]);
  t2865 = t2772*t2800;
  t2868 = t2809*t2821;
  t2869 = t2865 + t2868;
  t2832 = Cos(var1[17]);
  t2836 = -1.*t2832;
  t2837 = 1. + t2836;
  t2842 = Sin(var1[17]);
  t2851 = -1.*t2809*t2800;
  t2852 = t2772*t2821;
  t2856 = t2851 + t2852;
  t2890 = t2638*t624*t2636;
  t2891 = -1.*t2699*t2869;
  t2894 = t2890 + t2891;
  t2898 = Cos(var1[18]);
  t2899 = -1.*t2898;
  t2902 = 1. + t2899;
  t2906 = Sin(var1[18]);
  t2911 = t2842*t2856;
  t2914 = t2832*t2894;
  t2915 = t2911 + t2914;
  t2926 = t2832*t2856;
  t2927 = -1.*t2842*t2894;
  t2930 = t2926 + t2927;
  t2934 = Cos(var1[19]);
  t2942 = Sin(var1[19]);
  t2947 = -1.*t2906*t2915;
  t2950 = t2898*t2930;
  t2951 = t2947 + t2950;
  t2959 = t2898*t2915;
  t2960 = t2906*t2930;
  t2961 = t2959 + t2960;
  t2963 = Cos(var1[20]);
  t2964 = -1.*t2963;
  t2965 = 1. + t2964;
  t2967 = Sin(var1[20]);
  t2970 = t2942*t2951;
  t2971 = t2934*t2961;
  t2972 = t2970 + t2971;
  t2977 = t2934*t2951;
  t2978 = -1.*t2942*t2961;
  t2979 = t2977 + t2978;
  t2981 = Cos(var1[21]);
  t2982 = -1.*t2981;
  t2983 = 1. + t2982;
  t2985 = Sin(var1[21]);
  t2988 = -1.*t2967*t2972;
  t2989 = t2963*t2979;
  t2990 = t2988 + t2989;
  t2995 = t2963*t2972;
  t2996 = t2967*t2979;
  t2997 = t2995 + t2996;
  t2693 = -0.049*t2681;
  t2711 = 0.135*t2699;
  t2712 = t2693 + t2711;
  t3009 = Sin(var1[3]);
  t2752 = -1.*t2747;
  t2760 = 1. + t2752;
  t3012 = Cos(var1[3]);
  t2780 = -1.*t2772;
  t2781 = 1. + t2780;
  t3016 = t3012*t2636;
  t3017 = -1.*t3009*t2738*t2761;
  t3018 = t3016 + t3017;
  t2841 = -0.09*t2837;
  t2846 = 0.049*t2842;
  t2847 = t2841 + t2846;
  t3020 = -1.*t624*t2728*t3009;
  t3021 = t2747*t3018;
  t3022 = t3020 + t3021;
  t3024 = -1.*t2747*t624*t3009;
  t3025 = -1.*t2728*t3018;
  t3026 = t3024 + t3025;
  t2860 = -0.135*t2681;
  t2861 = -0.049*t2699;
  t2864 = t2860 + t2861;
  t3011 = t2636*t3009*t2738;
  t3013 = t3012*t2761;
  t3014 = t3011 + t3013;
  t3032 = t2772*t3022;
  t3033 = t2809*t3026;
  t3034 = t3032 + t3033;
  t2883 = -0.049*t2837;
  t2886 = -0.09*t2842;
  t2887 = t2883 + t2886;
  t2903 = -0.049*t2902;
  t2907 = -0.21*t2906;
  t2910 = t2903 + t2907;
  t3028 = -1.*t2809*t3022;
  t3029 = t2772*t3026;
  t3030 = t3028 + t3029;
  t3040 = t2638*t3014;
  t3041 = -1.*t2699*t3034;
  t3042 = t3040 + t3041;
  t2919 = -0.21*t2902;
  t2922 = 0.049*t2906;
  t2923 = t2919 + t2922;
  t2935 = -1.*t2934;
  t2938 = 1. + t2935;
  t2939 = -0.2707*t2938;
  t2943 = 0.0016*t2942;
  t2946 = t2939 + t2943;
  t3044 = t2842*t3030;
  t3045 = t2832*t3042;
  t3046 = t3044 + t3045;
  t3048 = t2832*t3030;
  t3049 = -1.*t2842*t3042;
  t3050 = t3048 + t3049;
  t2955 = -1. + t2934;
  t2956 = 0.0016*t2955;
  t2957 = -0.2707*t2942;
  t2958 = t2956 + t2957;
  t2966 = 0.0184*t2965;
  t2968 = -0.7055*t2967;
  t2969 = t2966 + t2968;
  t3052 = -1.*t2906*t3046;
  t3053 = t2898*t3050;
  t3054 = t3052 + t3053;
  t3056 = t2898*t3046;
  t3057 = t2906*t3050;
  t3058 = t3056 + t3057;
  t2974 = -0.7055*t2965;
  t2975 = -0.0184*t2967;
  t2976 = t2974 + t2975;
  t2984 = -1.1135*t2983;
  t2986 = 0.0216*t2985;
  t2987 = t2984 + t2986;
  t3060 = t2942*t3054;
  t3061 = t2934*t3058;
  t3062 = t3060 + t3061;
  t3064 = t2934*t3054;
  t3065 = -1.*t2942*t3058;
  t3066 = t3064 + t3065;
  t2992 = -0.0216*t2983;
  t2993 = -1.1135*t2985;
  t2994 = t2992 + t2993;
  t3068 = -1.*t2967*t3062;
  t3069 = t2963*t3066;
  t3070 = t3068 + t3069;
  t3072 = t2963*t3062;
  t3073 = t2967*t3066;
  t3074 = t3072 + t3073;
  t3091 = t2636*t3009;
  t3092 = t3012*t2738*t2761;
  t3093 = t3091 + t3092;
  t3095 = t3012*t624*t2728;
  t3096 = t2747*t3093;
  t3097 = t3095 + t3096;
  t3099 = t2747*t3012*t624;
  t3100 = -1.*t2728*t3093;
  t3101 = t3099 + t3100;
  t3087 = -1.*t3012*t2636*t2738;
  t3088 = t3009*t2761;
  t3089 = t3087 + t3088;
  t3107 = t2772*t3097;
  t3108 = t2809*t3101;
  t3109 = t3107 + t3108;
  t3103 = -1.*t2809*t3097;
  t3104 = t2772*t3101;
  t3105 = t3103 + t3104;
  t3115 = t2638*t3089;
  t3116 = -1.*t2699*t3109;
  t3117 = t3115 + t3116;
  t3119 = t2842*t3105;
  t3120 = t2832*t3117;
  t3121 = t3119 + t3120;
  t3123 = t2832*t3105;
  t3124 = -1.*t2842*t3117;
  t3125 = t3123 + t3124;
  t3127 = -1.*t2906*t3121;
  t3128 = t2898*t3125;
  t3129 = t3127 + t3128;
  t3131 = t2898*t3121;
  t3132 = t2906*t3125;
  t3133 = t3131 + t3132;
  t3135 = t2942*t3129;
  t3136 = t2934*t3133;
  t3137 = t3135 + t3136;
  t3139 = t2934*t3129;
  t3140 = -1.*t2942*t3133;
  t3141 = t3139 + t3140;
  t3143 = -1.*t2967*t3137;
  t3144 = t2963*t3141;
  t3145 = t3143 + t3144;
  t3147 = t2963*t3137;
  t3148 = t2967*t3141;
  t3149 = t3147 + t3148;
  t3151 = t2985*t3145;
  t3152 = t2981*t3149;
  t3153 = t3151 + t3152;
  t3155 = t2981*t3145;
  t3156 = -1.*t2985*t3149;
  t3157 = t3155 + t3156;
  p_output1[0]=0.135*t2728*t2738 - 0.135*t2781*t2800 + 0.135*t2809*t2821 + t2847*t2856 + t2864*t2869 + t2887*t2894 + t2910*t2915 + t2923*t2930 + t2946*t2951 + t2958*t2961 + t2969*t2972 + t2976*t2979 + t2987*t2990 + t2994*t2997 + 0.0306*(t2985*t2990 + t2981*t2997) - 1.1312*(t2981*t2990 - 1.*t2985*t2997) + t2636*t2712*t624 + 0.135*t2760*t2761*t624 - 0.1305*(t2638*t2869 + t2636*t2699*t624) + var1[0] - 1.*var2[0];
  p_output1[1]=t2712*t3014 - 0.135*t2760*t3018 - 0.135*t2781*t3022 + 0.135*t2809*t3026 + t2847*t3030 + t2864*t3034 - 0.1305*(t2699*t3014 + t2638*t3034) + t2887*t3042 + t2910*t3046 + t2923*t3050 + t2946*t3054 + t2958*t3058 + t2969*t3062 + t2976*t3066 + t2987*t3070 + t2994*t3074 + 0.0306*(t2985*t3070 + t2981*t3074) - 1.1312*(t2981*t3070 - 1.*t2985*t3074) - 0.135*t2728*t3009*t624 + var1[1] - 1.*var2[1];
  p_output1[2]=t2712*t3089 - 0.135*t2760*t3093 - 0.135*t2781*t3097 + 0.135*t2809*t3101 + t2847*t3105 + t2864*t3109 - 0.1305*(t2699*t3089 + t2638*t3109) + t2887*t3117 + t2910*t3121 + t2923*t3125 + t2946*t3129 + t2958*t3133 + t2969*t3137 + t2976*t3141 + t2987*t3145 + t2994*t3149 + 0.0306*t3153 - 1.1312*t3157 + 0.135*t2728*t3012*t624 + var1[2] - 1.*var2[2];
  p_output1[3]=ArcTan(-0.766044*t3153 + 0.642788*t3157,0.642788*t3153 + 0.766044*t3157) - 1.*var2[3];
  p_output1[4]=ArcTan(-1.*t2638*t2869 - 1.*t2636*t2699*t624,-1.*t2699*t3014 - 1.*t2638*t3034) - 1.*var2[4];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightToeBottom_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void h_RightToeBottom_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

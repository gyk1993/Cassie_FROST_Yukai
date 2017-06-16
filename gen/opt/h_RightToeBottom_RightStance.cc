/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:29:06 GMT-04:00
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
  double t2583;
  double t2701;
  double t2706;
  double t2723;
  double t2736;
  double t2783;
  double t2763;
  double t2767;
  double t2772;
  double t2747;
  double t2787;
  double t2792;
  double t2796;
  double t2626;
  double t2634;
  double t2644;
  double t2672;
  double t2620;
  double t2835;
  double t2840;
  double t2841;
  double t2803;
  double t2806;
  double t2808;
  double t2813;
  double t2821;
  double t2823;
  double t2826;
  double t2860;
  double t2861;
  double t2864;
  double t2868;
  double t2869;
  double t2872;
  double t2876;
  double t2881;
  double t2884;
  double t2885;
  double t2896;
  double t2897;
  double t2900;
  double t2904;
  double t2912;
  double t2917;
  double t2920;
  double t2921;
  double t2927;
  double t2928;
  double t2929;
  double t2931;
  double t2932;
  double t2933;
  double t2935;
  double t2938;
  double t2939;
  double t2940;
  double t2945;
  double t2946;
  double t2947;
  double t2949;
  double t2950;
  double t2951;
  double t2953;
  double t2956;
  double t2957;
  double t2958;
  double t2963;
  double t2964;
  double t2965;
  double t2664;
  double t2678;
  double t2683;
  double t2977;
  double t2727;
  double t2732;
  double t2980;
  double t2752;
  double t2756;
  double t2984;
  double t2985;
  double t2986;
  double t2811;
  double t2816;
  double t2818;
  double t2988;
  double t2989;
  double t2990;
  double t2992;
  double t2993;
  double t2994;
  double t2830;
  double t2831;
  double t2834;
  double t2979;
  double t2981;
  double t2982;
  double t3000;
  double t3001;
  double t3002;
  double t2853;
  double t2856;
  double t2857;
  double t2873;
  double t2877;
  double t2880;
  double t2996;
  double t2997;
  double t2998;
  double t3008;
  double t3009;
  double t3010;
  double t2889;
  double t2892;
  double t2893;
  double t2905;
  double t2908;
  double t2909;
  double t2913;
  double t2916;
  double t3012;
  double t3013;
  double t3014;
  double t3016;
  double t3017;
  double t3018;
  double t2923;
  double t2924;
  double t2925;
  double t2926;
  double t2934;
  double t2936;
  double t2937;
  double t3020;
  double t3021;
  double t3022;
  double t3024;
  double t3025;
  double t3026;
  double t2942;
  double t2943;
  double t2944;
  double t2952;
  double t2954;
  double t2955;
  double t3028;
  double t3029;
  double t3030;
  double t3032;
  double t3033;
  double t3034;
  double t2960;
  double t2961;
  double t2962;
  double t3036;
  double t3037;
  double t3038;
  double t3040;
  double t3041;
  double t3042;
  double t3059;
  double t3060;
  double t3061;
  double t3063;
  double t3064;
  double t3065;
  double t3067;
  double t3068;
  double t3069;
  double t3055;
  double t3056;
  double t3057;
  double t3075;
  double t3076;
  double t3077;
  double t3071;
  double t3072;
  double t3073;
  double t3083;
  double t3084;
  double t3085;
  double t3087;
  double t3088;
  double t3089;
  double t3091;
  double t3092;
  double t3093;
  double t3095;
  double t3096;
  double t3097;
  double t3099;
  double t3100;
  double t3101;
  double t3103;
  double t3104;
  double t3105;
  double t3107;
  double t3108;
  double t3109;
  double t3111;
  double t3112;
  double t3113;
  double t3115;
  double t3116;
  double t3117;
  double t3119;
  double t3120;
  double t3121;
  double t3123;
  double t3124;
  double t3125;
  t2583 = Cos(var1[4]);
  t2701 = Sin(var1[14]);
  t2706 = Sin(var1[4]);
  t2723 = Cos(var1[14]);
  t2736 = Sin(var1[5]);
  t2783 = Sin(var1[15]);
  t2763 = t2701*t2706;
  t2767 = -1.*t2723*t2583*t2736;
  t2772 = t2763 + t2767;
  t2747 = Cos(var1[15]);
  t2787 = t2723*t2706;
  t2792 = t2583*t2701*t2736;
  t2796 = t2787 + t2792;
  t2626 = Cos(var1[16]);
  t2634 = -1.*t2626;
  t2644 = 1. + t2634;
  t2672 = Sin(var1[16]);
  t2620 = Cos(var1[5]);
  t2835 = t2747*t2772;
  t2840 = t2783*t2796;
  t2841 = t2835 + t2840;
  t2803 = Cos(var1[17]);
  t2806 = -1.*t2803;
  t2808 = 1. + t2806;
  t2813 = Sin(var1[17]);
  t2821 = -1.*t2783*t2772;
  t2823 = t2747*t2796;
  t2826 = t2821 + t2823;
  t2860 = t2626*t2583*t2620;
  t2861 = -1.*t2672*t2841;
  t2864 = t2860 + t2861;
  t2868 = Cos(var1[18]);
  t2869 = -1.*t2868;
  t2872 = 1. + t2869;
  t2876 = Sin(var1[18]);
  t2881 = t2813*t2826;
  t2884 = t2803*t2864;
  t2885 = t2881 + t2884;
  t2896 = t2803*t2826;
  t2897 = -1.*t2813*t2864;
  t2900 = t2896 + t2897;
  t2904 = Cos(var1[19]);
  t2912 = Sin(var1[19]);
  t2917 = -1.*t2876*t2885;
  t2920 = t2868*t2900;
  t2921 = t2917 + t2920;
  t2927 = t2868*t2885;
  t2928 = t2876*t2900;
  t2929 = t2927 + t2928;
  t2931 = Cos(var1[20]);
  t2932 = -1.*t2931;
  t2933 = 1. + t2932;
  t2935 = Sin(var1[20]);
  t2938 = t2912*t2921;
  t2939 = t2904*t2929;
  t2940 = t2938 + t2939;
  t2945 = t2904*t2921;
  t2946 = -1.*t2912*t2929;
  t2947 = t2945 + t2946;
  t2949 = Cos(var1[21]);
  t2950 = -1.*t2949;
  t2951 = 1. + t2950;
  t2953 = Sin(var1[21]);
  t2956 = -1.*t2935*t2940;
  t2957 = t2931*t2947;
  t2958 = t2956 + t2957;
  t2963 = t2931*t2940;
  t2964 = t2935*t2947;
  t2965 = t2963 + t2964;
  t2664 = -0.049*t2644;
  t2678 = 0.135*t2672;
  t2683 = t2664 + t2678;
  t2977 = Sin(var1[3]);
  t2727 = -1.*t2723;
  t2732 = 1. + t2727;
  t2980 = Cos(var1[3]);
  t2752 = -1.*t2747;
  t2756 = 1. + t2752;
  t2984 = t2980*t2620;
  t2985 = -1.*t2977*t2706*t2736;
  t2986 = t2984 + t2985;
  t2811 = -0.09*t2808;
  t2816 = 0.049*t2813;
  t2818 = t2811 + t2816;
  t2988 = -1.*t2583*t2701*t2977;
  t2989 = t2723*t2986;
  t2990 = t2988 + t2989;
  t2992 = -1.*t2723*t2583*t2977;
  t2993 = -1.*t2701*t2986;
  t2994 = t2992 + t2993;
  t2830 = -0.135*t2644;
  t2831 = -0.049*t2672;
  t2834 = t2830 + t2831;
  t2979 = t2620*t2977*t2706;
  t2981 = t2980*t2736;
  t2982 = t2979 + t2981;
  t3000 = t2747*t2990;
  t3001 = t2783*t2994;
  t3002 = t3000 + t3001;
  t2853 = -0.049*t2808;
  t2856 = -0.09*t2813;
  t2857 = t2853 + t2856;
  t2873 = -0.049*t2872;
  t2877 = -0.21*t2876;
  t2880 = t2873 + t2877;
  t2996 = -1.*t2783*t2990;
  t2997 = t2747*t2994;
  t2998 = t2996 + t2997;
  t3008 = t2626*t2982;
  t3009 = -1.*t2672*t3002;
  t3010 = t3008 + t3009;
  t2889 = -0.21*t2872;
  t2892 = 0.049*t2876;
  t2893 = t2889 + t2892;
  t2905 = -1.*t2904;
  t2908 = 1. + t2905;
  t2909 = -0.2707*t2908;
  t2913 = 0.0016*t2912;
  t2916 = t2909 + t2913;
  t3012 = t2813*t2998;
  t3013 = t2803*t3010;
  t3014 = t3012 + t3013;
  t3016 = t2803*t2998;
  t3017 = -1.*t2813*t3010;
  t3018 = t3016 + t3017;
  t2923 = -1. + t2904;
  t2924 = 0.0016*t2923;
  t2925 = -0.2707*t2912;
  t2926 = t2924 + t2925;
  t2934 = 0.0184*t2933;
  t2936 = -0.7055*t2935;
  t2937 = t2934 + t2936;
  t3020 = -1.*t2876*t3014;
  t3021 = t2868*t3018;
  t3022 = t3020 + t3021;
  t3024 = t2868*t3014;
  t3025 = t2876*t3018;
  t3026 = t3024 + t3025;
  t2942 = -0.7055*t2933;
  t2943 = -0.0184*t2935;
  t2944 = t2942 + t2943;
  t2952 = -1.1135*t2951;
  t2954 = 0.0216*t2953;
  t2955 = t2952 + t2954;
  t3028 = t2912*t3022;
  t3029 = t2904*t3026;
  t3030 = t3028 + t3029;
  t3032 = t2904*t3022;
  t3033 = -1.*t2912*t3026;
  t3034 = t3032 + t3033;
  t2960 = -0.0216*t2951;
  t2961 = -1.1135*t2953;
  t2962 = t2960 + t2961;
  t3036 = -1.*t2935*t3030;
  t3037 = t2931*t3034;
  t3038 = t3036 + t3037;
  t3040 = t2931*t3030;
  t3041 = t2935*t3034;
  t3042 = t3040 + t3041;
  t3059 = t2620*t2977;
  t3060 = t2980*t2706*t2736;
  t3061 = t3059 + t3060;
  t3063 = t2980*t2583*t2701;
  t3064 = t2723*t3061;
  t3065 = t3063 + t3064;
  t3067 = t2723*t2980*t2583;
  t3068 = -1.*t2701*t3061;
  t3069 = t3067 + t3068;
  t3055 = -1.*t2980*t2620*t2706;
  t3056 = t2977*t2736;
  t3057 = t3055 + t3056;
  t3075 = t2747*t3065;
  t3076 = t2783*t3069;
  t3077 = t3075 + t3076;
  t3071 = -1.*t2783*t3065;
  t3072 = t2747*t3069;
  t3073 = t3071 + t3072;
  t3083 = t2626*t3057;
  t3084 = -1.*t2672*t3077;
  t3085 = t3083 + t3084;
  t3087 = t2813*t3073;
  t3088 = t2803*t3085;
  t3089 = t3087 + t3088;
  t3091 = t2803*t3073;
  t3092 = -1.*t2813*t3085;
  t3093 = t3091 + t3092;
  t3095 = -1.*t2876*t3089;
  t3096 = t2868*t3093;
  t3097 = t3095 + t3096;
  t3099 = t2868*t3089;
  t3100 = t2876*t3093;
  t3101 = t3099 + t3100;
  t3103 = t2912*t3097;
  t3104 = t2904*t3101;
  t3105 = t3103 + t3104;
  t3107 = t2904*t3097;
  t3108 = -1.*t2912*t3101;
  t3109 = t3107 + t3108;
  t3111 = -1.*t2935*t3105;
  t3112 = t2931*t3109;
  t3113 = t3111 + t3112;
  t3115 = t2931*t3105;
  t3116 = t2935*t3109;
  t3117 = t3115 + t3116;
  t3119 = t2953*t3113;
  t3120 = t2949*t3117;
  t3121 = t3119 + t3120;
  t3123 = t2949*t3113;
  t3124 = -1.*t2953*t3117;
  t3125 = t3123 + t3124;
  p_output1[0]=t2583*t2620*t2683 + 0.135*t2701*t2706 + 0.135*t2583*t2732*t2736 - 0.135*t2756*t2772 + 0.135*t2783*t2796 + t2818*t2826 + t2834*t2841 - 0.1305*(t2583*t2620*t2672 + t2626*t2841) + t2857*t2864 + t2880*t2885 + t2893*t2900 + t2916*t2921 + t2926*t2929 + t2937*t2940 + t2944*t2947 + t2955*t2958 + t2962*t2965 + 0.0306*(t2953*t2958 + t2949*t2965) - 1.1312*(t2949*t2958 - 1.*t2953*t2965) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.135*t2583*t2701*t2977 + t2683*t2982 - 0.135*t2732*t2986 - 0.135*t2756*t2990 + 0.135*t2783*t2994 + t2818*t2998 + t2834*t3002 - 0.1305*(t2672*t2982 + t2626*t3002) + t2857*t3010 + t2880*t3014 + t2893*t3018 + t2916*t3022 + t2926*t3026 + t2937*t3030 + t2944*t3034 + t2955*t3038 + t2962*t3042 + 0.0306*(t2953*t3038 + t2949*t3042) - 1.1312*(t2949*t3038 - 1.*t2953*t3042) + var1[1] - 1.*var2[1];
  p_output1[2]=0.135*t2583*t2701*t2980 + t2683*t3057 - 0.135*t2732*t3061 - 0.135*t2756*t3065 + 0.135*t2783*t3069 + t2818*t3073 + t2834*t3077 - 0.1305*(t2672*t3057 + t2626*t3077) + t2857*t3085 + t2880*t3089 + t2893*t3093 + t2916*t3097 + t2926*t3101 + t2937*t3105 + t2944*t3109 + t2955*t3113 + t2962*t3117 + 0.0306*t3121 - 1.1312*t3125 + var1[2] - 1.*var2[2];
  p_output1[3]=ArcTan(-0.766044*t3121 + 0.642788*t3125,0.642788*t3121 + 0.766044*t3125) - 1.*var2[3];
  p_output1[4]=ArcTan(-1.*t2583*t2620*t2672 - 1.*t2626*t2841,-1.*t2672*t2982 - 1.*t2626*t3002) - 1.*var2[4];
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

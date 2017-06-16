/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:52 GMT-04:00
 */

#ifndef JS_HS_INT_DX_HH
#define JS_HS_INT_DX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void Js_hs_int_dx_raw(double *p_output1, const double *var1);

  inline void Js_hs_int_dx(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 308, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_hs_int_dx_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_HS_INT_DX_HH

/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:11:13 GMT-04:00
 */

#ifndef JS_XDISCRETEMAPLEFTIMPACT_HH
#define JS_XDISCRETEMAPLEFTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void Js_xDiscreteMapLeftImpact_raw(double *p_output1, const double *var1);

  inline void Js_xDiscreteMapLeftImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 40, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xDiscreteMapLeftImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XDISCRETEMAPLEFTIMPACT_HH

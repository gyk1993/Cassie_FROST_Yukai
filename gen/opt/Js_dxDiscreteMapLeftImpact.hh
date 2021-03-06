/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:14:47 GMT-04:00
 */

#ifndef JS_DXDISCRETEMAPLEFTIMPACT_HH
#define JS_DXDISCRETEMAPLEFTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void Js_dxDiscreteMapLeftImpact_raw(double *p_output1, const double *var1);

  inline void Js_dxDiscreteMapLeftImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1063, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxDiscreteMapLeftImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXDISCRETEMAPLEFTIMPACT_HH

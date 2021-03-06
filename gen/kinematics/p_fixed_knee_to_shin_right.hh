/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:21 GMT-04:00
 */

#ifndef P_FIXED_KNEE_TO_SHIN_RIGHT_HH
#define P_FIXED_KNEE_TO_SHIN_RIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void p_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1);

  inline void p_fixed_knee_to_shin_right(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_fixed_knee_to_shin_right_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_FIXED_KNEE_TO_SHIN_RIGHT_HH

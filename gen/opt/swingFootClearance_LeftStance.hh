/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:58 GMT-04:00
 */

#ifndef SWINGFOOTCLEARANCE_LEFTSTANCE_HH
#define SWINGFOOTCLEARANCE_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void swingFootClearance_LeftStance_raw(double *p_output1, const double *var1);

  inline void swingFootClearance_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    swingFootClearance_LeftStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // SWINGFOOTCLEARANCE_LEFTSTANCE_HH

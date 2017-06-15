/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:52 GMT-04:00
 */

#ifndef H_FOURBAR_LEFTSTANCE_HH
#define H_FOURBAR_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void h_fourBar_LeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void h_fourBar_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    h_fourBar_LeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_FOURBAR_LEFTSTANCE_HH

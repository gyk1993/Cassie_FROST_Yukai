/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:00 GMT-04:00
 */

#ifndef J_H_LEFTTOEBOTTOM_LEFTSTANCE_HH
#define J_H_LEFTTOEBOTTOM_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void J_h_LeftToeBottom_LeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_h_LeftToeBottom_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 57, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_h_LeftToeBottom_LeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_H_LEFTTOEBOTTOM_LEFTSTANCE_HH

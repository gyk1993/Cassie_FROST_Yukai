/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:39 GMT-04:00
 */

#ifndef SWINGTOEVELOCITY_Y_RIGHTSTANCE_HH
#define SWINGTOEVELOCITY_Y_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void SwingToeVelocity_y_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void SwingToeVelocity_y_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    SwingToeVelocity_y_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // SWINGTOEVELOCITY_Y_RIGHTSTANCE_HH
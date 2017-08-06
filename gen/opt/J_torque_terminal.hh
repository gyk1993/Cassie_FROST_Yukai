/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:34 GMT-04:00
 */

#ifndef J_TORQUE_TERMINAL_HH
#define J_TORQUE_TERMINAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void J_torque_terminal_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_torque_terminal(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 10, 1);
    assert_size_matrix(var3, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_torque_terminal_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TORQUE_TERMINAL_HH

/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:37 GMT-04:00
 */

#ifndef Q_TORSO_FUN_TERMINAL_HH
#define Q_TORSO_FUN_TERMINAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void q_torso_fun_terminal_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void q_torso_fun_terminal(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 1, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    q_torso_fun_terminal_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Q_TORSO_FUN_TERMINAL_HH

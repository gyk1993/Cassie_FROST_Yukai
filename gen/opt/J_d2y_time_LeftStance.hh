/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:50 GMT-04:00
 */

#ifndef J_D2Y_TIME_LEFTSTANCE_HH
#define J_D2Y_TIME_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void J_d2y_time_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9);

  inline void J_d2y_time_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6,const Eigen::VectorXd &var7,const Eigen::VectorXd &var8,const Eigen::VectorXd &var9)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);
    assert_size_matrix(var4, 22, 1);
    assert_size_matrix(var5, 60, 1);
    assert_size_matrix(var6, 2, 1);
    assert_size_matrix(var7, 1, 1);
    assert_size_matrix(var8, 1, 1);
    assert_size_matrix(var9, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 130, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_d2y_time_LeftStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data(),var7.data(),var8.data(),var9.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_D2Y_TIME_LEFTSTANCE_HH

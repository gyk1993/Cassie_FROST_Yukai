/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:55 GMT-04:00
 */

#ifndef PRIGHTTOEBOTTOMCONT_RIGHTSTANCE_HH
#define PRIGHTTOEBOTTOMCONT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void pRightToeBottomCont_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void pRightToeBottomCont_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 5);
    assert_size_matrix(var2, 1, 5);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pRightToeBottomCont_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PRIGHTTOEBOTTOMCONT_RIGHTSTANCE_HH

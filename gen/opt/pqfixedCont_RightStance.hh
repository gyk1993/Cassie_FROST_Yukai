/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:36 GMT-04:00
 */

#ifndef PQFIXEDCONT_RIGHTSTANCE_HH
#define PQFIXEDCONT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void pqfixedCont_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void pqfixedCont_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 4);
    assert_size_matrix(var2, 1, 4);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pqfixedCont_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PQFIXEDCONT_RIGHTSTANCE_HH

/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 12:56:11 GMT-04:00
 */

#ifndef XDISCRETEMAPRIGHTIMPACT_HH
#define XDISCRETEMAPRIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void xDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void xDiscreteMapRightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xDiscreteMapRightImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XDISCRETEMAPRIGHTIMPACT_HH

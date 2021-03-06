/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:11:07 GMT-04:00
 */

#ifndef DXMINUSCONT_LEFTIMPACT_HH
#define DXMINUSCONT_LEFTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void dxMinusCont_LeftImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxMinusCont_LeftImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxMinusCont_LeftImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXMINUSCONT_LEFTIMPACT_HH

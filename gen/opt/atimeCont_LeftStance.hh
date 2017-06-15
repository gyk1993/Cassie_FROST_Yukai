/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:37 GMT-04:00
 */

#ifndef ATIMECONT_LEFTSTANCE_HH
#define ATIMECONT_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void atimeCont_LeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void atimeCont_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 60);
    assert_size_matrix(var2, 1, 60);

	
    // - Outputs
    assert_size_matrix(p_output1, 60, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    atimeCont_LeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // ATIMECONT_LEFTSTANCE_HH

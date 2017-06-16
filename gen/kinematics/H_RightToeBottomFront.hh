/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:26 GMT-04:00
 */

#ifndef H_RIGHTTOEBOTTOMFRONT_HH
#define H_RIGHTTOEBOTTOMFRONT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void H_RightToeBottomFront_raw(double *p_output1, const double *var1);

  inline void H_RightToeBottomFront(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 4);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    H_RightToeBottomFront_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_RIGHTTOEBOTTOMFRONT_HH

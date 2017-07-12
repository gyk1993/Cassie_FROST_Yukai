/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:31 GMT-04:00
 */

#ifndef U_LEFTFOOTHEIGHT_RIGHTSTANCE_HH
#define U_LEFTFOOTHEIGHT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1);

  inline void u_leftFootHeight_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_leftFootHeight_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_LEFTFOOTHEIGHT_RIGHTSTANCE_HH

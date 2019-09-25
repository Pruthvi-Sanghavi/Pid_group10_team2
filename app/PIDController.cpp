/*@ 
/@file PIDController.cpp
/@author Ryan Bates, Pruthvikumar Sanghavi
/@brief This class controls the mobile robot with PID Values 
/@copyright 2019 Ryan Bates, Pruthvikumar Sanghavi
*/

#include <PIDController.hpp>
//@ Construct the PID Controller object 
/*@
   \@param startKP KP Value to initialize to
   \@param startKI KI Value to initialize to
   \@param startKD KD Value to initialize to
   \@param startPresentError PresentError Value to initialize to
   \@param startCumulativeError CumulativeError Value to initialize to
   \@param startLastError LastError Value to initialize to
*/
PIDController::PIDController(double startKP, double startKI, double startKD, double startPresentError, double startCummulativeError, double startLastError):
  kp{startKP}, 
  kd{startKD}, 
  ki{startKI}, 
  presentError{startPresentError}, 
  cummulativeError{startCummulativeError}, 
  lastError{startLastError}


{
  kp = startKP;
  kd = startKD;
  ki = startKI;
  presentError = startPresentError;
  cummulativeError = startCummulativeError;
  lastError = startLastError;
  
}
/*@
   \@param Computes the new speed
   \@return returns the new velocity
*/
double PIDController::compute(double targetSetpoint, double actualVelocity){
	

  return 0.0;
}

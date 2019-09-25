
#include <PIDController.hpp>

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

double PIDController::compute(double targetSetpoint, double actualVelocity){
	

  return 0.0;
}

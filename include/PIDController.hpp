#ifndef PIDCONTROLLER_
#define PIDCONTROLLER_

class PIDController {
   private:
  double kp, ki, kd, presentError, cummulativeError, lastError;
  
  public:
  double compute(double targetSetpoint, double actualVelocity);
	PIDController(double startKP, double startKI, double startKD, double startPresentError, double startCummulativeError, double startLastError);

};








#endif // PIDCONTROLLER_

/*
 *@file PIDController.cpp
 *@author Aruna Baijal, Ethan Quist
 *@brief This class controls the mobile robot with PID Values
 *@copyright 2019 Aruna Baijal, Ethan Quist
*/

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
  double error = targetSetpoint - actualVelocity;
  double cummError = PIDController::cummulativeError + error;
  double changeInError = error - PIDController::lastError;

  return PIDController::kp * error + PIDController::ki * cummError
      + PIDController::kd * changeInError;
}

/*@
 *@file PIDController.hpp
 *@author Aruna Baijal, Ethan Quist
 *@brief This class controls the mobile robot with PID Values
 *@copyright 2019 Aruna Baijal, Ethan Quist
*/
#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

class PIDController {
 private:
  double kp, ki, kd, presentError, cummulativeError, lastError;

 public:
  /*@
   *@param Computes the new speed
   *@return returns the new velocity
   */
  double compute(double targetSetpoint, double actualVelocity);
  //@ Construct the PID Controller object
  /*@
   *@param startKP KP Value to initialize to
   *@param startKI KI Value to initialize to
   *@param startKD KD Value to initialize to
   *@param startPresentError PresentError Value to initialize to
   *@param startCumulativeError CumulativeError Value to initialize to
   *@param startLastError LastError Value to initialize to
   */
  PIDController(double startKP, double startKI, double startKD,
                double startPresentError, double startCummulativeError,
                double startLastError);
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_

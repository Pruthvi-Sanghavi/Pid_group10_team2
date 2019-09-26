/* Copyright [2019] <Aruna Baijal, Ethan Quist>
 * main.cpp
 *
 *  Created on: Sep 14, 2019
 *      Author: Aruna Baijal, Ethan Quist
 */
#include <lib.hpp>

int main() {
  PIDController controller(1.0, 1.0, 1.0, 2.0, 1.5, 2.5);  // construct
                                                           // PID Controller
  std::cout << "PID Controller output:" << std::endl;
  std::cout << controller.compute(1, 0) << std::endl;  // output result
  return 0;
}

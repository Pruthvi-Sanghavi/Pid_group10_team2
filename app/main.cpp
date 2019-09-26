#include <lib.hpp>

int main()
{
  PIDController controller(1.0, 1.0, 1.0, 2.0, 1.5, 2.5);
  std::cout << "PID Controller output:" << std::endl;
  std::cout << controller.compute(1, 0) << std::endl;
  return 0;
}

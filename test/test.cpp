#include <gtest/gtest.h>
#include <PIDController.hpp>

TEST(trivialcomputetest, should_pass) {
  PIDController controller(0,0,0,0,0,0);
  EXPECT_DOUBLE_EQ(controller.compute(1,0),0);
  
}
TEST(simplecomputetest, should_pass) {
  PIDController controller(1.0,0.0,1.0,2.0,1.5,2.5);
  EXPECT_DOUBLE_EQ(controller.compute(1,0),-0.5);
  
}
TEST(computetest, should_pass) {
  PIDController controller(1.0,1.0,1.0,2.0,1.5,2.5);
  EXPECT_DOUBLE_EQ(controller.compute(1,0),2.0);
  
}


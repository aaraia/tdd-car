#include "pch.h"

//  car
#include "../../include/car.h"

TEST(CarTests, IgnitionOff) {
    using CarNS::Car;
    Car car;

    //  by default when a new car is made, its ignition should be off
    ASSERT_TRUE(car.IsIgnitionOn() == false);
}
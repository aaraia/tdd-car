#include "pch.h"

//  car
#include "../../include/car.h"

TEST(CarTests, IgnitionOff) {
    using CarNS::Car;
    Car car;

    //  by default when a new car is made, its ignition should be off
    ASSERT_TRUE(car.isIgnitionOn() == false);

    //  turn the car on and off
    car.ignition(true);
    car.ignition(false);

    //  ignition should still be off
    ASSERT_TRUE(car.isIgnitionOn() == false);
}
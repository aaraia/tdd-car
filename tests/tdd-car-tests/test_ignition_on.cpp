#include "pch.h"

//  car
#include "../../include/car.h"

TEST(CarTests, IgnitionOn) {
    using CarNS::Car;

    //  create a car
    Car car;

    //  turn on the ignition
    car.ignition(true);

    ASSERT_TRUE(car.isIgnitionOn());
}
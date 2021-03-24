#include "pch.h"

//  car
#include "../../include/car.h"

TEST(CarTests, IndicatorsOff) {
    using CarNS::Car;
    Car car;

    //  true the car on
    car.ignition(true);
    ASSERT_TRUE(car.isIgnitionOn());

    //  indicators should be off, as car has just been switched on
    bool left = true;
    bool right = false;
    ASSERT_TRUE(car.isInidcatorOn(left) == false);
    ASSERT_TRUE(car.isInidcatorOn(right) == false);

    //  switch on indicators
    car.indicator(left, true);
    ASSERT_TRUE(car.isInidcatorOn(left));

    car.indicator(right, true);
    ASSERT_TRUE(car.isInidcatorOn(right));

    //  switch off indicators
    car.indicator(left, false);
    ASSERT_TRUE(car.isInidcatorOn(left) == false);

    car.indicator(right, false);
    ASSERT_TRUE(car.isInidcatorOn(right) == false);

}
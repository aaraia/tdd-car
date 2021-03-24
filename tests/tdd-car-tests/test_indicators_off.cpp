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
    ASSERT_TRUE(car.isInidcatorOn(left) == false);
    ASSERT_TRUE(car.isInidcatorOn(!left) == false);

    //  switch on indicators
    car.indicator(left, true);
    ASSERT_TRUE(car.isInidcatorOn(left));

    car.indicator(!left, true);
    ASSERT_TRUE(car.isInidcatorOn(!left));

    //  switch off indicators
    car.indicator(left, false);
    ASSERT_TRUE(car.isInidcatorOn(left));

    car.indicator(!left, false);
    ASSERT_TRUE(car.isInidcatorOn(!left));

}
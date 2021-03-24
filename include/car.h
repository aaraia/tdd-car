#pragma once

namespace CarNS {

    class Car {
        bool m_on = false;

    public:
        bool isIgnitionOn() const { return m_on; }
        void ignition(const bool turnOn) { m_on = turnOn; }

        bool isInidcatorOn(const bool left) const { return false; }
        void indicator(const bool left, const bool state) {  }
    };
    
}

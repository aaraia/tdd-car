#pragma once

namespace CarNS {

    class Car {
        bool m_on = false;
        bool m_leftIndicator = false;
        bool m_rightIndicator = false;

    public:
        bool isIgnitionOn() const { return m_on; }
        void ignition(const bool turnOn) { m_on = turnOn; }

        bool isInidcatorOn(const bool left) const { return left ? m_leftIndicator : m_rightIndicator; }
        void indicator(const bool left, const bool state) { left ? (m_leftIndicator = state) : (m_rightIndicator = state); }
    };
    
}

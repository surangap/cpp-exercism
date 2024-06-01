#pragma once

namespace space_age {
const int EARTH_YEAR_IN_SECS = 31557600;
const double MERCURY_OP = 0.2408467;
const double VENUS_OP = 0.61519726;
const double MARS_OP = 1.8808158;
const double JUPITER_OP = 11.862615;
const double SATURN_OP = 29.447498;
const double URANUS_OP = 84.016846 ;
const double NEPTUNE_OP = 164.79132;



class space_age {
    public:
        space_age(long secs);
        int seconds() const;
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;

    private:
        double secs_;
};

// TODO: add your solution here

}  // namespace space_age

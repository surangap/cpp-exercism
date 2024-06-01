#include "space_age.h"

namespace space_age {


space_age::space_age(long secs) {
    secs_ = secs;
}

int space_age::seconds() const {
    return secs_;
}

double space_age::on_earth() const {
    return secs_/EARTH_YEAR_IN_SECS;
}

double space_age::on_mercury() const {
    return secs_/EARTH_YEAR_IN_SECS/MERCURY_OP;
}

double space_age::on_venus() const {
    return secs_/EARTH_YEAR_IN_SECS/VENUS_OP;
}

double space_age::on_mars() const {
    return secs_/EARTH_YEAR_IN_SECS/MARS_OP;
}

double space_age::on_jupiter() const {
    return secs_/EARTH_YEAR_IN_SECS/JUPITER_OP;
}

double space_age::on_saturn() const {
    return secs_/EARTH_YEAR_IN_SECS/SATURN_OP;
}

double space_age::on_uranus() const {
    return secs_/EARTH_YEAR_IN_SECS/URANUS_OP;
}

double space_age::on_neptune() const {
    return secs_/EARTH_YEAR_IN_SECS/NEPTUNE_OP;
}

}
// namespace space_age

//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_NORRIS_HPP
#define GRBMODELS_NORRIS_HPP

#include "utilities.hpp"

vd norrisOld(const vd & time_array, double amplitude, double rise_time, double decay_time);

vd norrisNew(const vd & time_array, double amplitude, double xi, double tau);

#endif //GRBMODELS_NORRIS_HPP

//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_NORRIS_HPP
#define GRBMODELS_NORRIS_HPP

#include "utilities.hpp"

vd norrisOld(const vd & time_array,
             double_t amplitude, double_t rise_time, double_t decay_time);

vd norrisNew(const vd & time_array,
             double_t amplitude, double_t xi, double_t tau);

#endif //GRBMODELS_NORRIS_HPP

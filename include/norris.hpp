//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_NORRIS_HPP
#define GRBMODELS_NORRIS_HPP

#include "utilities.hpp"

vd norrisOld(const vd & timeArray,
             double_t amplitude, double_t riseTime, double_t decayTime);

vd norrisNew(const vd & timeArray,
             double_t amplitude, double_t xi, double_t tau);

#endif //GRBMODELS_NORRIS_HPP

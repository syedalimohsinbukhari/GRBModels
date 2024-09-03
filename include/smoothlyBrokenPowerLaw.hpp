//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP
#define GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP

#include "utilities.hpp"

vd smoothlyBrokenPowerLaw(const vd & energy, double amplitude, double low_index, double break_energy, double high_index,
                          double break_scale = 0.3, double pivot_energy = 100.);

#endif //GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP

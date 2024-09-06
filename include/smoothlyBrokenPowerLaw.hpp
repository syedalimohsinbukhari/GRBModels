//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP
#define GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP

#include "utilities.hpp"

vd smoothlyBrokenPowerLaw(const vd & energy,
                          double_t amplitude, double_t low_index, double_t break_energy, double_t high_index,
                          double_t break_scale = 0.3, double_t pivot_energy = 100.);

#endif //GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP

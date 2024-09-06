//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_CUTOFFPOWERLAW_HPP
#define GRBMODELS_CUTOFFPOWERLAW_HPP

#include "utilities.hpp"

vd comptonizedEpeak(const vd & energy,
                    double_t amplitude, double_t peak_energy, double_t index, double_t pivot_energy = 100.);

#endif //GRBMODELS_CUTOFFPOWERLAW_HPP

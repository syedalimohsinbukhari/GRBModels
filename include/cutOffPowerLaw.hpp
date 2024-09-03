//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_CUTOFFPOWERLAW_HPP
#define GRBMODELS_CUTOFFPOWERLAW_HPP

#include "utilities.hpp"

vd comptonizedEpeak(const vd & energy, double amplitude, double peak_energy, double index, double pivot_energy = 100.);

#endif //GRBMODELS_CUTOFFPOWERLAW_HPP

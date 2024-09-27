//
// Created by syedalimohsinbukhari on 8/31/24.
//

#ifndef GRBMODELS_POWERLAW_HPP
#define GRBMODELS_POWERLAW_HPP

#include "utilities.hpp"

vd powerLaw(const vd & energy,
            double_t amplitude, double_t alpha, double_t pivotEnergy = 100.);

#endif //GRBMODELS_POWERLAW_HPP

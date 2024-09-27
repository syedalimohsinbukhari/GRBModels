//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP
#define GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP

#include "utilities.hpp"

vd smoothlyBrokenPowerLaw(const vd & energy,
                          double_t amplitude, double_t lowIndex, double_t breakEnergy, double_t highIndex,
                          double_t breakScale = 0.3, double_t pivotEnergy = 100.);

#endif //GRBMODELS_SMOOTHLYBROKENPOWERLAW_HPP

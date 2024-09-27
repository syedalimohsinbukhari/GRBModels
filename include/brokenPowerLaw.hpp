//
// Created by syedalimohsinbukhari on 8/31/24.
//

#ifndef GRBMODELS_BROKENPOWERLAW_HPP
#define GRBMODELS_BROKENPOWERLAW_HPP

#include "utilities.hpp"

vd brokenPowerLaw(const vd & energy,
                  double_t amplitude, double_t breakEnergy, double_t lowIndex, double_t highIndex,
                  double_t pivotEnergy = 100.);

vd brokenPowerLawTwoBreaks(const vd & energy,
                           double_t amplitude, double_t index1, double_t breakEnergy1, double_t midIndex,
                           double_t breakEnergy2, double_t index2, double_t pivotEnergy = 100.);

#endif //GRBMODELS_BROKENPOWERLAW_HPP

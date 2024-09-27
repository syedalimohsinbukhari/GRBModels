//
// Created by syedalimohsinbukhari on 9/3/24.
//


#ifndef GRBMODELS_CUTOFFS_HPP
#define GRBMODELS_CUTOFFS_HPP

#include "utilities.hpp"

static vd cutOff(const vd & energy,
                 double_t cutOffEnergy, double_t foldingEnergy, bool isLowEnergyCutoff);

vd lowEnergyCutOff(const vd & energy,
                   double_t cutOffEnergy, double_t foldingEnergy);

vd highEnergyCutOff(const vd & energy,
                    double_t cutOffEnergy, double_t foldingEnergy);

#endif //GRBMODELS_CUTOFFS_HPP
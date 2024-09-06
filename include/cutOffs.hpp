//
// Created by syedalimohsinbukhari on 9/3/24.
//


#ifndef GRBMODELS_CUTOFFS_HPP
#define GRBMODELS_CUTOFFS_HPP

#include "utilities.hpp"

static vd cutOff(const vd & energy,
                 double_t cutOff_energy, double_t folding_energy, bool isLowEnergyCutoff);

vd lowEnergyCutOff(const vd & energy,
                   double_t cutOff_energy, double_t folding_energy);

vd highEnergyCutOff(const vd & energy,
                    double_t cutOff_energy, double_t folding_energy);

#endif //GRBMODELS_CUTOFFS_HPP
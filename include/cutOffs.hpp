//
// Created by syedalimohsinbukhari on 9/3/24.
//


#ifndef GRBMODELS_CUTOFFS_HPP
#define GRBMODELS_CUTOFFS_HPP

#include <vector>

using vd = std::vector<double>;

vd lowEnergyCutOff(const vd & energy, double cutOff_energy, double folding_energy);

vd highEnergyCutOff(const vd & energy, double cutOff_energy, double folding_energy);

#endif //GRBMODELS_CUTOFFS_HPP
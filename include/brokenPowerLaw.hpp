//
// Created by syedalimohsinbukhari on 8/31/24.
//

#ifndef GRBMODELS_BROKENPOWERLAW_HPP
#define GRBMODELS_BROKENPOWERLAW_HPP

#include "utilities.hpp"

vd brokenPowerLaw(const vd & energy,
                  double_t amplitude, double_t break_energy, double_t low_index, double_t high_index,
                  double_t pivot_energy = 100.);

vd brokenPowerLawTwoBreaks(const vd & energy,
                           double_t amplitude, double_t index1, double_t break_energy1, double_t mid_index,
                           double_t break_energy2, double_t index2, double_t pivot_energy = 100.);

#endif //GRBMODELS_BROKENPOWERLAW_HPP

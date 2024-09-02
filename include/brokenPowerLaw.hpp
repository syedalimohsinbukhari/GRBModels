//
// Created by syedalimohsinbukhari on 8/31/24.
//

#ifndef GRBMODELS_BROKENPOWERLAW_HPP
#define GRBMODELS_BROKENPOWERLAW_HPP

#include <vector>

using vd = std::vector<double>;

vd brokenPowerLaw(const vd & energy, double amplitude, double break_energy, double low_index, double high_index,
                  double pivot_energy = 100.);

vd brokenPowerLawTwoBreaks(const vd & energy, double amplitude, double index1, double break_energy1, double mid_index,
                           double break_energy2, double index2, double pivot_energy = 100.);

#endif //GRBMODELS_BROKENPOWERLAW_HPP

//
// Created by syedalimohsinbukhari on 8/31/24.
//

#ifndef GRBMODELS_POWERLAW_HPP
#define GRBMODELS_POWERLAW_HPP

#include <vector>

using vd = std::vector<double>;

vd powerLaw(const vd & energy, double amplitude, double alpha, double pivot_energy = 100.);

#endif //GRBMODELS_POWERLAW_HPP

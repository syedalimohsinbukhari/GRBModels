//
// Created by syedalimohsinbukhari on 9/2/24.
//

#ifndef GRBMODELS_LOGNORMAL_HPP
#define GRBMODELS_LOGNORMAL_HPP

#include <vector>

using vd = std::vector<double>;

vd logNormalEnergy(const vd & energy, double amplitude, double mean, double sigma);

#endif //GRBMODELS_LOGNORMAL_HPP

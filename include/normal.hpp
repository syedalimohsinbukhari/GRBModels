//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_NORMAL_HPP
#define GRBMODELS_NORMAL_HPP

#include <vector>

using vd = std::vector<double>;

vd gaussian(const vd & energy, double amplitude, double central_energy, double fwhm);

vd gaussianLinearFWHM(const vd & energy, double amplitude, double central_energy, double fwhm, double slope);

#endif //GRBMODELS_NORMAL_HPP

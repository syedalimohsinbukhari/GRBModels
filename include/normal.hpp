//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_NORMAL_HPP
#define GRBMODELS_NORMAL_HPP

#include "utilities.hpp"

vd gaussian(const vd & energy,
            double_t amplitude, double_t centralEnergy, double_t fwhm);

vd gaussianStatistics(const vd & x, double_t amplitude, double_t mu, double_t sigma, bool normalize = true);

vd gaussianLinearFWHM(const vd & energy,
                      double_t amplitude, double_t centralEnergy, double_t fwhm, double_t slope);

#endif //GRBMODELS_NORMAL_HPP

//
// Created by syedalimohsinbukhari on 9/4/24.
//

#ifndef GRBMODELS_MAXWELLBOLTZMANN_HPP
#define GRBMODELS_MAXWELLBOLTZMANN_HPP

#include "utilities.hpp"

vd unNormalizedMaxwellBoltzmannDistribution(const vd & xArray,
                                            double_t a);

vd MaxwellBoltzmannDistributionPDF(const vd & xArray,
                                   double_t a);

vd MaxwellBoltzmannDistributionCDF(const vd & xArray,
                                   double_t a);

#endif //GRBMODELS_MAXWELLBOLTZMANN_HPP

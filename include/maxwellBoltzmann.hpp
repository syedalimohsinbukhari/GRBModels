//
// Created by syedalimohsinbukhari on 9/4/24.
//

#ifndef GRBMODELS_MAXWELLBOLTZMANN_HPP
#define GRBMODELS_MAXWELLBOLTZMANN_HPP

#include "utilities.hpp"

vd unNormalizedMaxwellBoltzmannDistribution(const vd & x_array, double a);

vd MaxwellBoltzmannDistributionPDF(const vd & x_array, double a);

vd MaxwellBoltzmannDistributionCDF(const vd & x_array, double a);

#endif //GRBMODELS_MAXWELLBOLTZMANN_HPP

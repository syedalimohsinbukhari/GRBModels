//
// Created by syedalimohsinbukhari on 9/4/24.
//

#ifndef GRBMODELS_WEIBULL_HPP
#define GRBMODELS_WEIBULL_HPP

#include "utilities.hpp"

vd weibullPDF(const vd & x_values, double lambda, double k);

vd weibullCDF(const vd & x_values, double lambda, double k);

#endif //GRBMODELS_WEIBULL_HPP

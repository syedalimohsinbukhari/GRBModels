//
// Created by syedalimohsinbukhari on 9/4/24.
//

#ifndef GRBMODELS_WEIBULL_HPP
#define GRBMODELS_WEIBULL_HPP

#include "utilities.hpp"

vd weibullPDF(const vd & x_values,
              double_t lambda, double_t k);

vd weibullCDF(const vd & x_values,
              double_t lambda, double_t k);

#endif //GRBMODELS_WEIBULL_HPP

//
// Created by syedalimohsinbukhari on 9/4/24.
//

#ifndef GRBMODELS_RAYLEIGH_HPP
#define GRBMODELS_RAYLEIGH_HPP

#include "utilities.hpp"

vd rayleighPDF(const vd & x_values,
               double_t sigma);

vd rayleighCDF(const vd & x_values,
               double_t sigma);

#endif //GRBMODELS_RAYLEIGH_HPP

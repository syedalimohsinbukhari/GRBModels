//
// Created by syedalimohsinbukhari on 9/4/24.
//

#ifndef GRBMODELS_RAYLEIGH_HPP
#define GRBMODELS_RAYLEIGH_HPP

#include "utilities.hpp"

vd rayleighPDF(const vd & xValues,
               double_t sigma);

vd rayleighCDF(const vd & xValues,
               double_t sigma);

#endif //GRBMODELS_RAYLEIGH_HPP

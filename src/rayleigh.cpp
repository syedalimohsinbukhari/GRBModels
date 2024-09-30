//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "rayleigh.hpp"
#include "weibull.hpp"

vd rayleighPDF(const vd &xValues,
               const double_t sigma) {
    return weibullPDF(xValues, sqrt(2) * sigma, 2);
}


vd rayleighCDF(const vd &xValues,
               const double_t sigma) {
    return weibullCDF(xValues, sqrt(2) * sigma, 2);
}
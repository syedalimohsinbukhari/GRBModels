//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "rayleigh.hpp"
#include "weibull.hpp"

vd rayleighPDF(const vd & x_values, double sigma) {
    return weibullPDF(x_values, sqrt(2) * sigma, 2);
}


vd rayleighCDF(const vd & x_values, double sigma) {
    return weibullCDF(x_values, sqrt(2) * sigma, 2);
}
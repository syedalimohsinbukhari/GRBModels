//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "weibull.hpp"

vd weibullPDF(const vd & x_values,
              const double_t lambda, const double_t k) {
    vd output = allocateVector(x_values);
    const double_t kOverLambda = k / lambda;
    
    for (double_t x : x_values) {
        if (x >= 0) {
            output.push_back(
              kOverLambda * pow(x / lambda, k - 1) * exp(-pow(x / lambda, k))
            );
        } else {
            output.push_back(0);
        }
    }
    return output;
}

vd weibullCDF(const vd & x_values,
              const double_t lambda, const double_t k) {
    vd output = allocateVector(x_values);
    
    for (double_t x : x_values) {
        if (x >= 0) {
            output.push_back(
              1 - exp(-pow(x / lambda, k))
            );
        } else {
            output.push_back(0);
        }
    }
    return output;
}

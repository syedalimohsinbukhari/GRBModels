//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "weibull.hpp"

vd weibullPDF(const vd & x_values, double lambda, double k) {
    vd output = allocateVector(x_values);
    const double kOverLambda = k / lambda;
    
    for (double x : x_values) {
        if (x >= 0) {
            double temp = pow(x / lambda, k - 1);
            output.push_back(kOverLambda * temp * exp(-pow(x / lambda, k)));
        } else {
            output.push_back(0);
        }
    }
    return output;
}

vd weibullCDF(const vd & x_values, double lambda, double k) {
    vd output = allocateVector(x_values);
    
    for (double x : x_values) {
        if (x >= 0) {
            output.push_back(1 - exp(-pow(x / lambda, k)));
        } else {
            output.push_back(0);
        }
    }
    return output;
}

//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "weibull.hpp"

vd weibullPDF(const vd &xValues,
              const double_t lambda, const double_t k) {
    vd output = allocateVector(xValues);
    const double_t kOverLambda = k / lambda;

    FOR_LOOP(xValues, {
        if (xValues[i] >= 0) {
            output[i] = kOverLambda * pow(xValues[i] / lambda, k - 1) * exp(-pow(xValues[i] / lambda, k));
        } else {
            output[i] = 0;
        }
    })

    return output;
}

vd weibullCDF(const vd &xValues,
              const double_t lambda, const double_t k) {
    vd output = allocateVector(xValues);

    FOR_LOOP(xValues, {
        if (xValues[i] >= 0) {
            output[i] = 1 - exp(-pow(xValues[i] / lambda, k));
        } else {
            output[i] = 0;
        }
    })

    return output;
}

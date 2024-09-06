//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "maxwellBoltzmann.hpp"

vd unNormalizedMaxwellBoltzmannDistribution(const vd & x_array,
                                            double_t a) {
    validateVector(x_array);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(x_array);
    
    const double_t denominator_factor = 2 * pow(a, 2);
    
    for (double_t x_ : x_array) {
        output.push_back(
          pow(x_, 2) * exp(-pow(x_, 2) / denominator_factor)
        );
    }
    
    return output;
}

vd MaxwellBoltzmannDistributionPDF(const vd & x_array,
                                   double_t a) {
    vd output = allocateVector(x_array);
    
    const double_t amplitude_factor = sqrt(2 / M_PI) * pow(a, 3);
    vd unNorm = unNormalizedMaxwellBoltzmannDistribution(x_array, a);
    
    for (double_t value : unNorm) {
        output.push_back(
          amplitude_factor * value
        );
    }
    
    return output;
}

vd MaxwellBoltzmannDistributionCDF(const vd & x_array,
                                   double_t a) {
    validateVector(x_array);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(x_array);
    
    const double_t denominator_factor = 2 * pow(a, 2);
    
    for (double_t x_ : x_array) {
        double_t erfValue = erf(x_ / (sqrt(2) * a));
        double_t amplitude_factor = sqrt(2 / M_PI) * (x_ / a);
        double_t exponential_factor = -pow(x_, 2) / denominator_factor;
        
        output.push_back(
          erfValue - (amplitude_factor * exp(exponential_factor))
        );
    }
    
    return output;
}

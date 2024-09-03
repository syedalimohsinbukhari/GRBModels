//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "maxwellBoltzmann.hpp"

vd unNormalizedMaxwellBoltzmannDistribution(const vd & x_array, double a) {
    validateVector(x_array);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(x_array);
    
    const double denominator_factor = 2 * pow(a, 2);
    
    for (double x_ : x_array) {
        output.push_back(pow(x_, 2) * exp(-pow(x_, 2) / denominator_factor));
    }
    
    return output;
}

vd MaxwellBoltzmannDistributionPDF(const vd & x_array, double a) {
    vd output = allocateVector(x_array);
    
    const double amplitude_factor = sqrt(2 / M_PI) * pow(a, 3);
    vd unNorm = unNormalizedMaxwellBoltzmannDistribution(x_array, a);
    
    for (double value : unNorm) {
        output.push_back(amplitude_factor * value);
    }
    
    return output;
}

vd MaxwellBoltzmannDistributionCDF(const vd & x_array, double a) {
    validateVector(x_array);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(x_array);
    
    const double denominator_factor = 2 * pow(a, 2);
    
    for (double x_ : x_array) {
        double erfValue = erf(x_ / (sqrt(2) * a));
        double amplitude_factor = sqrt(2 / M_PI) * (x_ / a);
        double exponential_factor = -pow(x_, 2) / denominator_factor;
        
        output.push_back(erfValue - (amplitude_factor * exp(exponential_factor)));
    }
    
    return output;
}

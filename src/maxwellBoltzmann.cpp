//
// Created by syedalimohsinbukhari on 9/4/24.
//

#include "maxwellBoltzmann.hpp"

vd unNormalizedMaxwellBoltzmannDistribution(const vd & xArray,
                                            double_t a) {
    validateVector(xArray);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(xArray);
    
    const double_t denominatorFactor = 2 * a * a;
    
    FOR_LOOP(xArray, {
        output[i] = (xArray[i] * xArray[i]) * exp(-(xArray[i] * xArray[i]) / denominatorFactor);
    })
    
    return output;
}

vd MaxwellBoltzmannDistributionPDF(const vd & xArray,
                                   double_t a) {
    validateVector(xArray);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(xArray);
    vd unNorm = unNormalizedMaxwellBoltzmannDistribution(xArray, a);
    
    const double_t amplitudeFactor = sqrt(2 / M_PI) * a * a * a;
    
    FOR_LOOP(unNorm, {
        output[i] = amplitudeFactor * unNorm[i];
    })
    
    return output;
}


vd MaxwellBoltzmannDistributionCDF(const vd & xArray,
                                   double_t a) {
    validateVector(xArray);
    valueShouldNotBeLessThanZero(a);
    
    vd output = allocateVector(xArray);
    const double_t denominator_factor = 2 * a * a;
    
    FOR_LOOP(xArray, {
        double_t erfValue = erf(xArray[i] / (sqrt(2) * a));
        double_t amplitudeFactor = sqrt(2 / M_PI) * (xArray[i] / a);
        double_t exponentialFactor = -(xArray[i] * xArray[i]) / denominator_factor;
        
        output[i] = erfValue - (amplitudeFactor * exp(exponentialFactor));
    })
    
    return output;
}

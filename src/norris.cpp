//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "norris.hpp"

vd norrisOld(const vd & timeArray,
             const double_t amplitude, const double_t riseTime, const double_t decayTime) {
    double_t xi = sqrt(riseTime / decayTime);
    double_t tau = sqrt(riseTime * decayTime);
    
    return norrisNew(timeArray, amplitude, xi, tau);
}

vd norrisNew(const vd & timeArray,
             const double_t amplitude, const double_t xi, const double_t tau) {
    vd output = allocateVector(timeArray);
    
    FOR_LOOP(timeArray, {
        double_t fraction1 = timeArray[i] / tau;
        double_t fraction2 = tau / timeArray[i];
        
        output[i] = amplitude * exp(-xi * (fraction1 + fraction2));
    })
    
    return output;
}

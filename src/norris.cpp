//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "norris.hpp"

vd norrisOld(const vd & timeArray,
             const double_t amplitude, const double_t rise_time, const double_t decay_time) {
    double_t xi = sqrt(rise_time / decay_time);
    double_t tau = sqrt(rise_time * decay_time);
    
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

//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "norris.hpp"

vd norrisOld(const vd & time_array,
             const double_t amplitude, const double_t rise_time, const double_t decay_time) {
    double_t xi = sqrt(rise_time / decay_time);
    double_t tau = sqrt(rise_time * decay_time);
    
    return norrisNew(time_array, amplitude, xi, tau);
}

vd norrisNew(const vd & time_array,
             const double_t amplitude, const double_t xi, const double_t tau) {
    vd output = allocateVector(time_array);
    
    for (double_t time_ : time_array) {
        double_t fraction1 = time_ / tau;
        double_t fraction2 = tau / time_;
        output.push_back(
          amplitude * exp(-xi * (fraction1 + fraction2))
        );
    }
    
    return output;
}

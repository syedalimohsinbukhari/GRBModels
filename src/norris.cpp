//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "norris.hpp"

vd norrisOld(const vd & time_array, const double amplitude, const double rise_time, const double decay_time) {
    double xi = sqrt(rise_time / decay_time);
    double tau = sqrt(rise_time * decay_time);
    
    return norrisNew(time_array, amplitude, xi, tau);
}

vd norrisNew(const vd & time_array, const double amplitude, const double xi, const double tau) {
    vd output = allocateVector(time_array);
    
    for (double time_ : time_array) {
        double fraction1 = time_ / tau;
        double fraction2 = tau / time_;
        output.push_back(amplitude * exp(-xi * (fraction1 + fraction2)));
    }
    
    return output;
}

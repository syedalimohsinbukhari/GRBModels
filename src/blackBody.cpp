//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "blackBody.hpp"
#include <cmath>

vd blackBody(const vd & energy, double amplitude, double temperature) {
    vd output;
    output.reserve(energy.size());
    
    for (double energy_ : energy) {
        double numerator = amplitude * pow(energy_, 2);
        double denominator = exp(energy_ / temperature) - 1;
        output.push_back(numerator / denominator);
    }
    
    return output;
}

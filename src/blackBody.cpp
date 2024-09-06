//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "blackBody.hpp"

vd blackBody(const vd & energy,
             double_t amplitude, double_t temperature) {
    vd output = allocateVector(energy);
    
    for (double_t energy_ : energy) {
        double_t numerator = amplitude * pow(energy_, 2);
        double_t denominator = exp(energy_ / temperature) - 1;
        output.push_back(numerator / denominator);
    }
    
    return output;
}

//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "blackBody.hpp"

vd blackBody(const vd & energy,
             double_t amplitude, double_t temperature) {
    vd output = allocateVector(energy);
    
    FOR_LOOP(energy, {
        output[i] = amplitude * pow(energy[i], 2) / (exp(energy[i] / temperature) - 1);
    })
    
    return output;
}

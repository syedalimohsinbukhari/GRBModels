//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "powerLaw.hpp"

vd powerLaw(const vd & energy,
            double_t amplitude, double_t alpha, double_t pivotEnergy) {
    vd output = allocateVector(energy);
    
    FOR_LOOP(energy, {
        output[i] = amplitude * pow(energy[i] / pivotEnergy, alpha);
    })
    
    return output;
}
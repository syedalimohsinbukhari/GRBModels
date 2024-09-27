//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "cutOffPowerLaw.hpp"

vd comptonizedEpeak(const vd & energy,
                    double_t amplitude, double_t peakEnergy, double_t index, double_t pivotEnergy) {
    vd output = allocateVector(energy);
    
    const double_t exponentialTerm = (2 + index) / peakEnergy;
    
    FOR_LOOP(energy, {
        output[i] = amplitude * exp(-energy[i] * exponentialTerm) * pow(energy[i] / pivotEnergy, index);
    })
    
    return output;
}

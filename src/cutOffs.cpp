//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "cutOffs.hpp"

vd lowEnergyCutOff(const vd & energy,
                   const double_t cutOffEnergy, const double_t foldingEnergy) {
    return cutOff(energy, cutOffEnergy, foldingEnergy, true);
}

vd highEnergyCutOff(const vd & energy,
                    const double_t cutOffEnergy, const double_t foldingEnergy) {
    return cutOff(energy, cutOffEnergy, foldingEnergy, false);
}

static vd cutOff(const vd & energy,
                 double_t cutOffEnergy, double_t foldingEnergy, bool isLowEnergyCutoff) {
    vd output = allocateVector(energy);
    
    const double_t energyCut = cutOffEnergy / foldingEnergy;
    
    // Use FOR_LOOP to iterate through energy values
    FOR_LOOP(energy, {
        if (isLowEnergyCutoff ? energy[i] <= cutOffEnergy : energy[i] > cutOffEnergy) {
            output[i] = pow(energy[i] / cutOffEnergy, energyCut) * exp((cutOffEnergy - energy[i]) / foldingEnergy);
        } else {
            output[i] = 1;
        }
    })
    
    return output;
}


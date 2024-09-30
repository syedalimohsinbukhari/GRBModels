//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "cutOffPowerLaw.hpp"

vd comptonizedEpeak(const vd &energy,
                    const double_t amplitude, const double_t peakEnergy, const double_t index, const double_t pivotEnergy) {
    vd output = allocateVector(energy);

    const double_t exponentialTerm = (2 + index) / peakEnergy;

    FOR_LOOP(energy, {
        output[i] = amplitude * exp(-energy[i] * exponentialTerm) * pow(energy[i] / pivotEnergy, index);
    })

    return output;
}

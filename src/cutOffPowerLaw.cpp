//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "cutOffPowerLaw.hpp"

vd comptonizedEpeak(const vd & energy,
                    double_t amplitude, double_t peakEnergy, double_t index, double_t pivotEnergy) {
    vd output = allocateVector(energy);
    
    const double_t exponentialTerm = (2 + index) / peakEnergy;
    
    for (double_t energy_ : energy) {
        output.push_back(
          amplitude * exp(-energy_ * exponentialTerm) * pow(energy_ / pivotEnergy, index)
        );
    }
    
    return output;
}

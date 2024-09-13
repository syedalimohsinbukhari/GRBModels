//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "bandGRB.hpp"

vd bandEpeak(const vd & energy,
             double_t amplitude, double_t peakEnergy, double_t lowIndex, double_t highIndex, double_t pivotEnergy) {
    vd output = allocateVector(energy);
    
    const double_t two_plus_low_index = 2.0 + lowIndex;
    const double_t cutoff = (lowIndex - highIndex) * peakEnergy / two_plus_low_index;
    const double_t exp_diff_indices = exp(highIndex - lowIndex);
    const double_t temp2_const = (lowIndex - highIndex) * peakEnergy / (pivotEnergy * two_plus_low_index);
    const double_t pow_temp2_const = pow(temp2_const, lowIndex - highIndex);
    
    FOR_LOOP(energy, {
        if (energy[i] < cutoff) {
            output[i] = amplitude * pow(energy[i] / pivotEnergy, lowIndex) * exp((two_plus_low_index * -energy[i]) / peakEnergy);
        } else {
            output[i] = amplitude * pow_temp2_const * exp_diff_indices * pow(energy[i] / pivotEnergy, highIndex);
        }
    })
    
    return output;
}

vd bandE0(const vd & energy,
          double_t amplitude, double_t breakEnergy, double_t lowIndex, double_t highIndex, double_t pivotEnergy) {
    double_t peakEnergy = (2 + lowIndex) * breakEnergy;
    return bandEpeak(energy, amplitude, peakEnergy, lowIndex, highIndex, pivotEnergy);
}

//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "brokenPowerLaw.hpp"

vd brokenPowerLaw(const vd &energy,
                  const double_t amplitude, const double_t breakEnergy, const double_t lowIndex, const double_t highIndex,
                  const double_t pivotEnergy) {
    vd output = allocateVector(energy);

    const double_t energyRatio = pow(breakEnergy / pivotEnergy, lowIndex);

    FOR_LOOP(energy, {
        if (energy[i] <= breakEnergy) {
            output[i] = amplitude * pow(energy[i] / pivotEnergy, lowIndex);
        } else {
            output[i] = amplitude * energyRatio * pow(energy[i] / breakEnergy, highIndex);
        }
    })

    return output;
}


vd brokenPowerLawTwoBreaks(const vd &energy,
                           const double_t amplitude, const double_t index1, const double_t breakEnergy1, const double_t midIndex,
                           const double_t breakEnergy2, const double_t index2, const double_t pivotEnergy) {
    vd output = allocateVector(energy);

    const double_t break1Pivot = pow(breakEnergy1 / pivotEnergy, index1);
    const double_t break1break2 = pow(breakEnergy1 / breakEnergy2, midIndex);

    FOR_LOOP(energy, {
        if (energy[i] <= breakEnergy1) {
            output[i] = amplitude * pow(energy[i] / pivotEnergy, index1);
        } else if (breakEnergy1 < energy[i] && energy[i] <= breakEnergy2) {
            output[i] = amplitude * break1Pivot * pow(energy[i] / breakEnergy1, midIndex);
        } else {
            output[i] = amplitude * break1Pivot * break1break2 * pow(energy[i] / breakEnergy2, index2);
        }
    })

    return output;
}

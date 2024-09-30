//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "smoothlyBrokenPowerLaw.hpp"

vd smoothlyBrokenPowerLaw(const vd &energy,
                          const double_t amplitude, const double_t lowIndex, const double_t breakEnergy, const double_t highIndex, const double_t breakScale,
                          const double_t pivotEnergy) {
    vd output = allocateVector(energy);

    const double_t m = (highIndex - lowIndex) / 2;
    const double_t b = (highIndex + lowIndex) / 2;

    const double_t logPivotRatio = log10(pivotEnergy / breakEnergy) / breakScale;
    const double_t betaPivot = m * breakScale * log(0.5 * (exp(logPivotRatio) + exp(-logPivotRatio)));

    FOR_LOOP(energy, {
        const double_t logEnergyRatio = log10(energy[i] / breakEnergy) / breakScale;
        const double_t beta = m * breakScale * log(0.5 * (exp(logEnergyRatio) + exp(-logEnergyRatio)));
        output[i] = amplitude * pow(energy[i] / pivotEnergy, b) * pow(10, beta - betaPivot);
    })

    return output;
}

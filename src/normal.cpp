//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "normal.hpp"

vd gaussian(const vd &energy,
            const double_t amplitude, const double_t centralEnergy, const double_t fwhm) {
    vd output = allocateVector(energy);

    const double_t sigma = fwhm / 2.35482;
    const double_t log10CentralEnergy = log10(centralEnergy);

    FOR_LOOP(energy, {
        const double_t numerator = log10(energy[i]) - log10CentralEnergy;
        output[i] = amplitude / (sqrt(2 * M_PI) * sigma) * exp(-0.5 * pow(numerator / sigma, 2));
    })

    return output;
}

vd gaussianLinearFWHM(const vd &energy,
                      const double_t amplitude, const double_t centralEnergy, const double_t fwhm, const double_t slope) {
    vd output = allocateVector(energy);

    const double_t log10CentralEnergy = log10(centralEnergy);// Pre-compute constant

    FOR_LOOP(energy, {
        const double_t energyValue = log10(energy[i]) - log10CentralEnergy;// Calculate the difference
        const double_t sigma = (fwhm + slope * energyValue) / 2;           // Compute sigma
        output[i] = amplitude / (sqrt(2 * M_PI) * sigma) * exp(-0.5 * pow(energyValue / sigma, 2));
    })

    return output;
}

vd gaussianStatistics(const vd &x, const double_t amplitude, const double_t mu, const double_t sigma, const bool normalize) {
    vd output = allocateVector(x);

    const double_t normalizationFactor = (normalize) ? (sigma * sqrt(2 * M_PI)) : 1.0;
    const double_t twoVariance = 2 * pow(sigma, 2);

    FOR_LOOP(x, {
        const double_t exponentFactor = pow(x[i] - mu, 2) / twoVariance;
        output[i] = (amplitude * exp(-exponentFactor)) / normalizationFactor;
    })

    return output;
}

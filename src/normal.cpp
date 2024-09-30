//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "normal.hpp"

vd gaussian(const vd & energy,
            double_t amplitude, double_t centralEnergy, double_t fwhm) {
    vd output = allocateVector(energy);
    
    double_t sigma = fwhm / 2.35482;
    double_t log10CentralEnergy = log10(centralEnergy);
    
    FOR_LOOP(energy, {
        double_t numerator = log10(energy[i]) - log10CentralEnergy;
        output[i] = amplitude / (sqrt(2 * M_PI) * sigma) * exp(-0.5 * pow(numerator / sigma, 2));
    })
    
    return output;
}

vd gaussianLinearFWHM(const vd & energy,
                      double_t amplitude, double_t centralEnergy, double_t fwhm, double_t slope) {
    vd output = allocateVector(energy);
    
    double_t log10CentralEnergy = log10(centralEnergy); // Pre-compute constant
    
    FOR_LOOP(energy, {
        double_t energyValue = log10(energy[i]) - log10CentralEnergy; // Calculate the difference
        double_t sigma = (fwhm + slope * energyValue) / 2; // Compute sigma
        output[i] = amplitude / (sqrt(2 * M_PI) * sigma) * exp(-0.5 * pow(energyValue / sigma, 2));
    })
    
    return output;
}

vd gaussianStatistics(const vd & x, double_t amplitude, double_t mu, double_t sigma, bool normalize) {
    vd output = allocateVector(x);
    
    double_t normalizationFactor = (normalize) ? (sigma * sqrt(2 * M_PI)) : 1.0;
    
    double_t twoVariance = 2 * pow(sigma, 2);
    
    FOR_LOOP(x, {
        double_t exponentFactor = pow(x[i] - mu, 2) / twoVariance;
        output[i] = (amplitude * exp(-exponentFactor)) / normalizationFactor;
    })
    
    return output;
}

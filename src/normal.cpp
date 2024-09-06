//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "normal.hpp"

vd gaussian(const vd & energy,
            double_t amplitude, double_t central_energy, double_t fwhm) {
    vd output = allocateVector(energy);
    
    double_t sigma = fwhm / 2.35482;
    
    const double_t normalization = amplitude / (sqrt(2 * M_PI) * sigma);
    
    for (double_t energy_ : energy) {
        double_t numerator = log10(energy_) - log10(central_energy);
        double_t denominator = sigma;
        output.push_back(
          normalization * exp(-0.5 * pow(numerator / denominator, 2))
        );
    }
    
    return output;
}

vd gaussianLinearFWHM(const vd & energy,
                      double_t amplitude, double_t central_energy, double_t fwhm, double_t slope) {
    vd output = allocateVector(energy);
    
    for (double_t energy_ : energy) {
        double_t energy_value = log10(energy_) - log10(central_energy);
        double_t sigma = (fwhm + slope * energy_value) / 2;
        const double_t normalization = amplitude / (sqrt((2 * M_PI) * sigma));
        output.push_back(
          normalization * exp(-0.5 * pow(energy_value / sigma, 2))
        );
    }
    return output;
}

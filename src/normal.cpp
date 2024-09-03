//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "normal.hpp"

vd gaussian(const vd & energy, double amplitude, double central_energy, double fwhm) {
    vd output = allocateVector(energy);
    
    double sigma = fwhm / 2.35482;
    
    const double normalization = amplitude / (sqrt(2 * M_PI) * sigma);
    
    for (double energy_ : energy) {
        double numerator = log10(energy_) - log10(central_energy);
        double denominator = sigma;
        output.push_back(normalization * exp(-0.5 * pow(numerator / denominator, 2)));
    }
    
    return output;
}

vd gaussianLinearFWHM(const vd & energy, double amplitude, double central_energy, double fwhm, double slope) {
    vd output = allocateVector(energy);
    
    for (double energy_ : energy) {
        double energy_value = log10(energy_) - log10(central_energy);
        double W = fwhm + slope * energy_value;
        double sigma = W / 2.35482;
        const double normalization = amplitude / (sqrt((2 * M_PI) * sigma));
        output.push_back(normalization * exp(-0.5 * pow(energy_value / sigma, 2)));
    }
    return output;
}

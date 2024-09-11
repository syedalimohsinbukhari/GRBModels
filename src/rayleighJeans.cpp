//
// Created by syedalimohsinbukhari on 9/11/24.
//

#include "rayleighJeans.hpp"
#include "constants.hpp"
#include "utilities.hpp"

vd rayleighJeansWavelength(const vd & wavelength, double_t temperature) {
    vd output = allocateVector(wavelength);
    
    const double_t numerator = 2 * SPEED_OF_LIGHT_IN_VACUUM * BOLTZMANN_CONSTANT * temperature;
    
    for (double lambda_ : wavelength) {
        output.push_back(numerator / int_pow(lambda_, 4));
    }
    
    return output;
}

vd rayleighJeansFrequency(const vd & frequency, double_t temperature) {
    vd output = allocateVector(frequency);
    const double_t fraction = (2 * BOLTZMANN_CONSTANT * temperature) / int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
    
    for (double_t freq_ : frequency) {
        output.push_back(fraction * int_pow(freq_, 2));
    }
    
    return output;
}

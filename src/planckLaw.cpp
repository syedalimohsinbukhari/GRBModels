//
// Created by syedalimohsinbukhari on 9/11/24.
//

#include "planckLaw.hpp"
#include "constants.hpp"

vd planckLawWavelength(const vd & wavelength, double_t temperature) {
    vd output = allocateVector(wavelength);
    
    const double_t amplitudeFactor = (2 * PLANCK_LENGTH * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2));
    const double_t exponent_fraction = (PLANCK_LENGTH * SPEED_OF_LIGHT_IN_VACUUM) / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(wavelength, {
        double_t amplitude = amplitudeFactor / int_pow(wavelength[i], 5);
        double_t exponential = exp(exponent_fraction / wavelength[i]) - 1;
        output[i] = amplitude / exponential;
    });
    
    return output;
}

vd planckLawFrequency(const vd & frequency, double_t temperature) {
    vd output = allocateVector(frequency);
    
    const double_t amplitudeFactor = (2 * PI * PLANCK_LENGTH) / int_pow(SPEED_OF_LIGHT_IN_VACUUM, 3);
    const double_t exponentFactor = PLANCK_LENGTH / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(frequency, {
        double_t amplitude = amplitudeFactor * int_pow(frequency[i], 3);
        double_t exponential = exp(exponentFactor * frequency[i]) - 1;
        output[i] = amplitude / exponential;
    })
    
    return output;
}

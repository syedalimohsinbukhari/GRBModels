//
// Created by syedalimohsinbukhari on 9/11/24.
//

#include "planckLaw.hpp"
#include "constants.hpp"

vd planckLawWavelength(const vd & wavelength, double_t temperature) {
    vd output = allocateVector(wavelength);
    
    const double_t amplitudeFactor = (2 * PLANCK_CONSTANT * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2));
    const double_t exponentFactor = (PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM) / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(wavelength, {
        double_t amplitude = amplitudeFactor / int_pow(wavelength[i], 5);
        double_t exponential = exp(exponentFactor / wavelength[i]) - 1;
        output[i] = amplitude / exponential;
    })
    
    return output;
}

vd planckLawFrequency(const vd & frequency, double_t temperature) {
    vd output = allocateVector(frequency);
    
    const double_t amplitudeFactor = (2 * PLANCK_CONSTANT) / int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
    const double_t exponentFactor = PLANCK_CONSTANT / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(frequency, {
        double_t amplitude = amplitudeFactor * frequency[i] * frequency[i] * frequency[i]; // removed int_pow to reduce function overhead
        double_t exponential = exp(exponentFactor * frequency[i]) - 1;
        output[i] = amplitude / exponential;
    })
    
    return output;
}

vd planckLawAngularFrequency(const vd & angularFrequency, double_t temperature) {
    vd output = allocateVector(angularFrequency);
    
    const double_t amplitudeFactor = REDUCED_PLANCK_CONSTANT / (4 * PI * PI * PI * SPEED_OF_LIGHT_IN_VACUUM * SPEED_OF_LIGHT_IN_VACUUM);
    const double_t exponentFactor = REDUCED_PLANCK_CONSTANT / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(angularFrequency, {
        double_t amplitude = amplitudeFactor * angularFrequency[i] * angularFrequency[i] * angularFrequency[i];
        double_t exponential = exp(exponentFactor * angularFrequency[i]) - 1;
        output[i] = amplitude / exponential;
    })
    
    return output;
}

vd planckLawAngularWavelength(const vd & angularWavelength, double_t temperature) {
    vd output = allocateVector(angularWavelength);
    
    const double_t amplitudeFactor = (REDUCED_PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM * SPEED_OF_LIGHT_IN_VACUUM) / (4 * PI * PI * PI);
    const double_t exponentFactor = (REDUCED_PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM) / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(angularWavelength, {
        double_t amplitude = amplitudeFactor / int_pow(angularWavelength[i], 5);
        double_t exponential = exp(exponentFactor / angularWavelength[i]) - 1;
        output[i] = amplitude / exponential;
    })
    
    return output;
}

vd intensityOfLight(const vd & frequency, double_t temperature) {
    vd output = allocateVector(frequency);
    
    const double_t amplitudeFactor = (2 * PLANCK_CONSTANT) / (SPEED_OF_LIGHT_IN_VACUUM * SPEED_OF_LIGHT_IN_VACUUM);
    const double_t exponentFactor = PLANCK_CONSTANT / (BOLTZMANN_CONSTANT * temperature);
    
    FOR_LOOP(frequency, {
        double_t amplitude = amplitudeFactor * frequency[i] * frequency[i] * frequency[i]; // removed int_pow to reduce function overhead
        double_t exponential = exp(exponentFactor * frequency[i]) - 1;
        output[i] = amplitude / exponential;
    })
    
    return output;
}

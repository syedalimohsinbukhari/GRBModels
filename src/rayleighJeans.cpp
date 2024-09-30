//
// Created by syedalimohsinbukhari on 9/11/24.
//

#include "rayleighJeans.hpp"
#include "constants.hpp"
#include "utilities.hpp"

vd rayleighJeansWavelength(const vd &wavelength,
                           const double_t temperature) {
    vd output = allocateVector(wavelength);

    const double_t numerator = 2 * SPEED_OF_LIGHT_IN_VACUUM * BOLTZMANN_CONSTANT * temperature;

    FOR_LOOP(wavelength, {
        output[i] = numerator / int_pow(wavelength[i], 4);
    })

    return output;
}

vd rayleighJeansFrequency(const vd &frequency,
                          const double_t temperature) {
    vd output = allocateVector(frequency);

    const double_t fraction = (2 * BOLTZMANN_CONSTANT * temperature) / int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);

    FOR_LOOP(frequency, {
        output[i] = fraction * frequency[i] * frequency[i];
    })

    return output;
}

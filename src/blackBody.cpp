//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "blackBody.hpp"

vd blackBody(const vd &energy,
             const double_t amplitude, const double_t temperature) {
    vd output = allocateVector(energy);

    FOR_LOOP(energy, {
        output[i] = (amplitude * energy[i] * energy[i]) / (exp(energy[i] / temperature) - 1);
    })

    return output;
}

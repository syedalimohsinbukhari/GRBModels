//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "powerLaw.hpp"

vd powerLaw(const vd & energy,
            double_t amplitude, double_t alpha, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    for (double_t energy_ : energy) {
        output.push_back(
          amplitude * pow(energy_ / pivot_energy, alpha)
        );
    }
    return output;
}

//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "cutOffPowerLaw.hpp"

vd comptonizedEpeak(const vd & energy,
                    double_t amplitude, double_t peak_energy, double_t index, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    const double_t exp_term = (2 + index) / peak_energy;
    
    for (double_t energy_ : energy) {
        output.push_back(
          amplitude * exp(-energy_ * exp_term) * pow(energy_ / pivot_energy, index)
        );
    }
    
    return output;
}

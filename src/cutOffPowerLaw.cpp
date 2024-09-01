//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "cutOffPowerLaw.hpp"
#include <cmath>

vd comptonizedEpeak(const vd & energy, double amplitude, double peak_energy, double index, double pivot_energy) {
    vd output;
    output.reserve(energy.size());
    
    const double exp_term = (2 + index) / peak_energy;
    
    for (double energy_ : energy) {
        output.push_back(amplitude * exp(-energy_ * exp_term) * pow(energy_ / pivot_energy, index));
    }
    
    return output;
}

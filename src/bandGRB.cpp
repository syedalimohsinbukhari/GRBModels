//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "bandGRB.hpp"

vd bandEpeak(const vd & energy, double amplitude, double peak_energy, double low_index, double high_index,
             double pivot_energy) {
    vd output = allocateVector(energy);
    
    const double two_plus_low_index = 2.0 + low_index;
    const double cutoff = (low_index - high_index) * peak_energy / two_plus_low_index;
    const double exp_diff_indices = exp(high_index - low_index);
    const double temp2_const = (low_index - high_index) * peak_energy / (pivot_energy * two_plus_low_index);
    const double pow_temp2_const = pow(temp2_const, low_index - high_index);
    
    for (double energy_ : energy) {
        if (energy_ < cutoff) {
            const double temp1 = ((two_plus_low_index) * -energy_) / peak_energy;
            output.push_back(amplitude * pow(energy_ / pivot_energy, low_index) * exp(temp1));
        } else {
            const double temp3 = exp_diff_indices * pow(energy_ / pivot_energy, high_index);
            output.push_back(amplitude * pow_temp2_const * temp3);
        }
    }
    
    return output;
}

vd bandE0(const vd & energy, double amplitude, double break_energy, double low_index, double high_index,
          double pivot_energy) {
    vd output = allocateVector(energy);
    
    const double peak_energy = (2 + low_index) * break_energy;
    
    return bandEpeak(energy, amplitude, peak_energy, low_index, high_index, pivot_energy);
}

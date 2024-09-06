//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "bandGRB.hpp"

vd bandEpeak(const vd & energy,
             double_t amplitude, double_t peak_energy, double_t low_index, double_t high_index, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    const double_t two_plus_low_index = 2.0 + low_index;
    const double_t cutoff = (low_index - high_index) * peak_energy / two_plus_low_index;
    const double_t exp_diff_indices = exp(high_index - low_index);
    const double_t temp2_const = (low_index - high_index) * peak_energy / (pivot_energy * two_plus_low_index);
    const double_t pow_temp2_const = pow(temp2_const, low_index - high_index);
    
    for (double_t energy_ : energy) {
        if (energy_ < cutoff) {
            const double_t temp1 = ((two_plus_low_index) * -energy_) / peak_energy;
            output.push_back(
              amplitude * pow(energy_ / pivot_energy, low_index) * exp(temp1)
            );
        } else {
            output.push_back(
              amplitude * pow_temp2_const * exp_diff_indices * pow(energy_ / pivot_energy, high_index)
            );
        }
    }
    
    return output;
}

vd bandE0(const vd & energy,
          double_t amplitude, double_t break_energy, double_t low_index, double_t high_index, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    const double_t peak_energy = (2 + low_index) * break_energy;
    
    return bandEpeak(energy, amplitude, peak_energy, low_index, high_index, pivot_energy);
}

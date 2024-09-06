//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "smoothlyBrokenPowerLaw.hpp"

vd smoothlyBrokenPowerLaw(const vd & energy,
                          double_t amplitude, double_t low_index, double_t break_energy, double_t high_index,
                          double_t break_scale, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    const double_t m = (high_index - low_index) / 2;
    const double_t b = (high_index + low_index) / 2;
    
    const double_t log_pivot_ratio = log10(pivot_energy / break_energy) / break_scale;
    const double_t temp_pivot = (exp(log_pivot_ratio) + exp(-log_pivot_ratio)) / 2;
    const double_t beta_pivot = m * break_scale * log(temp_pivot);
    
    for (double_t energy_ : energy) {
        double_t log_energy_ratio = log10(energy_ / break_energy) / break_scale;
        double_t temp_energy = (exp(log_energy_ratio) + exp(-log_energy_ratio)) / 2;
        double_t beta = m * break_scale * log(temp_energy);
        
        output.push_back(
          amplitude * pow(energy_ / pivot_energy, b) * pow(10, beta - beta_pivot)
        );
    }
    
    return output;
}

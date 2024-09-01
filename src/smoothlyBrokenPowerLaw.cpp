//
// Created by syedalimohsinbukhari on 9/1/24.
//

#include "smoothlyBrokenPowerLaw.hpp"
#include <vector>
#include <cmath>

using namespace std;
using vd = vector<double>;

vd smoothlyBrokenPowerLaw(const vd & energy, double amplitude, double low_index, double break_energy, double high_index,
                          double break_scale, double pivot_energy) {
    vd output;
    output.reserve(energy.size());
    
    const double m = (high_index - low_index) / 2;
    const double b = (high_index + low_index) / 2;
    
    const double log_pivot_ratio = log10(pivot_energy / break_energy) / break_scale;
    const double temp_pivot = (exp(log_pivot_ratio) + exp(-log_pivot_ratio)) / 2;
    const double beta_pivot = m * break_scale * log(temp_pivot);
    
    for (double energy_ : energy) {
        double log_energy_ratio = log10(energy_ / break_energy) / break_scale;
        double temp_energy = (exp(log_energy_ratio) + exp(-log_energy_ratio)) / 2;
        double beta = m * break_scale * log(temp_energy);
        
        output.push_back(amplitude * pow(energy_ / pivot_energy, b) * pow(10, beta - beta_pivot));
    }
    
    return output;
}

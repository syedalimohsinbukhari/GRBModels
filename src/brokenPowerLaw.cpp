//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "brokenPowerLaw.hpp"
#include <cmath>

vd brokenPowerLaw(const vd & energy, double amplitude, double break_energy, double low_index, double high_index,
                  double pivot_energy) {
    vd output;
    output.reserve(energy.size());
    
    for (double energy_ : energy) {
        if (energy_ <= break_energy) {
            output.push_back(amplitude * pow(energy_ / pivot_energy, low_index));
        } else {
            output.push_back(
              amplitude * pow(break_energy / pivot_energy, low_index) * pow(energy_ / break_energy, high_index));
        }
    }
    
    return output;
}

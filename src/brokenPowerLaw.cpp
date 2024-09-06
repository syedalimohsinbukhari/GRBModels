//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "brokenPowerLaw.hpp"

vd brokenPowerLaw(const vd & energy,
                  double_t amplitude, double_t break_energy, double_t low_index, double_t high_index,
                  double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    for (double_t energy_ : energy) {
        if (energy_ <= break_energy) {
            output.push_back(
              amplitude * pow(energy_ / pivot_energy, low_index)
            );
        } else {
            output.push_back(
              amplitude * pow(break_energy / pivot_energy, low_index) * pow(energy_ / break_energy, high_index)
            );
        }
    }
    
    return output;
}

vd brokenPowerLawTwoBreaks(const vd & energy,
                           double_t amplitude, double_t index1, double_t break_energy1, double_t mid_index,
                           double_t break_energy2, double_t index2, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    const double_t break1Pivot = pow(break_energy1 / pivot_energy, index1);
    const double_t break1break2 = pow(break_energy1 / break_energy2, mid_index);
    
    for (double_t energy_ : energy) {
        if (energy_ <= break_energy1) {
            output.push_back(
              amplitude * pow(energy_ / pivot_energy, index1)
            );
        } else if (break_energy1 < energy_ && energy_ <= break_energy2) {
            output.push_back(
              amplitude * break1Pivot * pow(energy_ / break_energy1, mid_index)
            );
        } else {
            output.push_back(
              amplitude * break1Pivot * break1break2 * pow(energy_ / break_energy2, index2)
            );
        }
    }
    
    return output;
}

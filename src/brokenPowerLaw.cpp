//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "brokenPowerLaw.hpp"

vd brokenPowerLaw(const vd & energy, double amplitude, double break_energy, double low_index, double high_index,
                  double pivot_energy) {
    vd output = allocateVector(energy);
    
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

vd brokenPowerLawTwoBreaks(const vd & energy, double amplitude, double index1, double break_energy1, double mid_index,
                           double break_energy2, double index2, double pivot_energy) {
    vd output = allocateVector(energy);
    
    const double break1Pivot = pow(break_energy1 / pivot_energy, index1);
    const double break1break2 = pow(break_energy1 / break_energy2, mid_index);
    
    for (double energy_ : energy) {
        if (energy_ <= break_energy1) {
            output.push_back(amplitude * pow(energy_ / pivot_energy, index1));
        } else if (break_energy1 < energy_ && energy_ <= break_energy2) {
            output.push_back(amplitude * break1Pivot * pow(energy_ / break_energy1, mid_index));
        } else {
            output.push_back(amplitude * break1Pivot * break1break2 * pow(energy_ / break_energy2, index2));
        }
    }
    
    return output;
}

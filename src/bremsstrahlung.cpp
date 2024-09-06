//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "bremsstrahlung.hpp"

vd opticallyThinThermalBremsstrahlung(const vd & energy,
                                      double_t amplitude, double_t electron_temperature, double_t pivot_energy) {
    vd output = allocateVector(energy);
    
    const double_t kT = electron_temperature;
    const double_t energyRatio = exp(pivot_energy / kT);
    
    for (double_t energy_ : energy) {
        output.push_back(
          amplitude * exp(-energy_ / kT) * energyRatio * pow(energy_ / pivot_energy, -1)
        );
    }
    
    return output;
}

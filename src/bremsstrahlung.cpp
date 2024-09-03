//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "bremsstrahlung.hpp"

vd opticallyThinThermalBremsstrahlung(const vd & energy, double amplitude, double electron_temperature,
                                      double pivot_energy) {
    vd output = allocateVector(energy);
    
    const double kT = electron_temperature;
    const double energyRatio = exp(pivot_energy / kT);
    
    for (double energy_ : energy) {
        output.push_back(amplitude * exp(-energy_ / kT) * energyRatio * pow(energy_ / pivot_energy, -1));
    }
    
    return output;
}

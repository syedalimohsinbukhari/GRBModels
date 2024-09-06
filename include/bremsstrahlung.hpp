//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_BREMSSTRAHLUNG_HPP
#define GRBMODELS_BREMSSTRAHLUNG_HPP

#include "utilities.hpp"

vd opticallyThinThermalBremsstrahlung(const vd & energy,
                                      double_t amplitude, double_t electron_temperature, double_t pivot_energy);

#endif //GRBMODELS_BREMSSTRAHLUNG_HPP

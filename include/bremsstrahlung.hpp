//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_BREMSSTRAHLUNG_HPP
#define GRBMODELS_BREMSSTRAHLUNG_HPP

#include "utilities.hpp"

vd opticallyThinThermalBremsstrahlung(const vd & energy,
                                      double_t amplitude, double_t electronTemperature, double_t pivotEnergy);

#endif //GRBMODELS_BREMSSTRAHLUNG_HPP

//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_BREMSSTRAHLUNG_HPP
#define GRBMODELS_BREMSSTRAHLUNG_HPP

#include <vector>

using vd = std::vector<double>;

vd opticallyThinThermalBremsstrahlung(const vd & energy, double amplitude, double electron_temperature,
                                      double pivot_energy);

#endif //GRBMODELS_BREMSSTRAHLUNG_HPP

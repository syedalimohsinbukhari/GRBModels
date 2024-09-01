//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_BANDGRB_HPP
#define GRBMODELS_BANDGRB_HPP

#include <vector>

using vd = std::vector<double>;

vd bandEpeak(const vd & energy, double amplitude, double peak_energy, double low_index, double high_index,
             double pivot_energy = 100.);


vd bandE0(const vd & energy, double amplitude, double break_energy, double low_index, double high_index,
          double pivot_energy = 100.);

#endif //GRBMODELS_BANDGRB_HPP

//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_BANDGRB_HPP
#define GRBMODELS_BANDGRB_HPP

#include "utilities.hpp"

vd bandEpeak(const vd & energy,
             double_t amplitude, double_t peak_energy, double_t low_index, double_t high_index,
             double_t pivot_energy = 100.);


vd bandE0(const vd & energy,
          double_t amplitude, double_t break_energy, double_t low_index, double_t high_index,
          double_t pivot_energy = 100.);

#endif //GRBMODELS_BANDGRB_HPP

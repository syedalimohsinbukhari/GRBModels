//
// Created by syedalimohsinbukhari on 9/1/24.
//

#ifndef GRBMODELS_BANDGRB_HPP
#define GRBMODELS_BANDGRB_HPP

#include "utilities.hpp"

vd bandEpeak(const vd & energy,
             double_t amplitude, double_t peakEnergy, double_t lowIndex, double_t highIndex,
             double_t pivotEnergy = 100.);


vd bandE0(const vd & energy,
          double_t amplitude, double_t breakEnergy, double_t lowIndex, double_t highIndex,
          double_t pivotEnergy = 100.);

#endif //GRBMODELS_BANDGRB_HPP

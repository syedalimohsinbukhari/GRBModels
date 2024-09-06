//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_UTILITIES_HPP
#define GRBMODELS_UTILITIES_HPP

#include <vector>
#include <cmath>
#include <algorithm>
#include <stdexcept>

using vd = std::vector<double_t>;

vd allocateVector(const vd & reference_vector);

void valueShouldNotBeLessThanZero(double_t value);

void validateVector(const vd & reference_vector);

#endif //GRBMODELS_UTILITIES_HPP

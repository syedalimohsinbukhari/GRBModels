//
// Created by syedalimohsinbukhari on 9/3/24.
//

#ifndef GRBMODELS_UTILITIES_HPP
#define GRBMODELS_UTILITIES_HPP

#include <vector>
#include <cmath>
#include <algorithm>
#include <stdexcept>

#define FOR_LOOP(vector, body) for (size_t i = 0; i < (vector).size(); ++i) { body }

using vd = std::vector<double_t>;

vd allocateVector(const vd & reference_vector);

void valueShouldNotBeLessThanZero(double_t value);

void validateVector(const vd & reference_vector);

double_t int_pow(double_t base, int exp);

#endif //GRBMODELS_UTILITIES_HPP

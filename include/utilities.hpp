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

const double_t PI_util = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421171;

using vd = std::vector<double_t>;

vd allocateVector(const vd & referenceVector);

void valueShouldNotBeLessThanZero(double_t value);

void validateVector(const vd & referenceVector);

double_t int_pow(double_t base, int exp);

#endif //GRBMODELS_UTILITIES_HPP

//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "utilities.hpp"

vd allocateVector(const vd & reference_vector) {
    vd vec(reference_vector.size());
    return vec;
}

void valueShouldNotBeLessThanZero(double_t value) {
    if (value <= 0) {
        throw std::invalid_argument("Value of 'value' must be greater than 0.");
    }
}

void validateVector(const vd & reference_vector) {
    size_t zeroCount = std::ranges::count(reference_vector, 0.0);
    
    if (zeroCount > 0) {
        throw std::invalid_argument("There exist a value of 0 in the vector, which is not allowed.");
    }
}

double_t int_pow(double_t base, int exp) {
    if (exp == 0)
        return 1;        // Any number to the power of 0 is 1
    if (exp < 0) {                 // Handle negative exponents
        base = 1 / base;
        exp = -exp;
    }
    double_t result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)          // If exp is odd, multiply the base with result
            result *= base;
        base *= base;              // Square the base
        exp /= 2;                  // Divide exponent by 2
    }
    return result;
}
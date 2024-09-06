//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "utilities.hpp"

vd allocateVector(const vd & reference_vector) {
    vd vec;
    vec.reserve(reference_vector.size());
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

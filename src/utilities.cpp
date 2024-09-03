//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "utilities.hpp"

vd allocateVector(const vd & reference_vector) {
    vd vec;
    vec.reserve(reference_vector.size());
    return vec;
}

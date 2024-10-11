//
// Created by syedalimohsinbukhari on 9/5/24.
//

#include <pybind11/pybind11.h>

namespace py = pybind11;

using namespace py;

void init_constants(module_ &m);

void init_formula(module_ &m);

PYBIND11_MODULE(cppModels, m) {
    init_constants(m);
    init_formula(m);
}

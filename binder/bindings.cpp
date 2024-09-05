//
// Created by syedalimohsinbukhari on 9/5/24.
//

#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_constants(py::module_ & m);

void init_formula(py::module_ & m);

PYBIND11_MODULE(GRBModels, m) {
    init_constants(m);
    init_formula(m);
}

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "powerLaw.hpp"
#include "brokenPowerLaw.hpp"
#include "smoothlyBrokenPowerLaw.hpp"
#include "bandGRB.hpp"
#include "cutOffPowerLaw.hpp"
#include "blackBody.hpp"
#include "logNormal.hpp"

namespace py = pybind11;

PYBIND11_MODULE(GRBModels, m) {
    m.def("powerLaw", &powerLaw, "A simple power-law function for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("alpha"),
          py::arg("pivot_energy") = 100.);
    
    m.def("brokenPowerLaw", &brokenPowerLaw, "A broken power-law function for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("break_energy"),
          py::arg("low_index"),
          py::arg("high_index"),
          py::arg("pivot_energy") = 100.);
    
    m.def("brokenPowerLawTwoBreaks", &brokenPowerLawTwoBreaks, "A doubly broken power-law function for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("index1"),
          py::arg("break_energy1"),
          py::arg("mid_index"),
          py::arg("break_energy2"),
          py::arg("index2"),
          py::arg("pivot_energy") = 100.);
    
    
    m.def("smoothlyBrokenPowerLaw", &smoothlyBrokenPowerLaw, "A smoothly broken power law function for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("low_index"),
          py::arg("break_energy"),
          py::arg("high_index"),
          py::arg("break_scale") = 0.3,
          py::arg("pivot_energy") = 100.);
    
    m.def("bandEpeak", &bandEpeak, "Band GRB peak energy parametrization for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("peak_energy"),
          py::arg("low_index"),
          py::arg("high_index"),
          py::arg("pivot_energy") = 100.);
    
    m.def("bandE0", &bandE0, "Band GRB old parametrization for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("break_energy"),
          py::arg("low_index"),
          py::arg("high_index"),
          py::arg("pivot_energy") = 100.);
    
    m.def("cutOffPowerLawEpeak", &comptonizedEpeak, "Cutoff power-law peak energy parametrization for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("peak_energy"),
          py::arg("low_index"),
          py::arg("pivot_energy") = 100.);
    
    m.def("blackBody", &blackBody, "Black body model for GRBs.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("temperature"));
    
    m.def("logNormal", &logNormalEnergy, "LogNormal implementation for GRB energy.",
          py::arg("energy"),
          py::arg("amplitude"),
          py::arg("mean"),
          py::arg("sigma"));
}

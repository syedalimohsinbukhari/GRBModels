#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "powerLaw.hpp"
#include "brokenPowerLaw.hpp"
#include "smoothlyBrokenPowerLaw.hpp"
#include "bandGRB.hpp"
#include "cutOffPowerLaw.hpp"
#include "blackBody.hpp"
#include "logNormal.hpp"
#include "normal.hpp"
#include "bremsstrahlung.hpp"
#include "cutOffs.hpp"

namespace py = pybind11;

using namespace py;

PYBIND11_MODULE(GRBModels, m) {
    m.def("powerLaw", &powerLaw, "A simple power-law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("alpha"),
          arg("pivot_energy") = 100.);
    
    m.def("brokenPowerLaw", &brokenPowerLaw, "A broken power-law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("break_energy"),
          arg("low_index"),
          arg("high_index"),
          arg("pivot_energy") = 100.);
    
    m.def("brokenPowerLawTwoBreaks", &brokenPowerLawTwoBreaks, "A doubly broken power-law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("index1"),
          arg("break_energy1"),
          arg("mid_index"),
          arg("break_energy2"),
          arg("index2"),
          arg("pivot_energy") = 100.);
    
    
    m.def("smoothlyBrokenPowerLaw", &smoothlyBrokenPowerLaw, "A smoothly broken power law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("low_index"),
          arg("break_energy"),
          arg("high_index"),
          arg("break_scale") = 0.3,
          arg("pivot_energy") = 100.);
    
    m.def("bandEpeak", &bandEpeak, "Band GRB peak energy parametrization for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("peak_energy"),
          arg("low_index"),
          arg("high_index"),
          arg("pivot_energy") = 100.);
    
    m.def("bandE0", &bandE0, "Band GRB old parametrization for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("break_energy"),
          arg("low_index"),
          arg("high_index"),
          arg("pivot_energy") = 100.);
    
    m.def("cutOffPowerLawEpeak", &comptonizedEpeak, "Cutoff power-law peak energy parametrization for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("peak_energy"),
          arg("low_index"),
          arg("pivot_energy") = 100.);
    
    m.def("blackBody", &blackBody, "Black body model for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("temperature"));
    
    m.def("logNormal", &logNormalEnergy, "LogNormal implementation for GRB energy.",
          arg("energy"),
          arg("amplitude"),
          arg("mean"),
          arg("sigma"));
    
    m.def("gaussian", &gaussian, "Energy dependant Gaussian fit.",
          arg("energy"),
          arg("amplitude"),
          arg("central_energy"),
          arg("fwhm"));
    
    m.def("gaussianLinearFWHM", &gaussianLinearFWHM, "Energy dependant Gaussian fit with linear FWHM.",
          arg("energy"),
          arg("amplitude"),
          arg("central_energy"),
          arg("fwhm"),
          arg("slope"));
    
    m.def("opticallyThinThermalBremsstrahlung", &opticallyThinThermalBremsstrahlung,
          "Optically-thin thermal Bremsstrahlung radiation fit",
          arg("energy"),
          arg("amplitude"),
          arg("electron_temperature"),
          arg("pivot_energy") = 100.);
    
    m.def("lowEnergyCutOff", &lowEnergyCutOff, "Low energy cutoff implementation.",
          arg("energy"),
          arg("cutOff_energy"),
          arg("folding_energy"));
    
    m.def("highEnergyCutOff", &highEnergyCutOff, "High energy cutoff implementation.",
          arg("energy"),
          arg("cutOff_energy"),
          arg("folding_energy"));
}

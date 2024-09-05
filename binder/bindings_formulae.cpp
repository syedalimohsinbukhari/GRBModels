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
#include "norris.hpp"
#include "maxwellBoltzmann.hpp"
#include "weibull.hpp"
#include "rayleigh.hpp"

#include "utilities.hpp"

namespace py = pybind11;

using namespace py;

void init_formula(module_ & m) {
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
    
    m.def("norrisOld", &norrisOld, "Old implementation of Norris formula, using rise and decay times.",
          arg("time_array"),
          arg("amplitude"),
          arg("rise_time"),
          arg("decay_time"));
    
    m.def("norrisNew", &norrisNew, "New implementation of Norris formula, using xi and tau factors.",
          arg("time_array"),
          arg("amplitude"),
          arg("xi"),
          arg("tau"));
    
    m.def("unNormalizedMaxwellBoltzmannDistribution", &unNormalizedMaxwellBoltzmannDistribution,
          "Un-normalized Maxwell-Boltzmann distribution",
          arg("x_array"),
          arg("a"));
    
    m.def("maxwellBoltzmannPDF", &MaxwellBoltzmannDistributionPDF, "Maxwell-Boltzmann distribution PDF.",
          arg("x_array"),
          arg("a"));
    
    m.def("maxwellBoltzmannCDF", &MaxwellBoltzmannDistributionCDF, "Maxwell-Boltzmann distribution CDF.",
          arg("x_array"),
          arg("a"));
    
    m.def("allocateVector", &allocateVector, "Vector allocation",
          arg("reference_vector"));
    
    m.def("valueShouldNotBeLessThanZero", &valueShouldNotBeLessThanZero,
          "Error checking function to avoid x <= 0.",
          arg("value"));
    
    m.def("validateVector", &validateVector, "For vector validation",
          arg("reference_vector"));
    
    m.def("weibullPDF", &weibullPDF, "Calculated PDF for Weibull distribution.",
          arg("x_values"),
          arg("lambda"),
          arg("k"));
    
    m.def("weibullCDF", &weibullCDF, "Calculated CDF for Weibull distribution.",
          arg("x_values"),
          arg("lambda"),
          arg("k"));
    
    m.def("rayleighPDF", &rayleighPDF, "Calculated PDF for Rayleigh distribution.",
          arg("x_values"),
          arg("sigma"));
    
    m.def("rayleighCDF", &rayleighCDF, "Calculated CDF for Rayleigh distribution.",
          arg("x_values"),
          arg("sigma"));
    
}

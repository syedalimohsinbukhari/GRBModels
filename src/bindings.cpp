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
#include "constants.hpp"

#include "utilities.hpp"

namespace py = pybind11;

using namespace py;

PYBIND11_MODULE(GRBModels, m) {
    py::module constants = m.def_submodule("constants", "Constants used in scientific calculations");
    
    constants.attr("PI") = PI;

    constants.attr("AVOGADRO_CONSTANT") = AVOGADRO_CONSTANT;
    constants.attr("NA") = NA;
    
    constants.attr("BOLTZMANN_CONSTANT") = BOLTZMANN_CONSTANT;
    constants.attr("kB") = kB;
    
    constants.attr("ELEMENTARY_CHARGE") = ELEMENTARY_CHARGE;
    constants.attr("e") = e;
    
    constants.attr("HYPERFINE_TRANSITION_FREQUENCY_OF_CESIUM") = HYPERFINE_TRANSITION_FREQUENCY_OF_CESIUM;
    
    constants.attr("LUMINOUS_EFFICACY") = LUMINOUS_EFFICACY;
    constants.attr("K_cal") = K_cal;
    
    constants.attr("PLANCK_CONSTANT") = PLANCK_CONSTANT;
    constants.attr("h") = h;
    
    constants.attr("REDUCED_PLANCK_CONSTANT") = REDUCED_PLANCK_CONSTANT;
    constants.attr("h_bar") = h_bar;
    
    constants.attr("SPEED_OF_LIGHT_IN_VACUUM") = SPEED_OF_LIGHT_IN_VACUUM;
    constants.attr("c") = c;
    
    constants.attr("STANDARD_ACCELERATION_OF_GRAVITY") = STANDARD_ACCELERATION_OF_GRAVITY;
    constants.attr("g") = g;
    
    constants.attr("STANDARD_ATMOSPHERE") = STANDARD_ATMOSPHERE;
    constants.attr("atm") = atm;
    
    constants.attr("STANDARD_STATE_PRESSURE") = STANDARD_STATE_PRESSURE;
    constants.attr("P") = P;
    
    constants.attr("NEWTONIAN_CONSTANT_OF_GRAVITATION") = NEWTONIAN_CONSTANT_OF_GRAVITATION;
    constants.attr("G") = G;
    
    constants.attr("REST_MASS_OF_ELECTRON") = REST_MASS_OF_ELECTRON;
    constants.attr("m_e") = m_e;
    
    constants.attr("REST_MASS_OF_PROTON") = REST_MASS_OF_PROTON;
    constants.attr("m_p") = m_p;
    
    constants.attr("PROTON_ELECTRON_MASS_RATIO") = PROTON_ELECTRON_MASS_RATIO;
    
    constants.attr("ALPHA_PARTICLE_MASS") = ALPHA_PARTICLE_MASS;
    constants.attr("m_HAlpha") = m_HAlpha;
    
    constants.attr("CLASSICAL_ELECTRON_RADIUS") = CLASSICAL_ELECTRON_RADIUS;
    constants.attr("r0") = r0;
    
    constants.attr("COMPTON_WAVELENGTH_OF_ELECTRON") = COMPTON_WAVELENGTH_OF_ELECTRON;
    constants.attr("COMPTON_FREQUENCY_OF_ELECTRON") = COMPTON_FREQUENCY_OF_ELECTRON;
    
    constants.attr("ATOMIC_MASS_UNIT") = ATOMIC_MASS_UNIT;
    constants.attr("amu") = amu;
    
    constants.attr("FINE_STRUCTURE_CONSTANT") = FINE_STRUCTURE_CONSTANT;
    constants.attr("alpha") = alpha;
    
    constants.attr("BOHR_RADIUS") = BOHR_RADIUS;
    constants.attr("a0") = a0;
    
    constants.attr("FARADAY_CONSTANT") = FARADAY_CONSTANT;
    constants.attr("F") = F;
    
    constants.attr("JOSEPHSON_CONSTANT") = JOSEPHSON_CONSTANT;
    constants.attr("K_J") = K_J;
    
    constants.attr("MAGNETIC_FLUX_QUANTUM") = MAGNETIC_FLUX_QUANTUM;
    constants.attr("phi0") = phi0;
    
    constants.attr("MOLAR_GAS_CONSTANT") = MOLAR_GAS_CONSTANT;
    constants.attr("R_gas") = R_gas;
    
    constants.attr("ELECTRON_CHARGE_TO_MASS_RATIO") = ELECTRON_CHARGE_TO_MASS_RATIO;
    
    constants.attr("RYDBERG_CONSTANT") = RYDBERG_CONSTANT;
    constants.attr("R_inf") = R_inf;
    
    constants.attr("GAS_CONSTANT") = GAS_CONSTANT;
    constants.attr("R") = R;
    
    constants.attr("STEFAN_BOLTZMANN_CONSTANT") = STEFAN_BOLTZMANN_CONSTANT;
    
    constants.attr("THOMSON_CROSS_SECTION_FOR_ELECTRON") = THOMSON_CROSS_SECTION_FOR_ELECTRON;
    
    constants.attr("VACUUM_MAGNETIC_PERMEABILITY") = VACUUM_MAGNETIC_PERMEABILITY;
    constants.attr("VACUUM_ELECTRIC_PERMITTIVITY") = VACUUM_ELECTRIC_PERMITTIVITY;
    
    constants.attr("VON_KLITZING_CONSTANT") = VON_KLITZING_CONSTANT;
    constants.attr("R_K") = R_K;
    
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

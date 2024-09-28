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
#include "rayleighJeans.hpp"
#include "planckLaw.hpp"

#include "utilities.hpp"

namespace py = pybind11;

using namespace py;

void init_formula(module_ & m) {
    m.def("powerLaw", &powerLaw, "A simple power-law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("alpha"),
          arg("pivotEnergy") = 100.);
    
    m.def("brokenPowerLaw", &brokenPowerLaw, "A broken power-law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("breakEnergy"),
          arg("lowIndex"),
          arg("highIndex"),
          arg("pivotEnergy") = 100.);
    
    m.def("brokenPowerLawTwoBreaks", &brokenPowerLawTwoBreaks, "A doubly broken power-law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("index1"),
          arg("breakEnergy1"),
          arg("midIndex"),
          arg("breakEnergy2"),
          arg("index2"),
          arg("pivotEnergy") = 100.);
    
    
    m.def("smoothlyBrokenPowerLaw", &smoothlyBrokenPowerLaw, "A smoothly broken power law function for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("lowIndex"),
          arg("breakEnergy"),
          arg("highIndex"),
          arg("breakScale") = 0.3,
          arg("pivotEnergy") = 100.);
    
    m.def("bandEpeak", &bandEpeak, "Band GRB peak energy parametrization for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("peakEnergy"),
          arg("lowIndex"),
          arg("highIndex"),
          arg("pivotEnergy") = 100.);
    
    m.def("bandE0", &bandE0, "Band GRB old parametrization for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("breakEnergy"),
          arg("lowIndex"),
          arg("highIndex"),
          arg("pivotEnergy") = 100.);
    
    m.def("cutOffPowerLawEpeak", &comptonizedEpeak, "Cutoff power-law peak energy parametrization for GRBs.",
          arg("energy"),
          arg("amplitude"),
          arg("peakEnergy"),
          arg("lowIndex"),
          arg("pivotEnergy") = 100.);
    
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
          arg("centralEnergy"),
          arg("fwhm"));
    
    m.def("gaussianLinearFWHM", &gaussianLinearFWHM, "Energy dependant Gaussian fit with linear FWHM.",
          arg("energy"),
          arg("amplitude"),
          arg("centralEnergy"),
          arg("fwhm"),
          arg("slope"));
    
    m.def("gaussianStatistics", &gaussianStatistics, "Normal gaussian function",
          arg("x"),
          arg("amplitude"),
          arg("mu"),
          arg("sigma"),
          arg("normalize"));

    m.def("opticallyThinThermalBremsstrahlung", &opticallyThinThermalBremsstrahlung, "Optically-thin thermal Bremsstrahlung radiation fit",
          arg("energy"),
          arg("amplitude"),
          arg("electronTemperature"),
          arg("pivotEnergy") = 100.);
    
    m.def("lowEnergyCutOff", &lowEnergyCutOff, "Low energy cutoff implementation.",
          arg("energy"),
          arg("cutOffEnergy"),
          arg("foldingEnergy"));
    
    m.def("highEnergyCutOff", &highEnergyCutOff, "High energy cutoff implementation.",
          arg("energy"),
          arg("cutOffEnergy"),
          arg("foldingEnergy"));
    
    m.def("norrisOld", &norrisOld, "Old implementation of Norris formula, using rise and decay times.",
          arg("timeArray"),
          arg("amplitude"),
          arg("riseTime"),
          arg("decayTime"));
    
    m.def("norrisNew", &norrisNew, "New implementation of Norris formula, using xi and tau factors.",
          arg("timeArray"),
          arg("amplitude"),
          arg("xi"),
          arg("tau"));
    
    m.def("unNormalizedMaxwellBoltzmannDistribution", &unNormalizedMaxwellBoltzmannDistribution, "Un-norm Maxwell-Boltzmann distribution",
          arg("xArray"),
          arg("a"));
    
    m.def("maxwellBoltzmannPDF", &MaxwellBoltzmannDistributionPDF, "Maxwell-Boltzmann distribution PDF.",
          arg("xArray"),
          arg("a"));
    
    m.def("maxwellBoltzmannCDF", &MaxwellBoltzmannDistributionCDF, "Maxwell-Boltzmann distribution CDF.",
          arg("xArray"),
          arg("a"));
    
    m.def("allocateVector", &allocateVector, "Vector allocation",
          arg("referenceVector"));
    
    m.def("valueShouldNotBeLessThanZero", &valueShouldNotBeLessThanZero, "Error checking function to avoid x <= 0.",
          arg("value"));
    
    m.def("validateVector", &validateVector, "For vector validation",
          arg("referenceVector"));
    
    m.def("weibullPDF", &weibullPDF, "Calculated PDF for Weibull distribution.",
          arg("xValues"),
          arg("lambda"),
          arg("k"));
    
    m.def("weibullCDF", &weibullCDF, "Calculated CDF for Weibull distribution.",
          arg("xValues"),
          arg("lambda"),
          arg("k"));
    
    m.def("rayleighPDF", &rayleighPDF, "Calculated PDF for Rayleigh distribution.",
          arg("xValues"),
          arg("sigma"));
    
    m.def("rayleighCDF", &rayleighCDF, "Calculated CDF for Rayleigh distribution.",
          arg("xValues"),
          arg("sigma"));
    
    m.def("rayleighJeansWavelength", &rayleighJeansWavelength, "Formula for Rayleigh-Jeans Law related to emission wavelength.",
          arg("wavelength"),
          arg("temperature"));
    
    m.def("rayleighJeansFrequency", &rayleighJeansFrequency, "Formula for Rayleigh-Jeans Law related to emission frequency.",
          arg("frequency"),
          arg("temperature"));
    
    m.def("planckLawWavelength", &planckLawWavelength, "Formula for Planck Law related to emission wavelength.",
          arg("wavelength"),
          arg("temperature"));
    
    m.def("planckLawFrequency", &planckLawFrequency, "Formula for Planck Law related to emission frequency.",
          arg("frequency"),
          arg("temperature"));
    
    m.def("planckLawAngularWavelength", &planckLawAngularWavelength, "Formula for Planck Law related to angular wavelength.",
          arg("angularWavelength"),
          arg("temperature"));
    
    m.def("planckLawAngularFrequency", &planckLawAngularFrequency, "Formula for Planck Law related to angular frequency.",
          arg("angularFrequency"),
          arg("temperature"));
    
    m.def("intensityOfLight", &intensityOfLight, "Formula for intensity of light from Planck law.",
          arg("frequency"),
          arg("temperature"));
}

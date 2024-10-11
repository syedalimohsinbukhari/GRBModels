//
// Created by syedalimohsinbukhari on 9/5/24.
//

#include <pybind11/pybind11.h>

#include "constants.hpp"

namespace py = pybind11;

using namespace py;

void init_constants(module_ &m) {
    const py::module_ constants = m.def_submodule("constants", "Constants used in scientific calculations");

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

    constants.attr("REST_MASS_OF_MUON") = REST_MASS_OF_MUON;
    constants.attr("m_mu") = m_mu;

    constants.attr("REST_MASS_OF_TAU") = REST_MASS_OF_TAU;
    constants.attr("m_tau") = m_tau;

    constants.attr("REST_MASS_OF_PROTON") = REST_MASS_OF_PROTON;
    constants.attr("m_p") = m_p;

    constants.attr("REST_MASS_OF_NEUTRON") = REST_MASS_OF_NEUTRON;
    constants.attr("m_n") = m_n;

    constants.attr("REST_MASS_OF_TOP_QUARK") = REST_MASS_OF_TOP_QUARK;
    constants.attr("m_tQuark") = m_tQuark;

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

    constants.attr("FIRST_RADIATION_CONSTANT") = FIRST_RADIATION_CONSTANT;
    constants.attr("c_1") = c_1;

    constants.attr("SECOND_RADIATION_CONSTANT") = SECOND_RADIATION_CONSTANT;
    constants.attr("c_2") = c_2;

    constants.attr("WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT") = WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT;
    constants.attr("wien_b") = wien_b;

    constants.attr("CONDUCTANCE_QUANTUM") = CONDUCTANCE_QUANTUM;
    constants.attr("G0") = G0;

    constants.attr("INVERSE_CONDUCTANCE_QUANTUM") = INVERSE_CONDUCTANCE_QUANTUM;
    constants.attr("G0_inv") = G0_inv;

    constants.attr("HARTREE_ENERGY") = HARTREE_ENERGY;
    constants.attr("E_h") = E_h;

    constants.attr("FERMI_COUPLING_CONSTANT") = FERMI_COUPLING_CONSTANT;

    constants.attr("PLANCK_MASS") = PLANCK_MASS;
    constants.attr("M_P") = M_P;

    constants.attr("PLANCK_LENGTH") = PLANCK_LENGTH;
    constants.attr("l_P") = l_P;

    constants.attr("TROPICAL_YEAR_SECONDS") = TROPICAL_YEAR_SECONDS;
    constants.attr("TROPICAL_YEAR_DAYS") = TROPICAL_YEAR_DAYS;
    constants.attr("SIDEREAL_YEAR") = SIDEREAL_YEAR;

    constants.attr("ASTRONOMICAL_UNIT") = ASTRONOMICAL_UNIT;
    constants.attr("AU") = AU;

    constants.attr("LIGHT_YEAR") = LIGHT_YEAR;
    constants.attr("ly") = ly;

    constants.attr("PARSEC") = PARSEC;
    constants.attr("PARSEC_LY") = PARSEC_IN_LY;
    constants.attr("pc") = parsec;

    constants.attr("SOLAR_MASS") = SOLAR_MASS;
    constants.attr("M_O") = M_O;

    constants.attr("SOLAR_RADIUS") = SOLAR_RADIUS;
    constants.attr("R_O") = R_O;

    constants.attr("SOLAR_CONSTANT") = SOLAR_CONSTANT;
    constants.attr("T_O") = T_O;

    constants.attr("SOLAR_LUMINOSITY") = SOLAR_LUMINOSITY;
    constants.attr("L_O") = L_O;

    constants.attr("MASS_OF_EARTH") = MASS_OF_EARTH;
    constants.attr("M_E") = M_e;

    constants.attr("RADIUS_OF_EARTH") = RADIUS_OF_EARTH;
    constants.attr("R_e") = R_e;

    constants.attr("SCHWARZSCHILD_RADIUS_OF_SUN") = SCHWARZSCHILD_RADIUS_OF_SUN;
    constants.attr("R_S") = R_S;

    constants.attr("SCHWARZSCHILD_RADIUS_OF_EARTH") = SCHWARZSCHILD_RADIUS_OF_EARTH;
    constants.attr("R_E") = R_E;
}
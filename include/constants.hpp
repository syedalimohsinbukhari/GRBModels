//
// Created by syedalimohsinbukhari on 9/5/24.
//

#pragma once

#include "utilities.hpp"

constexpr double_t PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421171;

constexpr double_t AVOGADRO_CONSTANT = 6.02214076e23;// per mole
constexpr double_t NA = AVOGADRO_CONSTANT;

constexpr double_t BOLTZMANN_CONSTANT = 1.380649e-23;// joules per kelvin
constexpr double_t kB = BOLTZMANN_CONSTANT;

constexpr double_t ELEMENTARY_CHARGE = 1.602176634e-19;// Coulomb
constexpr double_t e = ELEMENTARY_CHARGE;
constexpr double_t e2 = int_pow(e, 2);

constexpr double_t HYPERFINE_TRANSITION_FREQUENCY_OF_CESIUM = 9192631770;// hertz

constexpr double_t LUMINOUS_EFFICACY = 683;// lumen per watts
constexpr double_t K_cal = LUMINOUS_EFFICACY;

constexpr double_t PLANCK_CONSTANT = 6.62607015e-34;// joules second
constexpr double_t h = PLANCK_CONSTANT;

constexpr double_t REDUCED_PLANCK_CONSTANT = 1.054571817e-34;
constexpr double_t h_bar = REDUCED_PLANCK_CONSTANT;

constexpr double_t SPEED_OF_LIGHT_IN_VACUUM = 299792458;// meter per second
constexpr double_t c = SPEED_OF_LIGHT_IN_VACUUM;
constexpr double_t c2 = int_pow(c, 2);
constexpr double_t c3 = int_pow(c, 3);

constexpr double_t STANDARD_ACCELERATION_OF_GRAVITY = 9.80665;// meter per second squared
constexpr double_t g = STANDARD_ACCELERATION_OF_GRAVITY;

constexpr double_t STANDARD_ATMOSPHERE = 101325;// pascals
constexpr double_t atm = STANDARD_ATMOSPHERE;

constexpr double_t STANDARD_STATE_PRESSURE = 100000;// pascals
constexpr double_t P = STANDARD_STATE_PRESSURE;

constexpr double_t NEWTONIAN_CONSTANT_OF_GRAVITATION = 6.67430e-11;// newton meter squared per kilogram squared
constexpr double_t G = NEWTONIAN_CONSTANT_OF_GRAVITATION;

constexpr double_t REST_MASS_OF_ELECTRON = 9.1093837139E-31;// KG
constexpr double_t m_e = REST_MASS_OF_ELECTRON;

constexpr double_t REST_MASS_OF_MUON = 1.883531627e-28;// kg
constexpr double_t m_mu = REST_MASS_OF_MUON;

constexpr double_t REST_MASS_OF_TAU = 3.16754e-27;// kg
constexpr double_t m_tau = REST_MASS_OF_TAU;

constexpr double_t REST_MASS_OF_PROTON = 1.67262192595e27;// kg
constexpr double_t m_p = REST_MASS_OF_PROTON;

constexpr double_t REST_MASS_OF_NEUTRON = 1.67492750056e-27;// kg
constexpr double_t m_n = REST_MASS_OF_NEUTRON;

constexpr double_t REST_MASS_OF_TOP_QUARK = 3.0784e-25;// kg
constexpr double_t m_tQuark = REST_MASS_OF_TOP_QUARK;

constexpr double_t PROTON_ELECTRON_MASS_RATIO = REST_MASS_OF_PROTON / REST_MASS_OF_ELECTRON;

constexpr double_t ALPHA_PARTICLE_MASS = 6.6446573450e-27;// kg
constexpr double_t m_HAlpha = ALPHA_PARTICLE_MASS;

constexpr double_t CLASSICAL_ELECTRON_RADIUS = e2 / (REST_MASS_OF_ELECTRON * c2);// meters
constexpr double_t r0 = CLASSICAL_ELECTRON_RADIUS;

constexpr double_t COMPTON_WAVELENGTH_OF_ELECTRON = 2.42631023538e-12;// meters
constexpr double_t COMPTON_FREQUENCY_OF_ELECTRON = SPEED_OF_LIGHT_IN_VACUUM / COMPTON_WAVELENGTH_OF_ELECTRON;

constexpr double_t ATOMIC_MASS_UNIT = 1.660531e-24;// g
constexpr double_t amu = ATOMIC_MASS_UNIT;

constexpr double_t FINE_STRUCTURE_CONSTANT = 1 / 137.;
constexpr double_t alpha = FINE_STRUCTURE_CONSTANT;

constexpr double_t BOHR_RADIUS = REDUCED_PLANCK_CONSTANT / (FINE_STRUCTURE_CONSTANT * REST_MASS_OF_ELECTRON * SPEED_OF_LIGHT_IN_VACUUM);// meters
constexpr double_t a0 = BOHR_RADIUS;

constexpr double_t FARADAY_CONSTANT = AVOGADRO_CONSTANT * ELEMENTARY_CHARGE;
constexpr double_t F = FARADAY_CONSTANT;

constexpr double_t JOSEPHSON_CONSTANT = (2 * ELEMENTARY_CHARGE) / PLANCK_CONSTANT;
constexpr double_t K_J = JOSEPHSON_CONSTANT;

constexpr double_t MAGNETIC_FLUX_QUANTUM = (2 * PI * REDUCED_PLANCK_CONSTANT) / (2 * ELEMENTARY_CHARGE);
constexpr double_t phi0 = MAGNETIC_FLUX_QUANTUM;

constexpr double_t MOLAR_GAS_CONSTANT = AVOGADRO_CONSTANT * BOLTZMANN_CONSTANT;
constexpr double_t R_gas = MOLAR_GAS_CONSTANT;

constexpr double_t ELECTRON_CHARGE_TO_MASS_RATIO = ELEMENTARY_CHARGE / REST_MASS_OF_ELECTRON;

constexpr double_t RYD_numerator = int_pow(FINE_STRUCTURE_CONSTANT, 2) * REST_MASS_OF_ELECTRON * SPEED_OF_LIGHT_IN_VACUUM;
constexpr double_t RYD_denominator = 2 * PLANCK_CONSTANT;
constexpr double_t RYDBERG_CONSTANT = RYD_numerator / RYD_denominator;// per centimeter
constexpr double_t R_inf = RYDBERG_CONSTANT;

constexpr double_t GAS_CONSTANT = AVOGADRO_CONSTANT * BOLTZMANN_CONSTANT;// erg per kelvin per mole
constexpr double_t R = GAS_CONSTANT;

constexpr double_t SB_numerator = 2 * int_pow(PI, 5) * int_pow(BOLTZMANN_CONSTANT, 4);
constexpr double_t SB_denominator = 15 * c2 * int_pow(PLANCK_CONSTANT, 3);
constexpr double_t STEFAN_BOLTZMANN_CONSTANT = SB_numerator / SB_denominator;

constexpr double_t THOMSON_CROSS_SECTION_FOR_ELECTRON = (8. / 3.) * int_pow(FINE_STRUCTURE_CONSTANT, 4) * int_pow(BOHR_RADIUS, 2);

constexpr double_t VACUUM_MAGNETIC_PERMEABILITY = (4 * PI * FINE_STRUCTURE_CONSTANT * REDUCED_PLANCK_CONSTANT) / (e2 * SPEED_OF_LIGHT_IN_VACUUM);

constexpr double_t VACUUM_ELECTRIC_PERMITTIVITY = 1 / (VACUUM_MAGNETIC_PERMEABILITY * c2);

constexpr double_t VON_KLITZING_CONSTANT = (2 * PI * REDUCED_PLANCK_CONSTANT) / e2;
constexpr double_t R_K = VON_KLITZING_CONSTANT;

constexpr double_t FIRST_RADIATION_CONSTANT = 2 * PI * PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM;// watts meter squared
constexpr double_t c_1 = FIRST_RADIATION_CONSTANT;

constexpr double_t SECOND_RADIATION_CONSTANT = (PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM) / BOLTZMANN_CONSTANT;
constexpr double_t c_2 = SECOND_RADIATION_CONSTANT;// meter kelvin

constexpr double_t WIEN_num = (PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM) / BOLTZMANN_CONSTANT;
constexpr double_t WIEN_den = 4.965114231;

constexpr double_t WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT = WIEN_num / WIEN_den;// meter kelvin
constexpr double_t wien_b = WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT;

constexpr double_t CONDUCTANCE_QUANTUM = PLANCK_CONSTANT / (2 * e2);
constexpr double_t G0 = CONDUCTANCE_QUANTUM;

constexpr double_t INVERSE_CONDUCTANCE_QUANTUM = 1 / CONDUCTANCE_QUANTUM;
constexpr double_t G0_inv = INVERSE_CONDUCTANCE_QUANTUM;

constexpr double_t HEN_f1 = int_pow(FINE_STRUCTURE_CONSTANT, 2);
constexpr double_t HEN_f2 = REST_MASS_OF_ELECTRON * c2;
constexpr double_t HARTREE_ENERGY = HEN_f1 * HEN_f2;
constexpr double_t E_h = HARTREE_ENERGY;

constexpr double_t FERMI_COUPLING_CONSTANT = 1.1663787e-5;// GeV per volt squared

constexpr double_t PM_num = REDUCED_PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM;
constexpr double_t PM_den = NEWTONIAN_CONSTANT_OF_GRAVITATION;
constexpr double_t PLANCK_MASS = sqrt(PM_num / PM_den);
constexpr double_t M_P = PLANCK_MASS;

constexpr double_t PL = REDUCED_PLANCK_CONSTANT * NEWTONIAN_CONSTANT_OF_GRAVITATION;
constexpr double_t PLANCK_LENGTH = sqrt(PL / c3);
constexpr double_t l_P = PLANCK_LENGTH;

constexpr double_t TROPICAL_YEAR_SECONDS = 31556925.1;// seconds
constexpr double_t TROPICAL_YEAR_DAYS = 365.242189;   // days
constexpr double_t SIDEREAL_YEAR = 311558149.8;       // seconds

constexpr double_t ASTRONOMICAL_UNIT = 149597870700;// meters
constexpr double_t AU = ASTRONOMICAL_UNIT;

constexpr double_t LIGHT_YEAR = SPEED_OF_LIGHT_IN_VACUUM * TROPICAL_YEAR_DAYS * 24 * 60 * 60;// meters
constexpr double_t ly = LIGHT_YEAR;

constexpr double_t PARSEC = 96939420213600000. / PI;// meters
constexpr double_t parsec = PARSEC;
constexpr double_t PARSEC_IN_LY = 3.26156;// light year

constexpr double_t SOLAR_MASS = 1.98841e30;// kg
constexpr double_t M_O = SOLAR_MASS;

constexpr double_t SOLAR_RADIUS = 6.957e8;// meter
constexpr double_t R_O = SOLAR_RADIUS;

constexpr double_t SOLAR_CONSTANT = 1361;               // watts per meter squared
constexpr double_t SOLAR_PHOTOSPHERE_TEMPERATURE = 5772;// kelvin
constexpr double_t T_O = SOLAR_PHOTOSPHERE_TEMPERATURE;

constexpr double_t SOLAR_LUMINOSITY = 3.828e26;// watts
constexpr double_t L_O = SOLAR_LUMINOSITY;

constexpr double_t MASS_OF_EARTH = 6.97217e24;// kg
constexpr double_t M_e = MASS_OF_EARTH;

constexpr double_t RADIUS_OF_EARTH = 6.3781e6;// meter
constexpr double_t R_e = RADIUS_OF_EARTH;

constexpr double_t SCHWARZSCHILD_RADIUS_OF_SUN = (2 * NEWTONIAN_CONSTANT_OF_GRAVITATION * SOLAR_MASS) / c2;
constexpr double_t R_S = SCHWARZSCHILD_RADIUS_OF_SUN;

constexpr double_t SCHWARZSCHILD_RADIUS_OF_EARTH = (2 * NEWTONIAN_CONSTANT_OF_GRAVITATION * MASS_OF_EARTH) / c2;
constexpr double_t R_E = SCHWARZSCHILD_RADIUS_OF_EARTH;

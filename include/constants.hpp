//
// Created by syedalimohsinbukhari on 9/5/24.
//

#include "utilities.hpp"

const double_t PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421171;

const double_t AVOGADRO_CONSTANT = 6.02214076e23; // per mole
const double_t NA = AVOGADRO_CONSTANT;

const double_t BOLTZMANN_CONSTANT = 1.380649e-23; // joules per kelvin
const double_t kB = BOLTZMANN_CONSTANT;

const double_t ELEMENTARY_CHARGE = 1.602176634e-19; // Coulomb
const double_t e = ELEMENTARY_CHARGE;

const double_t HYPERFINE_TRANSITION_FREQUENCY_OF_CESIUM = 9192631770; // hertz

const double_t LUMINOUS_EFFICACY = 683; // lumen per watts
const double_t K_cal = LUMINOUS_EFFICACY;

const double_t PLANCK_CONSTANT = 6.62607015e-34; // joules second
const double_t h = PLANCK_CONSTANT;

const double_t REDUCED_PLANCK_CONSTANT = 1.054571817e-34;
const double_t h_bar = REDUCED_PLANCK_CONSTANT;

const double_t SPEED_OF_LIGHT_IN_VACUUM = 299792458; // meter per second
const double_t c = SPEED_OF_LIGHT_IN_VACUUM;

const double_t STANDARD_ACCELERATION_OF_GRAVITY = 9.80665; // meter per second squared
const double_t g = STANDARD_ACCELERATION_OF_GRAVITY;

const double_t STANDARD_ATMOSPHERE = 101325; // pascals
const double_t atm = STANDARD_ATMOSPHERE;

const double_t STANDARD_STATE_PRESSURE = 100000; // pascals
const double_t P = STANDARD_STATE_PRESSURE;

const double_t NEWTONIAN_CONSTANT_OF_GRAVITATION = 6.67430e-11; // newton meter squared per kilogram squared
const double_t G = NEWTONIAN_CONSTANT_OF_GRAVITATION;

const double_t REST_MASS_OF_ELECTRON = 9.1093837139E-31; // KG
const double_t m_e = REST_MASS_OF_ELECTRON;

const double_t REST_MASS_OF_MUON = 1.883531627e-28; // kg
const double_t m_mu = REST_MASS_OF_MUON;

const double_t REST_MASS_OF_TAU = 3.16754e-27; // kg
const double_t m_tau = REST_MASS_OF_TAU;

const double_t REST_MASS_OF_PROTON = 1.67262192595e27; // kg
const double_t m_p = REST_MASS_OF_PROTON;

const double_t REST_MASS_OF_NEUTRON = 1.67492750056e-27; // kg
const double_t m_n = REST_MASS_OF_NEUTRON;

const double_t REST_MASS_OF_TOP_QUARK = 3.0784e-25; // kg
const double_t m_tQuark = REST_MASS_OF_TOP_QUARK;

const double_t PROTON_ELECTRON_MASS_RATIO = REST_MASS_OF_PROTON / REST_MASS_OF_ELECTRON;

const double_t ALPHA_PARTICLE_MASS = 6.6446573450e-27; // kg
const double_t m_HAlpha = ALPHA_PARTICLE_MASS;

const double_t CER_num = int_pow(ELEMENTARY_CHARGE, 2);
const double_t CER_den = REST_MASS_OF_ELECTRON * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
const double_t CLASSICAL_ELECTRON_RADIUS = CER_num / CER_den; // meters
const double_t r0 = CLASSICAL_ELECTRON_RADIUS;

const double_t COMPTON_WAVELENGTH_OF_ELECTRON = 2.42631023538e-12; // meters
const double_t COMPTON_FREQUENCY_OF_ELECTRON = c / COMPTON_WAVELENGTH_OF_ELECTRON;

const double_t ATOMIC_MASS_UNIT = 1.660531e-24; // g
const double_t amu = ATOMIC_MASS_UNIT;

const double_t FINE_STRUCTURE_CONSTANT = 1 / 137.;
const double_t alpha = FINE_STRUCTURE_CONSTANT;

const double_t BHR_num = REDUCED_PLANCK_CONSTANT;
const double_t BHR_den = FINE_STRUCTURE_CONSTANT * REST_MASS_OF_ELECTRON * SPEED_OF_LIGHT_IN_VACUUM;
const double_t BOHR_RADIUS = BHR_num / BHR_den; // meters
const double_t a0 = BOHR_RADIUS;

const double_t FARADAY_CONSTANT = AVOGADRO_CONSTANT * ELEMENTARY_CHARGE;
const double_t F = FARADAY_CONSTANT;

const double_t JOSEPHSON_CONSTANT = (2 * ELEMENTARY_CHARGE) / PLANCK_CONSTANT;
const double_t K_J = JOSEPHSON_CONSTANT;

const double_t MAGNETIC_FLUX_QUANTUM = (2 * PI * REDUCED_PLANCK_CONSTANT) / (2 * ELEMENTARY_CHARGE);
const double_t phi0 = MAGNETIC_FLUX_QUANTUM;

const double_t MOLAR_GAS_CONSTANT = AVOGADRO_CONSTANT * BOLTZMANN_CONSTANT;
const double_t R_gas = MOLAR_GAS_CONSTANT;

const double_t ELECTRON_CHARGE_TO_MASS_RATIO = ELEMENTARY_CHARGE / REST_MASS_OF_ELECTRON;

const double_t RYD_numerator = int_pow(FINE_STRUCTURE_CONSTANT, 2) * REST_MASS_OF_ELECTRON * SPEED_OF_LIGHT_IN_VACUUM;
const double_t RYD_denominator = 2 * PLANCK_CONSTANT;
const double_t RYDBERG_CONSTANT = RYD_numerator / RYD_denominator; // per centimeter
const double_t R_inf = RYDBERG_CONSTANT;

const double_t GAS_CONSTANT = AVOGADRO_CONSTANT * BOLTZMANN_CONSTANT; // erg per kelvin per mole
const double_t R = GAS_CONSTANT;

const double_t SB_numerator = 2 * int_pow(PI, 5) * int_pow(BOLTZMANN_CONSTANT, 4);
const double_t SB_denominator = 15 * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2) * int_pow(PLANCK_CONSTANT, 3);
const double_t STEFAN_BOLTZMANN_CONSTANT = SB_numerator / SB_denominator;

const double_t TCS_num = 8 * int_pow(FINE_STRUCTURE_CONSTANT, 4) * int_pow(BOHR_RADIUS, 2);
const double_t TCS_den = 3;
const double_t THOMSON_CROSS_SECTION_FOR_ELECTRON = TCS_num / TCS_den;

const double_t MPERM_numerator = 4 * PI * FINE_STRUCTURE_CONSTANT * REDUCED_PLANCK_CONSTANT;
const double_t MPERM_denominator = int_pow(ELEMENTARY_CHARGE, 2) * SPEED_OF_LIGHT_IN_VACUUM;

const double_t VACUUM_MAGNETIC_PERMEABILITY = MPERM_numerator / MPERM_denominator;
const double_t VACUUM_ELECTRIC_PERMITTIVITY = 1 / (VACUUM_MAGNETIC_PERMEABILITY * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2));

const double_t VON_KLITZING_CONSTANT = (2 * PI * REDUCED_PLANCK_CONSTANT) / int_pow(ELEMENTARY_CHARGE, 2);
const double_t R_K = VON_KLITZING_CONSTANT;

const double_t FIRST_RADIATION_CONSTANT = 2 * PI * PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM; // watts meter squared
const double_t c_1 = FIRST_RADIATION_CONSTANT;

const double_t SRC_num = PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM;
const double_t SRC_den = BOLTZMANN_CONSTANT;
const double_t SECOND_RADIATION_CONSTANT = SRC_num / SRC_den;
const double_t c_2 = SECOND_RADIATION_CONSTANT; // meter kelvin

const double_t WIEN_num = (PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM) / BOLTZMANN_CONSTANT;
const double_t WIEN_den = 4.965114231;

const double_t WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT = WIEN_num / WIEN_den; // meter kelvin
const double_t wien_b = WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT;

const double_t CONDUCTANCE_QUANTUM = PLANCK_CONSTANT / (2 * pow(ELEMENTARY_CHARGE, 2));
const double_t G0 = CONDUCTANCE_QUANTUM;

const double_t INVERSE_CONDUCTANCE_QUANTUM = 1 / CONDUCTANCE_QUANTUM;
const double_t G0_inv = INVERSE_CONDUCTANCE_QUANTUM;

const double_t HEN_f1 = int_pow(FINE_STRUCTURE_CONSTANT, 2);
const double_t HEN_f2 = REST_MASS_OF_ELECTRON * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
const double_t HARTREE_ENERGY = HEN_f1 * HEN_f2;
const double_t E_h = HARTREE_ENERGY;

const double_t FERMI_COUPLING_CONSTANT = 1.1663787e-5; // GeV per volt squared

const double_t PM_num = REDUCED_PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM;
const double_t PM_den = NEWTONIAN_CONSTANT_OF_GRAVITATION;
const double_t PLANCK_MASS = sqrt(PM_num / PM_den);
const double_t M_P = PLANCK_MASS;

const double_t PL_num = REDUCED_PLANCK_CONSTANT * NEWTONIAN_CONSTANT_OF_GRAVITATION;
const double_t PL_den = pow(SPEED_OF_LIGHT_IN_VACUUM, 3);
const double_t PLANCK_LENGTH = sqrt(PL_num / PL_den);
const double_t l_P = PLANCK_LENGTH;

const double_t TROPICAL_YEAR_SECONDS = 31556925.1; // seconds
const double_t TROPICAL_YEAR_DAYS = 365.242189; // days
const double_t SIDEREAL_YEAR = 311558149.8; // seconds

const double_t ASTRONOMICAL_UNIT = 149597870700; // meters
const double_t AU = ASTRONOMICAL_UNIT;

const double_t LIGHT_YEAR = SPEED_OF_LIGHT_IN_VACUUM * TROPICAL_YEAR_DAYS * 24 * 60 * 60; // meters
const double_t ly = LIGHT_YEAR;

const double_t PARSEC = 96939420213600000. / PI; // meters
const double_t parsec = PARSEC;
const double_t PARSEC_IN_LY = 3.26156; // light year

const double_t SOLAR_MASS = 1.98841e30; // kg
const double_t M_O = SOLAR_MASS;

const double_t SOLAR_RADIUS = 6.957e8; // meter
const double_t R_O = SOLAR_RADIUS;

const double_t SOLAR_CONSTANT = 1361; // watts per meter squared
const double_t SOLAR_PHOTOSPHERE_TEMPERATURE = 5772; // kelvin
const double_t T_O = SOLAR_PHOTOSPHERE_TEMPERATURE;

const double_t SOLAR_LUMINOSITY = 3.828e26; // watts
const double_t L_O = SOLAR_LUMINOSITY;

const double_t MASS_OF_EARTH = 6.97217e24; // kg
const double_t M_e = MASS_OF_EARTH;

const double_t RADIUS_OF_EARTH = 6.3781e6; // meter
const double_t R_e = RADIUS_OF_EARTH;

const double_t SCRS_num = 2 * NEWTONIAN_CONSTANT_OF_GRAVITATION * SOLAR_MASS;
const double_t SCRS_den = pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
const double_t SCHWARZSCHILD_RADIUS_OF_SUN = SCRS_num / SCRS_den;
const double_t R_S = SCHWARZSCHILD_RADIUS_OF_SUN;

const double_t SCRE_num = 2 * NEWTONIAN_CONSTANT_OF_GRAVITATION * MASS_OF_EARTH;
const double_t SCRE_den = pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
const double_t SCHWARZSCHILD_RADIUS_OF_EARTH = SCRE_num / SCRE_den;
const double_t R_E = SCHWARZSCHILD_RADIUS_OF_EARTH;

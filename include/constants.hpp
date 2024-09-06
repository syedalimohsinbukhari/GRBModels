//
// Created by syedalimohsinbukhari on 9/5/24.
//

double int_pow(double base, int exp);

const double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421171;

const double AVOGADRO_CONSTANT = 6.02214076e23; // per mole
const double NA = AVOGADRO_CONSTANT;

const double BOLTZMANN_CONSTANT = 1.380649e-23; // joules per kelvin
const double kB = BOLTZMANN_CONSTANT;

const double ELEMENTARY_CHARGE = 1.602176634e-19; // Coulomb
const double e = ELEMENTARY_CHARGE;

const double HYPERFINE_TRANSITION_FREQUENCY_OF_CESIUM = 9192631770; // hertz

const double LUMINOUS_EFFICACY = 683; // lumen per watts
const double K_cal = LUMINOUS_EFFICACY;

const double PLANCK_CONSTANT = 6.62607015e-34; // joules second
const double h = PLANCK_CONSTANT;

const double REDUCED_PLANCK_CONSTANT = 1.054571817e-34;
const double h_bar = REDUCED_PLANCK_CONSTANT;

const double SPEED_OF_LIGHT_IN_VACUUM = 299792458; // meter per second
const double c = SPEED_OF_LIGHT_IN_VACUUM;

const double STANDARD_ACCELERATION_OF_GRAVITY = 9.80665; // meter per second squared
const double g = STANDARD_ACCELERATION_OF_GRAVITY;

const double STANDARD_ATMOSPHERE = 101325; // pascals
const double atm = STANDARD_ATMOSPHERE;

const double STANDARD_STATE_PRESSURE = 100000; // pascals
const double P = STANDARD_STATE_PRESSURE;

const double NEWTONIAN_CONSTANT_OF_GRAVITATION = 6.67430e-11; // newton meter squared per kilogram squared
const double G = NEWTONIAN_CONSTANT_OF_GRAVITATION;

const double REST_MASS_OF_ELECTRON = 9.1093837139E-31; // KG
const double m_e = REST_MASS_OF_ELECTRON;

const double REST_MASS_OF_MUON = 1.883531627e-28; // kg
const double m_mu = REST_MASS_OF_MUON;

const double REST_MASS_OF_TAU = 3.16754e-27; // kg
const double m_tau = REST_MASS_OF_TAU;

const double REST_MASS_OF_PROTON = 1.67262192595e27; // kg
const double m_p = REST_MASS_OF_PROTON;

const double REST_MASS_OF_NEUTRON = 1.67492750056e-27; // kg
const double m_n = REST_MASS_OF_NEUTRON;

const double REST_MASS_OF_TOP_QUARK = 3.0784e-25; // kg
const double m_tQuark = REST_MASS_OF_TOP_QUARK;

const double PROTON_ELECTRON_MASS_RATIO = REST_MASS_OF_PROTON / REST_MASS_OF_ELECTRON;

const double ALPHA_PARTICLE_MASS = 6.6446573450e-27; // kg
const double m_HAlpha = ALPHA_PARTICLE_MASS;

const double CER_num = int_pow(ELEMENTARY_CHARGE, 2);
const double CER_den = REST_MASS_OF_ELECTRON * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
const double CLASSICAL_ELECTRON_RADIUS = CER_num / CER_den; // meters
const double r0 = CLASSICAL_ELECTRON_RADIUS;

const double COMPTON_WAVELENGTH_OF_ELECTRON = 2.42631023538e-12; // meters
const double COMPTON_FREQUENCY_OF_ELECTRON = c / COMPTON_WAVELENGTH_OF_ELECTRON;

const double ATOMIC_MASS_UNIT = 1.660531e-24; // g
const double amu = ATOMIC_MASS_UNIT;

const double FINE_STRUCTURE_CONSTANT = 1 / 137.;
const double alpha = FINE_STRUCTURE_CONSTANT;

const double BHR_num = REDUCED_PLANCK_CONSTANT;
const double BHR_den = FINE_STRUCTURE_CONSTANT * REST_MASS_OF_ELECTRON * SPEED_OF_LIGHT_IN_VACUUM;
const double BOHR_RADIUS = BHR_num / BHR_den; // meters
const double a0 = BOHR_RADIUS;

const double FARADAY_CONSTANT = AVOGADRO_CONSTANT * ELEMENTARY_CHARGE;
const double F = FARADAY_CONSTANT;

const double JOSEPHSON_CONSTANT = (2 * ELEMENTARY_CHARGE) / PLANCK_CONSTANT;
const double K_J = JOSEPHSON_CONSTANT;

const double MAGNETIC_FLUX_QUANTUM = (2 * PI * REDUCED_PLANCK_CONSTANT) / (2 * ELEMENTARY_CHARGE);
const double phi0 = MAGNETIC_FLUX_QUANTUM;

const double MOLAR_GAS_CONSTANT = AVOGADRO_CONSTANT * BOLTZMANN_CONSTANT;
const double R_gas = MOLAR_GAS_CONSTANT;

const double ELECTRON_CHARGE_TO_MASS_RATIO = ELEMENTARY_CHARGE / REST_MASS_OF_ELECTRON;

const double RYD_numerator = int_pow(FINE_STRUCTURE_CONSTANT, 2) * REST_MASS_OF_ELECTRON * SPEED_OF_LIGHT_IN_VACUUM;
const double RYD_denominator = 2 * PLANCK_CONSTANT;
const double RYDBERG_CONSTANT = RYD_numerator / RYD_denominator; // per centimeter
const double R_inf = RYDBERG_CONSTANT;

const double GAS_CONSTANT = AVOGADRO_CONSTANT * BOLTZMANN_CONSTANT; // erg per kelvin per mole
const double R = GAS_CONSTANT;

const double SB_numerator = 2 * int_pow(PI, 5) * int_pow(BOLTZMANN_CONSTANT, 4);
const double SB_denominator = 15 * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2) * int_pow(PLANCK_CONSTANT, 3);
const double STEFAN_BOLTZMANN_CONSTANT = SB_numerator / SB_denominator;

const double TCS_num = 8 * int_pow(FINE_STRUCTURE_CONSTANT, 4) * int_pow(BOHR_RADIUS, 2);
const double TCS_den = 3;
const double THOMSON_CROSS_SECTION_FOR_ELECTRON = TCS_num / TCS_den;

const double MPERM_numerator = 4 * PI * FINE_STRUCTURE_CONSTANT * REDUCED_PLANCK_CONSTANT;
const double MPERM_denominator = int_pow(ELEMENTARY_CHARGE, 2) * SPEED_OF_LIGHT_IN_VACUUM;

const double VACUUM_MAGNETIC_PERMEABILITY = MPERM_numerator / MPERM_denominator;
const double VACUUM_ELECTRIC_PERMITTIVITY = 1 / (VACUUM_MAGNETIC_PERMEABILITY * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2));

const double VON_KLITZING_CONSTANT = (2 * PI * REDUCED_PLANCK_CONSTANT) / int_pow(ELEMENTARY_CHARGE, 2);
const double R_K = VON_KLITZING_CONSTANT;

const double FIRST_RADIATION_CONSTANT = 2 * PI * PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM; // watts meter squared
const double c_1 = FIRST_RADIATION_CONSTANT;

const double SRC_num = PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM;
const double SRC_den = BOLTZMANN_CONSTANT;
const double SECOND_RADIATION_CONSTANT = SRC_num / SRC_den;
const double c_2 = SECOND_RADIATION_CONSTANT; // meter kelvin

const double WIEN_num = (PLANCK_CONSTANT * SPEED_OF_LIGHT_IN_VACUUM) / BOLTZMANN_CONSTANT;
const double WIEN_den = 4.965114231;

const double WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT = WIEN_num / WIEN_den; // meter kelvin
const double wien_b = WIEN_WAVELENGTH_DISPLACEMENT_CONSTANT;

const double CONDUCTANCE_QUANTUM = PLANCK_CONSTANT / (2 * pow(ELEMENTARY_CHARGE, 2));
const double G0 = CONDUCTANCE_QUANTUM;

const double INVERSE_CONDUCTANCE_QUANTUM = 1 / CONDUCTANCE_QUANTUM;
const double G0_inv = INVERSE_CONDUCTANCE_QUANTUM;

const double HEN_f1 = int_pow(FINE_STRUCTURE_CONSTANT, 2);
const double HEN_f2 = REST_MASS_OF_ELECTRON * int_pow(SPEED_OF_LIGHT_IN_VACUUM, 2);
const double HARTREE_ENERGY = HEN_f1 * HEN_f2;
const double E_h = HARTREE_ENERGY;

const double FERMI_COUPLING_CONSTANT = 1.1663787e-5; // GeV per volt squared

// ################################################################################################################# //
//                                                  FUNCTIONS                                                        //
// ################################################################################################################# //

double int_pow(double base, int exp) {
    if (exp == 0)
        return 1;        // Any number to the power of 0 is 1
    if (exp < 0) {                 // Handle negative exponents
        base = 1 / base;
        exp = -exp;
    }
    double result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)          // If exp is odd, multiply the base with result
            result *= base;
        base *= base;              // Square the base
        exp /= 2;                  // Divide exponent by 2
    }
    return result;
}

//
// Created by syedalimohsinbukhari on 9/11/24.
//

#ifndef GRBMODELS_PLANCKLAW_HPP
#define GRBMODELS_PLANCKLAW_HPP

#include "utilities.hpp"

vd planckLawWavelength(const vd & wavelength, double_t temperature);

vd planckLawFrequency(const vd & frequency, double_t temperature);

vd planckLawAngularFrequency(const vd & angular_frequency, double_t temperature);

vd planckLawAngularWavelength(const vd & angular_wavelength, double_t temperature);

vd intensityOfLight(const vd & frequency, double_t temperature);

#endif //GRBMODELS_PLANCKLAW_HPP

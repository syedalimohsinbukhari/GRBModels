//
// Created by syedalimohsinbukhari on 8/31/24.
//

#include "powerLaw.hpp"
#include <cmath>

vd powerLaw(const vd & energy, double amplitude, double alpha, double pivot_energy)
{
    vd output;
    output.reserve(energy.size());
    for (double i : energy)
    {
        output.push_back(amplitude * pow(i / pivot_energy, alpha));
    }
    return output;
}

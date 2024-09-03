//
// Created by syedalimohsinbukhari on 9/2/24.
//

#include "logNormal.hpp"

vd logNormalEnergy(const vd & energy, double amplitude, double mean, double sigma) {
    vd output = allocateVector(energy);
    
    const double normalization = amplitude / (sqrt(2 * M_PI) * sigma);
    
    for (double energy_ : energy) {
        double amplitudeFactor = normalization / energy_;
        double exponentialFactor = (log(energy_) - mean) / sigma;
        output.push_back(amplitudeFactor * exp(-0.5 * pow(exponentialFactor, 2)));
    }
    
    return output;
}

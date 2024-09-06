//
// Created by syedalimohsinbukhari on 9/2/24.
//

#include "logNormal.hpp"

vd logNormalEnergy(const vd & energy,
                   double_t amplitude, double_t mean, double_t sigma) {
    vd output = allocateVector(energy);
    
    const double_t normalization = amplitude / (sqrt(2 * M_PI) * sigma);
    
    for (double_t energy_ : energy) {
        double_t exponentialFactor = (log(energy_) - mean) / sigma;
        output.push_back(
          (normalization / energy_) * exp(-0.5 * pow(exponentialFactor, 2))
        );
    }
    
    return output;
}

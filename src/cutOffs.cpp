//
// Created by syedalimohsinbukhari on 9/3/24.
//

#include "cutOffs.hpp"

vd lowEnergyCutOff(const vd & energy,
                   const double_t cutOff_energy, const double_t folding_energy) {
    return cutOff(energy, cutOff_energy, folding_energy, true);
}

vd highEnergyCutOff(const vd & energy,
                    const double_t cutOff_energy, const double_t folding_energy) {
    return cutOff(energy, cutOff_energy, folding_energy, false);
}

static vd cutOff(const vd & energy,
                 double_t cutOff_energy, double_t folding_energy, bool isLowEnergyCutoff) {
    vd output = allocateVector(energy);
    
    const double_t energy_cut = cutOff_energy / folding_energy;
    
    for (double_t energy_ : energy) {
        if (isLowEnergyCutoff ? energy_ <= cutOff_energy : energy_ > cutOff_energy) {
            output.push_back(
              pow(energy_ / cutOff_energy, energy_cut) * exp((cutOff_energy - energy_) / folding_energy)
            );
        } else {
            output.push_back(1);
        }
    }
    
    return output;
}

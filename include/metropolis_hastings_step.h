//
// Created by ethan on 7/22/2020.
//

#ifndef ISINGMODEL_VISUAL_METROPOLIS_HASTINGS_STEP_H
#define ISINGMODEL_VISUAL_METROPOLIS_HASTINGS_STEP_H

#include <cmath>

#include "random_generators.h"
#include "ising_struct.h"
#include "metropolis_hastings_neighbors.h"

void metropolis_hastings_step(int** lattice, ising_params &p);

#endif //ISINGMODEL_VISUAL_METROPOLIS_HASTINGS_STEP_H
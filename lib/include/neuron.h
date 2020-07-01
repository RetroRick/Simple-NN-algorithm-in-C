//
// Created by ricar on 30/06/2020.
//

#ifndef SIMPLENN_NEURON_H
#define SIMPLENN_NEURON_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

time_t t;

typedef  struct NEURON_STRUCT{
    double * weights;
    double * inputs;
    size_t size_weights;
    size_t size_inputs;
}neuron_t;

neuron_t* init(size_t num_w, size_t num_i);
void destroy_neuron(neuron_t* n);
void print_array(int x, double array[]);
void weight_generator(int x, double w[]);
void z_generator(int size, double b, double w[],  double x1[size], double x2[size], double x3[size], double x4[size], double z[size]);


#endif //SIMPLENN_NEURON_H

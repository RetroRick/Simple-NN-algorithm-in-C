//
// Created by ricar on 30/06/2020.
//

#include "include/neuron.h"

neuron_t* init(size_t num_w, size_t num_i){
    neuron_t* n = (neuron_t*)calloc(1, sizeof(struct NEURON_STRUCT));
    n->weights = (double*)calloc(num_w, sizeof(double));
    if(n->weights == NULL)
    {
        printf("No memory could be allocated");
    }
    n->inputs = (double*)calloc(num_i, sizeof(double));
    if(n->inputs == NULL){
        printf("No memory could be allocated");
    }
    n->size_weights = num_w;
    n->size_inputs = num_i;
    return n;
}

void destroy_neuron(neuron_t* n){
    free(n->weights);
    free(n->inputs);
    free(n);
}

void print_array(int x, double array[]){
    for (int i = 0; i < x; i++) {
        printf("item %d: %f\n", i+1, array[i]);
    }
}
void weight_generator(int x, double w[]){
    srand((unsigned) time(&t));
    for (int i = 0; i < x; i++) {
        w[i] = ((double)rand() / RAND_MAX) * 1;
    }
}

void z_generator(int size, double b, double w[],  double x1[size], double x2[size], double x3[size], double x4[size], double z[size])
{
    for (int i = 0; i < size; i++) {
        z[i] = x1[i] * w[0] + x2[i] * w[1] + x3[i] * w[2] * x4[i] * w[3] + b;
        //printf("Z%d: %.3f\n", i+1, z[i]);
    }
}


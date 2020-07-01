//
// Created by ricar on 26/06/2020.
//

#ifndef SIMPLENN_MATH_FUNCTIONS_H
#define SIMPLENN_MATH_FUNCTIONS_H
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void activation_function(int size, double z[size], double out[size]);
void cost_function(int size, double prediction_value[size], double real_value[size], double cost_values[size]);
double sigmoid(double val);
double dsigmoid(double val);

#endif //SIMPLENN_MATH_FUNCTIONS_H

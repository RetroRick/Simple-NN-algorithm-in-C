//
// Created by ricar on 26/06/2020.
//
#include "include/math_functions.h"

void activation_function(int size, double z[size], double out[size])
{
    for (int i = 0; i < size ; i++) {
        out[i]=sigmoid(z[i]);
        //out[i] = 1 / (1 + exp( -z[i] ) ) ;
        printf("Z%d: %.3f\n", i+1, out[i]);
    }
}

double sigmoid(double val){
    return 1 / (1 + exp( -val ) );
}

double dsigmoid(double val){
    return sigmoid(val) * (1 - sigmoid(val));
}

void cost_function(int size, double prediction_value[size], double real_value[size], double cost_values[size])
{
    for (int i = 0; i < size ; i++) { //(a-b)² = a² - 2ab - b²
        cost_values[i] = (real_value[i] * real_value[i]) - (2 * (real_value[i] - prediction_value[i])) - (prediction_value[i] * prediction_value[i]);
    }
}
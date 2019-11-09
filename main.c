/*
 * Author: Ricardo Duarte
 * Date: 09/11/2019
 */

#include <stdio.h>
#include <math.h>

typedef struct {
    float input;
    float weight;
    float bias;
}Neuron;

float heaviside(float x, float w, float b);
float multiHeaviside(float x[], float w[], float b[], int numxw, int numb);
double sigmoid(float x);
double sigmoidMulti(float x[], int size);

int main() {
    float heaviside_ = 0.0f;
    Neuron simpleNeuron = {
        .bias = 0.0f,
        .weight = -2,
        .input=1,
    };
    //for debugging proposes
    printf("Neuron Bias = %.3f\n Neuron Weight: %.3f\n Neuron Input: %.3f\n",
            simpleNeuron.bias,
            simpleNeuron.weight,
            simpleNeuron.input);
    //for debugging proposes should return -2
    heaviside_ = heaviside(simpleNeuron.input, simpleNeuron.weight, simpleNeuron.bias);
    printf("Heaviside:%3f\n", heaviside_);
    //for debugging proposes sigmoid should return 0.119203
    printf("Sigmoid: %3f\n", sigmoid(heaviside_));
    return 0;
}

float heaviside(float x, float w, float b)
{
    return ((x*w)+b);
}

float multiHeaviside(float x[], float w[], float b[], int numxw, int numb)
{
    double_t acumulator=0.0;
    int hl=0; //number of hidden layers
    if(numb > 1)
    {
       hl=numb;
    } else {
        for (int i = 0; i <numxw; ++i) {
            //sum all weights*inputs
            acumulator+=x[i]+w[i];
        }
        acumulator+=b[hl];
    }
    return acumulator;
}

double sigmoid(float x)
{
    return (1.0/(1+exp((double)(-x))));
}

double sigmoidMulti(float x[], int arrsize)
{
    double fun_sig[arrsize];
    for (int i = 0; i <arrsize ; ++i) {
        fun_sig[i] = sigmoid(x[i]);
    }
}
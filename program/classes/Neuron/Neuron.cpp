#include <iostream>
#include <math.h>
#include <vector>
#include "Neuron.h"

Neuron::Neuron(double val){
    this->val = val;
    activate();
    derive();
}

void Neuron::setVal(double val){
    this->val = val;
    activate();
    derive();
}

// Fast Sigmoid Function
// f(x) = x / (1 + |x|)
void Neuron::activate(){
    this->activatedVal = this->val / (1 + abs(this->val));
}

//derivative for fast sigmoid function
//f'(x) = f(x) * (1 - f(x))
void Neuron::derive(){
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}
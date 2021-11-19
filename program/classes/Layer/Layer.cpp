#include <iostream>
#include <vector>
#include <math.h>
#include "Layer.h"
using namespace std;

Layer::Layer(int size){
    this->size = size;

    for (int i = 0; i < size; i++){
        Neuron *n = new Neuron(0.00);
        this->neurons.push_back(n);
    }
}

void Layer::setVal(int i, double v){
    this->neurons[i]->setVal(v);
}

Matrix *Layer::matrixifyVals(){
    Matrix *m = new Matrix(1, this->neurons.size(), false);
    for (int i = 0; i < neurons.size(); i++){
        m->setVal(0, i, this->neurons[i]->getVal());
    }
}

Matrix *Layer::matrixifyActivatedVals(){
    Matrix *m = new Matrix(1, this->neurons.size(), false);
    for (int i = 0; i < neurons.size(); i++){
        m->setVal(0, i, this->neurons[i]->getActivatedVal());
    }
}

Matrix *Layer::matrixifyDerivedVals(){
    Matrix *m = new Matrix(1, this->neurons.size(), false);
    for (int i = 0; i < neurons.size(); i++){
        m->setVal(0, i, this->neurons[i]->getDerivedVal());
    }
}
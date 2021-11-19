#include <iostream>
#include <vector>
#include "classes\Neuron\Neuron.h"
#include "classes\Matrix\Matrix.h"
using namespace std;

#ifndef Layer_H
#define Layer_H

class Layer{
    private:
        int size;
        vector<Neuron *> neurons;

    public: //constructor
        Layer(int size);

    public: //functions
        void setVal(int i, double v);
        Matrix *matrixifyVals();
        Matrix *matrixifyActivatedVals();
        Matrix *matrixifyDerivedVals();
};

#endif
#include <iostream>
#include <vector>
#include <math.h>
#include "classes\Matrix\Matrix.h"
#include "classes\Layer\Layer.h"
using namespace std;

#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

class NeuralNetwork{
    private:
        vector<int> topology;
        int topologySize;
        vector<Matrix *> weightMatrices;
        vector<Layer *> layers;
        vector<double> input;

    public: //constructor
        NeuralNetwork(vector<int> topology);
        void setCurrentInput(vector<double> input);

    public: //functions
};

#endif
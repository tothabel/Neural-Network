#include <iostream>
#include <vector>
#include <math.h>
#include "NeuralNetwork.h"
using namespace std;

NeuralNetwork::NeuralNetwork(vector<int> topology){
    this->topology = topology;
    
    this->topologySize = topology.size();
    //layers
    for (int i = 0; i < topologySize; i++){
        Layer *l = new Layer(topology[i]);
        this->layers.push_back(l);
    }

    //wheight matrices
    for (int i = 0; i < topologySize - 1; i++){
        Matrix *m = new Matrix(this->topology[i], this->topology[i + 1], true);
        this->weightMatrices.push_back(m);
    }
}

void NeuralNetwork::setCurrentInput(vector<double> input){
    this->input = input;

    for (int i = 0; i < input.size(); i++){
        this->layers[0]->setVal(i, this->input[i]);
    }
}
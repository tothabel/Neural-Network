#include <iostream>
#include <vector>
#include <math.h>
#include "classes\NeuralNetwrok\NeuralNetwork.h"

using namespace std;

int main(){
    vector<int> topology = {3, 2, 3};

    vector<double> input = {1.0, 0.0, 1.0};

    NeuralNetwork *nn = new NeuralNetwork(topology);
    nn->setCurrentInput(input);

    return 0;
}
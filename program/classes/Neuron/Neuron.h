#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#ifndef NEURON_H
#define NEURON_H

class Neuron{
    private:
        //input
        double val;
        //val -> 0.0 - 1.0 
        double activatedVal;
        //derivlált activatedVAl
        double derivedVal;

    public: //constructor
        Neuron(double val);

    public: //functions
        // Fast Sigmoid Function
        // f(x) = x / (1 + |x|)
        void activate();

        //derivative for fast sigmoid function
        //f'(x) = f(x) * (1 - f(x))
        void derive();

    public: //getter
        double getVal() { return this->val; }
        double getActivatedVal() { return this->activatedVal; }
        double getDerivedVal() { return this->derivedVal; }

    public: //setter
        void setVal(double val);

};

#endif
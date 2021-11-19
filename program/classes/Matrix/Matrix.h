#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
    private:
        vector<vector<double>> values;
        int numRows;
        int numColls;

    public: //constructor
        Matrix(int numRows, int numColls, bool isRandom); //isRandom true -> generate matrix with random nums, isRandom false -> ... with 0.0-s

    public: //functions
        Matrix *transpose(); //returns a pointer to a matrix

        void setVal(int r, int c, double v);
        double getVal(int r, int c);

        double generateRandom();

        int getNumRows() { return this->numRows; }
        int getNumColls() { return this->numColls; }

        void printToConsole();

};

#endif
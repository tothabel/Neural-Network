#include <iostream>
#include <vector>
#include <math.h>
#include <random>
#include "Matrix.h"
using namespace std;

double Matrix::generateRandom(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);

    return dis(gen);
}

Matrix::Matrix(int numRows, int numColls, bool isRandom){
    this->numRows = numRows;
    this->numColls = numColls;

    for (int i = 0; i < numRows; i++){
        vector<double> colValues;
        for (int j = 0; j < numColls; j++){
            double r = 0.00;
            if(isRandom){
                r = this->generateRandom();
            }
            colValues.push_back(r);
        }
        this->values.push_back(colValues);
    } 
}

void Matrix::printToConsole(){
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < numColls; j++){
            cout << this->values[i][j] << "\t";
        }
        cout << '\n'; 
    }
}

Matrix *Matrix::transpose(){
    Matrix *m = new Matrix(this->numColls, this->numRows, false); //switch colls and rows
    int mT_numRows = this->numColls;
    int mT_numColls = this->numRows;

    for (int i = 0; i < mT_numRows; i++){
        for (int j = 0; j < mT_numColls; j++){
            m->setVal(i, j, this->values[j][i]);
        }
    }

    return m;
}

void Matrix::setVal(int r, int c, double v){
    this->values[r][c] = v;
}

double Matrix::getVal(int r, int c){
    return this->values[r][c];
}
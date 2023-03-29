#include "Transformaciones.hpp"
#include <iostream>

using namespace std;

void Transformaciones::setMatrixInit(float _x, float _y){
    cout<<"Inicio de Matriz Inicial, valores : "<<_x<<" "<<_y<<endl;
    MatrixInit[0][0]=_x;
    MatrixInit[0][1]=_y;
    MatrixInit[0][2]=1;
    
    SetInitValueX(_x);
    SetInitValueY(_y);
    cout<<"valores ingresados : "<<getInitValueX()<<" "<<getInitValueY()<<endl;

}

void Transformaciones::setMatrixFinal(float _x, float _y){
    cout<<"Inicio de Matriz Final, valores : "<<_x<<" "<<_y<<endl;
    MatrixFinal[0][0]=_x;
    MatrixFinal[0][1]=_y;
    MatrixFinal[0][2]=1;

    SetFinalValueX(_x);
    SetFinalValueY(_y);
    cout<<"valores ingresados : "<<getFinalValueX()<<" "<<getFinalValueY()<<endl;
}
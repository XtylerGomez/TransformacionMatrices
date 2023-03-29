#include "Transformaciones.hpp"
#include "Matrix.hpp"
#include <iostream>

using namespace std;

Matrix m;
void Transformaciones::setMatrixInit(float _x, float _y){
    cout<<"Inicio de Matriz Inicial, valores : "<<_x<<" "<<_y<<endl;
    MatrixInit[0][0]=_x;
    MatrixInit[0][1]=_y;
    MatrixInit[0][2]=1;
    
    m.SetInitValueX(_x);
    m.SetInitValueY(_y);
    cout<<"valores ingresados : "<<m.getInitValueX()<<" "<<m.getInitValueY()<<endl;

}

void Transformaciones::setMatrixFinal(float _x, float _y){
    cout<<"Inicio de Matriz Final, valores : "<<_x<<" "<<_y<<endl;
    MatrixFinal[0][0]=_x;
    MatrixFinal[0][1]=_y;
    MatrixFinal[0][2]=1;

    m.SetFinalValueX(_x);
    m.SetFinalValueY(_y);
    cout<<"valores ingresados : "<<m.getFinalValueX()<<" "<<m.getFinalValueY()<<endl;
    m.ShowMatrix();
    
}
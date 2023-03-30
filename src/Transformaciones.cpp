#include "Transformaciones.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Matrix m;
void Transformaciones::setMatrixInit(float _x, float _y){
    
    MatrixInit[0][0]=_x;
    MatrixInit[1][0]=_y;
    MatrixInit[2][0]=1;
    
    //CheckMatrix(MatrixInit);
    m.SetInitValueX(_x);
    m.SetInitValueY(_y);
    

}

/*void Transformaciones::setMatrixFinal(float _x, float _y){
    cout<<"Inicio de Matriz Final, valores : "<<_x<<" "<<_y<<endl;
    MatrixFinal[0][0]=_x;
    MatrixFinal[1][0]=_y;
    MatrixFinal[2][0]=1;

    m.SetFinalValueX(_x);
    m.SetFinalValueY(_y);
    cout<<"valores ingresados : "<<m.getFinalValueX()<<" "<<m.getFinalValueY()<<endl;
    m.ShowMatrix();
    
}*/

void Transformaciones::setTraslacion(float _xt, float _yt){

    MatrixTraslacion[0][0]=1; MatrixTraslacion[0][1]=0; MatrixTraslacion[0][2]=_xt;
    MatrixTraslacion[1][0]=0; MatrixTraslacion[1][1]=1; MatrixTraslacion[1][2]=_yt;
    MatrixTraslacion[2][0]=0; MatrixTraslacion[2][1]=0; MatrixTraslacion[2][2]=1;
    
    //CheckMatrix(MatrixTraslacion);
    Operacion(MatrixTraslacion);
}

void Transformaciones::setRotacion(float ang){

    float rad=ang*M_PI/180;
    float Seno=sin(rad);
    float Coseno=cos(rad);

    MatrixRotacion[0][0]=Coseno; MatrixRotacion[0][1]=-Seno; MatrixRotacion[0][2]=0;
    MatrixRotacion[1][0]=Seno; MatrixRotacion[1][1]=Coseno; MatrixRotacion[1][2]=0;
    MatrixRotacion[2][0]=0; MatrixRotacion[2][1]=0; MatrixRotacion[2][2]=1;

    Operacion(MatrixRotacion);

}





void Transformaciones::Operacion(float MatrixTrans[3][3]){
    
    //CheckMatrix(MatrixTrans);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 3; k++) {

                MatrixFinal[i][j]+=MatrixTrans[i][k]*MatrixInit[k][j];
            }
        }
    }
    
    //CheckMatrix(MatrixFinal);

    m.SetFinalValueX(MatrixFinal[0][0]);
    m.SetFinalValueY(MatrixFinal[1][0]);

    m.ShowMatrix();
}

void Transformaciones::CheckMatrix(float matriz[3][1]){

    int cols = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    cout<<"Columnas : "<<cols<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

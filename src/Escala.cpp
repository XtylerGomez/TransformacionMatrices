#include "Escala.hpp"
#include "Matrix.hpp"
#include "Transformaciones.hpp"
#include <iostream>
#include <windows.h>

using namespace std;


Matrix ma;
Transformaciones tr;
void Escala::setPoint1MatrixInit(float _x, float _y){
    MatrixPoint1Init[0][0]=_x;
    MatrixPoint1Init[1][0]=_y;
    MatrixPoint1Init[2][0]=1;
    
    InitValueX1=ma.Origen-(static_cast<int>(MatrixPoint1Init[1][0]));
    InitValueY1=ma.Origen+(static_cast<int>(MatrixPoint1Init[0][0]));
}

void Escala::setPoint2MatrixInit(float _x, float _y){
    MatrixPoint2Init[0][0]=_x;
    MatrixPoint2Init[1][0]=_y;
    MatrixPoint2Init[2][0]=1;
    
    InitValueX2=ma.Origen-(static_cast<int>(MatrixPoint2Init[1][0]));
    InitValueY2=ma.Origen+(static_cast<int>(MatrixPoint2Init[0][0]));
}

void Escala::setEscala(float _xs, float _ys){
    MatrixEscala[0][0]=_xs; MatrixEscala[0][1]=0; MatrixEscala[0][2]=0;
    MatrixEscala[1][0]=0; MatrixEscala[1][1]=_ys; MatrixEscala[1][2]=0;
    MatrixEscala[2][0]=0; MatrixEscala[2][1]=0; MatrixEscala[2][2]=1;
    //tr.CheckMatrix(MatrixEscala);
    Operacion();
}

void Escala::Operacion(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 3; k++) {

                MatrixPoint1Final[i][j]+=MatrixEscala[i][k]*MatrixPoint1Init[k][j];
            }
        }
    }
    //tr.CheckMatrix(MatrixPoint1Final);
    FinalValueX1=ma.Origen-(static_cast<int>(MatrixPoint1Final[1][0]));
    FinalValueY1=ma.Origen+(static_cast<int>(MatrixPoint1Final[0][0]));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 3; k++) {

                MatrixPoint2Final[i][j]+=MatrixEscala[i][k]*MatrixPoint2Init[k][j];
            }
        }
    }
    //tr.CheckMatrix(MatrixPoint2Final);
    FinalValueX2=ma.Origen-(static_cast<int>(MatrixPoint2Final[1][0]));
    FinalValueY2=ma.Origen+(static_cast<int>(MatrixPoint1Final[0][0]));
    showScaleMatrix();
}

void Escala::showScaleMatrix(){
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

    
    for(int row=0;row<ma.Size;row++){
            for(int col=0;col<ma.Size;col++){


                if((row==InitValueX1&&col==InitValueY1)||(row==InitValueX2&&col==InitValueY2)){
                    SetConsoleTextAttribute(hConsole, 9); 
                    cout<<" "<<ma.Matrix[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 15);
                }else 

                if((row==FinalValueX1&&col==FinalValueY1)||(row==FinalValueX2&&col==FinalValueY2)){
                    SetConsoleTextAttribute(hConsole, 12); 
                    cout<<" "<<ma.Matrix[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 15);
                }else

                if(row==ma.Origen||col==ma.Origen){ 
                    SetConsoleTextAttribute(hConsole, 10);
                    cout<<" "<<ma.Matrix[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 15);
                }

                else{cout<<" "<<ma.Matrix[row][col]<<" ";}
            }
        cout<<endl;
        }
}
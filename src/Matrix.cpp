//Clase de la Matriz
#include "Matrix.hpp"
#include "Position.hpp"
#include "Transformaciones.hpp"
#include <iostream>
#include <windows.h>//con esta libreria hago lo de los colores


using namespace std;

Position p;
Transformaciones t;
void Matrix::StartMatrix(){ //llenar una matriz de toda la vida
    int Size=getSize();
    for(int row=0;row<Size;row++){
            for(int col=0;col<Size;col++){
                Matrix[row][col]=0;
            }  
        }
}

void Matrix::ShowMatrix(){
    
    int xi=t.getInitValueX();
    int yi=t.getInitValueY();

    int xf=t.getInitValueX();
    int yf=t.getFinalValueY();

    //Estas dos lineas son para los colorines, no se como funcionan but it works
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    int Size=getSize();
    int Origin=getOrigen();
    
    for(int row=0;row<Size;row++){
            for(int col=0;col<Size;col++){

                
                if(row==Origin||col==Origin){ 
                    SetConsoleTextAttribute(hConsole, 10);
                    cout<<" "<<Matrix[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 15);
                }else

                if(row==xi&&col==yi){
                    SetConsoleTextAttribute(hConsole, 9); 
                    cout<<" "<<Matrix[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 15);
                }else 

                if(row==xf&&col==yf){
                    SetConsoleTextAttribute(hConsole, 12); 
                    cout<<" "<<Matrix[row][col]<<" ";
                    SetConsoleTextAttribute(hConsole, 15);
                }

                else{cout<<" "<<Matrix[row][col]<<" ";}
            }
        cout<<endl;
        }
}
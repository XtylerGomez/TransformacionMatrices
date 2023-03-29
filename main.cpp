#include <iostream>
#include "src/Matrix.hpp"
#include "src/Position.hpp"
#include "src/Transformaciones.hpp"

using namespace std;

int main(){
    Matrix m;
    Transformaciones t;
    bool flag=true;
    int op;
    float ValueX = 5.5, ValueY = 8.2;

    m.StartMatrix();
    while(flag==true){
        cout<<endl;
        cout<<"Transformaciones."<<endl;
        cout<<endl;
        cout<<"Selecciona la operacion que deseé hacer."<<endl;
        cout<<"1.- Transformacion."<<endl;
        cout<<"2.- Rotacion."<<endl;
        cout<<"3.- Escala."<<endl;
        cout<<"4.- Salir."<<endl;
        cin>>op;

        switch(op){
            case 1:
            t.setMatrixInit(ValueX, ValueY);
            t.setMatrixFinal(ValueX+2, ValueY+3);
            m.ShowMatrix();
            flag=false;
            break;
        }

    }


    
    
    cout<<"Peppino";

}
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
    float ValueXi, ValueYi;
    float ValueXt, ValueYt;

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
            cout<<"Ingrese las coordenadas iniciales : "<<endl;
            cin>>ValueXi;
            cin>>ValueYi;
            t.setMatrixInit(ValueXi, ValueYi);
            cout<<"Ingrese los valores de Translacion : "<<endl;
            cin>>ValueXt;
            cin>>ValueYt;
            t.setTraslacion(ValueXt, ValueYt);
            
            flag=false;
            break;
            
            case 2:
            cout<<"Ingrese las coordenadas iniciales : "<<endl;
            cin>>ValueXi;
            cin>>ValueYi;
            t.setMatrixInit(ValueXi, ValueYi);
            cout<<"Ingrese El Angulo de Rotacion: "<<endl;
            cin>>ValueXt;
            t.setRotacion(ValueXt);
            case 4:
            flag=false;
            break;
        }

    }


    
    
    cout<<"Peppino";

}
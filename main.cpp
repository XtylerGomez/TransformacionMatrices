#include <iostream>
#include "src/Matrix.hpp"
#include "src/Escala.hpp"
#include "src/Transformaciones.hpp"

using namespace std;

int main(){
    Matrix m;
    Transformaciones t;
    Escala e;
    
    bool flag=true;
    int op;
    float ValueXi, ValueYi, ValueXj, ValueYj;
    float ValueXt, ValueYt;
    float ValueAng;
    float ValueXs, ValueYs;

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
            cin>>ValueAng;
            t.setRotacion(ValueXt);

            flag=false;
            break;

            case 3:
            cout<<"Ingrese el Primer Punto : "<<endl;
            cin>>ValueXi;
            cin>>ValueYi;
            e.setPoint1MatrixInit(ValueXi, ValueYi);

            cout<<"Ingrese el Segundo Punto : "<<endl;
            cin>>ValueXj;
            cin>>ValueYj;
            e.setPoint2MatrixInit(ValueXj, ValueYj);

            cout<<"Ingrese el Escalar de los puntos : "<<endl;
            cin>>ValueXs;
            cin>>ValueYs;
            e.setEscala(ValueXs, ValueYs);

            flag=false;
            break;

            case 4:
            flag=false;
            break;

            default:
            cout<<"Peppino";
            break;
        }

    }

}
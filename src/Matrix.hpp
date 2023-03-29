//Header de la Clase Matriz, aqui se iniciaran los parametros y metodos

#ifndef Matrix_hpp //Esto es para no compilar a cada rato el header si no hace falta
#define Matrix_hpp

    class Matrix{

        public : //No hizo falta hacer cosos privados aqui
        int Size=15; 
        int Matrix[15][15];
        int Origen=Size/2;
        void StartMatrix();
        void ShowMatrix();
        int getSize() const {return Size;} //const == Constante
        int getOrigen() const {return Origen;}
    };

#endif
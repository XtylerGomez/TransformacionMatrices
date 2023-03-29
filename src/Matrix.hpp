//Header de la Clase Matriz, aqui se iniciaran los parametros y metodos

#ifndef Matrix_hpp //Esto es para no compilar a cada rato el header si no hace falta
#define Matrix_hpp

    class Matrix{

        private :
        int InitValueX, FinalValueX;
        int InitValueY, FinalValueY;

        public : //No hizo falta hacer cosos privados aqui
        int Size=41; 
        int Matrix[41][41];
        int Origen=Size/2;
        void StartMatrix();
        void ShowMatrix();
        int getSize() const {return Size;} //const == Constante
        int getOrigen() const {return Origen;}

        void SetInitValueX(float _x){InitValueX=static_cast<int>(_x);}
        void SetInitValueY(float _y){InitValueY=static_cast<int>(_y);}
        void SetFinalValueX(float _x){FinalValueX=static_cast<int>(_x);}
        void SetFinalValueY(float _y){FinalValueY=static_cast<int>(_y);}

        int getInitValueX(){return InitValueX;}
        int getInitValueY(){return InitValueY;}
        int getFinalValueX(){return FinalValueX;}
        int getFinalValueY(){return FinalValueY;}
    };

#endif

#ifndef Transformaciones_hpp
#define Transformaciones_hpp

    class Transformaciones{

        private : 
        float MatrixInit[1][3];
        float MatrixFinal[1][3];
        float MatrixTraslacion[3][3];
        float MatrixRotacion[3][3];
        float MatrixEscala[3][3];

        int InitValueX, FinalValueX;
        int InitValueY, FinalValueY;

        public :
        void setMatrixInit(float _x, float _y);
        void setMatrixFinal(float _x, float _y);
        void setMatrixTraslacion(float _x, float _y);
        void setMatrixRotacion(float _x, float _y);
        void setMatrixEscala(float _x, float _y);

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
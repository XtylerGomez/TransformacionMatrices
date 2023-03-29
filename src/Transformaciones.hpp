
#ifndef Transformaciones_hpp
#define Transformaciones_hpp

    class Transformaciones{

        private : 
        float MatrixInit[1][3];
        float MatrixFinal[1][3];
        float MatrixTraslacion[3][3];
        float MatrixRotacion[3][3];
        float MatrixEscala[3][3];

        public :
        void setMatrixInit(float _x, float _y);
        void setMatrixFinal(float _x, float _y);
        void setMatrixTraslacion(float _x, float _y);
        void setMatrixRotacion(float _x, float _y);
        void setMatrixEscala(float _x, float _y);

        
    };

#endif
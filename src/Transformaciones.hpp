
#ifndef Transformaciones_hpp
#define Transformaciones_hpp

    class Transformaciones{

        private : 
        float MatrixInit[3][1];
        float MatrixFinal[3][1];
        float MatrixTraslacion[3][3];
        float MatrixRotacion[3][3];
        float MatrixEscala[3][3];

        public :
        void setMatrixInit(float _x, float _y);
        void setMatrixFinal(float _x, float _y);
        void setTraslacion(float _xt, float _yt);
        void setRotacion(float ang);
        void setEscala(float _xs, float _ys);
        void Operacion(float MatrixTrans[3][3]);
        void CheckMatrix(float matriz[3][1]);

        
    };

#endif
#ifndef Escala_hpp
#define Escala_hpp

    class Escala{
        private:
        float MatrixPoint1Init[3][1];
        float MatrixPoint1Final[3][1];

        float MatrixPoint2Init[3][1];
        float MatrixPoint2Final[3][1];

        float MatrixEscala[3][3];
        
        int InitValueX1, FinalValueX1;
        int InitValueY1, FinalValueY1;

        int InitValueX2, FinalValueX2;
        int InitValueY2, FinalValueY2;

        public:
        void setPoint1MatrixInit(float _x, float _y);

        void setPoint2MatrixInit(float _x, float _y);

        void setEscala(float _xs, float _ys);
        void Operacion();
        void showScaleMatrix();
    };
















#endif
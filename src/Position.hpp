

#ifndef Position_hpp
#define Position_hpp

    class Position{

        private :
        int InitAxisX, FinalAxisX;
        int InitAxisY, FinalAxisY;
        
        public : 
        
        void SetInitAxisX(int _x){InitAxisX=_x;}
        void SetInitAxisY(int _y){InitAxisY=_y;}

        void SetFinalAxisX(int _x){FinalAxisX=_x;}
        void SetFinalAxisY(int _y){FinalAxisY=_y;}

        int getInitAxisX(){return InitAxisX;}
        int getInitAxisY(){return InitAxisY;}

        int getFinalAxisX(){return FinalAxisX;}
        int getFinalAxisY(){return FinalAxisY;}

    };

#endif
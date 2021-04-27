#pragma once
#include "FractalMode.h"
#include "ofMain.h"

class drawMode4 : public FractalMode {
    private:
        bool isActive_4 = false;
        int x = 0;
        int y = 0;
        int z = 0;
    
    public:
        drawMode4();
        void setActive(bool activ);
        bool getActive();
        void draw(int);
        void drawHelper4(int, int, int, int);
        void levelsColor(int niveles);
        ofEasyCam cam;
};
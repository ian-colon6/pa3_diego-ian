#pragma once
#include "FractalMode.h"
#include "ofMain.h"

class drawMode1 : public FractalMode {
    private:
        bool isActive_1 = false;
        int x = ofGetWidth()/2;
        int y = ofGetHeight()/2;
    
    public:
        drawMode1();
        void setActive(bool activ);
        bool getActive();
        void draw(int);
        void drawHelper1(int, int, int);
        void levelsColor(int niveles);

};
#pragma once
#include "FractalMode.h"
#include "ofMain.h"

class drawMode3 : public FractalMode {
    private:
        bool isActive_3 = false;
        float x = ofGetWidth()/3 - 20;
        float y = 10;
        float size = ofGetHeight()/2;
    
    public:
        int levels = 5;
        drawMode3();
        void setActive(bool activ);
        bool getActive();
        void draw(int);
        void drawHelper3(float, float, float, int);
        void levelsColor(int);

};
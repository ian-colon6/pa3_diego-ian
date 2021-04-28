#pragma once
#include "FractalMode.h"
#include "ofMain.h"

class drawMode2 : public FractalMode {
    private:
        bool isActive_2 = false;
        int x = ofGetWidth()/2;
        int y = ofGetHeight() - 50;
        int length = 200;
    
    public:
        drawMode2();
        void setActive(bool activ);
        bool getActive();
        void draw(int);
        void drawHelper2(int, int, int, int, int);
        void levelsColor(int);
        int deg;
        int angle1 = ofRandom(30,70);
        int angle2 = ofRandom(30,70);
        int angle3 = ofRandom(30,70);
};
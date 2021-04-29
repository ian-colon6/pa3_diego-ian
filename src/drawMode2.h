#pragma once
#include "FractalMode.h"
#include "ofMain.h"

class drawMode2 : public FractalMode {
    private:
        bool isActive_2 = false;
        int x = ofGetWidth()/2;
        int y = ofGetHeight() - 50;
        int length = 200;
        int d; // Variable use to draw the different degrees on the drawHelper function 
        
        //different degrees for each of the recursion levels 
        int d0, d1, d2, d3, d4;
    
    public:
        drawMode2();
        void setActive(bool activ);
        bool getActive();
        void draw(int);
        void drawHelper2(int, int, int, int);
        void levelsColor(int);
        int randomAngle(int level);

};
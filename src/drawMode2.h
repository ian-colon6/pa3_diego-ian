#pragma once
#include "FractalMode.h"

class drawMode2 : public FractalMode {
    private:
        bool isActive_2 = false;
        int x, y, levels;

    
    public:
        void setActive(bool activ);
        bool getActive();
        void draw(int, int, int, int, int);
        void levelsColor(int);

};
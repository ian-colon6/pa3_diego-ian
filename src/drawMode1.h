#pragma once
#include "FractalMode.h"

class drawMode1 : public FractalMode {
    private:
        bool isActive_1 = false;
        int x, y, levels;

    
    public:
        void setActive(bool activ);
        bool getActive();
        void draw(int x, int y, int levs);
        void levelsColor(int niveles);

};
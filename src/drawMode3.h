#pragma once
#include "FractalMode.h"

class drawMode3 : public FractalMode {
    private:
        bool isActive_3 = false;
        int x, y, levels;

    
    public:
        void setActive(bool activ);
        bool getActive();
        void draw_3(int x, int y, int levs);

};
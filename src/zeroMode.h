#pragma once
#include "FractalMode.h"


class zeroMode : public FractalMode{

    private:
        bool isActive_0 = true;

    public:
        void setActive(bool b);
        bool getActive();
        void draw(int);
        void levelsColor(int);
};
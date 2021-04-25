#pragma once

class FractalMode{
private:
    bool active;
public:
    int levels;
    FractalMode(){}
    virtual void setActive(bool b) = 0;
    virtual bool getActive() = 0;
    virtual void draw(int) = 0;
    virtual void levelsColor(int) = 0;
};
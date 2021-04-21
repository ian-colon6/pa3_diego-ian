#pragma once

class FractalMode{
private:
    bool active;
public:
    virtual void setActive(bool b) = 0;
    virtual bool getActive() = 0;
    virtual void draw() = 0;
    virtual void levelsColor(int) = 0;
};
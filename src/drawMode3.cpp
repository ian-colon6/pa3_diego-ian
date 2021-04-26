#pragma once
#include "drawMode3.h"

drawMode3::drawMode3(){

    this->isActive_3 = false;
}

void drawMode3::setActive(bool activated){

    this->isActive_3 = activated;
}

bool drawMode3::getActive(){

    return this->isActive_3;
}

void drawMode3::levelsColor(int l){
    if(l%5 == 0)ofSetColor(190,150,255);
    else if(l%5 == 1)ofSetColor(255,0,0);
    else if(l%5 == 2)ofSetColor(0,255,0);
    else if(l%5 == 3)ofSetColor(50,255,255);
    else if(l%5 == 4)ofSetColor(255,255,0);
}

void drawMode3::draw(int n){

    drawHelper3(x, y, size, n);    
}

void drawMode3::drawHelper3(float x, float y, float size, int n){

    levelsColor(n);
    if(n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawHelper3(x, y, size / 2, n - 1);
    drawHelper3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawHelper3((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}
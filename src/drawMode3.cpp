#pragma once
#include "ofApp.h"
#include "drawMode3.h"

void drawMode3::setActive(bool activated){

    this->isActive_3 = activated;
}

bool drawMode3::getActive(){

    return this->isActive_3;
}

void drawMode3::levelsColor(int levels){

    if(levels%5 == 0)ofSetColor(255,255,255);
    else if(levels%5 == 1)ofSetColor(255,0,0);
    else if(levels%5 == 2)ofSetColor(0,255,0);
    else if(levels%5 == 3)ofSetColor(0,0,255);
    else if(levels%5 == 4)ofSetColor(255,255,0);
}

void drawMode3::draw(float x, float y, float size, int n){

    levelsColor(n);
    if(n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    draw(x, y, size / 2, n - 1);
    draw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    draw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}
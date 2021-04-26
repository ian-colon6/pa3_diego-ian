#pragma once
#include "drawMode1.h"



drawMode1::drawMode1(){
    this->isActive_1 = false;
}

void drawMode1::setActive(bool active){
    
    this->isActive_1 = active;
}

bool drawMode1::getActive(){

    return this->isActive_1;
}

void drawMode1::levelsColor(int l){
    if(l%5 == 0)ofSetColor(190,150,255);
    else if(l%5 == 1)ofSetColor(255,0,0);
    else if(l%5 == 2)ofSetColor(0,255,0);
    else if(l%5 == 3)ofSetColor(50,255,255);
    else if(l%5 == 4)ofSetColor(255,255,0);
}

void drawMode1::draw(int levels){

    drawHelper1(x, y, levels);
}

void drawMode1::drawHelper1(int x, int y, int levels){
    levelsColor(levels);
    if(levels!=0){
        ofDrawCircle(x, y, levels *20);
        drawHelper1(x+100, y, levels-1);
        drawHelper1(x-100, y, levels-1);
        drawHelper1(x, y+100, levels-1);
        drawHelper1(x, y-100, levels-1);
    }
}
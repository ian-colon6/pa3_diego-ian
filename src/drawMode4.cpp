#pragma once
#include "drawMode4.h"



drawMode4::drawMode4(){
    this->isActive_4 = false;
}

void drawMode4::setActive(bool active){
    
    this->isActive_4 = active;
}

bool drawMode4::getActive(){

    return this->isActive_4;
}

void drawMode4::levelsColor(int l){
    if(l%5 == 0)ofSetColor(190,150,255);
    else if(l%5 == 1)ofSetColor(255,0,0);
    else if(l%5 == 2)ofSetColor(0,255,0);
    else if(l%5 == 3)ofSetColor(50,255,255);
    else if(l%5 == 4)ofSetColor(255,255,0);
}

void drawMode4::draw(int levels){

    drawHelper4(x, y, z, levels);
}

void drawMode4::drawHelper4(int x, int y, int z, int levels){
    ofFill();
    ofEnableDepthTest();
    levelsColor(levels);
    if(levels!=0){
        cam.begin();
        ofRotateYDeg(ofGetFrameNum());
        ofDrawSphere(x, y, z, levels *20);
        drawHelper4(x+100, y, z, levels-1);
        drawHelper4(x-100, y, z, levels-1);
        drawHelper4(x, y+100, z, levels-1);
        drawHelper4(x, y-100, z, levels-1);
        drawHelper4(x, y, z+100, levels-1);
        drawHelper4(x, y, z-100, levels-1);
        cam.end();
    }
}

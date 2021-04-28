#pragma once

#include "drawMode2.h"


drawMode2::drawMode2(){

    this->isActive_2 = false;
}

void drawMode2::setActive(bool activated){

    this->isActive_2 = activated;
}

bool drawMode2::getActive(){

    return this->isActive_2;
}

void drawMode2::levelsColor(int l){
    if(l%5 == 0)ofSetColor(190,150,255);
    else if(l%5 == 1)ofSetColor(255,0,0);
    else if(l%5 == 2)ofSetColor(0,255,0);
    else if(l%5 == 3)ofSetColor(50,255,255);
    else if(l%5 == 4)ofSetColor(255,255,0);
}

void drawMode2::draw(int levels){
    std::vector<int> angles = {angle1};
    for(int i = 0; i < angles.size(); i++){
        deg = angles[0];
    }
    drawHelper2(length, levels, x, y, deg);    
}

void drawMode2::drawHelper2(int length, int n, int x, int y, int d){

    levelsColor(n);
    if(n != 0){
        int middleY = y-length;
        int leftBranchX = x -length*cos(PI/180*d);
        int leftBranchY = middleY -length*sin(PI/180*d);
        int rightBranchX = x +length*cos(PI/180*d);
        int rightBranchY = middleY -length*sin(PI/180*d);

        ofDrawLine(x, y, x,y-length);
        ofDrawLine(x, y-length, rightBranchX, rightBranchY);
        ofDrawLine(x,y-length, leftBranchX, leftBranchY);

        drawHelper2(length/2, n-1,rightBranchX,rightBranchY, angle2);
        drawHelper2(length/2,n-1,leftBranchX,leftBranchY, angle3);
    }
}

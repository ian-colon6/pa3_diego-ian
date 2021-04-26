#pragma once
#include "zeroMode.h"
#include "ofMain.h"


bool zeroMode::getActive(){

    return isActive_0;
}

void zeroMode::setActive(bool b){

    this->isActive_0 = b;
}

void zeroMode::draw(int n){
    ofSetColor(256);
    ofDrawBitmapString("Press any number from 1-3", ofGetWidth()/2 -100, ofGetHeight()/2);
}

void zeroMode::levelsColor(int nothing){};

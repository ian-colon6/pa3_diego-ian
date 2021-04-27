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
    ofDrawBitmapString("WELCOME TO DIEGO'S AND IAN'S PROJECT", ofGetWidth()/2 -125, ofGetHeight()/2 - 100);
    ofDrawBitmapString("Press any number from 1-4", ofGetWidth()/2 -100, ofGetHeight()/2);
}

void zeroMode::levelsColor(int nothing){};

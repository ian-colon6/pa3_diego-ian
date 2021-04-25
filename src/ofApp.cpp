#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    m0 = new zeroMode();
    m1 = new drawMode1();
    m2 = new drawMode2();
    m3 = new drawMode3();
    currentMode = m0;
    Frac_modes = {m0, m1, m2, m3};

    //this->levels = 5;
    //isActivated_1 = false;
	//isActivated_2 = false;
	//isActivated_3 = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0,0,0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    for(int i = 0; i < Frac_modes.size(); i++){

        if(Frac_modes[i]->getActive()){ Frac_modes[i]->draw(5);};

        
    }

/*
    if(isActivated_1 && !isActivated_2 && !isActivated_3){
        drawMode1(ofGetWidth()/2, ofGetHeight()/2, this -> levels);

    }
    else if(isActivated_2 && !isActivated_1 && !isActivated_3){
        drawMode2(200, this -> levels, ofGetWidth()/2, ofGetHeight()-50, 30);
        
    }
    else if(isActivated_3 && !isActivated_1 && !isActivated_2) {
        drawMode3(ofGetWidth() / 3 - 20, 10, ofGetHeight() / 2, this -> levels);

    }
    else if(isActivated_1 && isActivated_2 && !isActivated_3){
        drawMode1(ofGetWidth()/2, ofGetHeight()/2, this -> levels);
        drawMode2(200, this -> levels, ofGetWidth()/2, ofGetHeight()-50, 30);
    }
    else if(isActivated_1 && isActivated_3 && !isActivated_2){
        drawMode1(ofGetWidth()/2, ofGetHeight()/2, this -> levels);
        drawMode3(ofGetWidth() / 3 - 20, 10, ofGetHeight() / 2, this -> levels);
    }
    else if(isActivated_2 && isActivated_3 && !isActivated_1){
        drawMode2(200, this -> levels, ofGetWidth()/2, ofGetHeight()-50, 30);
        drawMode3(ofGetWidth() / 3 - 20, 10, ofGetHeight() / 2, this -> levels);
    }
    else if(isActivated_1 && isActivated_2 && isActivated_3){
        drawMode1(ofGetWidth()/2, ofGetHeight()/2, this->levels);
        drawMode2(200, this -> levels, ofGetWidth()/2, ofGetHeight()-50, 30);
        drawMode3(ofGetWidth() / 3 - 20, 10, ofGetHeight() / 2, this -> levels);
    }
    else{
        ofSetColor(256);
        ofDrawBitmapString("Press any number from 1-3", ofGetWidth()/2 -100, ofGetHeight()/2);
    }
    */
        
}
/*
void ofApp::drawMode1(int x, int y, int n){

    levelsColor(n);
    if(n!=0){
        ofDrawCircle(x, y, 100);
        drawMode1(x+100, y, n-1);
        drawMode1(x-100, y, n-1);
        drawMode1(x, y+100, n-1);
        drawMode1(x, y-100, n-1);
    }
}
void ofApp::drawMode2(int length, int n, int x, int y, int d){

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

        drawMode2(length/2, n-1,rightBranchX,rightBranchY, 30);
        drawMode2(length/2,n-1,leftBranchX,leftBranchY, 30);
    }
}

void ofApp::drawMode3(float x, float y, float size, int n){

    levelsColor(n);
    if(n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    drawMode3(x, y, size / 2, n - 1);
    drawMode3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawMode3((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
}

void ofApp::levelsColor(int l){
    if(l%5 == 0)ofSetColor(255,255,255);
    else if(l%5 == 1)ofSetColor(255,0,0);
    else if(l%5 == 2)ofSetColor(0,255,0);
    else if(l%5 == 3)ofSetColor(0,0,255);
    else if(l%5 == 4)ofSetColor(255,255,0);
}
*/

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // This method is called automatically when any key is pressed
    switch(key){
        case '1':

            if(m1->getActive() == false){
                m1->setActive(true);
            }else{
                m1->setActive(false);
            }
            break;
        case '2':
            if(m2->getActive() == false){
                m2->setActive(true);
            }else{
                m2->setActive(false);
            }
            break;
        case '3':
            if(m3->getActive() == false){
                m3->setActive(true);
            }else{
                m3->setActive(false);
            }
            break;
        case '4':
            mode = '4';
            break;
        case '=':
            if(this -> levels <= 20) this->levels++;
            break;
        case '-':
            if(this->levels>= 1) this->levels--;
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
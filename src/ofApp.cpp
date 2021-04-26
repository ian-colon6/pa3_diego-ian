#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    m0 = new zeroMode();
    m1 = new drawMode1();
    m2 = new drawMode2();
    m3 = new drawMode3();
    Frac_modes = {m0, m1, m2, m3};

    this->levels = 5;
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
    if(m1->getActive()) m1->draw(this->levels);
    if(m2->getActive()) m2->draw(this->levels);
    if(m3->getActive()) m3->draw(this->levels);
    if(!m1->getActive() && !m2->getActive() && !m3->getActive()){
        m0->draw(0);
    } 
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // This method is called automatically when any key is pressed
    switch(key){
        case '1':
            if(m1->getActive()) m1->setActive(false);
            else m1->setActive(true);
            break;
        case '2':
            if(m2->getActive()) m2->setActive(false);
            else m2->setActive(true);
            break;
        case '3':
            if(m3->getActive()) m3->setActive(false);
            else m3->setActive(true);
            break;
        // case '4':
        //     mode = '4';
        //     break;
        case '=':
            if(this->levels<= 20) this->levels++;
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
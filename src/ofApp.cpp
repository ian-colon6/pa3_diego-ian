#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    m0 = new zeroMode();
    m1 = new drawMode1();
    m2 = new drawMode2();
    m3 = new drawMode3();
    m4 = new drawMode4();
    Frac_modes = {m1, m2, m3, m4};
    modesActive = 0;

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
    for(int i = 0;i<Frac_modes.size();i++){
        if(Frac_modes[i]->getActive()){
            Frac_modes[i]->draw(this->levels);
        }
    }
    if(modesActive == 0)m0->draw(0);
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // This method is called automatically when any key is pressed
    switch(key){
        case '1':
            if(m1->getActive()) {m1->setActive(false); modesActive--;}
            else {m1->setActive(true); modesActive++;}
            break;
        case '2':
            if(m2->getActive()){ m2->setActive(false); modesActive--;}
            else {m2->setActive(true);modesActive++;}
            break;
        case '3':
            if(m3->getActive()) {m3->setActive(false); modesActive--;}
            else {m3->setActive(true); modesActive++;}
            break;
        case '4':
            if(m4->getActive()) {m4->setActive(false); modesActive--;}
            else {m4->setActive(true); modesActive++;}
            break;
        case '=':
            if(this->levels <= 10) this->levels++;
            break;
        case '-':
            if(this->levels >= 1) this->levels--;
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
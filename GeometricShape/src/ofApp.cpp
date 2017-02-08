#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
//    for (int i = 100; i <255; i++){
//        ofSetBackgroundColor(i, i+2, ofRandom(0,150));
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofDrawTriangle(400, 100, 600, 100, 500, 200);
//    ofSetColor(0, 0, 0);
//    ofDrawTriangle(400, 50, 600, 50, 500, 150);
//    ofSetColor(89, 89, 89, 80);
//    ofDrawTriangle(400, 150, 600, 150, 500, 250);
//    ofSetColor(89, 89, 89, 60);
//    ofDrawTriangle(400, 200, 600, 200, 500, 300);
//    ofSetColor(89, 89, 89);
    
//    ofDrawLine(450, 200, 233.49, 325);
//    ofDrawLine(450, 200, 666.51, 325);
//    ofDrawLine(233.49, 325, 233.49, 575);
//    ofDrawLine(233.49, 575, 450, 700);
//    ofDrawLine(666.51, 575, 450, 700);
//    ofDrawLine(666.51, 325,666.51, 575);
//    ofDrawLine(450, 200, 666.51, 575);
//    ofDrawLine(450, 200, 233.49, 575);
//    ofDrawLine(233.49, 575, 666.51, 575);
//    ofDrawLine(233.49, 575, 666.51, 325);
//    ofDrawLine(233.49, 325, 666.51, 575);
//    ofDrawLine(341, 388, 559, 388);
//    ofDrawLine(341, 388, 450, 574);
//    ofDrawLine(450, 574, 559, 388);
//    ofDrawLine(450, 200, 450, 700);
//    ofSetColor(0);

    
    
    ofSetColor(254, 133, 0);
    ofDrawTriangle(450, 200, 233.49, 325, 341, 388);
    
    ofSetColor(199, 226, 51);
    ofDrawTriangle(450, 200, 666.51, 325, 559, 388);
    
    ofSetColor(237, 236, 234);
    ofDrawTriangle(341, 388, 559, 388, 450, 575);
    
    ofSetColor(238, 59, 163);
    ofDrawTriangle(233.49,575, 233.49, 325, 341, 388);
    
    ofSetColor(243, 224, 194);
    ofDrawTriangle(450, 200, 341, 388, 559, 388);
    
    ofSetColor(0, 210, 207);
    ofDrawTriangle(341, 388, 233.49, 575, 450, 574);
    
    ofSetColor(73, 67, 35);
    ofDrawTriangle(233.49, 575, 450, 574, 450, 700);
    
    ofSetColor(246, 204, 0);
    ofDrawTriangle(450, 574, 450, 700, 666.51, 575);
    
    ofSetColor(255, 22, 23);
    ofDrawTriangle(450, 574, 559, 388, 666.51, 575);
    
    ofSetColor(121, 43, 23);
    ofDrawTriangle(559, 388, 666.51, 325, 666.51, 575);
    
    
  

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key =='w'){
        ofSetBackgroundColor(255);
    }else if (key =='b'){
        ofSetBackgroundColor(0,0,153);
    
    }else {
        for (int i = 0; i <255; i++){
                    ofSetBackgroundColor(i, i+2, ofRandom(0,255));
                }
        
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    

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

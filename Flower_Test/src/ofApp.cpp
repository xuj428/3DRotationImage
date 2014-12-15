#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
//    ofEnableDepthTest();
    myCam.setDistance(1000);
    for (int i=0; i<200; i++) {
        Petal p;
        p.setup();
        pList.push_back(p);
    }


}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<pList.size(); i++) {
        pList[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    myCam.begin();
    
    ofPushMatrix();{
        for (int i=0; i<pList.size(); i++) {
            pList[i].draw();

       
    }ofPopMatrix();
    
    myCam.end();

       }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

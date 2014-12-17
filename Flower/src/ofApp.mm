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
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs & touch){
  
}

//--------------------------------------------------------------
void ofApp::touchMoved(ofTouchEventArgs & touch){

}

//--------------------------------------------------------------
void ofApp::touchUp(ofTouchEventArgs & touch){

}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(ofTouchEventArgs & touch){
 }

//--------------------------------------------------------------
void ofApp::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void ofApp::lostFocus(){

}

//--------------------------------------------------------------
void ofApp::gotFocus(){

}

//--------------------------------------------------------------
void ofApp::gotMemoryWarning(){

}

//--------------------------------------------------------------
void ofApp::deviceOrientationChanged(int newOrientation){

}

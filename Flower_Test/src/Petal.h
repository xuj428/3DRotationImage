#pragma once
#include "ofMain.h"

class Petal{
    public:
    Petal();
    void setup();
    void update();
    void draw();
    
    ofVec3f pos, vel, acc;
    
    //rotation
    ofVec3f rot;
    ofVec3f rotInc;
    float rotMult = 4;
    
    float petalSize;
    float damping;
    vector<ofImage> petalList;
    int setPicture;
};

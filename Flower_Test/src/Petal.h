#pragma once
#include "ofMain.h"

class Petal{
    public:
    Petal();
    void setup();
    void update();
    void draw();
    
    ofVec3f pos, vel, acc;
    float petalSize;
    float damping;
    vector<ofImage> petalList;
    int setPicture;
};

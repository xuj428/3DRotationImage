//
//  Petal.h
//  Flower
//
//  Created by 许嘉 on 14/12/16.
//
//
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
    float rotMult = 1;
    
    float petalSize;
    float damping;
    vector<ofImage> petalList;
    int setPicture;
};


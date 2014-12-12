//
//  petal.cpp
//  Flower_Test
//
//  Created by xjjulia on 11/12/14.
//
//

#include "petal.h"
Petal::Petal(){
}

void Petal::setup(){
    petalSize=ofRandom(20,50);
    damping=0.98;
    setPicture=int(ofRandom(3));
    float phi = ofRandom( 0, TWO_PI );
    float costheta = ofRandom( -1.0f, 1.0f );
    
    float rho = sqrt( 1.0f - costheta * costheta ); //0~1, unsigned
    float x = rho * cos( phi );
    float y = rho * sin( phi );
    float z = costheta;//-1~1
    
    ofVec3f randVec(x, y, z);
    
    pos = randVec * ofRandom( 100.0f, 600.0f );
    vel = -randVec;

    for (int i=0; i<3; i++) {
        string result = "";
        stringstream currentCombo;
        currentCombo << i;
        result = currentCombo.str();
        petalList.push_back(ofImage());
        petalList[i].loadImage(ofToDataPath(result + ".png"));
       
}
}

void Petal::update(){
    vel += acc;
    
    // don't move too fast
    vel.limit(3.0);
    
    // but also don't move too slow!
    if( vel.lengthSquared() < 1.0 ){
        vel = vel.normalized() * 1.0;
    }
    
    pos += vel;
    vel *= damping;
    
//    acc.set(0);

    
}

void Petal::draw(){
    for (int i=0; i<petalList.size(); i++) {
       petalList[setPicture].draw(pos.x,pos.y,pos.z, petalSize, petalSize);
    }

}

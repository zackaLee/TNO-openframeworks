#include "ofApp.h"
	
	float x = 100;
	float y = 100;
	float xspeed = 1;
	float yspeed = 3.3;
//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){
	x = x + xspeed;
	y = y + yspeed;

	if ((x > ofGetWidth() / 2) || (x < 0)){
		xspeed = xspeed * -1;
	}
	if ((y > ofGetHeight() /2) || (y < 0)){
		yspeed = yspeed * -1;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);	//set white background
	
	ofPushMatrix();	

	ofSetColor(255, 0, 255);
	ofEllipse(x, y, 16, 16);	

	//restore the coordinate system
	ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

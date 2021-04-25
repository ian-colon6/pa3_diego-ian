#pragma once
#include<cmath>
#include <vector>
#include "FractalMode.h"
#include "zeroMode.h"
#include "drawMode1.h"
#include "drawMode2.h"
#include "drawMode3.h"
#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
	/*
		void drawMode1(int x, int y, int n);
		void drawMode2(int length, int n, int x, int y, int d);
		void drawMode3(float x, float y, float size, int n);
	*/
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void levelsColor(int l);
	private:
		char mode = '1';
		int levels;
		bool isActivated_1;
		bool isActivated_2;
		bool isActivated_3;
		std::vector<FractalMode*> Frac_modes;
		drawMode1 *m1;
		drawMode2 *m2;
		drawMode3 *m3;
		zeroMode *m0;
		FractalMode *currentMode;
};

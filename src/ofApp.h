#pragma once
#include<cmath>
#include <vector>
#include "FractalMode.h"
#include "zeroMode.h"
#include "drawMode1.h"
#include "drawMode2.h"
#include "drawMode3.h"
#include "ofMain.h"
#include "drawMode4.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
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
		void Animation(int low_limit, int up_limit);
	private:
		int levels;
		std::vector<FractalMode*> Frac_modes;
		drawMode1 *m1;
		drawMode2 *m2;
		drawMode3 *m3;
		zeroMode *m0;
		drawMode4 *m4;
		int modesActive;
		bool isAnim = false;
		bool isReversed;
		ofSoundPlayer ST_music;
};

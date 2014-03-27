#pragma once

#include "ofMain.h"
#include "ofxBatchDownloader.h"
#include "ofxDownloadCentral.h"
#include "AssetObject.h"
#include "ofxTimeMeasurements.h"

#define NUM_OBJECTS 20


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

	vector<AssetObject*> objects;
	ofxDownloadCentral downloader;

	ofEasyCam cam;

};

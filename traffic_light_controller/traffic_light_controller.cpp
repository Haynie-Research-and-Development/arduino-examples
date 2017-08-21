/*
**********************************************************
* CATEGORY	hardware
* GROUP		microcontroller
* AUTHOR	Lance Haynie <lance@hayniemail.com>
* DATE		2015-11-30
* FILE		traffic_light_controller.cpp
* PURPOSE	traffic light controller main application
**********************************************************
* MODIFICATIONS
* 2015-11-30 - LHAYNIE - Initial Version
* 2015-12-01 - LHAYNIE - Updated for ATMEGA standalone
* 2015-12-05 - LHAYNIE - Updated for Eclipse IDE
* 2015-12-17 - LHAYNIE - Updated to use functions.h
**********************************************************
*/
#include "config.h"
#include "functions.h"

//set initial button state
int buttonState = 0;

void setup() {
  //all signals will either be x or y
  pinMode(X_GREEN, OUTPUT);
  pinMode(X_YELLOW, OUTPUT);
  pinMode(X_RED, OUTPUT);
  pinMode(Y_GREEN, OUTPUT);
  pinMode(Y_YELLOW, OUTPUT);
  pinMode(Y_RED, OUTPUT);
  pinMode(startBtn, INPUT);

  lightTest();
  initSerial();
  Serial.println("Waiting for Start");
}

void loop() {
	//read start button
	buttonState = digitalRead(startBtn);

	if (buttonState == HIGH){
		Serial.println("Starting Traffic Light Controller");
		int runIteration = 0;
		while (runIteration < 25){

			Serial.println(runIteration);
			trafficLights();
			runIteration++;
		}

	}
	else {
		//make sure all the traffic lights are off
		digitalWrite(X_GREEN, LOW);
		digitalWrite(Y_RED, LOW);
		digitalWrite(X_YELLOW, LOW);
		digitalWrite(X_RED, LOW);
		digitalWrite(Y_GREEN, LOW);
		digitalWrite(Y_YELLOW, LOW);
	}


}

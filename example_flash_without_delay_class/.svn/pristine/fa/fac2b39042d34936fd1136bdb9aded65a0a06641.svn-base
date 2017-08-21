/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		YYYY-MM-DD
* PURPOSE	CUSTOM FUNCTIONS
* FILE		FUNCTIONS.H
**********************************************************
* MODIFICATIONS
* YYYY-MM-DD - LHAYNIE - INITIAL VERSION
**********************************************************
*/
#include "config.h"

//function to initialize serial communication
void initSerial(){
  Serial.begin(9600);
  Serial.println(pgmco);
  Serial.println("Initializing " + pgmname + " Console");
  Serial.println("Version: " + pgmver + "\n");
}

class Flasher
{
	// Class Member Variables
	// These are initialized at startup
	int ledPin;      // the number of the LED pin
	long OnTime;     // milliseconds of on-time
	long OffTime;    // milliseconds of off-time

	// These maintain the current state
	int ledState;             		// ledState used to set the LED
	unsigned long previousMillis;  	// will store last time LED was updated

  // Constructor - creates a Flasher
  // and initializes the member variables and state
  public:
  Flasher(int pin, long on, long off)
  {
	ledPin = pin;
	pinMode(ledPin, OUTPUT);

	OnTime = on;
	OffTime = off;

	ledState = LOW;
	previousMillis = 0;
  }

  void Update()
  {
    // check to see if it's time to change the state of the LED
    unsigned long currentMillis = millis();

    if((ledState == HIGH) && (currentMillis - previousMillis >= OnTime))
    {
    	ledState = LOW;  // Turn it off
      previousMillis = currentMillis;  // Remember the time
      digitalWrite(ledPin, ledState);  // Update the actual LED
    }
    else if ((ledState == LOW) && (currentMillis - previousMillis >= OffTime))
    {
      ledState = HIGH;  // turn it on
      previousMillis = currentMillis;   // Remember the time
      digitalWrite(ledPin, ledState);	  // Update the actual LED
    }
  }
};

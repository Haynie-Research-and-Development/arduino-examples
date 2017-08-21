// Do not remove the include below
#include "config.h"
#include "functions.h"


//The setup function is called once at startup of the sketch
void setup()
{
	  initSerial();

	  //wait a second before starting the program and reading the sensor
	  delay(1000);

	  //initialize the lcd
	  lcd.begin(16, 2);

	  //display the intro text
	  introText();
}

// The loop function is called in an endless loop
void loop()
{
	checkSensor();
	delay(5000);
}

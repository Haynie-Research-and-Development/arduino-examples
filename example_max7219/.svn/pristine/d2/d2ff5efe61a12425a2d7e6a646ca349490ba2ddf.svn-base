/*
**********************************************************
* CATEGORY    HARDWARE
* GROUP       MICROCONTROLLER
* AUTHOR      LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE        2015-12-18
* PURPOSE     MAX7219 EXAMPLE
**********************************************************
* MODIFICATIONS
* 2015-12-18 - LHAYNIE - INITIAL VERSION
**********************************************************
*/
#include "config.h"
#include "functions.h"

char msgText[] = "Hello World!      ";

void setup()
	{
		m.init();
		m.setIntensity(5);
	}

void loop()
	{
		delay(100);
		m.shiftLeft(false, true);
		printStringWithShift(msgText, 100);
	}

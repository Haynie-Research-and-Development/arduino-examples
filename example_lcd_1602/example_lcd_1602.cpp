/*
**********************************************************
* CATEGORY    HARDWARE
* GROUP       MICROCONTROLLER
* AUTHOR      LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE        2015-12-06
* PURPOSE     LCD16x2 EXAMPLE
**********************************************************
* MODIFICATIONS
* 2015-12-06 - LHAYNIE - INITIAL VERSION
**********************************************************
*/
#include "config.h"
#include "functions.h"

char txt1[16]="Hello World!";
char txt2[16]="LCD Example";

void setup()
	{
		lcd.begin(16, 2);
	}

void loop()
	{
		clearLcd();

		//setup the first line of the lcd
		lcd.setCursor(0, 0);
		lcd.print(txt1);

		//setup the second line of the lcd
		lcd.setCursor(0, 1);
		lcd.print(txt2);
	}

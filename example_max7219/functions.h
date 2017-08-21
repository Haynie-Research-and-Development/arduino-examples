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

void printCharWithShift(char c, int shift_speed)
	{
		if (c < 32) return;
		c -= 32;
		memcpy_P(buffer, CH + 7*c, 7);
		m.writeSprite(maxInUse*8, 0, buffer);
		m.setColumn(maxInUse*8 + buffer[0], 0);

		for (int i=0; i<buffer[0]+1; i++)
			{
				delay(shift_speed);
				m.shiftLeft(false, false);
			}
	}

void printStringWithShift(char* s, int shift_speed)
	{
		while (*s != 0)
			{
				printCharWithShift(*s, shift_speed);
				s++;
			}
	}

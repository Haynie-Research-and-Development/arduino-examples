/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		2015-12-18
* PURPOSE	CONFIG
* FILE		CONFIG.H
**********************************************************
* MODIFICATIONS
* 2015-12-18 - LHAYNIE - INITIAL VERSION
**********************************************************

ATMEGA Non I/O pin definitions
ATM01 = reset
ATM07 = VCC
ATM08 = GND
ATM09 = crystal
ATM10 = crystal
ATM20 = VCC
ATM21 = analog reference
ATM22 = GND

WX Pin Setup
Sensor Input   = 23
*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "Arduino.h"
#include "wx.h"
#include "avr/pgmspace.h"
#include "atmega_pins.h"

extern const String pgmco    = "Haynie Research & Development";
extern const String pgmname  = "WX SENSOR EXAMPLE";
extern const String pgmver   = "0.0.1";

#endif /* CONFIG_H_ */

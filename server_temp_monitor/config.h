/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		YYYY-MM-DD
* PURPOSE	CONFIG
* FILE		CONFIG.H
**********************************************************
* MODIFICATIONS
* YYYY-MM-DD - LHAYNIE - INITIAL VERSION
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

LCD Pin Setup
RS = 14
E  = 15
D4 = 16
D5 = 17
D6 = 18
D7 = 19


WX Pin Setup
Server Rack Sensor Input   = 23
*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "Arduino.h"
#include "wx.h"
#include "avr/pgmspace.h"
#include "LiquidCrystal.h"
#include "atmega_pins.h"

extern const String pgmco    = "Haynie Research & Development";
extern const String pgmname  = "Server Temperature Monitor";
extern const String pgmver   = "0.0.1";

//setup lcd output
LiquidCrystal lcd(ATM14, ATM15, ATM16, ATM17, ATM18, ATM19);

#endif /* CONFIG_H_ */

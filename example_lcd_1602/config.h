/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		2015-12-17
* PURPOSE	CONFIG
* FILE		CONFIG.H
**********************************************************
* MODIFICATIONS
* 2015-12-17 - LHAYNIE - INITIAL VERSION
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

LCD Pins
1  = VSS
2  = VDD
3  = V0
4  = RS
5  = RW
6  = E
7  = D0
8  = D1
9  = D2
10 = D3
11 = D4
12 = D5
13 = D6
14 = D7
15 = A
16 = K

LCD Pin Setup
RS = 14
E  = 15
D4 = 16
D5 = 17
D6 = 18
D7 = 19
*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "Arduino.h"
#include "atmega_pins.h"
#include "LiquidCrystal.h"

//setup lcd output
LiquidCrystal lcd(ATM14, ATM15, ATM16, ATM17, ATM18, ATM19);

extern const String pgmco    = "Haynie Research & Development";
extern const String pgmname  = "Example LCD 1602";
extern const String pgmver   = "0.0.1";

#endif /* CONFIG_H_ */

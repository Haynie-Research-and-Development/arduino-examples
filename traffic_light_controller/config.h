/*
**********************************************************
* CATEGORY	hardware
* GROUP		microcontroller
* AUTHOR	Lance Haynie <lance@hayniemail.com>
* DATE		2015-11-30
* FILE		traffic_light_controller.h
* PURPOSE	traffic light header file
**********************************************************
* MODIFICATIONS
* 2015-11-30 - LHAYNIE - Initial Version
* 2015-12-17 - LHAYNIE - Updated to new template and added const's for LED pins
**********************************************************
*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "Arduino.h"
#include "atmega_pins.h"

extern const String pgmco    = "Haynie Research & Development";
extern const String pgmname  = "Traffic Light Controller";
extern const String pgmver   = "0.0.1";

const int startBtn	= ATM13;
const int X_GREEN   = ATM14;
const int X_YELLOW  = ATM15;
const int X_RED     = ATM16;
const int Y_GREEN   = ATM17;
const int Y_YELLOW  = ATM18;
const int Y_RED     = ATM19;

#endif /* CONFIG_H_ */

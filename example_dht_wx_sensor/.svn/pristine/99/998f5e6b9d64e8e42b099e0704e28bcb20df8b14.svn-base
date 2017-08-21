/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		2015-12-18
* PURPOSE	CUSTOM FUNCTIONS
* FILE		FUNCTIONS.H
**********************************************************
* MODIFICATIONS
* 2015-12-18 - LHAYNIE - INITIAL VERSION
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

//function to read the indoor sensor
void getWeather()
{
	//variables!
	String textOutput, varTempConv, varHumidityConv;
	int varTemp, varHumidity;

	//initialize and read the sensor on A0
	wx wx;
	wx.readWx(ATM23);

	//store temp/humidity in a variable and convert temp to F
	varTemp = wx.temperature * 9/5 + 32;
	varHumidity = wx.humidity;

	//convert temp/humidity int variables to strings
	varTempConv = String(varTemp);
	varHumidityConv = String(varHumidity);

	Serial.print("WX Data:\n");
	Serial.print("----------------------\n");
	Serial.print(varTemp);
	Serial.println("F");
	Serial.print(varHumidity);
	Serial.print("% RH\n\n");
}

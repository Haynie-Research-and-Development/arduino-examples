/*
**********************************************************
* CATEGORY	HARDWARE
* GROUP		MICROCONTROLLER
* AUTHOR	LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
* DATE		2015-12-20
* PURPOSE	CUSTOM FUNCTIONS
* FILE		FUNCTIONS.H
**********************************************************
* MODIFICATIONS
* 2015-12-20 - LHAYNIE - INITIAL VERSION
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

//simple function to clear out the lcd screen
void clearLcd(){
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("                ");
}

//function to read the indoor sensor
void checkSensor(){
  //variables!
  String textOutput, varTempConv, varHumidityConv, lcdWxOutput;
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

  //setup string to print to lcd
  lcdWxOutput = "  " + varTempConv + "F @ " + varHumidityConv + "% RH";

  //determine if the sensor is connected, the assumption is there is rarely exactly 0.00% humidity
  if (varHumidity <= 0.00)
    {
       //print data to the console
      Serial.print("Server Conditions:\n");
      Serial.print("----------------------\n");
      Serial.print("Sensor Error!\n\n");

      //clear the lcd
      clearLcd();

      //setup the first line of the lcd
      lcd.setCursor(0, 0);
      lcd.print("Server Rack:");

      //setup the second line of the lcd
      lcd.setCursor(0, 1);
      lcd.print("Sensor Error!");
    }
  else if (varTemp >= 80 and varTemp <= 90)
  {
      //print data to the console
      Serial.print("Server Rack Conditions:\n");
      Serial.print("----------------------\n");
      Serial.print("WARNING!\n");
      Serial.print(varTemp);
      Serial.println("F");
      Serial.print(varHumidity);
      Serial.print("% RH\n\n");

      //clear the lcd
      clearLcd();

      //setup the first line of the lcd
      lcd.setCursor(0, 0);
      lcd.print("WARNING:");

      //setup the second line of the lcd
      lcd.setCursor(0, 1);
      lcd.print(varTempConv + "F!");
  }
  else if (varTemp >= 91)
  {
      //print data to the console
      Serial.print("Server Rack Conditions:\n");
      Serial.print("----------------------\n");
      Serial.print("ALERT!\n");
      Serial.print(varTemp);
      Serial.println("F");
      Serial.print(varHumidity);
      Serial.print("% RH\n\n");

      //clear the lcd
      clearLcd();

      //setup the first line of the lcd
      lcd.setCursor(0, 0);
      lcd.print("HIGH TEMP ALERT:");

      //setup the second line of the lcd
      lcd.setCursor(0, 1);
      lcd.print(varTempConv + "F!");
  }
  else
    {
      //print data to the console
      Serial.print("Server Rack Conditions:\n");
      Serial.print("----------------------\n");
      Serial.print(varTemp);
      Serial.println("F");
      Serial.print(varHumidity);
      Serial.print("% RH\n\n");

      //clear the lcd
      clearLcd();

      //setup the first line of the lcd
      lcd.setCursor(0, 0);
      lcd.print("Server Rack:");

      //setup the second line of the lcd
      lcd.setCursor(0, 1);
      lcd.print(lcdWxOutput);
    }
}

//function to display intro text on lcd and max7219
void introText(){
  String textOutput;

  lcd.setCursor(0, 0);
  lcd.print("Haynie");

  lcd.setCursor(0, 1);
  lcd.print("Electronics");

  delay(1000);
  clearLcd();
}

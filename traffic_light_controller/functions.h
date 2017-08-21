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

//function to turn on all lights for 2 seconds as a test
void lightTest(){
  digitalWrite(X_GREEN, HIGH);
  digitalWrite(X_YELLOW, HIGH);
  digitalWrite(X_RED, HIGH);
  digitalWrite(Y_GREEN, HIGH);
  digitalWrite(Y_YELLOW, HIGH);
  digitalWrite(Y_RED, HIGH);

  delay(1000);

  digitalWrite(X_GREEN, LOW);
  digitalWrite(X_YELLOW, LOW);
  digitalWrite(X_RED, LOW);
  digitalWrite(Y_GREEN, LOW);
  digitalWrite(Y_YELLOW, LOW);
  digitalWrite(Y_RED, LOW);

  digitalWrite(X_GREEN, HIGH);
  delay(250);
  digitalWrite(X_GREEN, LOW);
  digitalWrite(X_YELLOW, HIGH);
  delay(250);
  digitalWrite(X_YELLOW, LOW);
  digitalWrite(X_RED, HIGH);
  delay(250);
  digitalWrite(X_RED, LOW);
  digitalWrite(Y_GREEN, HIGH);
  delay(250);
  digitalWrite(Y_GREEN, LOW);
  digitalWrite(Y_YELLOW, HIGH);
  delay(250);
  digitalWrite(Y_YELLOW, LOW);
  digitalWrite(Y_RED, HIGH);
  delay(250);
  digitalWrite(Y_RED, LOW);
  delay(500);
}

void trafficLights(){
  //turn the x signal to green, and y signal to red
  digitalWrite(X_GREEN, HIGH);
  digitalWrite(Y_RED, HIGH);
  digitalWrite(X_YELLOW, LOW);
  digitalWrite(X_RED, LOW);
  digitalWrite(Y_GREEN, LOW);
  digitalWrite(Y_YELLOW, LOW);

  //leave it that way for 10 seconds
  delay(10000);

  //x yellow
  digitalWrite(X_YELLOW, HIGH);
  digitalWrite(X_GREEN, LOW);

  //leave it yellow for 2 seconds
  delay(2000);

  //short delay of both red for safety
  digitalWrite(X_YELLOW, LOW);
  digitalWrite(X_RED, HIGH);
  delay(1000);

  //turn the x signal to red, and y signal to green
  digitalWrite(X_YELLOW, LOW);
  digitalWrite(X_RED, HIGH);
  digitalWrite(Y_RED, LOW);
  digitalWrite(Y_GREEN, HIGH);


  //leave it there for 10 seconds
  delay(10000);

  //y yellow
  digitalWrite(Y_YELLOW, HIGH);
  digitalWrite(Y_GREEN, LOW);


  //leave it yellow for 2 seconds
  delay(2000);

  //short delay of both red for safety
  digitalWrite(Y_YELLOW, LOW);
  digitalWrite(Y_RED, HIGH);
  delay(1000);
}

// Do not remove the include below
#include "config.h"
#include "functions.h"

Flasher led1(12, 100, 400);
Flasher led2(13, 350, 350);

void setup()
{
}

void loop()
{
	led1.Update();
	led2.Update();
}

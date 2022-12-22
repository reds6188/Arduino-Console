#include <Arduino.h>
#include <console.h>

unsigned long TimerLoop;
unsigned int counter;

void setup() {
	console.header("START INITIALIZATION", DOUBLE_DASHED, 40);
	console.log(MAIN_T, "ESP32 Chip Model: " + String(ESP.getChipModel()));
	console.log(MAIN_T, "ESP32 Flash Size: " + String(ESP.getFlashChipSize()));
	while(counter < 10)
	{
		if((millis() - TimerLoop) > 500)
		{
			TimerLoop = millis();
			console.write(MAIN_T,".");
			counter++;
		}
	}
	counter = 0;

	console.header("END INITIALIZATION", HASH, 40);
	console.setTagLength(12);
}

void loop() {
	if((millis() - TimerLoop) > 1000)
	{
		TimerLoop = millis();
		counter++;
		console.log(MAIN_T, "Now counter value is " + String(counter));
		if(counter == 10)
		{
			counter = 0;
			console.line(WAVE, 60, true);
		}
	}
}
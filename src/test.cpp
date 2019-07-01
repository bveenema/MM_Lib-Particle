// Example usage for MM_Lib-Particle library by Veenema Design Works.

#include "Particle.h"
#include "MM_Lib-Particle.h"

void setup();
void loop();

SYSTEM_MODE(SEMI_AUTOMATIC);

// Initialize objects from the lib
MM_Object_Base<int> MySetting("Setting", 0);

void setup()
{
	delay(1000);
	MySetting = 10;
}

void loop()
{
	auto value = MySetting;
	int value2 = MySetting;
	const int& value3 = MySetting;
	Serial.printlnf("MySetting: %d, %d, %d, %d", (int)MySetting, MySetting, value2, value3);

	manager.test();

	// Empty Serial Output Buffer and get ready for new FW
	Serial.flush();
	System.dfu();
}

// Example usage for MM_Lib-Particle library by Veenema Design Works.

#include "Particle.h"
#include "MM_Lib-Particle.h"

void setup();
void loop();

SYSTEM_MODE(SEMI_AUTOMATIC);

// Initialize the Manager (MUST BE DONE BEFORE ANY SETTINGS OR STATE)
MM_Manager AppManager(10);

// Initialize objects from the lib
MM_Object_Base<int> MyInt("Setting", 0);
MM_Object_Base<unsigned> MyUnsigned("Unsigned");
MM_Object_Base<uint8_t> MyUint8_t("uint8_t");
MM_Object_Base<float> MyFloat("float");
MM_Object_Base<double> MyDouble("double");

void setup()
{
	delay(1000);
	MyInt = -30;
	MyUnsigned = 10;
	MyUint8_t = 255;
	MyFloat = 3.14;
	MyDouble = 3.14568910289471292842582;

	AppManager.Add(MyInt);
	AppManager.Add(MyUnsigned);
	AppManager.Add(MyUint8_t);
	AppManager.Add(MyFloat);
	AppManager.Add(MyDouble);
}

void loop()
{
	AppManager.test();

	// Empty Serial Output Buffer and get ready for new FW
	Serial.flush();
	System.dfu();
}

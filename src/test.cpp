// Example usage for MM_Lib-Particle library by Veenema Design Works.

#include "Particle.h"
#include "MM_Lib-Particle.h"

void setup();
void loop();

SYSTEM_MODE(SEMI_AUTOMATIC);

// Initialize the Manager (MUST BE DONE BEFORE ANY SETTINGS OR STATE)
MM_Manager AppManager(10);

// Initialize objects from the lib
MM_Input<int> MyInt("Setting", 0);
MM_Input<unsigned> MyUnsigned("Unsigned");
MM_Input<uint8_t> MyUint8_t("uint8_t");
MM_Input<float> MyFloat("float");
MM_Input<double> MyDouble("double");
MM_Input<upFloat_t<3>> MyUPFloat3("Psuedo-Float");

void setup()
{
	delay(1000);
	MyInt = -30;
	MyInt.min = -256;
	MyInt.max = 256;
	MyInt.def = 10;
	strcpy(MyInt.unit, "Unit");

	MyUnsigned = 10;
	MyUint8_t = 255;
	MyFloat = 3.14;
	MyDouble = 3.14568910289471292842582;
	MyUPFloat3 = (float)6;

	AppManager.Add(MyInt);
	AppManager.Add(MyUnsigned);
	AppManager.Add(MyUint8_t);
	AppManager.Add(MyFloat);
	AppManager.Add(MyDouble);
	AppManager.Add(MyUPFloat3);

	AppManager.OnReady([](){ AppManager.test(); });
}

void loop()
{
	static unsigned LastValueUpdate = 0;
	if(millis() - LastValueUpdate > 250)
	{
		LastValueUpdate = millis();
		// MyInt += 1;
		// AppManager.DebugPrintf("MyInt: %i", (int)MyInt);
	}
}

void serialEvent()
{
  if(WiFi.listening()) return;
  AppManager.Read(Serial.read());
}

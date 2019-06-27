/* MM_Lib-Particle library by Veenema Design Works
 */

#include "MM_Lib-Particle.h"

/**
 * Constructor.
 */
MM_LibParticle::MM_LibParticle()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void MM_LibParticle::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void MM_LibParticle::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void MM_LibParticle::doit()
{
    Serial.println("called doit");
}

#pragma once

/* MM_Lib-Particle library by Veenema Design Works
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class MM_LibParticle
{
public:
  /**
   * Constructor
   */
  MM_LibParticle();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};

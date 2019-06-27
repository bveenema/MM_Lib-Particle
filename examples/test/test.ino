// Example usage for MM_Lib-Particle library by Veenema Design Works.

#include "MM_Lib-Particle.h"

// Initialize objects from the lib
MM_LibParticle mM_LibParticle;

void setup() {
    // Call functions on initialized library objects that require hardware
    mM_LibParticle.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    mM_LibParticle.process();
}

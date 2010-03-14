
#ifndef Telescope_h
#define Telescope_

#define WEST 2
#define EAST 3
#define NORTH 4
#define SOUTH 5

#include <inttypes.h>
#include <avr/io.h>
#include "Messenger.h"

enum TelescopeAxes {
  RA,
  DECLINATION
};

class Telescope
{
  public:
    Telescope(void);
    void interpretCommand(Messenger *message);
    void moveAxis(TelescopeAxes axis, unsigned long rate);
  private:
};

#endif

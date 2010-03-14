
#ifndef Telescope_h
#define Telescope_

#define EAST 2
#define SOUTH 3
#define WEST 4
#define NORTH 5

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
    void moveAxis(int dir);
  private:
};

#endif

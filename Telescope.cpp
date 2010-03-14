

//ADDED FOR COMPATIBILITY WITH WIRING
extern "C" {
  #include <stdlib.h>
}

#include "WProgram.h"
#include "Telescope.h"

Telescope::Telescope(void)
{
  pinMode(NORTH, OUTPUT);
  pinMode(EAST, OUTPUT);
  pinMode(SOUTH, OUTPUT);
  pinMode(WEST, OUTPUT);
}

void Telescope::interpretCommand(Messenger *message)
{
  message->readChar();
  char command = message->readChar();
  
  switch(command){
    case 'D':
      moveAxis(DECLINATION, message->readLong());
      break;
    case 'R':
      moveAxis(RA, message->readLong());
      break;
  }
}

void Telescope::moveAxis(TelescopeAxes axis)
{
  switch(axis){
    case RA:
      break;
    case DECLINATION:
      break;
  }
}

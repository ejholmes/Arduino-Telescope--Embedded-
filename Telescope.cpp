

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
    case 'N':
      moveAxis(NORTH);
      break;
    case 'E':
      moveAxis(EAST);
      break;
    case 'S':
      moveAxis(SOUTH);
      break;
    case 'W':
      moveAxis(WEST);
      break;
    case 'H':
      moveAxis(0);
      break;
  }
}

void Telescope::moveAxis(int dir)
{
  digitalWrite(NORTH, LOW);
  digitalWrite(EAST, LOW);
  digitalWrite(SOUTH, LOW);
  digitalWrite(WEST, LOW);
  
  switch(dir){
    case NORTH:
      digitalWrite(NORTH, HIGH);
      break;
    case EAST:
      digitalWrite(EAST, HIGH);
      break;
    case SOUTH:
      digitalWrite(SOUTH, HIGH);
      break;
    case WEST:
      digitalWrite(WEST, HIGH);
      break;
    default:
      break;
  }
}

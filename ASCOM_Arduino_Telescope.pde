#include "Messenger.h"
#include "Telescope.h"

Messenger message = Messenger();
Telescope telescope = Telescope();

void setup(){
  Serial.begin(9600);
  Serial.flush();
  
  message.attach(messageCompleted);
  
}

void messageCompleted(){
  telescope.interpretCommand(&message);
}

void loop(){
  while(Serial.available()) message.process(Serial.read());
}



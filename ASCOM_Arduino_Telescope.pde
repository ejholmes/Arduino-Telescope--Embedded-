#include "Messenger.h"

Messenger message = Messenger();

void setup(){
  Serial.begin(9600);
  Serial.flush();
  
  message.attach(messageCompleted);
  
}

void messageCompleted(){
}

void loop(){
  while(Serial.available()) message.process(Serial.read());
}



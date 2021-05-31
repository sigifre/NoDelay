#include "Arduino.h"
#include "NoDelay.h"

NoDelay::NoDelay(int Interval){
this->Interval = Interval;
previousMillis = Interval;
}

bool NoDelay::Check(){
currentMillis = millis();
if(abs(currentMillis - previousMillis) > Interval) {
previousMillis = currentMillis;
return true;
}
else {return false;}
}


void NoDelay::Reset(){
previousMillis = currentMillis;
}
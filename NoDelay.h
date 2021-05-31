#ifndef NoDelay_h
#define NoDelay_h

#if defined(ARDUINO) && ((ARDUINO) >= 100) //arduino core v1.0 or later
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#if defined(__AVR__)
#include <avr/pgmspace.h>                  //use for PROGMEM Arduino AVR
#elif defined(ESP8266)
#include <pgmspace.h>                      //use for PROGMEM Arduino ESP8266
#elif defined(_VARIANT_ARDUINO_STM32_)
#include <avr/pgmspace.h>                  //use for PROGMEM Arduino STM32
#endif

class NoDelay{
private:
unsigned long currentMillis;
unsigned long previousMillis;

public:
int Interval;
NoDelay(int Interval);

bool Check(void);
void Reset(void);
};

#endif
#include <NoDelay.h>
NoDelay PauseBolo1(1000);
NoDelay PauseBolo3(3000);
NoDelay PauseBolo6(6000);

void setup(){

}
 
void loop(){
if (PauseBolo1.Check()){Serial.println("1000 ");}
if (PauseBolo3.Check()){Serial.println("3000 ");}	
if (PauseBolo6.Check()){Serial.println("6000 ");}
}

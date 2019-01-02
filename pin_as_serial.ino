

#include<SoftwareSerial.h>
SoftwareSerial aserial(8,9);// 8 -> RX,  9 -> TX
void setup()
{

Serial.begin(115200);
aserial.begin(115200);
}
void loop()
{
   if(aserial.available()){
       Serial.write(aserial.read());
   } 
   if(Serial.available())
       aserial.write(Serial.read());

}


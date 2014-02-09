#include <Wire.h>

void setup()
{
  Wire.begin();
  Serial.begin(9600);
}
void loop()
{
  Wire.beginTransmission(0x10);
  Wire.write(byte(0x02));
  Wire.write(0);
  Wire.endTransmission();
}

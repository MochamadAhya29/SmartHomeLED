
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "VUpurGm8SRnQvefmrptw5XndVH3ZGr-F";
char ssid[] = "AndroidAPdcd2";
char pass[] = "hotspot12";

void setup()
{
  // Debug console
  Serial.begin(9600); 
  

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

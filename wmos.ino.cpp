
#define LED_BUILTIN 2
#include <ESP8266WiFi.h> //library yang telah diinstal  diatas
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial  

 
//cek email dan copy paste kan disini
char auth[] = "yOcsAsymN83pphqMKFWmu-mZVPaV0LjK";
 
char ssid[] = "OPPO A53"; //isi dengan nama wifi kalian
char pass[] = "qwertyuiop";  //isi dengan password wifi kalian
 
void setup()
{
  Serial.begin(9600); //baut komunikasi untuk serial monitor
  Blynk.begin(auth, ssid, pass);
}
 
void loop()
{
  Blynk.run();
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "f65c3d53a1294acbba47bcf969f30e4f";
char ssid[] = "Virus";
char pass[] = "032437798";

int sensorPin = A0; // select the input pin for LDR
int sensorValue = 0; // variable to store the value coming from the sensor
int off = 0;
int no = 0;

void setup() {
pinMode(D2,OUTPUT); 
pinMode(D1,OUTPUT); 
Serial.begin(9600); //sets serial port for communication
Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(V2)
{
int i=param.asInt();
if (i==1)
{
off = 1;
}
else
{
off = 0;
}
}

BLYNK_WRITE(V3)
{
int i=param.asInt();
if (i==1)
{
no = 1;
}
else
{
no = 0;
}
}

void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

if (sensorValue > 600 && off == 0)
{
   digitalWrite(D2,LOW);
   Blynk.virtualWrite(V0,"Lightbulb:OPEN");
   Blynk.virtualWrite(V1,"Dark ");
}
else if (sensorValue <= 600 && off == 0)
{
  digitalWrite(D2,HIGH);
  Blynk.virtualWrite(V0,"Lightbulb:CLOSE");
   Blynk.virtualWrite(V1,"Bright");
}
else if (off == 1 && no == 1)
{
  digitalWrite(D2,HIGH);
  digitalWrite(D1,LOW);
  Blynk.virtualWrite(V0,"Manual");
  Blynk.virtualWrite(V1,"on");
}
else
{
  digitalWrite(D2,HIGH);
  digitalWrite(D1,HIGH);
  Blynk.virtualWrite(V0,"Manual");
  Blynk.virtualWrite(V1,"off");
}
Blynk.run();
}

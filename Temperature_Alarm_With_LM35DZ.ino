/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground
 
 * Note: because most Arduinos have a built-in LED attached 
 to pin 13 on the board, the LED is optional.
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 */


double sensorValue = 0;  

void setup() {
    Serial.begin(9600); 
    pinMode(13, OUTPUT);
    pinMode(11, OUTPUT);

    digitalWrite(13,LOW);
}

void loop() {
  sensorValue = analogRead(A1)/1024.0*5/0.01;    
  
  Serial.print("sensor = " );                       
  Serial.println(sensorValue);
  if(sensorValue > 30 && sensorValue < 40)
   {
     digitalWrite(13, HIGH);
   }  
   else if ( sensorValue >20 && sensorValue < 30)
   {
     digitalWrite(11,HIGH); 
     digitalWrite(13,LOW);    
   }

  delay(100);
  
}

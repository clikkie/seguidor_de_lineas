#include <Arduino.h>
int s0 = 0; //asignación del sensor 0 al pin A0
int s1 = 1; //asignación del sensor 0 al pin A0
int s2 = 2; //asignación del sensor 0 al pin A0
int s3 = 3; //asignación del sensor 0 al pin A0
int s4 = 4; //asignación del sensor 0 al pin A0
int s5 = 5; //asignación del sensor 0 al pin A0
int lec0 = 0;
int lec1 = 1;
int lec2 = 2;
int lec3 = 3;
int lec4 = 4;
int lec5 = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //inicia la comunicación serie a 9600 baudios
}

void loop() {
  // put your main code here, to run repeatedly:
  lec0 = analogRead(s0);
  lec1 = analogRead(s1);
  lec2 = analogRead(s2);
  lec3 = analogRead(s3);
  lec4 = analogRead(s4);
  lec5 = analogRead(s5);
  Serial.print(lec0);
  Serial.print(",");
  Serial.print(lec1);
  Serial.print(",");
  Serial.print(lec2);
  Serial.print(",");
  Serial.print(lec3);
  Serial.print(",");
  Serial.print(lec4);
  Serial.print(",");
  Serial.println(lec5);
  delay(100);
}
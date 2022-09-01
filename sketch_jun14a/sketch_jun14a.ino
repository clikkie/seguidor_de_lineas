#include <Arduino.h>

int s0 = 0;
int s1 = 1;
int s2 = 2;
int s3 = 3;
int s4 = 4;
int s5 = 5;

int lec0 = 0;
int lec1 = 0;
int lec2 = 0;
int lec3 = 0;
int lec4 = 0;
int lec5 = 0;
int i = 0;
int n = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
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
  delay(1);

  for(i = 0; i < n; i++)
  {
      lec0 += analogRead(s0);
  }
}

#include <Arduino.h>

int s0 = 0;
int s1 = 1;
int s2 = 2;
int s3 = 3;
int s4 = 4;
int s5 = 5;

int en1 = 5;
int en2 = 9;

int a = 10;
int b = 11;
int c = 12;
int d = 6;

int lec0 = 0;
int lec1 = 0;
int lec2 = 0;
int lec3 = 0;
int lec4 = 0;
int lec5 = 0;

int i = 0;
int n = 10;

int SD0 = 0;
int SD1 = 0;
int SD2 = 0;
int SD3 = 0;
int SD4 = 0;
int SD5 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
for(i = 0; i < n; i++)
  {
      lec0 += analogRead(s0);
      lec1 += analogRead(s1);
      lec2 += analogRead(s2);
      lec3 += analogRead(s3);
      lec4 += analogRead(s4);
      lec5 += analogRead(s5);
  }

  lec0 = lec0/n;
  lec1 = lec1/n;
  lec2 = lec2/n;
  lec3 = lec3/n;
  lec4 = lec4/n;
  lec5 = lec5/n;

if(lec0 > 900)
   {
      SD0 = 1024;
    }
  else
   {
      SD0 = 0;
  }

if(lec1 > 900)
   {
      SD1 = 1024;
    }
  else
   {
      SD1 = 0;
  }

if(lec2 > 900)
   {
      SD2 = 1024;
    }
  else
   {
      SD2 = 0;
  }

if(lec3 > 900)
   {
      SD3 = 1024;
    }
  else
   {
      SD3 = 0;
  }

if(lec4 > 900)
   {
      SD4 = 1024;
    }
  else
   {
      SD4 = 0;
  }

if(lec4 > 900)
   {
      SD5 = 1024;
    }
  else
   {
      SD5 = 0;
  }

    Serial.print(lec0);
  Serial.print(",");
    Serial.print(SD0);
  Serial.print(".");
    Serial.print(lec1);
  Serial.print(",");
    Serial.print(SD1);
  Serial.print(",");
    Serial.print(lec2);
  Serial.print(",");
    Serial.print(SD2);
  Serial.print(",");
    Serial.print(lec3);
  Serial.print(",");
    Serial.print(SD3);
  Serial.print(",");
    Serial.print(lec4);
  Serial.print(",");
    Serial.print(SD4);
  Serial.print(",");
    Serial.print(lec5);
  Serial.print(",");
    Serial.println(SD5);
  delay(1);

}
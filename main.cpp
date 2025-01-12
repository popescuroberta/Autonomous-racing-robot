#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

float LineL = 0;
float LineR = 0;
float ENA = 0;
float ENB = 0;
float IN1 = 0;
float IN2 = 0;
float IN3 = 0;
float IN4 = 0;
float dLeft = 0;
float dRight = 0;

void Speed_N_N(double enb, double ena){
  analogWrite(ENA,ena);
  analogWrite(ENB,enb);

}
void Sp_Forward_N_N(double enb, double ena){
  Speed_N_N(enb, ena);
  Forward();

}
void Stop(){
  digitalWrite(IN1,0);
  digitalWrite(IN2,0);
  digitalWrite(IN3,0);
  digitalWrite(IN4,0);

}
void Sp_Right_N_N(double enb, double ena){
  Speed_N_N(enb, ena);
  Right();

}
void Sp_Left_N_N(double enb, double ena){
  Speed_N_N(enb, ena);
  Left();

}
void Right(){
  digitalWrite(IN1,1);
  digitalWrite(IN2,0);
  digitalWrite(IN3,0);
  digitalWrite(IN4,1);

}
void Full_Stop(){
  Stop();
  _delay(1);

}
void Left(){
  digitalWrite(IN1,0);
  digitalWrite(IN2,1);
  digitalWrite(IN3,1);
  digitalWrite(IN4,0);

}
void Forward(){
  digitalWrite(IN1,0);
  digitalWrite(IN2,1);
  digitalWrite(IN3,0);
  digitalWrite(IN4,1);

}

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(LineL,INPUT);
  pinMode(LineR,INPUT);
  Serial.begin(115200);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  LineL = 12;
  LineR = 10;
  ENA = 3;
  ENB = 9;
  IN1 = 2;
  IN2 = 4;
  IN3 = 5;
  IN4 = 8;
  dLeft = 0;
  dRight = 0;
  while(1) {
      dLeft = digitalRead(LineL);
      dRight = digitalRead(LineR);
      if((dLeft == 0.000000)  &&  (dRight == 0.000000)){
        Full_Stop();
        Serial.println("stop");

      }
      if((dLeft == 1.000000)  &&  (dRight == 1.000000)){
        // Left input = left motor
        // Right input = right motor
        //
        // Orientation front end facing away from you.
        Sp_Forward_N_N(200, 200);
        Serial.println("forward");

      }
      if((dLeft == 1.000000)  &&  (dRight == 0.000000)){
        // Left input = turn speed
        // Right input = break speed
        Sp_Left_N_N(180, 180);
        Serial.println("left");

      }
      if((dLeft == 0.000000)  &&  (dRight == 1.000000)){
        // Left input = break speed
        // Right input= turn speed
        Sp_Right_N_N(180, 180);
        Serial.println("right");

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}

const int portaLDR = A0;
int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 7;
int ledPin4 = 8;
int ledPin5 = 9;
int ledPin6 = 10;
int ledPin7 = 11;

const int buzzer = 2;

void setup(){
  Serial.begin(9600);
  //Buzzer
  pinMode(buzzer, OUTPUT);
  //LDR
  pinMode(portaLDR,INPUT);
  //LED´s
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  pinMode(ledPin5,OUTPUT);
  pinMode(ledPin6,OUTPUT);
  pinMode(ledPin7,OUTPUT);
  
}

void loop (){
  int LDR = analogRead(portaLDR);
  Serial.println(LDR);
  if(LDR<=320){
    digitalWrite(ledPin1, HIGH);
    tone(buzzer, 100);
    delay(1000);
  }
  else{
    digitalWrite(ledPin1, LOW);
    noTone(buzzer);
  }
  if(LDR<=300){
    digitalWrite(ledPin2, HIGH);
    tone(buzzer, 300);
    delay(1000);
  }
  else{
    digitalWrite(ledPin2, LOW);
    noTone(buzzer);
  }
  if(LDR<=280){
    digitalWrite(ledPin3, HIGH);
    tone(buzzer, 600);
    delay(1000);
  }
  else{
    digitalWrite(ledPin3, LOW);
    noTone(buzzer);
  }
  if(LDR<=250){
    digitalWrite(ledPin4, HIGH);
    tone(buzzer, 900);
    delay(1000);
  }
  else{
    digitalWrite(ledPin4, LOW);
    noTone(buzzer);
  }
  if(LDR<=220){
    digitalWrite(ledPin5, HIGH);
    tone(buzzer, 1200);
    delay(1000);
  }
  else{
    digitalWrite(ledPin5, LOW);
    noTone(buzzer);
  }
  if(LDR<=170){
    digitalWrite(ledPin6, HIGH);
    tone(buzzer, 1500);
    delay(1000);
  }
  else{
    digitalWrite(ledPin6, LOW);
    noTone(buzzer);
  }
  if(LDR<=150){
    digitalWrite(ledPin7, HIGH);
    tone(buzzer, 1800);
    delay(1000);
  }
  else{
    digitalWrite(ledPin7, LOW);
    noTone(buzzer);
  }
}
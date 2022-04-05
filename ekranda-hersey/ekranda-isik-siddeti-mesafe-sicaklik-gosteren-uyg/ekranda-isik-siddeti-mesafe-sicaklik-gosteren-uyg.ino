#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


int buzzer = 13;

void setup() {
pinMode(8,OUTPUT);
pinMode(9,INPUT);
lcd.begin(16, 2);
}
void loop() {
int sensor = analogRead(A1);
float analog = sensor * 5.0;
analog = analog /1024.0;
float c = (analog - 0.5) * 100 ;

digitalWrite(8,1); delay(1);
digitalWrite(8,0);
int sure=pulseIn(9,1);
int mesafe=(sure/2)/28.97;

int LDR = analogRead(A0);
int seviye=map(LDR,150,600,0,100);


lcd.setCursor(0, 0);
lcd.print(c);
lcd.setCursor(5, 0);
lcd.print("C");
  
lcd.setCursor(7, 0);
lcd.print("%");
lcd.setCursor(8, 0);
lcd.print(seviye);

lcd.setCursor(0, 1);
lcd.print(mesafe);
lcd.setCursor(5, 1);
lcd.print("cm");
  
if(c<=20){
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
}else if(mesafe<=40){
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
}else if(seviye>=50){
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
  tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
 tone(buzzer,200);
 delay(200);
 noTone(buzzer);
 delay(100);
}else{
 noTone(buzzer);
}
}

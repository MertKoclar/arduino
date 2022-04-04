#include  <LiquidCrystal.h>

int trigPin = 7;
int echoPin = 6;
int sure;
int uzaklik;
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //LCD'nin pin değişkenlerini tanımlıyoruz.
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //LCD'nin pin bağlantılarını ayarlıyoruz.

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
}
void loop() {
  digitalWrite(trigPin, LOW); //Ultrasonik sensör ile ölçüm sekansını başlatıyoruz.
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  sure = pulseIn(echoPin, HIGH, 11600); //Ses dalgasının gidip gelme süresini ölçüyoruz.
  uzaklik = sure * 0.0345 / 2; //Ölçülen süre ile uzaklık hesabı yapıyoruz.
  
  lcd.clear(); //LCD'deki eski yazılar temizlenir.
  lcd.setCursor(0, 0); //LCD'nin 1. satır 1. sütunundan yazmaya başlıyoruz.      
  lcd.print("Uzaklik:");
  lcd.setCursor(0, 1); //LCD'nin 2. satır 1. sütunundan yazmaya başlıyoruz.
  lcd.print(uzaklik); //Uzaklık değerini LCD'ye yazdırıyoruz.
  lcd.print("cm");
}

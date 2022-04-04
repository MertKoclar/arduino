char komut;
int in1=11;
int in2=10;
int in3=6;
int in4=5;
// int HIZ=255;
int onfar=12;
int arkafar=13;
int korna=2;

void git() { 
  digitalWrite(in1,HIGH);  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);  digitalWrite(in4,HIGH);
  digitalWrite(13,HIGH);
  Serial.println("ileri git");
}
void geri() {
  digitalWrite(in1,LOW);  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);   digitalWrite(in4,HIGH);
  Serial.println("geri git");
}
void sol()  {
  digitalWrite(in1,HIGH); digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);   digitalWrite(in4,HIGH);
  Serial.println("sola git");
}
void sag()  {
  digitalWrite(in1,LOW);  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);  digitalWrite(in4,LOW);
  Serial.println("saga git");
}
void dur()  {
  digitalWrite(in1,LOW);  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);  digitalWrite(in4,LOW);
  Serial.println("Dur");
}


void setup(){ 
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(onfar,OUTPUT);
  pinMode(arkafar,OUTPUT);
  pinMode(korna,OUTPUT);
  dur();
}

void loop(){ 
  komut=Serial.read();
  Serial.print(komut);
       /// Yönlere göre hareketler ///
  
  if(komut=='f'|| komut=='F')      {  git(); }
  else if(komut=='b'|| komut=='B') {  geri();}
  else if(komut=='l'|| komut=='L') {  sol(); }
  else if(komut=='r'|| komut=='R') {  sag(); }
  else if(komut=='s'|| komut=='S') {  dur(); }
       /// Çapraz yönlere göre hareketler ///
  else if(komut=='i'|| komut=='I') { sag();  git();}
  else if(komut=='g'|| komut=='G') {
        sol();  git();  // ileri sol
       }
  else if(komut=='j'|| komut=='J') {
        sol();  geri();   // geri sol
       }
  else if(komut=='h'|| komut=='H') {
        sag();  git();  // geri sağ
       }
        /// Farlar kornalar ////
  else if(komut=='W')   digitalWrite(onfar,HIGH);   // on far yak
                      
  else if(komut=='w')   digitalWrite(onfar,LOW);    // on far söndür
                      
  else if(komut=='U')   digitalWrite(arkafar,HIGH); // arka far yak
                      
  else if(komut=='u')  digitalWrite(arkafar,LOW);  // arka far söndür
                      
  else if(komut=='V')  digitalWrite(korna,HIGH);  // korna çal
  
  else if(komut=='v')  digitalWrite(korna,LOW);   // korna sustur

  else{digitalWrite(13,LOW);}
     
  /*   /// Hız Ayarları ////
  else if(komut=='1')  HIZ=100;
  else if(komut=='2')  HIZ=120;
  else if(komut=='3')  HIZ=140;
  else if(komut=='4')  HIZ=160;
  else if(komut=='5')  HIZ=180;
  else if(komut=='6')  HIZ=200;
  else if(komut=='7')  HIZ=220;
  else if(komut=='8')  HIZ=230;
  else if(komut=='9')  HIZ=240;
  else if(komut=='q')  HIZ=250;
  */
  }

int buzzerPin = 12;
#define a   440
#define ad  466
#define b   494
#define c   523
#define cd  554
#define d   587
#define dd  622
#define e   659
#define f   698
#define fd  740
#define g   784
#define gd  830
#define a2  880
#define ad2 932
#define b2  988
#define c2  1046
#define cd2 1108
#define d2  1174
#define dd2 1244
#define e2  1318
#define f2  1396
#define fd2 1480
#define g2  1568
#define gd2 1660
#define a3  1760
void setup(){  
  pinMode(buzzerPin, OUTPUT); 
}                       
void loop(){
    //Korkma Sönmez Bu Şafak  
    tone( buzzerPin, c);             
    delay(800);                  
    tone( buzzerPin, f);          
    delay(800);
    tone( buzzerPin, g);
    delay(800);
    tone( buzzerPin, gd);
    delay(800);
    tone( buzzerPin, e);
    delay(400);
    tone( buzzerPin, g);
    delay(200);        
    tone( buzzerPin, f);
    delay(1600);        
    noTone( buzzerPin);
    delay(300);
    //Larda Yüzden Al Sancak
    tone( buzzerPin, f);
    delay(800);        
    tone( buzzerPin, ad2);
    delay(800);        
    tone( buzzerPin, c2);
    delay(800);        
    tone( buzzerPin, cd2);
    delay(800);
    tone( buzzerPin, a2);
    delay(400);
    tone( buzzerPin, c2);
    delay(200);
    tone( buzzerPin, ad2);
    delay(1600);        
    //Sönmeden Yurdumun Üstünde Tüten En Son Ocak O Be
    tone( buzzerPin, c2);
    delay(200);        
    tone( buzzerPin, ad2);
    delay(200);        
    tone( buzzerPin, c2);
    delay(200);        
    tone( buzzerPin, g);
    delay(400);        
    noTone( buzzerPin);
    delay(100);  
    tone( buzzerPin, g);
    delay(400);        
    tone( buzzerPin, ad);
    delay(200);
    tone( buzzerPin, gd);
    delay(400);   
    tone( buzzerPin, e);
    delay(200);
    tone( buzzerPin, f);
    delay(400);   
    tone( buzzerPin, g);
    delay(200);
    tone( buzzerPin, gd);
    delay(400);        
    tone( buzzerPin, ad);
    delay(200);        
    tone( buzzerPin, c2);
    delay(400);        
    tone( buzzerPin, cd2);
    delay(200);        
    tone( buzzerPin, dd2);
    delay(400);        
    tone( buzzerPin, f2);
    delay(200);        
    tone( buzzerPin, dd2);
    delay(400);     
    //Nim Milletimin
    tone( buzzerPin, dd);
    delay(200);
    tone( buzzerPin, d);
    delay(200);
    tone( buzzerPin, dd);
    delay(200);
    tone( buzzerPin, c2);
    delay(800);
    tone( buzzerPin, ad);
    delay(800);
    tone( buzzerPin, gd);
    delay(1600);
    // Yıldızıdır Parlayacak O benim
    tone( buzzerPin, c);
    delay(200);
    tone( buzzerPin, b);
    delay(200);
    tone( buzzerPin, c);
    delay(200);
    tone( buzzerPin, g);
    delay(800);
    tone( buzzerPin, c);
    delay(800);
    tone( buzzerPin, c2);
    delay(800);
    tone( buzzerPin, ad);
    delay(200);
    tone( buzzerPin, gd);
    delay(200);
    tone( buzzerPin, g);
    delay(400);
    tone( buzzerPin, gd);
    delay(200);
    tone( buzzerPin, f);
    delay(800);
    //Dir O Benim Milletimindir Ancak
    tone( buzzerPin, f2);
    delay(800);
    tone( buzzerPin, dd2);
    delay(200);
    tone( buzzerPin, cd2);
    delay(400);
    tone( buzzerPin, c2);
    delay(200);
    tone( buzzerPin, ad);
    delay(400);
    tone( buzzerPin, gd);
    delay(200);
    tone( buzzerPin, g);
    delay(400);
    tone( buzzerPin, f);
    delay(200);
    tone( buzzerPin, c2);
    delay(400);
    tone( buzzerPin, c);
    delay(800);
    tone( buzzerPin, f);
    delay(1600);
    //İKİNCİ KITA
    //Çatma Kurban Olayım
    tone( buzzerPin, c);
    delay(800);
    tone( buzzerPin, f);
    delay(800);
    tone( buzzerPin, g);
    delay(800);
    tone( buzzerPin, gd);
    delay(800);
    tone( buzzerPin, e);
    delay(400);
    tone( buzzerPin, g);
    delay(200);        
    tone( buzzerPin, f);
    delay(1600);        
    noTone( buzzerPin);
    delay(300);
    //Çehreni Ey Nazlı Hilal
    tone( buzzerPin, f);
    delay(800);        
    tone( buzzerPin, ad2);
    delay(800);        
    tone( buzzerPin, c2);
    delay(800);        
    tone( buzzerPin, cd2);
    delay(400);
    tone( buzzerPin, ad2);
    delay(400);
    tone( buzzerPin, a2);
    delay(400);
    tone( buzzerPin, c2);
    delay(400);
    tone( buzzerPin, ad2);
    delay(800);        
    //Kahraman Irkıma Bir Gül Ne Bu Şiddet Bu Celal Sana
    tone( buzzerPin, c2);
    delay(200);        
    tone( buzzerPin, ad2);
    delay(200);        
    tone( buzzerPin, c2);
    delay(200);        
    tone( buzzerPin, g);
    delay(400);        
    noTone( buzzerPin);
    delay(100);  
    tone( buzzerPin, g);
    delay(400);        
    tone( buzzerPin, ad);
    delay(200);
    tone( buzzerPin, gd);
    delay(400);   
    tone( buzzerPin, e);
    delay(200);
    tone( buzzerPin, f);
    delay(400);   
    tone( buzzerPin, g);
    delay(200);
    tone( buzzerPin, gd);
    delay(400);        
    tone( buzzerPin, ad);
    delay(200);        
    tone( buzzerPin, c2);
    delay(400);        
    tone( buzzerPin, cd2);
    delay(200);        
    tone( buzzerPin, dd2);
    delay(400);        
    tone( buzzerPin, f2);
    delay(200);        
    tone( buzzerPin, dd2);
    delay(400);     
    //Olmaz Dökülen
    tone( buzzerPin, dd);
    delay(200);
    tone( buzzerPin, d);
    delay(200);
    tone( buzzerPin, dd);
    delay(200);
    tone( buzzerPin, c2);
    delay(800);
    tone( buzzerPin, ad);
    delay(800);
    tone( buzzerPin, gd);
    delay(1600);
    //Kanlarımız Sonra Helal Hakkıdır
    tone( buzzerPin, c);
    delay(200);
    tone( buzzerPin, b);
    delay(200);
    tone( buzzerPin, c);
    delay(200);
    tone( buzzerPin, g);
    delay(800);
    tone( buzzerPin, c);
    delay(800);
    tone( buzzerPin, c2);
    delay(800);
    tone( buzzerPin, ad);
    delay(200);
    tone( buzzerPin, gd);
    delay(200);
    tone( buzzerPin, g);
    delay(400);
    tone( buzzerPin, gd);
    delay(200);
    tone( buzzerPin, f);
    delay(800);
    //Hakk'a Tapan Milletimin İstiklal
    tone( buzzerPin, f2);
    delay(800);
    tone( buzzerPin, dd2);
    delay(200);
    tone( buzzerPin, cd2);
    delay(400);
    tone( buzzerPin, c2);
    delay(200);
    tone( buzzerPin, ad);
    delay(400);
    tone( buzzerPin, gd);
    delay(200);
    tone( buzzerPin, g);
    delay(400);
    tone( buzzerPin, f);
    delay(200);
    tone( buzzerPin, c2);
    delay(400);
    tone( buzzerPin, c);
    delay(800);
    tone( buzzerPin, f);
    delay(1600);
    noTone( buzzerPin);
}

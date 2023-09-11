# Arduino-button-ile-led-yakma
--------------------------------------------

void setup() {
  pinMode(8,INPUT);
  pinMode(10,OUTPUT);
  } 

//tanımlanamayan işlemi kurup pinmodu'nun 8'inci giriş 10'uncu çıkış'a bağlarız ve bu işlemi arduino'ya uygularız.
(8. jumper-erkek 10. jumper dişi) 

void loop() { 

  digitalWrite(10,digitalRead(8));
} 

//Dijital çıkış a pinleri belirtip çıktıya alırız ve zaten void loop'da yani döngüde olduğu için işlem kapatmadığımız taktirde döngüde kalır.

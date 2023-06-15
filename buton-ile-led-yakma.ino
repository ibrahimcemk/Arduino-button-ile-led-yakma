
void setup() {
  pinMode(8,INPUT);
  pinMode(10,OUTPUT);
  }

void loop() {

  digitalWrite(10,digitalRead(8));
}
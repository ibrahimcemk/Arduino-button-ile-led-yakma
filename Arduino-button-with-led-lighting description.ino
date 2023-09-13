# Arduino-button-led-lighting

void setup() { pinMode(8,INPUT); pinMode(10,OUTPUT); }

//we set up the undefined operation and connect the pinmode to the 8th input and 10th output of the pinmode and apply this operation to the arduino. (8th jumper-male, 10th jumper-female)

void loop() {

  digitalWrite(10,digitalRead(8)); }

//We specify and output the pins to the digital output and since it is already in the void loop, that is, in the loop, the process will remain in the loop unless we close it.

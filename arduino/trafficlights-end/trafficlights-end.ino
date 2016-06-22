/*
  Traffic Lights - end
  Sequence LEDs to represent traffic lights... and perhaps more

  Jonathan Sanderson, Northumbria University.
  v0.1 2016-03-04
 */

#define RED 9
#define AMBER 10
#define GREEN 11

int pause = 500;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(RED, OUTPUT);
  pinMode(AMBER, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED, HIGH);   // turn the RED LED on (HIGH is the voltage level)
  delay(pause * 2);              // wait for a second
  digitalWrite(AMBER, HIGH);
  delay(pause);
  digitalWrite(RED, LOW);
  digitalWrite(AMBER, LOW);
  digitalWrite(GREEN, HIGH);
  delay(pause);
  digitalWrite(GREEN, LOW);
  digitalWrite(AMBER, HIGH);
  delay(pause);
  digitalWrite(AMBER, LOW);
}

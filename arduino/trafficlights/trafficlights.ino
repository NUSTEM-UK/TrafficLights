/*
  Traffic Lights - start
  Sequence LEDs to represent traffic lights... and perhaps more

  Jonathan Sanderson, Northumbria University.
  v0.1 2016-03-04
 */

#define RED 9
#define AMBER 10
#define GREEN 11

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(AMBER, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED, HIGH);   // turn the RED LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(RED, LOW);    // turn the RED LED off by making the voltage LOW
  digitalWrite(AMBER, HIGH);
  delay(1000);
  digitalWrite(AMBER, LOW);
  digitalWrite(GREEN, HIGH);
  delay(1000);
  digitalWrite(GREEN, LOW);

}

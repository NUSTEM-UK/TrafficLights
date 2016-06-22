/*
  Traffic Lights - funkyMode
  Sequence LEDs to represent traffic lights... and perhaps more

  Jonathan Sanderson, Northumbria University.
  v0.1 2016-03-04
 */

#define RED 9
#define AMBER 10
#define GREEN 11

int pause = 1000;
int funkyMult = 1;
bool funkyMode = 0;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(RED, OUTPUT);
  pinMode(AMBER, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(3, INPUT_PULLUP);
}



// the loop function runs over and over again forever
void loop() {
  funkyMode = digitalRead(3);
  if (!funkyMode) {
    pause = 100;
    funkyMult = 1;
  } else {
    pause = 1000;
    funkyMult = 2;
  }
  digitalWrite(RED, HIGH);   // turn the RED LED on (HIGH is the voltage level)
  delay((pause*funkyMult));              // wait for a second
  digitalWrite(AMBER, HIGH);
  delay(pause);
  digitalWrite(RED, LOW);
  digitalWrite(AMBER, LOW);
  digitalWrite(GREEN, HIGH);
  delay((pause*funkyMult));
  digitalWrite(GREEN, LOW);
  digitalWrite(AMBER, HIGH);
  delay(pause);
  digitalWrite(AMBER, LOW);
}

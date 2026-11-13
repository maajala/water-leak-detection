// Node LED test
// Each LED: pin -> long leg (anode), short leg (cathode) -> 220 ohm -> GND
// Green D4, yellow D5, red D6

const int GREEN = 4;
const int YELLOW = 5;
const int RED = 6;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void blink(int pin) {
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(200);
}

void loop() {
  blink(GREEN);
  blink(YELLOW);
  blink(RED);
}

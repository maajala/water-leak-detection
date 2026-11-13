// Node XBee link test
// Shield switch: DLINE (XBee on pins 2 and 3)
// Sensor: S -> A0, + -> D7, - -> GND
// Expected in the XCTU console on the base station, every second:  1,TEST,<value>

#include <SoftwareSerial.h>

const int NODE_ID = 1;        // 1 = Kitchen, 2 = Basement, 3 = Bathroom
const int SENSOR_PIN = A0;
const int SENSOR_POWER = 7;   // powers the sensor only while reading (less corrosion)

SoftwareSerial xbee(2, 3);    // RX, TX

int readSensor() {
  digitalWrite(SENSOR_POWER, HIGH);
  delay(10);                  // let the reading settle
  int value = analogRead(SENSOR_PIN);
  digitalWrite(SENSOR_POWER, LOW);
  return value;
}

void setup() {
  pinMode(SENSOR_POWER, OUTPUT);
  digitalWrite(SENSOR_POWER, LOW);
  Serial.begin(9600);
  xbee.begin(9600);
}

void loop() {
  int value = readSensor();

  xbee.print(NODE_ID);
  xbee.print(",TEST,");
  xbee.println(value);

  Serial.println(value);      // also visible in the Serial Monitor
  delay(1000);
}

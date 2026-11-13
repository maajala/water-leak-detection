# Wiring (each sensor node)

Arduino Uno + SparkFun XBee shield, switch set to **DLINE**.

| Part | Connection |
| --- | --- |
| XBee | Shield, pins D2 (RX) and D3 (TX) |
| Water sensor S | A0 |
| Water sensor + | D7 (switched power) |
| Water sensor - | GND |
| Green LED | D4 -> long leg, short leg -> 220 ohm -> GND |
| Yellow LED | D5 -> long leg, short leg -> 220 ohm -> GND |
| Red LED | D6 -> long leg, short leg -> 220 ohm -> GND |
| Buzzer (optional) | D9 -> +, - -> GND |

Do not use D2, D3 or D7 for anything else.

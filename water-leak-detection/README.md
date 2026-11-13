# Wireless Water-Leak Detection & Localization

ENGG*4200 Wireless Sensor Networks · Fall 2026 · Group 7
Mohamad Abu Jamih · Mathew Mousa · Ahmad Maajal · Aymen Al-Tahmschi

Battery-powered sensor nodes (Arduino Uno + XBee Series 2 + water sensor) decide locally
whether their spot is **dry, warning or leak** and report over ZigBee to a base station,
which names the room where the leak is.

## Status (work in progress)

- [x] XBee radios configured in XCTU (1 coordinator, routers)
- [x] Node hardware assembled (shield, water sensor, first LED)
- [ ] LED + buzzer wiring finished
- [ ] Sensor calibration (dry / warning / leak limits)
- [ ] Averaging + confirm logic
- [ ] Messages with ACK and resend
- [ ] Base station: room lookup, offline detection, logging
- [ ] Tests: detection time, range, delivery ratio, two leaks at once

## Folders

| Folder | Contents |
| --- | --- |
| `node_xbee_test/` | Sends the sensor reading to the base station every second |
| `node_led_test/` | Blinks the green, yellow and red LEDs to check wiring |
| `base_station/` | Base station code (to do) |
| `tests/` | Test logs and results (to do) |
| `docs/` | Wiring, XBee settings, proposal and slides |

## Schedule

| Week | Dates | Goal |
| --- | --- | --- |
| 0 | Nov 2–8 | Parts collected, radios set up |
| 1 | Nov 9–15 | One node working |
| 2 | Nov 16–22 | Full system + tests |
| Final | Nov 24–Dec 4 | Demo and report |

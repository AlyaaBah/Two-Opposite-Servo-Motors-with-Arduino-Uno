#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(4);
  servo2.attach(5);
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    servo1.write(angle);
    servo2.write(180 - angle);
    delay(15);
  }

  delay(1000);

  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);
    servo2.write(180 - angle);
    delay(15);
  }

  delay(1000);
}

/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo servo[3];  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  servo[0].attach(2);  
  servo[1].attach(3);  
  servo[2].attach(4);  
}
int pos = 0;

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    servo[0].write(pos);
    servo[1].write(pos);
    servo[2].write(pos);
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo[0].write(pos);
    servo[1].write(pos);
    servo[2].write(pos);
    delay(15);
  }
}

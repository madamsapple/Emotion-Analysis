#include <FeedBackServo.h>

#include "FeedBackServo.h"
// define feedback signal pin and servo control pin
#define FEEDBACK_PIN 2
#define SERVO_PIN 3

// set feedback signal pin number
FeedBackServo servo = FeedBackServo(FEEDBACK_PIN);

//avg valence values for the following days:
float values[] = {0.510, 0.520, 0.530, 0.540, 0.550, 0.560, 0.570, 0.580, 0.590, 0.600}; 

//angles corresponding to the values
float angles[] = {0, 36, 72, 108, 144, 180, 216, 252, 288, 324, 360};

//valences for following dates
/*
2023-05-25T10:09:11Z
2023-05-27T10:01:29Z
2023-05-29T10:06:20Z
2023-05-31T09:47:26Z
2023-06-01T09:37:15Z
2023-06-02T09:37:15Z
2023-06-04T10:12:58Z
2023-06-06T12:01:21Z
2023-06-09T10:11:49Z
2023-06-11T11:02:57Z
2023-06-12T09:44:17Z
2023-06-13T11:01:00Z
2023-06-14T10:31:22Z
2023-06-16T10:46:29Z
*/
float valences[14] = {0.524, 0.5272, 0.533, 0.527, 0.540, 0.540, 0.579, 0.562, 0.552, 0.587, 0.567, 0.565, 0.566, 0.557}; 

void setup() {
    // set servo control pin number
    servo.setServoControl(SERVO_PIN);
    // set Kp to proportional controller
    servo.setKp(1.0);


}

void loop() {
    // rotate servo to 270 and -180 degrees(with contains +-4 degrees error) each 1 second.
    // Servo spins forward at full speed for 1 second.


  
  // // Servo is stationary for 1 second.
  //servo.rotate(190, 1);

  for (int j = 0; j < 14; j++) {
    for (int k = 0; k < 10; k++){
      if (((roundf(valences[j]*100))/100) <= values[k]){
        servo.rotate(angles[k], 1);
        delay(10000);
      }
    }
  }
  
}
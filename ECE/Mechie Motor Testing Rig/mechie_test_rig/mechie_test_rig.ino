#include <Servo.h>
int throttle = 1000; //Hold the value which will be sent to the motor

int pot_val = 0; //The amount the potentiometer is turned

Servo firstESC; //Create the motor object instance

void setup() {
  firstESC.attach(11); //Attach the servo motor to pin 11
  Serial.begin(9600); //Start serial at 9600 baud
  delay(2000);
  Serial.println("Serial ready:");
  arm(firstESC); //Begin the arming process
}

void loop() {
  pot_val = analogRead(A0); //Read the analog value from the potentiometer 
  //Map the analog value which range from 0 to 990 to the pwm values which are 1100 to 2000;
  throttle = map(pot_val, 0, 990, 1100, 2000);
  //Write the value to the motor
  firstESC.write(throttle);
}

//Function to arm the motor
void arm(Servo ESC) {
  Serial.print("Arming");
  ESC.write(2000); //Send repeated signals of full throttle
  ESC.write(1000); //to no throttle for the startup sequence
  Serial.print("Arming");
  ESC.write(1000);
  delay(100);
  ESC.write(1000);
  delay(2000);
  ESC.write(1000);
  delay(3000);
  Serial.println(" Armed!");
}

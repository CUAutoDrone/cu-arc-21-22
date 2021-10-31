#include <Servo.h>
int value = 1000; // hold the value which will be sent to the motor
//int test = 0; //dummy variable to make sure the incoming message is legit
int pot_val = 0;

Servo firstESC; //Creating motor object instance

void setup() {
  firstESC.attach(11);    // attached to pin 11 I just do this with 1 Servo
  Serial.begin(9600);    // start serial at 9600 baud
  delay(2000);
  Serial.println("Serial ready:");
  //firstESC.writeMicroseconds(1000);
  arm(firstESC);
}

void loop() {
  pot_val = analogRead(A0);//reads analog value from potentiometer 
  //maps analog value which ranges from 0 to 990 to the pwm values which are 1100 2000;
  value = map(pot_val, 0, 990, 1100, 2000);
//   Serial.println(value);
  //Write value to motor
  firstESC.write(value);
  //1100 is minimum
  //maximum???
}

//function to arm the motor
void arm(Servo ESC) {
  Serial.print("Arming");
  ESC.write(2000);
  ESC.write(1000);
  Serial.print("Arming");
  ESC.write(1000); //start
  delay(100);
  ESC.write(1000); //value at which the motor starts turning
  delay(2000);
  ESC.write(1000); //value at which the motor stands still
  delay(3000);
  Serial.println(" Armed!");
}

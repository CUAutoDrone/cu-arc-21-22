#include <SoftwareSerial.h>

//hello
int roll = 1000; //1500 is level, no tilt
int pitch = 1000;
int throttle = 1000;
int yaw = 1000;
int empty = 1000;
int drone_channels[14]; //Create 14 channels. Given an integer is 2 bytes, that's 28 bytes total
byte sending_message[32]; //There are two starting bytes and a two byte checksum, adding to 32 bytes total
int checksum = 0;
int sum = 0;

SoftwareSerial mySerial(0, 1); // RX, TX

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(115200);
  //Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Native USB only
  }
  //Goal: increase yaw by 20
  drone_channels[0] = roll;
  drone_channels[1] = pitch;
  drone_channels[2] = throttle;
  drone_channels[3] = yaw;

  //Set the last 10 channels to empty
  for(int i = 4; i<14; i++){
    drone_channels[i] = empty;
  }
  //Send starting bytes; 0x40 is most significant 
  //even though it is second because of little endian order
  sending_message[0] = 0x20;
  sending_message[1] = 0x40;
  //looks like something is transmitting, but the starting bytes are incorrect?
  
  for(int i = 2; i<=(sizeof(drone_channels)/4)*2 - 2; i+=2){
    sending_message[i] = drone_channels[i-2]%256;
    sending_message[i+1] = drone_channels[i-2]/256;
   }
  //Sum the bytes in sending_message
  sum = 0;
  for(int i = 0; i <= sizeof(sending_message) - 2; i+=1) {
    sum += sending_message[i];
  }
  //Put in little endian
  checksum = 0xFFFF - sum;
  sending_message[sizeof(sending_message)-2] = checksum%256;
  sending_message[sizeof(sending_message)-1] = checksum/256;
}

void loop() {
  //Send each of the bytes in sending_message
  for(int i=0; i < 1; i++) {
    //if(mySerial.available())
      mySerial.write(sending_message[i]);
  }
  delay(7);
}

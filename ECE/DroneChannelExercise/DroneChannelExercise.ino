#include <SoftwareSerial.h>

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
  // 
  mySerial.begin(115200); 
  
  while (!Serial) {
    ; //Wait for serial port to connect. Needed for Native USB only
  }

  //Set the first 4 channels to the integer values above
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

  //Send all of the bytes from the drone channels
  for(int i = 2; i<=(sizeof(drone_channels)/4)*2 - 2; i+=2){
    sending_message[i] = drone_channels[i-2]%256;
    sending_message[i+1] = drone_channels[i-2]/256;
   }
   
  //Sum the bytes in sending_message
  sum = 0;
  for(int i = 0; i <= sizeof(sending_message) - 2; i+=1) {
    sum += sending_message[i];
  }
  
  //Put in little endian order
  checksum = 0xFFFF - sum;
  sending_message[sizeof(sending_message)-2] = checksum%256;
  sending_message[sizeof(sending_message)-1] = checksum/256;

  //Send each of the bytes in sending_message
  for(int i=0; i < 32; i++) {
      mySerial.write(sending_message[i]);
  }
   delay(7);
}

void loop() {
  
}

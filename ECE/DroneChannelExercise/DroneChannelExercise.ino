
int roll = 1500;
int pitch = 1500;
int throttle = 1000;
int yaw = 1500;
int empty = 1000;
int drone_channels[14];
byte sending_message[32]



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Goal: increase yaw by 20
  drone_channels[0] = roll;
  drone_channels[1] = pitch;
  drone_channels[2] = throttle;
  drone_channels[3] = yaw;
  
  for(int i = 4; i<14; i++){
    drone_channels[i] = empty;
  }
  drone_channels[0] = 0x20;
  drone_channels[1] = 0x40;
  for(int i = 2; i<sizeof(drone_channels)-2; i+=2){
    sending_message[i] = drone_channels[i]/256;
    sending_message[i+1] = drone_channels[i]%256;
    
   }
  


}

void loop() {
  // put your main code here, to run repeatedly:

}

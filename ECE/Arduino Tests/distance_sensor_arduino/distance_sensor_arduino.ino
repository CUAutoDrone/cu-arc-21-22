#include <Wire.h>

byte address = 0x62;
byte read_reg = 0x02;
byte value = 0;
byte bit_mask = 0b00000001;
byte check = 0;
byte low  = 0;
byte high = 0;

//This function writes to a specific register on the device
byte write_to_register(byte address, byte reg, byte val){
  //begin transfer
  Wire.beginTransmission(address);
  //Write what register you want to connect to
  Wire.write(reg);
  //Write what value you want the register to be
  Wire.write(val);
  //end transmition
  Wire.endTransmission();
}


byte read_register(byte address,byte reg,byte num_bytes){
    //The next three lines tell the device which regiester we want to read
    Wire.beginTransmission(address);
    Wire.write(reg);
    Wire.endTransmission();
    //Request a read from the register selected above
    Wire.requestFrom(address,num_bytes);
    //Return the value to read
    return Wire.read();
}

void setup() {
  Serial.begin(9600);
  Wire.begin();
  Wire.setClock(400000); // set I2C 'full-speed'
}
void loop() {
  //Step one stated in the data sheet
  write_to_register(0x62,0x00,0x04);
  do{
    value = read_register(0x62,0x01,8);
    //this is how we check the last bit of the data
    check = bit_mask & value;
//    Serial.print("Value = "); Serial.println(value,HEX);
  }
  //This is step 2 in the data sheet. We keep reading until the last bit of register 0x01 goes low
  while(check ==1);
  {
    value = read_register(0x62,0x01,8);
    check = bit_mask & value;
//    Serial.print("Value = "); Serial.println(value,HEX);
  }
  //once step 2 is passed we actually read the required data
  //read the lower byte of the distance
  low = read_register(0x62,0x10,1);
  //read the higher byte of the distance
  high = read_register(0x62,0x0f,1);
  //merge the two datum together into one number
  value = (int)high*256+(int)low;
  Serial.print("Value = "); Serial.println(value,DEC);
  
  delay(20);
}

//Reads Pitch, Yaw, and Roll from MPU 92/65 Gyroscope

#include "MPU9250.h"

MPU9250 mpu; // You can also use MPU9255 as is

void setup() {
    Serial.begin(115200);
    Wire.begin();
    delay(2000);

    mpu.setup(0x68);  // change to your own address
}

void loop() {
    if (mpu.update()) {
        Serial.print("Yaw: "); Serial.print(mpu.getYaw()); Serial.print(", Pitch: ");
        Serial.print(mpu.getPitch()); Serial.print(", Roll: ");
        Serial.println(mpu.getRoll());
    }
}

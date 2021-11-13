int incomingByte = 0; // for incoming serial data

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.print("hello\n");
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    // say what you got:
//    Serial.print("I received: \n");
    Serial.println(incomingByte, DEC);
//    Serial.print("\n");
  }
} 

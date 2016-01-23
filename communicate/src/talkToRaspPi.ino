int data;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
    
    // Do something with data
    
    // If you are trying to send integers you have to subtract '0' from data (data = data - '0')
      // If you want to know why, see http://forum.arduino.cc/index.php?topic=44074.0
  }
  delay(500); // A small delay to avoid bugs when reading continuously
}

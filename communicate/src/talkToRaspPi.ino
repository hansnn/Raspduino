const int TONEDURATION = 300;
const int TONEPITCH = 1047;

int piezoPin = 7;
int ledPin = 8;

int data;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
    
    if (data == 'z') {
      playSound();
    }

    else if (data >= '1' && data <= '9') {
      blink(data - '0'); // - '0' to convert byte to int
    }
  }
}

void blink(int n) {
  for (int i = 0; i < n; i++) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}

void playSound() {
  tone(piezoPin, TONEPITCH, TONEDURATION);
}
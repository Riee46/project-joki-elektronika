int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int buttonPin = 8;

int delay_led = 100;
bool isRunning = false;

void setup() {
  // Set semua pin LED sebagai output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    for (int i = 2; i <= 7; i++) {
      digitalWrite(i, HIGH);
      delay(delay_led);
      digitalWrite(i, LOW);
      delay(delay_led);
    }
  } else {
    for (int i = 2; i <= 7; i++) {
      digitalWrite(i, LOW);
    }
  }
  if (digitalRead(buttonPin) == HIGH) {
    for (int i = 7; i >= 2; i--) {
      digitalWrite(i, HIGH);
      delay(delay_led);
      digitalWrite(i, LOW);
      delay(delay_led);
    }
  } else {
    for (int i = 2; i <= 7; i++) {
      digitalWrite(i, LOW);
    }
  }
}
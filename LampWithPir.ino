const int RELAY_PIN = 8;
//const unsigned long TIME_TO_OFF = 60000;
const unsigned long TIME_TO_OFF = 90000;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
  pinMode(A5, INPUT);
  delay(3000);
}
void loop() {
  static unsigned long timer = millis();
  if(millis() > (TIME_TO_OFF + timer)) {
    digitalWrite(RELAY_PIN, HIGH);
    delay(100);
  }
  else {
    digitalWrite(RELAY_PIN, LOW);
  }
  delay(10);
    if(analogRead(A5) >= 400) {
    timer = millis();
  }
}

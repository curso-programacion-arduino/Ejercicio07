#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7

void setup() {
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);

  Serial.begin(9600);

  Serial.println("Inicio parpadeo");
}

void loop() {
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {
    digitalWrite(i, HIGH);
    delay(600);
  }
  
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {
    digitalWrite(i, LOW);
    delay(600);
  }
  for (int i = PIN_LED_4; i >= PIN_LED_1; i--) {
    digitalWrite(i, HIGH);
    delay(600);
  }
  delay(1000);
  for (int i = PIN_LED_4; i >= PIN_LED_1; i--) {
    digitalWrite(i, LOW);
    delay(600);
  }

}

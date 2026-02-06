
int led_output = 9;
int led_input = 2;

bool ledOn = false;
bool lastButton = HIGH;

void setup() {
  pinMode(led_output, OUTPUT);
  pinMode(led_input, INPUT_PULLUP);
}

void loop() {
  bool button = digitalRead(led_input);

  if (button == LOW && lastButton == HIGH) {
    ledOn = !ledOn;      
    delay(100);         
  }

  lastButton = button;

 
  if (ledOn == true) {
    digitalWrite(led_input, HIGH);
    delay(1000);
    digitalWrite(led_output, LOW);
    delay(1000);
  }
}

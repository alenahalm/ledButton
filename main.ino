#define led_pin 11
#define button_plus_pin 8
#define button_minus_pin 9

int brightness = 0;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(button_plus_pin, INPUT);
  pinMode(button_minus_pin, INPUT);
}

void loop() {
  if (digitalRead(buttonPlus) == HIGH) {
    brightness += 5;
  }
  if (digitalRead(buttonMinus) == HIGH) {
    brightness -= 5;
  }
  brightness = constrain(brightness, 0, 254);
  analogWrite(led, brightness);
  delay(50);
}

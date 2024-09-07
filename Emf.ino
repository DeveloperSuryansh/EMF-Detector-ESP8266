int led = LED_BUILTIN;         // the PWM pin the LED is attached to
int val = 0;
int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  Serial.println(val);
  analogWrite(led,1024-(val*val*5));
}

int ledPin = 13;
volatile int x = 0;
void setup() {

  attachInterrupt(0, increment, HIGH); // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, LOW);
  delay(3000);
  Serial.println(x, DEC); // put your main code here, to run repeatedly:

}
void increment() {
  x++;
  digitalWrite(ledPin, HIGH);
  delayMicroseconds(1000000);
}

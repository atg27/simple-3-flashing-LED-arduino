int redLED = 5;
int greenLED = 8;
int blueLED = 13;
float pi = 3.14;
int fast = 50;
int medium = 150;
int slow = 1000;
int longWait = 1500;

String myName = "Andrew G";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED,HIGH);
    delay(fast);
    digitalWrite(redLED,LOW);
    delay(fast);
  }

  for (int j = 0; j < 10; j++) {
    digitalWrite(greenLED,HIGH);
    delay(medium);
    digitalWrite(greenLED,LOW);
    delay(medium);
  }

  for (int k = 0; k < 15; k++) {
    digitalWrite(blueLED,HIGH);
    delay(slow);
    digitalWrite(blueLED,LOW);
    delay(slow);
  }

  delay(longWait);
}

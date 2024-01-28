/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

int a_1a = 2;
int a_1b = 3;
int b_1a = 4;
int b_1b = 5;
int speed = 150;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  Serial.println("Serial Working");
  pinMode(a_1a, OUTPUT);
  pinMode(a_1b, OUTPUT);
  for(int i = 0; i < 10; i++){
    Serial.println("The value of i is : " + (String)i);
  }
}

// the loop function runs over and over again forever
void loop() {
  int speed = 255;
  analogWrite(a_1a, speed);
  analogWrite(a_1b, LOW);

  analogWrite(b_1a, speed);
  analogWrite(b_1b, LOW);
}

void forward(int secs){
}
#include <Servo.h> //Servo
#include <LiquidCrystal.h> //LCD

Servo myservo; //claims servo
LiquidCrystal lcd(13, 9, 5, 4, 3, 2); //LCD pins

int pos = 0; //the initial position of the motor

//sensor pins
const int trigPin = 10; 
const int echoPin = 11;

const int motor = 12; //motor pin

float distanceCm, distanceSec, duration; //calculation of distance variables

void setup() {
myservo.attach(motor); //attaches pin 12 to servo

pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

analogWrite(6,75); //sets contrast for LCD screen
lcd.begin(16,2);

distanceSec = 20;
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { //servo goes from 0 to 180 degrees, moving 1 degree each time
    myservo.write(pos); //moves servo 1 degree each time
    //sends pulse
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); //sends a pulse of 10 microseconds
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    //calculation
    duration = pulseIn(echoPin, HIGH);
    distanceCm= duration*0.034/2;
    
    //prints
    if (distanceCm <= distanceSec){
      if (distanceCm <= distanceSec/2){  
      }
    }


    
  }
  









  
}

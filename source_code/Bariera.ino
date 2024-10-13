#include<Servo.h>

Servo myservo;

const int G_led=2; // Pinul 2 pt Ledul Verde
const int R_led=7; // Pinul 7 pt ledul Rosu

const int trigPin=3;
const int echoPin=5; 

long tmeduration;
int distance;

int cm; // Duration used to calculate distance
int degree=0, flag=0;
int set_time=2000;
long rememTime;

void setup() 
{
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(degree); 
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(G_led,OUTPUT); // Ledul Verde ca Output
  pinMode(R_led,OUTPUT); // Ledul Rosu ca Output
}

void loop() 
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  tmeduration=pulseIn(echoPin,HIGH);
  distance=(0.034*tmeduration)/2;

  Serial.print("cm:");
  Serial.println(distance);

  if(distance<=10) rememTime = millis(); // set start time

  if((millis()- rememTime) > set_time)
  { 
    digitalWrite(G_led, LOW); // Ledul Verde se Stinge 
    digitalWrite(R_led, HIGH); // Ledul Rosu se Aprinde
    if(flag==1)
    { 
      flag=0;
      for(degree=90; degree>0; degree-=1)
      { 
        myservo.write(degree);   
        delay(3); 
      }    
    }
  }
  else
  {
    digitalWrite(G_led, HIGH); // Ledul Verde se Aprinde
    digitalWrite(R_led, LOW); // Ledul Rosu se Stinge
    if(flag==0)
    { 
      flag=1;
      for(degree=0; degree<90; degree+=1)
      { 
        myservo.write(degree);   
        delay(3);     
      }    
    }
  }

delay(1);
 
}
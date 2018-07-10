const int trigPin = 7;
const int echoPin = 8;
const int TR = 5;
const int BR = 2;
const int TL = 10;
const int BL = 4;
const int M = 6;
const int BM = 3;
const int TM = 16; 
int bt1 = 9;
int switcher = 0;
void setup()
{
  // define pin modes
 
pinMode(bt1,INPUT_PULLUP);
 pinMode(BR,OUTPUT);
 pinMode(TL,OUTPUT);
 pinMode(BL,OUTPUT);
 pinMode(M,OUTPUT);
 pinMode(BM,OUTPUT);
 pinMode(13,INPUT_PULLUP);
 pinMode(TM,OUTPUT);
   pinMode(trigPin, OUTPUT);pinMode(TR,OUTPUT); 
  pinMode(echoPin, INPUT);
 
}

void loop() 
{
if (digitalRead(bt1)==LOW){
  if(switcher == 0){
    switcher =1;
  }
  else{
    switcher = 0;
  }
}
 if (switcher == 0){
 
long duration, distancecm, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distancecm = (duration / 2) / 29.1;
    distance = distancecm * 0.393701; 
if(distance==9){  
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);
}
else if(distance<=1){
    digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(TM,LOW);
}
else if(distance<=2){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,LOW);
  digitalWrite(TL,LOW);
  digitalWrite(BL,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=3){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=4){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(BM,LOW);
  digitalWrite(TM,LOW);  
}
else if(distance<=5){
  digitalWrite(TR,LOW);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=6){
  digitalWrite(TR,LOW);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=7){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(TM,HIGH);  
}
else if(distance<=8){
   digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH); 
} else{
  digitalWrite(TR,LOW);
  digitalWrite(BR,LOW);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(TM,LOW);
}
 Serial.print(distance);
 Serial.println("in");
delay(200);
}
 if (switcher == 1){
long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
if(distance==9){  
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);
}
else if(distance<=1){
    digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(TM,LOW);
}
else if(distance<=2){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,LOW);
  digitalWrite(TL,LOW);
  digitalWrite(BL,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=3){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=4){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(BM,LOW);
  digitalWrite(TM,LOW);  
}
else if(distance<=5){
  digitalWrite(TR,LOW);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,LOW);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=6){
  digitalWrite(TR,LOW);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH);  
}
else if(distance<=7){
  digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(TM,HIGH);  
}
else if(distance<=8){
   digitalWrite(TR,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(TL,HIGH);
  digitalWrite(BL,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(BM,HIGH);
  digitalWrite(TM,HIGH); 
} else{
  digitalWrite(TR,LOW);
  digitalWrite(BR,LOW);
  digitalWrite(TL,LOW);
  digitalWrite(BL,LOW);
  digitalWrite(M,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(TM,LOW);
}
 Serial.print(distance);
 Serial.println("cm");
delay(200);
}
}

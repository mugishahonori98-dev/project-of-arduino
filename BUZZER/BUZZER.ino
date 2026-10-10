int buzzre=3;
int red=4;
int green=6;
int yellow=8;
void setup() {
  pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(8,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  delay(200);
  
  digitalWrite(8,HIGH);
   delay(300);
    digitalWrite(8,LOW);
     delay(100);
    digitalWrite(3,HIGH);
     delay(500);
  digitalWrite(4,HIGH);
   delay(200);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   delay(200);
  ;
   
   
   
  
  // put your main code here, to run repeatedly:

}

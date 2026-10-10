int red=2;
int green=4;
int yellow=6;
int buzzer=8;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6, LOW);
  digitalWrite(8,HIGH);
  delay(100);

  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  
  delay(100);
  
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);
  delay(100);


  
  
  // put your main code here, to run repeatedly:

}

int Red=2;
int green=4;
int yelLow=6;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(2,HIGH);
   digitalWrite(4,LOW);
  digitalWrite(6,LOW);
    delay(2000);
    digitalWrite(2,LOW);
     digitalWrite(4,HIGH);
    digitalWrite(6,LOW);
  delay(2000);
  digitalWrite(2,LOW);
digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  delay(2000);
  // put your main code here, to run repeatedly:

}

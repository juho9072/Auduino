int e = 12;
int t = 13;

void setup() {

Serial.begin(9600);
pinMode(t,OUTPUT);
pinMode(e,INPUT);
}


void loop() {
float duration, distance;

  
digitalWrite(t,HIGH);
delay(10);
digitalWrite(t,LOW);

duration = pulseIn(e, HIGH);
distance = ((float)(340 * duration) / 1000) / 2; 

Serial.print(distance);
  Serial.println("mm");
  delay(10);
}

#include   <Servo.h>

Servo trash;     //서브모터 객체 설정(이름 : trash)

int trig = 8;        //(t = trig)
int echo = 9;      //(e =     )

void setup() {
  Serial.begin(9600);
 trash.attach(10);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    }
    

void loop() {
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);


long duration = pulseIn(echo,HIGH);
                           //초음파가 나갔다 온 시간을 측정한다
long distance= (340 * duration)/2/10000;
                        //거리를 계산해 distance에 저장 
Serial.println(distance);

if (distance <= 10) {      //만약 초음파센서와 물체의 거리가 10cm 이하라면
  trash.write(0);     // 서브모터의 각도를 80도로 변경 = 쓰레기통 뚜껑 열림
  delay(100);    // 0.1초 대기(1초 = 1000)
}else{                            //초음파센서와 물체의 거리가 10cm 초과라면
  trash.write(80);
  // 서브모터의 각도를 0도로 조정 = 쓰레기통 뚜껑 닫힘
    }
}

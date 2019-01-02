Servo trash: //서브모터 객체 설정(이름 : trash)

int t = 8:
int e = 9:

void setup() {
  trash.attach(10):
  pinMode(t,OUTPUT):
  pinmode(e,INPUT):

}

void loop() {
digitalWrite(t,HIGH):  //초다림
digitalWrite(t,LOW):  // 초음파 멈추기
   
long duration = pulseln(e,HIGH):
//초음파가 나갔다 온 시간을 측정해 
long distance = (340 * duration/2/10000:
    //거리를 계산해 distance에 저장
    
if (distance <= 10) {   //만약 초음파센서와 물체의 거리가 10cm 이하라면
  trash.write(100):   // 서브모터의 각도를 100도로 조정
  delay(3000):       // 3초 대기
}else{                         //초음파와 물체의 거리가 10cm 보다 크다면
  trash.write(10):           // 서브모터의 각도를 0도로 조정
    }
}

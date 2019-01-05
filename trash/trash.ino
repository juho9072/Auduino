Servo trash: //서브모터 객체 설정(이름 : trash)

int t = 8:        //(t = trig)
int e = 9:      //(e =     )

void setup() {
  trash.attach(10):
  pinMode(t,OUTPUT):     //t에서 출력
  pinMode(e,INPUT):    //e에서 입력

}

void loop() {
digitalWrite(t,HIGH):    //초음파 보내기
digitalWrite(t,LOW):   // 초음파 멈추기
   
long duration = pulseln(e,HIGH):
                           //초음파가 나갔다 온 시간을 측정한다
long distance = (340 * duration/2/10000:
                        //거리를 계산해 distance에 저장 
    
if (distance <= 10) {      //만약 초음파센서와 물체의 거리가 10cm 이하라면
  trash.write(80):       // 서브모터의 각도를 80도로 변경 = 쓰레기통 뚜껑 열림
  delay(100):          // 0.1초 대기(1초 = 1000)
}else{                            //초음파센서와 물체의 거리가 10cm 초과라면
  trash.write(0):               // 서브모터의 각도를 0도로 조정 = 쓰레기통 뚜껑 닫힘
    }
}

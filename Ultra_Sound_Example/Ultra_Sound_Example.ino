//초음파센서의 핀번호 설정
int e = 8; // 12번핀 = echo
int t = 9; // 13번핀 = trig

void setup() 
//t 를 출력하게 하고 e를 입력받게 한다.
pinMode(t,OUTPUT);
pinMode(e,INPUT);
}


void loop() {
float duration, distance;

//t에서 초음파를 보낸다.
digitalWrite(t,HIGH);
delay(10);
//그 뒤에는 대기상태로 한다.
digitalWrite(t,LOW);

// e가 출력한 시간을 저장한다.
duration = pulseIn(e, HIGH);
//초음파가 나갔다가 돌아온 시간을 계산해서 거리를 표시한다.
distance = ((float)(340 * duration) / 1000) / 2; 

//나온 값을 출력한다.
Serial.print(distance);
  Serial.println("mm");
  delay(10);
}

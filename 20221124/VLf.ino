// 3번과 4번 핀은 모터 제어에 관한 핀
int IN1Pin =3;
int IN2Pin =2;
int IN3Pin =7;
int IN4Pin =4;
// 5번핀은 모터의 험을 성정해주는
int ENAPin =5;
int ENBPin =6;
int time_set = 1000;


void FF(int a){
  digitalWrite(IN1Pin, HIGH);
  digitalWrite(IN2Pin, LOW);
  digitalWrite(IN3Pin, HIGH);
  digitalWrite(IN4Pin, LOW);
  delay(a);
}
void FL(int a){
  digitalWrite(IN1Pin, HIGH);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN3Pin, HIGH);
  digitalWrite(IN4Pin, LOW);
  delay(a);
}
void FR(int a){
  digitalWrite(IN1Pin, HIGH);
  digitalWrite(IN2Pin, LOW);
  digitalWrite(IN3Pin, HIGH);
  digitalWrite(IN4Pin, HIGH);
  delay(a);
}
void RR(int a){
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin, HIGH);
  delay(a);
}
void setup() {
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT); // 3. 4번 제어핀들은 핀오드를 출력은로 성정
  pinMode(IN3Pin, OUTPUT);
  pinMode(IN4Pin, OUTPUT); // 3. 4번 제어핀들은 핀오드를 출력은로 성정
  analogWrite(ENAPin, 80); 
  analogWrite(ENBPin, 80);
}
void loop(){
  FF(time_set);
  FR(time_set);
  FL(time_set);
  RR(time_set);
}

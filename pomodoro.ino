
const int buzzer=0;
const int led = 1;
void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer,LOW);
  beeps(5);
  delay(1000);
  digitalWrite(led,LOW);
  int i;
  long long mins=60000;
  for(i=0;i<4;i++){
      digitalWrite(led,HIGH);
      beeps(i+1);
      delay(25*mins);
      beeps(2);
      delay(5*mins);
      beeps(1);
      delay(1000);
      beeps(2);
      
    
  }

}

void beeps(int i){
  int j=0;
  for(j;j<i;j++){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
    }
}

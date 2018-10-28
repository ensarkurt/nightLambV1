
const int led = 7;
const int sensor = A0;

void setup() {
  
  pinMode(led,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  int isik = analogRead(sensor);
  //Serial.println(isik);
  delay(250);

  if(isik<=5){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  
}

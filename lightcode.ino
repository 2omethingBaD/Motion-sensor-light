const int led = 2;
const int motionSensor = 3;

void setup(){
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(motionSensor, INPUT);
}

void loop(){
  bool onOff = digitalRead(motionSensor);

  if(onOff){
    Serial.println("its on!");
    digitalWrite(led, HIGH);
    //delay(300000);
    //delay(5000);
  }
  else{
    Serial.println("its off!");
    digitalWrite(led, LOW);
  }
}
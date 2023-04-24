float HIT_CONSTANT = 2.2; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

 

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A5); 

  float voltage = sensorValue * (5.0 / 1023.0); 
  //Serial.println(voltage);

  if(voltage >= 4.2){
    Serial.println("Hit detected");
  }

}

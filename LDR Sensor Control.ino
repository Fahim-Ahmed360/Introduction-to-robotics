
// LDR Sensor control

const int led = 12;  
void setup()
{
  Serial.begin(9600);
  	pinMode(led, OUTPUT);

  
}



void loop() {  
  int resistance = analogRead(A0);
  Serial.println(resistance);
  
  if(resistance < 400)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
  
  
  


}

// Force Sensor Test:
// Circuit Diagram: Diagram 03 in readme file

int sensor = A0;
int red = 9, blue = 8,green = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
    
}

void loop() {  
  int force = analogRead(sensor);
    Serial.println(force);
  if(force <= 100){
       digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }else if(force > 100 && force <= 300){ 
  digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }else{
  digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
}


// Soil Moisture Test

const int red = 8, green = 9, blue = 10;
int moisture;
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
    pinMode(red, OUTPUT);
  	pinMode(green, OUTPUT);
  	pinMode(blue, OUTPUT);

  
}



void loop() {  
moisture = analogRead(A0);
  Serial.println(moisture);
  
  if(moisture <= 300){    
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }else if(moisture > 300 && moisture <= 600){
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
  }else{
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }

}
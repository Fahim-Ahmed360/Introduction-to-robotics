
const int red = 6, green = 4, blue = 5;
void setup()
{

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}



void loop() {  
	only_rgb();

}

void only_rgb(){
	digitalWrite(red, HIGH);
    delay(500);
  digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(500);
  digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    delay(500);
  digitalWrite(blue, LOW);
  


}

void rgb(){
    digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);
  
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  delay(500);
  
}

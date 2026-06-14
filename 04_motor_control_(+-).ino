
// Motor control

const int p = 10, n = 11;  // ~(pwm)
void setup()
{
  	pinMode(p, OUTPUT);
    pinMode(n, OUTPUT);

  
}



void loop() {  
	analogWrite(p, 0);    // using pwm pin control voltage.(analogWrite();)
  analogWrite(n, 200);      // 3.92 v
  delay(2000);
  analogWrite(p, 200);     // 3.92 v
  analogWrite(n, 0);
  delay(2000);

}

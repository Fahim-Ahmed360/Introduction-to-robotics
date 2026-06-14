// C++ code
//
void setup(){
  Serial.begin(9600);

  

}

void loop()
{  
  if (Serial.available()>0){
  int year = Serial.parseInt();
    if (year%4==0 && year%100!=0 || year%400 == 0){
    Serial.println("Leap Year.");
    }else{
      Serial.println("This is not a leap year.");
    }
  }

  
}

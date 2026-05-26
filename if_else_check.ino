// C++ code
//
void setup(){
  Serial.begin(9600);

  

}

void loop()
{  
  if (Serial.available()>0){
  char ch = Serial.read();
    if (ch == 's'){
      Serial.println("Today is sunny day.");
  	}
    else if(ch == 'r'){
      Serial.println("Today is rainy day.");
    }
    
    else
    {
      Serial.println("Today's weather is nutral.");
    }
  }

  
}
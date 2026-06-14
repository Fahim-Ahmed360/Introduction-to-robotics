
// Soil Moisture Test
// circuit diagram link: https://private-user-images.githubusercontent.com/221211572/607599701-a702d5d4-58a2-4ad8-bcb2-3d834aa9a6ba.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3ODE0NDc2NjYsIm5iZiI6MTc4MTQ0NzM2NiwicGF0aCI6Ii8yMjEyMTE1NzIvNjA3NTk5NzAxLWE3MDJkNWQ0LTU4YTItNGFkOC1iY2IyLTNkODM0YWE5YTZiYS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjYwNjE0JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI2MDYxNFQxNDI5MjZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1iMmRlYWM3YjhmZTAyMWQ0ZjdjZmNjM2NkYzNjZTM0NWE1YjA4MTE3NDM4NjM4NzY0ZWMzOTkyNTg1YmVjNmZiJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZyZXNwb25zZS1jb250ZW50LXR5cGU9aW1hZ2UlMkZwbmcifQ.1Z6ipfosbtQgm_zYFLfjEBuTperY_Uh1vg7cKDDDVWI

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

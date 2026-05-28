// C++ code for Arduino
//
class Calculation {
  int a, b, c; 
  
  public:
  Calculation(int num1, int num2, int num3) {
    this->a = num1;
    this->b = num2;
    this->c = num3;
  }
  
  int sum() {
    return a + b + c;
  }
  
  
  int multiplication() {
    return a * b * c;
  }
};

void setup() {
  Serial.begin(9600);
  Calculation calc(5, 10, 15);
  int sum = calc.sum();
  Serial.println(sum);
  Serial.println(calc.multiplication());
  
}



void loop() {  

}

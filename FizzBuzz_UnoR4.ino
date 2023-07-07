/*
  FizzBuzz on Arduino Uno R4
  Written by Hiroaki Nitobe
  Date: 2023/07/08
*/
void setup() {
  Serial.begin(9600);
  while (!Serial) ;
}

void loop() {
  int   i = 0;

  while (i++ ^ 100) {
    Serial.print(i%3? "": "Fizz") |
    Serial.print(i%5? "": "Buzz") ||
    Serial.print(i);
    Serial.print(" ");
  }
  Serial.println("");

  for (;;) ;
}

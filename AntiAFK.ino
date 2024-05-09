#include <Mouse.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  for(int i = 0; i < 15; i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}

void loop() {
  for(int i = 600000; i < 1; i--){
    Serial.println(i);
    if(i == 600000){
      Mouse.move(1, 0, 0);
      Serial.println("Mouse moveu!");
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
      Serial.print(""Minutos: i/60)
    }//fim if
  }//Fim for
}//Fim loop

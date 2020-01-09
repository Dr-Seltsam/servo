#include <Servo.h>  //Bibliothek zum ansteuern von Servo
 
Servo servoSchwenk;
Servo servoNeige;
//Pause zwischen den Schritten.
const int waitTime = 25;

void setup() {
  Serial.begin(115200);
  //Servomotor "Schwenk-Funktion (unten)" an digitalen Pin 9
  servoSchwenk.attach(D1);
  //Servomotor "Neige-Funktion (oben)" an digitalen Pin 10
  servoNeige.attach(D2);
  
  Serial.println("Schwenk-Servo auf Start-Postition fahren...");
  servoSchwenk.write(0);
  delay(2500);
  Serial.println("Neige-Servo auf Start-Postition fahren...");
  servoNeige.write(0);
}
void loop() {
    for(int position = 0; position <= 180; position++) { 
      servoSchwenk.write(position);
      Serial.print("Schwenk-Servo auf Postition ");
      Serial.println(position);
      delay(waitTime); //Pause
   }
   delay(2500);
   for(int position = 180; position >= 0; position--) { 
      servoSchwenk.write(position);
      Serial.print("Schwenk-Servo auf Postition ");
      Serial.println(position);
      delay(waitTime); //Pause
   }
   delay(2500);
      for(int position = 0; position <= 180; position++) { 
      servoNeige.write(position);
      Serial.print("Neige-Servo auf Postition ");
      Serial.println(position);
      delay(waitTime); //Pause
   }
   delay(2500);
   for(int position = 180; position >= 0; position--) { 
      servoNeige.write(position);
      Serial.print("Neige-Servo auf Postition ");
      Serial.println(position);
      delay(waitTime); //Pause
   }
   delay(2500);
}

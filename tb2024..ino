// C++ code
//
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup()
{
  delay(50);
  lcd.init();
  pinMode(2, OUTPUT);  //12V redwire
  pinMode(3, OUTPUT);  // 9V greenwire
  pinMode(4, OUTPUT);  // 5V greywire
  //buttons
  pinMode(8, INPUT);   //1st
  pinMode(9, INPUT);   //2nd
  pinMode(10, INPUT);  //3rd
  pinMode(11, INPUT);  //4th
  //RGB Lights
  pinMode(5, OUTPUT);  //greenLED
  pinMode(6, OUTPUT);  //blueLED
  pinMode(7, OUTPUT);  //redLED
  pinMode(12, OUTPUT); //yellowLED
  //FAN
  pinMode(13, OUTPUT); //fan yellow pin
 
}


void loop()
{
  lcd.backlight();
  lcd.display();
 
  //1st button
  if (digitalRead(8) == 1) {
    delay(50);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("12V~NASA ADAPTER");
    lcd.setCursor(0, 1);
    lcd.print("PWEDE MO ECHARGE");
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    //forLED
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
   
  }
  //2nd button
  if (digitalRead(9) == 1) {
    delay(50);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("9V ~NASA ADAPTER");
    lcd.setCursor(0, 1);
    lcd.print("PWEDE MO ECHARGE");
    delay(50);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    //forLED
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  //3rd button
  if (digitalRead(10) == 1) {
    delay(50);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("5V ~NASA ADAPTER");
    lcd.setCursor(0, 1);
    lcd.print("PWEDE MO ECHARGE");
    delay(50);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    //forLED
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  //4th button
  if (digitalRead(11) == 1) {
    delay(50);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("BAYUT SI WYNARD");
    lcd.setCursor(0, 1);
    lcd.print("NYAHAHAHAH");
    delay(50);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    //forLED
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, HIGH);
  }
}

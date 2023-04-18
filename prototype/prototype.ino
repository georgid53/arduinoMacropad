#include <Keyboard.h>
 
const size_t buttonPin = 4;
extern size_t buttonState = 0;
extern size_t prevButtonState = HIGH;
const char keyboardButton = 'k';
 
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Keyboard.begin();
}
 
void loop() {
  buttonState = digitalRead(buttonPin);
 
  if ((buttonState !=  prevButtonState) && (buttonState == HIGH)){
    Keyboard.press(keyboardButton);
    delay(100);
    Keyboard.releaseAll();
  }
  
  prevButtonState = buttonState;
 
}
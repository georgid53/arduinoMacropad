#include <Keyboard.h>

const size_t buttonPin = 4;
extern size_t buttonState = 0;
extern size_t prevButtonState = HIGH;
const char keyboardButton[] = "k";
const int sizeOfArray = sizeof(keyboardButton)/sizeof(keyboardButton[0]);

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Keyboard.begin();
}

void loop() {
  buttonState = digitalRead(buttonPin);
 
  if ((buttonState !=  prevButtonState) && (buttonState == HIGH)){
    for (size_t idx = 0; idx < sizeOfArray; idx++){
      Keyboard.press(keyboardButton[idx]);
      delay(100);
      Keyboard.releaseAll();
    }
    
  }
  
  prevButtonState = buttonState;
 
}

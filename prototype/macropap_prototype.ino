#include <Keyboard.h>

const int buttonPin = 4;
size_t buttonState = 0;
size_t prevButtonState = HIGH;

int main(void) {
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Keyboard.begin();

  while(1){
    buttonState = digitalRead(buttonPin);
    if ((buttonState != prevButtonState) && (buttonState == HIGH)) {
      Keyboard.press('v');
      delay(100);
      Keyboard.releaseAll(); // This is important after every Keyboard.press it will continue to be pressed
  }
  prevButtonState = buttonState;
  }
}

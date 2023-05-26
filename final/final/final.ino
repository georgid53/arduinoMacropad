#include <Keyboard.h>

const size_t buttonPin1 = 4;
const size_t buttonPin2 = 6;
const size_t buttonPin3 = 8;

extern size_t buttonState1 = 0;
extern size_t prevButtonState1 = HIGH;
extern size_t buttonState2 = 0;
extern size_t prevButtonState2 = HIGH;
extern size_t buttonState3 = 0;
extern size_t prevButtonState3 = HIGH;

const char keyboardButton1[] = "k";
const int sizeOfArray1 = sizeof(keyboardButton1)/sizeof(keyboardButton1[0]);
const char keyboardButton2[] = "k";
const int sizeOfArray2 = sizeof(keyboardButton1)/sizeof(keyboardButton1[0]);
const char keyboardButton2[] = "k";
const int sizeOfArray2 = sizeof(keyboardButton1)/sizeof(keyboardButton1[0]);

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  digitalWrite(buttonPin1, HIGH);

  pinMode(buttonPin2, INPUT_PULLUP);
  digitalWrite(buttonPin2, HIGH);

  pinMode(buttonPin3, INPUT_PULLUP);
  digitalWrite(buttonPin3, HIGH);

  Keyboard.begin();
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  if ((buttonState1 !=  prevButtonState1) && (buttonState1 == HIGH)){
    for (size_t idx = 0; idx < sizeOfArray1; idx++){
      Keyboard.press(keyboardButton1[idx]);
      delay(100);
      Keyboard.releaseAll();
    }
    
  }
  prevButtonState1 = buttonState1;

  buttonState2 = digitalRead(buttonPin2);
  if ((buttonState2 !=  prevButtonState2) && (buttonState2 == HIGH)){
    for (size_t idx = 0; idx < sizeOfArray2; idx++){
      Keyboard.press(
      delay(100);
      Keyboard.releaseAll();
    }
    
  }
  prevButtonState2 = buttonState2;
 
  buttonState3 = digitalRead(buttonPin3);
  if ((buttonState3 !=  prevButtonState3) && (buttonState3 == HIGH)){
    for (size_t idx = 0; idx < sizeOfArray3; idx++){
      Keyboard.press(keyboardButton3[idx]);
      delay(100);
      Keyboard.releaseAll();
    }
    
  }
  prevButtonState3 = buttonState3;
}
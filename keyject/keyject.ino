#include <Keyboard.h>

const int buttonAdress_2 = 2; 
const int buttonAdress_3 = 3; 
const int buttonAdress_4 = 4; 
char altKey = KEY_LEFT_ALT;
char ctrlKey = KEY_LEFT_CTRL;
char winKey = KEY_LEFT_GUI;
char enter = KEY_RETURN;
char F4 = KEY_F4;
char F13 = KEY_F13;
int delayTime = 200;

int buttonAdresses[] = {
  buttonAdress_2, 
  buttonAdress_3, 
  buttonAdress_4
};

void setup()
{
  for (int i = 0; i < 3; i++){
    pinMode(buttonAdresses[i], INPUT_PULLUP);
  }
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(buttonAdresses[0]) == 0)  
  {
    Keyboard.press(ctrlKey);
    Keyboard.press('c');
    Keyboard.releaseAll();
    delay(delayTime); 
  }
    if (digitalRead(buttonAdresses[1]) == 0)  
  {
    Keyboard.press(ctrlKey);
    Keyboard.press('v');
    Keyboard.releaseAll();
    delay(delayTime); 
  }
    if (digitalRead(buttonAdresses[2]) == 0)  
  {
    Keyboard.press(F13);
    Keyboard.releaseAll();
    delay(delayTime);
  }
}

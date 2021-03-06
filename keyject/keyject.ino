#include <Keyboard.h>

const int buttonAdress_2 = 2; 
const int buttonAdress_3 = 3; 
const int buttonAdress_4 = 4; 
const int buttonAdress_5 = 5; 
char altKey = KEY_LEFT_ALT;
char ctrlKey = KEY_LEFT_CTRL;
char winKey = KEY_LEFT_GUI;
char enter = KEY_RETURN;
char F4 = KEY_F4;
char F13 = KEY_F13;
char F14 = KEY_F14;
char F15 = KEY_F15;
int delayTime = 200;
int layout = 0;

int buttonAdresses[] = {
  buttonAdress_2, 
  buttonAdress_3, 
  buttonAdress_4,
  buttonAdress_5
};

void setup()
{
  for (int i = 0; i < 4; i++){
    pinMode(buttonAdresses[i], INPUT_PULLUP);
  }
  Keyboard.begin();
}

void loop()
{
  if(digitalRead(buttonAdresses[3]) == 0)
  {
    if(layout < 2){
      layout++;
    }else{
      layout = 0;
    }
  }
switch (layout) {
  case 0:
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
    break;
  case 1:
      if (digitalRead(buttonAdresses[0]) == 0)  
  {
    Keyboard.press(ctrlKey);
    Keyboard.press('t');
    Keyboard.releaseAll();
    delay(delayTime); 
  }
    if (digitalRead(buttonAdresses[1]) == 0)  
  {
    Keyboard.press(F14);
    Keyboard.releaseAll();
    delay(delayTime);
  }
    if (digitalRead(buttonAdresses[2]) == 0)  
  {
    Keyboard.press(F15);
    Keyboard.releaseAll();
    delay(delayTime);
  }
    break;
  case 2:
    // add 3rd layout here
    break;
  default:
    layout = 0;
    break;
}

}

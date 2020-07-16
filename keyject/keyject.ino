#include <Keyboard.h>

int buttonAdress = 2; 
char altKey = KEY_LEFT_ALT;
char ctrlKey = KEY_LEFT_CTRL;
char winKey = KEY_LEFT_GUI;
char enter = KEY_RETURN;
char F4 = KEY_F4;
int delayTime = 10;

void setup()
{
  pinMode(buttonAdress, INPUT);  
  digitalWrite(buttonAdress, HIGH); 
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(buttonAdress) == 0)  
  {
    Keyboard.press(winKey);
    delay(delayTime);
    Keyboard.print("https://github.com/EeroVakiparta/KeyJect");
    delay(delayTime);
    Keyboard.press(enter);
    delay(delayTime);
    Keyboard.releaseAll();
    delay(delayTime);
  }
}

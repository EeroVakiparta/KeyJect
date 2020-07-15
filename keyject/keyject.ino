#include <Keyboard.h>

int nappiOsote = 2; 
char altKey = KEY_LEFT_ALT;
char F4 = KEY_F4;

void setup()
{
  pinMode(nappiOsote, INPUT);  
  digitalWrite(nappiOsote, HIGH); 
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(nappiOsote) == 0)  
  {
    Keyboard.press(altKey);
    Keyboard.write(F4);
    Keyboard.releaseAll();
    delay(10);
  }
}

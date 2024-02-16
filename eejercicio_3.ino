void setup() 
{
  pinMode(LED_BUITIN, OUTPUT)
}

void loop() 
{
  static uint32_t previousTime = 0;
  static bool ledState = true;

  uint32_t currentTime = milis();

  if(currentTime - previusTime) > 500)
  {
    previousTime = currentTime;
    ledState = !ledState;
    digitalWrite(LED_BUILTIN, ledState);
  }
}

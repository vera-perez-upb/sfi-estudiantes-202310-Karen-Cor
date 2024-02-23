// Enumeración para representar los estados del programa
enum class ProgramState
{
  INIT,
  ONE_SEC,
  TWO_SEC,
  THREE_SEC
};

// Estado inicial
ProgramState currentState = ProgramState::INIT;

// Tiempo de inicio
unsigned long startTime = millis();

void task() {
  unsigned long currentTime = millis(); // Tiempo actual

  switch (currentState)
  {
  case ProgramState::INIT:
    if (currentTime - startTime >= 1000)
    {
      Serial.println("Han pasado 1 segundo");
      startTime = currentTime;
      currentState = ProgramState::ONE_SEC;
    }
    break;

  case ProgramState::ONE_SEC:
    if (currentTime - startTime >= 1000)
    {
      Serial.println("Han pasado 2 segundos");
      startTime = currentTime;
      currentState = ProgramState::TWO_SEC;
    }
    break;

  case ProgramState::TWO_SEC:
    if (currentTime - startTime >= 1000)
    {
      Serial.println("Han pasado 3 segundos");
      startTime = currentTime;
      currentState = ProgramState::THREE_SEC;
    }
    break;

  case ProgramState::THREE_SEC:
    if (currentTime - startTime >= 1000)
    {
      Serial.println("Volvemos a empezar");
      startTime = currentTime;
      currentState = ProgramState::INIT;
    }
    break;

  default:
    Serial.println("Error");
    break;
  }
}

void setup()
{
  Serial.begin(115200); // Inicializar la comunicación serial
}

void loop()
{
  task(); // Llama a la función task() en cada iteración del loop
}

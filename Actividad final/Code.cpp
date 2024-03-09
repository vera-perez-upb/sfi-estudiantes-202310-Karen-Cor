const int DEFAULT_TIME = 5; 
const int MIN_TIME = 1;     
const int MAX_TIME = 40;    


enum State {
  CONFIG_MODE,
  COUNTDOWN_MODE,
  EMERGENCY_MODE
};

State currentState = CONFIG_MODE;
int countdownTime = DEFAULT_TIME;
bool emergencyActivated = false;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100); 
  
  
  Serial.println("Introduce la clave Cxxxx antes de que acabe el tiempo");
  Serial.println("Pista: tiene 4 numeros consecutivos");
  Serial.println("La cuenta regresiva inicia en 5");
  Serial.println("Aumentala con S");
  Serial.println("Disminuyela con B");
  Serial.println("Presiona L para iniciar");
}

void loop() {
  switch (currentState) {
    case CONFIG_MODE:
      configureSystem();
      break;
    case COUNTDOWN_MODE:
      startCountdown();
      break;
    case EMERGENCY_MODE:
      handleEmergency();
      break;
    default:
      break;
  }
}

void configureSystem() {
  while (currentState == CONFIG_MODE) {
    if (Serial.available() > 0) {
      char input = Serial.read();
      switch (input) {
        case 'S':
          countdownTime = min(countdownTime + 1, MAX_TIME);
          break;
        case 'B':
          countdownTime = max(countdownTime - 1, MIN_TIME);
          break;
        case 'L':
          currentState = COUNTDOWN_MODE;
          break;
        default:
          break;
      }
    }
  }
}

void startCountdown() {
  for (int i = countdownTime; i > 0; i--) {
    delay(1000);
    Serial.print("Cuenta regresiva: ");
    Serial.println(i);

    if (Serial.available()) {
      String input = Serial.readStringUntil('\n');
      if (input.startsWith("C") && input.substring(1) == "1234") {
        Serial.println("SALVASTE AL MUNDO");
        currentState = CONFIG_MODE;
        return;
      }
    }
  }
  emergencyActivated = true;
  currentState = EMERGENCY_MODE;
}

void handleEmergency() {
  Serial.println("RADIACION NUCLEAR ACTIVA");
  delay(2000);
  emergencyActivated = false;
  currentState = CONFIG_MODE;
}

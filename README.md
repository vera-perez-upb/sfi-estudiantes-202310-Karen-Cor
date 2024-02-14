Ejercicio #3:

 void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
   static uint32_t previousTime = 0;
  static bool ledState = true;

  uint32_t currentTime = millis();

  if( (currentTime - previousTime) > 100)
  {
    previousTime = currentTime;
    ledState = !ledState;
    digitalWrite(LED_BUILTIN, ledState);
  }
}

En primer lugar se inicia el pin como una salida out put, lo que indica que se utilizara para enviar señales de salida al LED, y con la funcion loop ejecutaremos el bucle principal,
se declaran variables estaticas que almacenaran el tiempo anterior(en milisegundos) y el estado del LED, asi mismo se obtendra el tiemp actual y se guardara en una variable.
Se verifica si ha pasado más de 100 milisegundos desde la última vez que se cambió el estado del LED. Esto ayuda a controlar la frecuencia con la que el LED parpadea. Se actualizan los
tiempos y se invierte el estado del LED. Se cambia el estado del LED integrado usando la función digitalWrite(). Si ledState es true, el LED se encenderá; si es false, se apagará.
El LED se encenderá durante 100 milisegundos y luego se apagará durante 100 milisegundos, alternando continuamente entre encendido y apagado.

Al cambiar el 100 por 500 se observa que el LED parpadea mas lento, esto es debido a que el código verificará si ha pasado más de 500 milisegundos desde la última vez que se cambió
el estado del LED, por lo que se encendera durante 500 milisegundos y se apagara durante 500 milisegundos

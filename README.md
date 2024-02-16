Ejercicio #6
¿Cómo se ejecuta este programa?
Inicia estableciendo la comunicación serial y configurando un estado inicial llamado INIT. Posteriormente, entra en un
bucle donde se llama repetidamente a la función task1(). Dicha funcion realiza diferentes acciones según el estado actual.
En el estado INIT, inicia la comunicación serial y luego cambia al estado WAIT_TIMEOUT.
En el estado WAIT_TIMEOUT, verifica si ha pasado un cierto intervalo de tiempo y realiza acciones en consecuencia,
como imprimir el tiempo actual en milisegundos. El programa utiliza una máquina de estados para controlar el flujo de ejecución
y las acciones realizadas en función del estado actual, lo que le permite realizar tareas de manera estructurada y eficiente.

Pudiste ver este mensaje: Serial.print("Task1States::WAIT_TIMEOUT\n");. ¿Por qué crees que ocurre esto?
No se pudo observar este mensaje debido a como esta estructurado el codigo, ya que la indicacion de imprimir el mensaje esta despues
de la que cambia su estado a WAIT_TIMEOUT 

¿Cuántas veces se ejecuta el código en el case Task1States::INIT?
El código en el caso Task1States::INIT se ejecuta solo una vez al inicio del programa, cuando se está en estado INIT.


Ejercicio #7
En el programa, millis() se utiliza para calcular el tiempo transcurrido desde la última vez que se realizó una acción, asi como para verificar si ha pasado un cierto intervalo de tiempo (INTERVAL). Esta verificación se realiza en el estado WAIT_TIMEOUT para determinar si es el momento adecuado para ejecutar ciertas acciones, como la impresión del tiempo actual en el puerto serie.


Ejercicio #8
Estados del programa:
El programa cuenta con los estados "ONE_SEC, TWO_SEC y THREE_SEC" que esperan 1, 2 y 3 segundos respectivamentte, para luego volver a un estado principal START.

Acciones:
Pasar de un estado a otro para asi imprimir los mensajes que indican que han pasado 1 segundo, 2 segundos, 3 segundos o que el programa vuelve a comenzar.

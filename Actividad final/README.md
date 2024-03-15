# Trabajo Unidad 1
## Diagrama de estados
<a href="https://imgbb.com/"><img src="https://i.ibb.co/5Wqhbsn/Diagrama-de-estados.png" alt="Diagrama-de-estados" border="0"></a>

## Experiencia

Título del juego: "Escape Temporal"

Descripción del juego:
"Escape Temporal" es un juego tipo puzzle en el que el jugador debe descifrar una clave para escapar de un bucle temporal creado por los "Disidentes del Tiempo". El monitor serial proporcionará pistas contextuales que ayudarán al jugador a descubrir la clave.


Flujo del juego:

1. Inicio del juego:
El juego comienza con el jugador recibiendo un mensaje en pantalla: "¡Estás atrapado en un bucle temporal! Para escapar, descifra la clave correcta."
El jugador sabe que debe interactuar con el monitor serial para obtener pistas y descubrir la clave.

2. Recepción de pistas:
A intervalos regulares, el monitor serial envía mensajes que proporcionan pistas sobre la clave, la idea es que las pistas se relacionen con cosas de "cultura general", para que el jugador tenga más oportunidades, a la vez que se evalua a si mismo.
Por ejemplo, el monitor podría decir: "Recuerda el día en que conociste a tu mejor amigo. La clave tiene algo que ver con eso."


3. Interacción con el monitor:
El jugador puede enviar comandos al monitor serial para solicitar más pistas o intentar ingresar una clave.
Por ejemplo, el jugador podría enviar "P" para pedir una pista adicional o "I1234" para intentar ingresar la clave "1234".

4. Descifrar la clave:
Usando las pistas proporcionadas por el monitor serial, el jugador debe deducir la clave correcta.

5. Escape exitoso:
Si el jugador ingresa la clave correcta, el monitor serial mostrará el mensaje "¡Escapaste del bucle temporal! ¡Felicidades!" y el juego terminará.
Si el jugador ingresa una clave incorrecta, el monitor serial enviará un mensaje de error y seguirá proporcionando pistas hasta que se encuentre la clave correcta o se decida reiniciar el juego.

Aspectos técnicos:
Se utilizará Arduino para simular el monitor serial y enviar mensajes al jugador.
El código Arduino se programará para enviar pistas y recibir entradas del jugador.
Las pistas se generarán aleatoriamente o se seleccionarán de una lista predefinida para aumentar la rejugabilidad del juego.

Con esta experiencia simplificada, el jugador se enfrentará a un desafío divertido pero accesible que pondrá a prueba su capacidad para deducir la clave correcta utilizando pistas que tienen que ver con "cultura general" proporcionadas por el monitor serial.

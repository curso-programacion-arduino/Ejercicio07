
/*

Ejercicio07: Usando un bucle while y las instrucciones continue y break 
para imprimir por el puerto serie los número impares del 0 al 100 
usando un delay de 100 ms en el setup. Usa una variable contador dentro del bucle while.
Al llegar a 100 encender hacer parpadear en el loop de forma continua los 4 leds.

*/

#define PIN_LED_1 4     //DEFINO VALOR PINA UTILIZAR EL PIN 4
#define PIN_LED_2 5     //DEFINO VALOR PINA UTILIZAR EL PIN 5 SERA UN PIN PWM
#define PIN_LED_3 6     //DEFINO VALOR PINA UTILIZAR EL PIN 6 SERA UN PIN PWM
#define PIN_LED_4 7     //DEFINO VALOR PINA UTILIZAR EL PIN 7

void setup() {

  pinMode(PIN_LED_1, OUTPUT);                //DEFINO PIN 1 COMO SALIDA
  pinMode(PIN_LED_2, OUTPUT);                //DEFINO PIN 2 COMO SALIDA
  pinMode(PIN_LED_3, OUTPUT);                //DEFINO PIN 3 COMO SALIDA
  pinMode(PIN_LED_4, OUTPUT);                //DEFINO PIN 4 COMO SALIDA

  Serial.begin(9600);                   //INICIALIZO EL MONITOR SERIE

  while (true) {                   //INICIALIZO UN BUCLE INFINITO 
    static int i = 0;             // CREO UNA VARIABLE ESTATICA QUE ES 1, ESTE STATIC HACE QUE LA CREE UNA VEZ Y LUEGO LA DEJE VARIAR CUANDO VUELVE A PASAR POR AQUI NO SE VUELVE A IGUALR A CERO
    i++;                          //SUMO UNO A I
    if (i % 2 == 0)               //I DIVIDO POR DOS CUANDO ES CERO CONTINUO
      continue;

    if (i > 100)                  // SI I ES MAYOR DE 100 HACE UN BREAK Y SALE DEL WHILE
      break;

    Serial.println(i);            // CUANDO PASO POR AQUI IMPRIMO EN PANTALLA 
  }
  Serial.println("Inicio parpadeo");         //UNA VEZ QUE SALGO DEL BUCLE IMPRIMO EN PANTALLA EL INICIO PARPADEO
}

void loop() {
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {            //BUCLE FOR PARA RECORRER DEL PIN 1 AL PIN CUATRO Y ENCENCEROLOS
    digitalWrite(i, HIGH);                                  //PONER EL VALOR DE I EN CADA MOMENTO A ALTO,,,,,ENCENDER LED
  }
  delay(1000);                                              //HAGO UN PARO DE UN SEGUNDO
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {            //BUCLE FOR PARA RECORRER DEL PIN 1 AL PIN CUATRO Y ENCENCEROLOS
    digitalWrite(i, LOW);                                   //PONER EL VALOR DE I EN CADA MOMENTO A ALTO,,,,,ENCENDER LED
  }
  delay(1000);                                                //HAGO UN PARO DE UN SEGUNDO
}

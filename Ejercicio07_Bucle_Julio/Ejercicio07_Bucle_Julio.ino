/*
   Ejemplo 7
   bucle while para imprimir numeros impares
   al llegar a 100 encender LEDs
   segun codigo de jecrespo:
   https://github.com/jecrespo/aprendiendoarduino-Curso_Programacion_Arduino/tree/master/Ejercicio07-While
*/

// Definimos los pins para los LEDs:

#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7

/*
 * la cuenta hasta 100 esta en el setup() porque solo la hacemos una vez.
 * El parpadeo de los LEDs esta en el void loop() porque es repetitiva...
 */


void setup()
{
  // los pins de los LEDs como  output... para poder encenderlos...
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);

  Serial.begin(9600);

  while (true) // "mientras se cumpla..."
  {
    static int i = 0;
    i++;
    if (i % 2 == 0)
      continue; // salta directamente "a la siguiente vuelta del while"

    if (i > 100) // llegando al numero 100 para el while y va a encender los LEDs
      break;

    Serial.println(i);
  }
  Serial.println("Inicio parpadeo");
}

void loop()
{
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++)
  {
    digitalWrite(i, HIGH);
  }
  delay(1000);
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++)
  {
    digitalWrite(i, LOW);
  }
  delay(1000);
}

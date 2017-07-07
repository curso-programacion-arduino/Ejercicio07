  
 



int x = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x++;
  if (x % 2 == 0) x++;

  Serial.println(x++);
  delay (50);
  while (x > 100) {
    Serial.print("Hi");
    digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(7, HIGH);
    delay (100);
    digitalWrite(4, LOW);
   
     
  
    digitalWrite(5, LOW);
   
      
   
    digitalWrite(6, LOW);

      
  
    digitalWrite(7, LOW);
     delay (100);
    
    
  }
}

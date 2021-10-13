void setup()
{
  
pinMode(D7,OUTPUT);

pinMode(D6,OUTPUT);

pinMode(D8,OUTPUT);
  
 
}

void loop()
{
  digitalWrite(D6, LOW); //Yellow
  digitalWrite(D7, LOW);
  digitalWrite(D8, HIGH);
  delay(1000);
  digitalWrite(D6, LOW); //purple
  digitalWrite(D7, HIGH);
  digitalWrite(D8, LOW);
delay(1000);
  digitalWrite(D6, LOW); //Red
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
delay(1000);
    digitalWrite(D6, HIGH);// sky blue
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);
delay(1000);
  digitalWrite(D6, HIGH); //Green
  digitalWrite(D7, LOW);
  digitalWrite(D8, HIGH);
delay(1000);
   digitalWrite(D6, HIGH); // dark blue
  digitalWrite(D7, HIGH);
  digitalWrite(D8, LOW);
delay(1000);
   digitalWrite(D6, LOW);  // White
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);
delay(1000);
}

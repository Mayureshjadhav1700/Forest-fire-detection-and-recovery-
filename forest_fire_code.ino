const int flameSensor1 = 13; 
const int relayPin1 = 11;  

void setup()
{
  pinMode(flameSensor1, INPUT);
  pinMode(relayPin1, OUTPUT);
  digitalWrite(relayPin1, LOW); 
  Serial.begin(9600);
}

void loop() 
{
  int flameValue1 = digitalRead(flameSensor1);
  if (flameValue1 == LOW)
  {
     Serial.println("Flame detected.");
    digitalWrite(relayPin1, LOW);  
    delay(500);
    delay(1000);
 }
  else 
  {
    Serial.println("NO Flame detected!");
    digitalWrite(relayPin1, HIGH); 
    delay(500);
  }
  delay(1000); 
}

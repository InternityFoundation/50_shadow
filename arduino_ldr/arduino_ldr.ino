const int ledPin = 13;  //define pin no. to led
const int ldrPin = A0;  //define pin no. to ldr
void setup() {
  Serial.begin(9600); //set port io no. 
  pinMode(ledPin, OUTPUT);  //define the ledpin
  pinMode(ldrPin, INPUT);   //define the ldrpin
}
void loop() 
{
  int ldrStatus = analogRead(ldrPin);   //for read analog signal
  if (ldrStatus <=300) 
  {
    digitalWrite(ledPin, HIGH);    // to set led in on state           
    Serial.println("LDR is DARK, LED is ON");
  }
  else 
  {
    digitalWrite(ledPin, LOW);          // to set led in on state
    Serial.println("---------------");
  }
}

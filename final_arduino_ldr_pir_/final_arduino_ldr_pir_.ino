const int ledPin = 11;  //define pin no. to led
const int ldrPin = A0;  //define pin no. to ldr
int sensor = 3; // set input pin to sensor  
void setup() {
  Serial.begin(9600); //set port io no. 
  pinMode(ledPin, OUTPUT);  //define the ledpin
  pinMode(ldrPin, INPUT);   //define the ldrpin
  pinMode(sensor, INPUT);    // set sensor as input
}
void loop() 
{
  int ldrStatus = analogRead(ldrPin);   //for read analog signal
  int var = digitalRead(sensor);
  if (ldrStatus <=300) 
  {
    analogWrite(ledPin,100);    // to set led in on state           
    Serial.println("LDR is DARK, LED is ON");
    delay(500);
    if(var == HIGH)
    {
      analogWrite(ledPin,255);    // to set led in on state           
      Serial.println("PIR IS WORKING");
      delay(5000);
    }
    else
    {
      analogWrite(ledPin,100);
      delay(500);
    }
  }
  else 
  {
    digitalWrite(ledPin, LOW);          // to set led in on state
    Serial.println("---------------");
  }
}

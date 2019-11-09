int led = 13; // set pin to led               
int sensor = 3; // set input pin to sensor             
int state = LOW; // set initiall state as off             
int val = 0;                 

void setup() 
{
  pinMode(led, OUTPUT);  // take led as output    
  pinMode(sensor, INPUT);    // set sensor as input
  Serial.begin(9600);        // set port number
}

void loop()
{
  val = digitalRead(sensor);   
  if (val == HIGH) 
  {           
    digitalWrite(led, HIGH);   // led is on
    delay(1000);                // delay time 100ms
    
    if (state == LOW) 
    {
      Serial.println("Motion detected!"); 
      state = HIGH;       
    }
  } 
  else 
  {
      digitalWrite(led, LOW); // led is off
      delay(200);             // delay time 200ms
      
      if (state == HIGH)
      {
        Serial.println("Motion stopped!");
        state = LOW;       
      }
  }
}

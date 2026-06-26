/* Bluetooth-activated table lamp.
  --------230v AC power.---------
*/
char value;
void setup() 
{
  Serial.begin(9600);//enable serial monitor
  pinMode(2, OUTPUT);//define relay pin
}

void loop() 
{
    if (Serial.available() > 0) 
    {
    value = Serial.read();//read serial value
  }
  if (value == '1') 
  {
    digitalWrite(2, LOW);//lamp ON
  }
  else if (value == '0') 
  {
    digitalWrite(2, HIGH);//lamp OFF
  }
  else
  {
    digitalWrite(2,HIGH);
  }
}

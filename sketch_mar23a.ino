int analogval = 0;
const int buttonPin = 2;
int buttonState = 0;
int buttonStateval= 0;


#define aref_voltage 3.3
int tempPin=A1;
int tempReading;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  analogReference(EXTERNAL);
  Serial.setTimeout(1);
}


void loop()
{
  tempReading=analogRead(tempPin);

  float voltage=tempReading*aref_voltage;
  voltage /=1024.0;

  float tempatureC = (voltage-0.5)*100;
  delay(1000);


  int analogV0 = analogRead(A0);
  
  
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    long randomnum = random(100,400);
    buttonStateval=randomnum;
  } else
  {
    buttonStateval=0;
  }
  
  Serial.print("Temparature= ");
  Serial.print(tempatureC);
  Serial.print(" , ");
  Serial.print("Button= ");
     Serial.print(buttonStateval);
  Serial.print(" , ");
  Serial.print("light= ");
     Serial.println(analogV0);
  //Serial.println(analogval);
  
  
}

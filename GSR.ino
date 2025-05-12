const int LED=13;
const int GSR=A0;
int sensorValue;

void setup()
{
Serial.begin(9600);
pinMode(LED,OUTPUT);
digitalWrite(LED,LOW);
delay(1000);
}

void loop()
{
int temp;
float conductivevoltage;
sensorValue=analogRead(GSR);
conductivevoltage = sensorValue*(5.0/1023.0);
Serial.println(sensorValue);
delay(100);
}
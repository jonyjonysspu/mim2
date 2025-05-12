
int sensorPin = A1; 
int sensorValue = 0;

void setup() {
  pinMode(sensorPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
}
#define IR D1
int detection = LOW;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(IR, INPUT);
}

void loop() {
  detection = digitalRead(IR);
  if(detection==LOW){
  Serial.print("There is an obstacle!\n");
  digitalWrite(LED_BUILTIN, LOW);
  }
  else{
    Serial.print("There is not any obstacle!\n");
  digitalWrite(LED_BUILTIN, HIGH);
  }
  delay(500);
  
}

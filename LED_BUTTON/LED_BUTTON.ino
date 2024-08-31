#define LED_PIN 12
#define PUSH_BUTTON 2
void setup() {

  pinMode(PUSH_BUTTON, INPUT);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  if(digitalRead(PUSH_BUTTON) == HIGH){
    digitalWrite(LED_PIN, HIGH);
    
  }
  else{
    digitalWrite(LED_PIN, LOW);
    
  delay(100);

}

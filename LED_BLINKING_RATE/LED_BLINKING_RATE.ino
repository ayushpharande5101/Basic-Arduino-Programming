#define LED_PIN 11

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {

     for (int i = 0; i < 255; i++){
      Serial.println(i);
      analogWrite(LED_PIN, i);
      delay(5);
     }

     for (int i = 255; i > 0; i-- ){
      Serial.println(i);
      analogWrite(LED_PIN, i);
      delay(5);
     }


}

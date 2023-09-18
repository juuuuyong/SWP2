#define PIN_LED 7
bool toggle = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT)
    ;
  }

void loop() {
  
    digitalWrite(PIN_LED, toggle);
    delay(1000);
    toggle = 1;

    if(toggle = 1){
      for(int i=0; i<10; i++){
        digitalWrite(PIN_LED, toggle);
        toggle = 1 - toggle; //toggle = !toggle;
        delay(200);
      }
    }

  while(1){
    digitalWrite(PIN_LED, 1);
  }
}

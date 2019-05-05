const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;
int button = 0;
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}


void loop() {
  button = digitalRead(buttonPin);
  
    
    if(buttonState == 0){
      if(button == 0){
        digitalWrite(ledPin,LOW);
        buttonState = 0;
      }
      else if(button == 1){
        digitalWrite(ledPin,LOW);
        buttonState = 1;
      }
    }
    else if(buttonState == 1){
      if(button == 0){
        buttonState = 2;
        digitalWrite(ledPin,LOW);
      }
      else if(button == 1){
        buttonState = 1;
        digitalWrite(ledPin,LOW);
        
      }
    }
      else if(buttonState == 2){
      if(button == 0){
        buttonState = 2;
        digitalWrite(ledPin,LOW);
      }
      else if(button == 1){
        buttonState = 3;
        digitalWrite(ledPin,LOW);
        
      }
    }
     else if(buttonState == 3){
      if(button == 0){
        buttonState = 0;
        digitalWrite(ledPin,LOW);
      }
      else if(button == 1){
        buttonState = 3;
        digitalWrite(ledPin,HIGH);
        
      }
    }
  delay(1000);
    }

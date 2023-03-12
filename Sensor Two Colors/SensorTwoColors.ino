int redpin = 4; // pin for red signal  
int greenpin = 2; // pin for green signal  
int val;  
 
void setup() {  
  pinMode(redpin, OUTPUT);  
  pinMode(greenpin, OUTPUT);  
}   

void loop() {  
  for(val = 255; val > 0; val--) { 
    digitalWrite(redpin, val); //dim red   
    digitalWrite(greenpin, 255 - val); // brighten green   
    delay(1000);  
     
    for(val = 0; val < 255; val++) {  
      digitalWrite(redpin, val); //brighten red   
      digitalWrite(greenpin, 255 - val); //dim green   
      delay(1000);  
        
} 
  }
}
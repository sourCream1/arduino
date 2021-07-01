int redld =  9;  
int greenld =10; 
int blueld = 11;         
int brightness = 0;    // how bright the led9 is
int fadeAmount = 5;    // how many points to fade the led9 by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
   pinMode(redld, OUTPUT);
    pinMode(greenld, OUTPUT);
     pinMode(blueld, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:
  //brightness = random(255); 
  analogWrite(redld,100);    
  analogWrite(greenld, brightness);    
  analogWrite(blueld, 250);  
  analogWrite(blueld, 50);   

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(70);                            
}

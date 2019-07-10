int LED = 13; // assign the pin number to a variable

void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT); //initialize digital pin LED as an output.

}

void loop() {
  // put your main code here, to run repeatedly:

    /** 
     *  First signal 's' 
     *  Morse code for s is - - -
     *  three short blinks.
     */

     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(500);              //wait for half a second
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(1000);             //wait for a second
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(500);              //wait for half a second
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(1000);             //wait for a second
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(500);              //wait for half a second
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(1000);             //wait for a second

     /** 
     *  Second signal 'o' 
     *  Morse code for o is --- --- ---
     *  three long blinks.
     */
     
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(2000);             //wait for two seconds
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(500);              //wait for half a second
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(2000);             //wait for two seconds
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(500);              //wait for half a second
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(2000);             //wait for two seconds
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(500);              //wait for half a second


      /** 
     *  First signal 's' 
     *  Morse code for s is - - -
     *  three short blinks.
     */

     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(500);              //wait for half a second
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(1000);             //wait for a second
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(500);              //wait for half a second
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(1000);             //wait for a second
     digitalWrite(LED, HIGH); //turn the LED on (HIGH is the voltage level)
     delay(500);              //wait for half a second
     digitalWrite(LED, LOW);  //turn the LED off making the voltage LOW
     delay(1000);             //wait for a second

     

}

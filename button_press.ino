
/* 10k ohm voltage divider, button has one lead going to power,
  the other to the digital input and ground with resistor
*/

const int gb = 13; //green button pin
const int bb = 12; //blue button pin

void setup(){

  pinMode(gb, INPUT);
  pinMode(bb, INPUT);

  Serial.begin(9600);

}

void loop(){

  if (digitalRead(gb) == HIGH ) {   // If the green button is being pressed
    Serial.print(1, DEC);   // Send out a 1 "49"
    Serial.print(",");
  }  
  else {
    Serial.print(0, DEC);   // Or send out a 0 "48"
    Serial.print(",");
  }
  if (digitalRead(bb) == HIGH ) {   // If the blue button is being pressed
    Serial.println(1, DEC);   // Send out a 1 "49"
  }  
  else {
    Serial.println(0, DEC);   // Or send out a 0 "48"
  }

}




/*
   _     ____       _  ____  _     ____  _  ____
  / \   /  _ \     / |/  _ \/ \ /\/  __\/ \/  _ \
  | |   | / \|     | || / \|| | |||  \/|| || / \|
  | |_/\| |-||  /\_| || |-||| \_/||    /| || |-||
  \____/\_/ \|  \____/\_/ \|\____/\_/\_\\_/\_/ \|


  Arduino 4 beat sequencer.
  Version 1.0

  https://github.com/villaperros/4_Pot_Sequencer

  Creado por Joan Villaperros
  DIC.2017
*/

void setup() {

  pinMode(3,OUTPUT); 
  pinMode(13,OUTPUT);
}


void loop() {

  digitalWrite(13,HIGH);
  
  int freq0 = (analogRead(A0)/4);
  int tiempo = analogRead(A4);   
     if ( freq0 < 30 ){
       noTone(3); 
       delay(tiempo);
     }else{     
  tone(3,  freq0 );
delay(tiempo);
     }

 
 int freq1 = (analogRead(A1)/4);
 tiempo = analogRead(A4);
   
     if ( freq1 <  30 ){
       noTone(3); 
       delay(tiempo);
     }else{     
  tone(3,  freq1 );
delay(tiempo);
     }
     
     
     
      int freq2 = (analogRead(A2) /4); 
     tiempo = analogRead(A4);
     if ( freq2 <  30 ){
       noTone(3); 
       delay(tiempo);
     }else{     
  tone(3,  freq2 );
delay(tiempo);
     }
     
      int freq3 = (analogRead(A3)/4);
    tiempo = analogRead(A4);
     if ( freq3 <  30 ){
       noTone(3); 
       delay(tiempo);
     }else{     
  tone(3,  freq3 );
delay(tiempo);
     }

 
}

/**
   Acionameto de um Led
   @author Dener Lisboa Mafra
*/


void setup() {
pinMode (13, OUTPUT);






}

void loop() {
  digitalWrite (13, HIGH);
  delay (1000); //1000ms=1s
  digitalWrite (13, LOW);
  delay (100); //100ms=1s
}

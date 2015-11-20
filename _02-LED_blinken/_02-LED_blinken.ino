//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-5 als Output setzten
  pinMode(5, OUTPUT);
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {      
  //Pin-5 auf High setzen -> 5V an Pin-5 -> LED an
  digitalWrite(5, HIGH);   
  //Ein Sekunde (1000 Millisekunden) warten
  delay(1000);
  //Pin-5 auf Low setzen -> 0V an Pin-5 -> LED aus
  digitalWrite(5, LOW);   
  //Ein Sekunde (1000 Millisekunden) warten
  delay(1000);
}

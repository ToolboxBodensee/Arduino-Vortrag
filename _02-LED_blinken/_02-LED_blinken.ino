//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-2 als Output setzten
  pinMode(2, OUTPUT);
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {      
  //Pin-2 auf High setzen -> 5V an Pin-2 -> LED an
  digitalWrite(2, HIGH);   
  //Ein Sekunde (1000 Millisekunden) warten
  delay(1000);
  //Pin-2 auf Low setzen -> 0V an Pin-2 -> LED aus
  digitalWrite(2, LOW);   
  //Ein Sekunde (1000 Millisekunden) warten
  delay(1000);
}

//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-2 als Output setzten
  pinMode(2, OUTPUT);
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {      
  //Pin-2 auf High setzen -> 5V an Pin-2 -> LED an
  digitalWrite(2, HIGH);   
}

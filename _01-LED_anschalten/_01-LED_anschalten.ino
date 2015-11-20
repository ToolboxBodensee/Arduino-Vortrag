//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-5 als Output setzten
  pinMode(5, OUTPUT);
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {      
  //Pin-2 auf High setzen -> 5V an Pin-5 -> LED an
  digitalWrite(5, HIGH);   
}

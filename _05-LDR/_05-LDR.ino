//Neue Variable vom Typ byte deklarieren
byte helligkeit;

//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-5 als Output setzten
  pinMode(5, OUTPUT);

  //Variable Helligkeit wird zu Beginn auf 0 gesetzt
  helligkeit = 0
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {
  //Spannung an Pin A0 messen und der Variablen helligkeit zuweisen      
  helligkeit = analogRead(0);

  //Helligkeitswert auf Pin-5 anwenden
  analogWrite(2, helligkeit);
}

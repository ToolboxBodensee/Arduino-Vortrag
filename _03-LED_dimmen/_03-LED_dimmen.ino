//Neue Variable vom Typ byte deklarieren
byte helligkeit;

//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-5 als Output setzten
  pinMode(5, OUTPUT);

  //Variable Helligkeit wird zu begin auf 0 gesetzt
  helligkeit = 0
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {
  //Helligkeits Variable um 1 erhöhen      
  helligkeit = helligkeit + 1;

  //Überprüfen ob Helligkeit über Maximaler Helligkeit (255)
  if(helligkeit>=255){
    //Helligkeit wieder auf 0 setzten
    helligkeit = 0;
  }

  //Helligkeitswert auf Pin-5 anwenden
  analogWrite(5, helligkeit);

  //Verzögerung für 20ms (0.02 sek)
  delay(20);
}

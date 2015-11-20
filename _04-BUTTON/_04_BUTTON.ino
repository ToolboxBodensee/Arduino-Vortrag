//Initialisierungsfunktion, die aufgerufen wird wenn das Board neu startet
void setup() {
  //Pin-3 als Input setzten
  pinMode(3, INPUT);
  //Pin-5 als Output setzten
  pinMode(5, OUTPUT);
}

//Dauerschleife, welche die ganze Zeit läuft
void loop() {

  //Überprüfen ob Helligkeit über Maximaler Helligkeit (255)
  if(digitalRead(3) == LOW){
    //LED einschalten
    digitalWrite(5, HIGH);
  } else{
    //LED ausschalten
    digitalWrite(5, LOW);
  }
}

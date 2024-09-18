// C++ code
//

int led = 10;
int buzzer = 6;

void setup()
{
  Serial.begin(9600);
  
  pinMode(A0, INPUT); // fotoresistor
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  fotoResistor();
}

void fotoResistor(){
  if(analogRead(A0) > 900) {
    digitalWrite(led, HIGH);
    tone(buzzer, 700);
  } 
  else {
    digitalWrite(led, LOW);
    noTone(buzzer);
  }
}

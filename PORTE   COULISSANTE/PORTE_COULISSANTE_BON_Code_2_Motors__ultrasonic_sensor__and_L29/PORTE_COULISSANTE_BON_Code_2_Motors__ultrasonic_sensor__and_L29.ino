int Echo = 7;
int trig = 6;
int enB = 3;
const int in1 = 2;
const int in2 = 3;
int buzzer = 12;

void setup() {
  Serial.begin(9600);
  pinMode(Echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  float Ceni;
  int pulse;
  
  digitalWrite(trig, LOW);
  delayMicroseconds(20);
  digitalWrite(trig, HIGH);
  delayMicroseconds(100);
  digitalWrite(trig, LOW);

  pulse = pulseIn(Echo, HIGH);

  Ceni = pulse / 29.387 / 2;

  Serial.println(Ceni);
  delay(200);
  
  if (Ceni <= 20) {
     digitalWrite(buzzer, HIGH);
  delay(300);
     digitalWrite(buzzer, LOW);
  delay( 300);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    delay(4000);
   
  }
  else {
    digitalWrite(buzzer, LOW);
  delay(100);
     analogWrite(enB, 90);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

  delay(100);
    
  }
  }

  
  

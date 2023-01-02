int photo = A0;
int led = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(photo, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lecture = analogRead(photo);
  Serial.println(lecture);
  if (lecture > 500) {
    digitalWrite(led, LOW);
  }
  if (lecture < 400) {
    digitalWrite(led, HIGH);
  }
}IRsend

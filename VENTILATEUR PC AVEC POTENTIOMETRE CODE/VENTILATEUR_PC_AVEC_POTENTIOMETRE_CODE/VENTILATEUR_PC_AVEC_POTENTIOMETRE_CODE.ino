
int val = A1 ;
int ventilo = 2 ;
int readValue ;
int writeValue;
int ledGreen = 8;
int ledRed = 7 ;

void setup() {
  // put your setup code here, to run once:
pinMode(ventilo,OUTPUT);
pinMode(val,INPUT);
pinMode(ledRed,OUTPUT);
pinMode(ledGreen,OUTPUT);

}

void loop() {
 
  // put your main code here, to run repeatedly:
readValue = analogRead(val);

if (readValue == 1023 ){
  digitalWrite(ventilo, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, HIGH);
   delay(10);
 
  }

if (readValue == 0 ) {
digitalWrite(ventilo, HIGH);   
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledRed, LOW);
delay(10);
}


}

int bigMicro = 4;
int smallMicro = 5;

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  pinMode (bigMicro, INPUT);
  pinMode(smallMicro, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(bigMicro);
  int b = analogRead(smallMicro);
  Serial.print("Sensor BigMicro: ");
  Serial.println(a);
  Serial.println("---------------");
  Serial.print("Sensor SmallMicro: ");
  Serial.println(b);
  Serial.println("---------------");
  delay(1000);
}
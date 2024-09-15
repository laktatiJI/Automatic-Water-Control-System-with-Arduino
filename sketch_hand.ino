int pump = 6;
const int trigPin = 7;
const int echoPin = 4;

float duration, distance;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(pump, OUTPUT);
  digitalWrite(pump, HIGH);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * .0343) / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(500);
  if (distance < 8) {
    digitalWrite(pump, HIGH);
    delay(5n;,00);
  }
  else {
    digitalWrite(pump, LOW);
  }
}

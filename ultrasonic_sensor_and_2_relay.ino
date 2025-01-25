#define trigPin 9
#define echoPin 10

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Control pin for first relay
  pinMode(3, OUTPUT); // Control pin for second relay
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance <= 10) {
    digitalWrite(2, HIGH); // Activate first relay
    digitalWrite(3, LOW);  // Deactivate second relay
    Serial.println("Relay 1: ON");
    Serial.println("Relay 2: OFF");
  } else {
    digitalWrite(2, LOW);  // Deactivate first relay
    digitalWrite(3, HIGH); // Activate second relay
    Serial.println("Relay 1: OFF");
    Serial.println("Relay 2: ON");
  }
  delay(100);
}



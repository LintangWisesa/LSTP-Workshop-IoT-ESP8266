void setup() {
  Serial.begin(115200);
  Serial.println("Hello World!");
  delay(2000);
}

void loop() {
  Serial.println("Ini pesan loop");
  delay(1000);
}



void setup() {
  Serial.begin(115200);
  Serial.print("MOSI: "); //23
  Serial.println(MOSI);
  Serial.print("MISO: "); //19
  Serial.println(MISO);
  Serial.print("SCK: "); //18
  Serial.println(SCK);
  Serial.print("SS: ");  //5
  Serial.println(SS);  
}


void loop() {}

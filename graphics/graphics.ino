unsigned int ADCValue;


void setup(){
    Serial.begin(9600);
}

void loop(){
    int val = analogRead(A0);
    val = map(val, 450, 650, 0, 255);
    Serial.println(val);
    delay(50);
}
int lightPin = A0;     //define a pin for Photoresistor
int threshold = 250;
int light = 13;        // Digital ouin 13
 
void setup(){
    Serial.begin(9600);  //Begin serial communcation
    pinMode(light, OUTPUT);

}

void loop(){
    int values = analogRead(lightPin);
    Serial.println(values); 

    if(values > threshold){    
        digitalWrite(light, HIGH);
        Serial.println("high"); 
      }
    else{
        digitalWrite(light, LOW);
        Serial.println("low"); 
      }

    delay(100);
}

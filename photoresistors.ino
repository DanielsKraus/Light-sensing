int lightPin = 0;  //define a pin for Photo resistor
int threshold = 250;

void setup(){
    Serial.begin(9600);  //Begin serial communcation
    pinMode(13, OUTPUT);

}

void loop(){
    values = analogRead(lightPin)
    Serial.println(values); 

    if(values > threshold ){    
        digitalWrite(13, HIGH);
        Serial.println("high"); 
    }else{
        digitalWrite(13, LOW);
        Serial.println("low"); 
    }

    delay(100);
}

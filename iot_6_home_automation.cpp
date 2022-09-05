void loop()      
{
    x = digitalRead(8);
    y = analogRead(A5);
    Serial.println(x);
    Serial.println(y);
    if ((x>0)&&(y<550))
    {
       digitalWrite(5,HIGH);
       delay(5000);
    }
    else
        digitalWrite(5,0);
    long duration, inches, cm;
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPin, LOW); 

    pinMode(pingPin, INPUT);
    duration = pulseIn(pingPin, HIGH);
    inches = microsecondsToInches(duration);
    cm = microsecondsToCentimeters(duration);
    if(inches<20){
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
        digitalWrite(blue, LOW);
        Serial.println("Door open");
        Serial.print("Distance in inch : ");
        Serial.println(inches);
    }
    if(inches>70){
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        digitalWrite(blue, LOW);
    }
    if(inches<70 && inches>20){
        digitalWrite(red, LOW);
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
    }
    Serial.println(inches);
    Serial.println("in, ");
    Serial.println(cm);

    
}
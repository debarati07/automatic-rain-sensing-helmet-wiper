#include <Servo.h> 
Servo myservo;
  int pos = 0;
  void setup()
{
      Serial.begin(9600);
      myservo.attach(9);
     
}
  void loop()
{
      int sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    if (sensorValue < 700)
         
        {
              for (pos = 0; pos <= 160; pos += 1)
            { // in steps of 1 degree 
                myservo.write(pos);
                  delay(7);
                 
            }
              for (pos = 160; pos >= 0; pos -= 1)
            {
                myservo.write(pos);
                  delay(7);
                 
            }
             
        }
      else
    {
          myservo.write(15);
         
    }
     
}
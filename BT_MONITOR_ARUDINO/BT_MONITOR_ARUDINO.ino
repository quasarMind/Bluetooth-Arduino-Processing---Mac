#include <SoftwareSerial.h>
#define RxD 2  // these '2' & '3' are fixed by the hardware
#define TxD 3

    
    SoftwareSerial blue(2,3);

    void setup(){
        
        blue.begin(9600);
        
        Serial.begin(9600);
        Serial.print("Arduino ON");
    }


    void loop(){

        int Analog0 = analogRead(A0);
        int Analog1 = analogRead(A1);

        float Voltage = Analog1 - Analog0 ;

        delay(100);

      blue.println(Voltage);
      Serial.println("bleepSL");

    }


#include <SoftwareSerial.h>
#define RxD 2  // these '2' & '3' are fixed by the hardware
#define TxD 3

    
    SoftwareSerial blue(2,3);

    //int LED = 13;

    void setup(){
        
        blue.begin(9600);
        
        Serial.begin(9600);
        Serial.print("Arduino ON");
        
        //Setup_blue();
        

       // pinMode(LED, OUTPUT);
       // LED = HIGH;
    }


    void loop(){

        int Analog0 = analogRead(A0);
        int Analog1 = analogRead(A1);

        float Voltage = Analog1 - Analog0 ;
       
        //int one = 2;
        delay(200);
     
      //  blueSky.println(Voltage);
    
      blue.println(Voltage);
      Serial.println("bleepSL");

       // LED = !LED;

    }

//    void Setup_blue (){
//
//        blue.print("AT+BAUD4");
//        delay(1000);
//        blue.print("AT+ROLE=0\r\n");
//        delay(1000);
//          blue.print("AT+NAMExit\r\n");
//        delay(2000);
//        
        //blue.print("AT+ORGL\r\n");
//        blue.print("AT\r\n");
//        
//          while(millis() < 30000) // wait for a reply for up to 30 seconds
//   {
//      while(blue.available() > 0)
//      {
//         char aChar = blue.read();
//         Serial.print(aChar);
//      }
//   }
//
//        
      
//        blue.print("AT+PSWD=2169\r\n");      
//        delay(2000);
       // blueSky.println("blueSky ON");
   // }



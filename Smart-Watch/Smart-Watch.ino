// #include <stdlib.h>
// #include <string.h>


// #include <SoftwareSerial.h>

// #include "HRS_interface.h"

// //#include "GPS_interface.h"




// String inputString = ""; // a string to hold incoming data
// boolean stringComplete = false; // whether the string is complete
// String signal = "$GPGLL";




// int AvgBPS ;
// //float latitude , longtude ;


// char arr[100] = "Langtude = ";


// void setup() 
// {

//   //GPS_Init();
//   //HRS_Init();

 

//   Serial.begin(9600);

//   inputString.reserve(200);


// }





// void loop() 
// {





//   if (stringComplete) {
//         String BB = inputString.substring(0, 6);
//         if (BB == signal) {
//             String LAT = inputString.substring(7, 17);
//             int LATperiod = LAT.indexOf('.');
//             int LATzero = LAT.indexOf('0');
//             if (LATzero == 0) {
//                 LAT = LAT.substring(1);
//             }

//             String LON = inputString.substring(20, 31);
//             int LONperiod = LON.indexOf('.');
//             int LONTzero = LON.indexOf('0');
//             if (LONTzero == 0) {
//                 LON = LON.substring(1);
//             }


//             char arr[100] = "Latitude = ";

//     // 10 = 2+6
    



//     char BPS[3];




//     // latitude = GPS_Get_Latitude();
//     // longtude = GPS_Get_Longitude(); 

//     AvgBPS = 80 ; // HRS_GetAvgBPM();

  

//   //  dtostrf(latitude, 2,6, latString); 
//   //  dtostrf(longtude, 2,6, lonString); 

  
//     // char latString[20];
//     // char lonString[20];

//     // strcpy(latString , LAT.c_str());
//     // strcpy(lonString , LON.c_str());



//    strcat(arr,LAT.c_str());
//    strcat(arr," longtude = ");
//    strcat(arr,LON.c_str());
//    strcat(arr,"  AVG BPS = ");




//    sprintf(BPS, "%d", AvgBPS);
//    strcat(arr,BPS);

  

//   Serial.println(arr);
//   Serial.println("-------------------------------");

//             // Serial.println("--LAT--");
//             // Serial.println(LAT);
//             // Serial.println("--LON--");
//             // Serial.println(LON);
//             // Serial.println("================");

//         }

        
//     }





















  




//   // Serial.println(inputString);
//         // clear the string:
//         inputString = "";
//         stringComplete = false;





//   delay(1000);
// }









// void serialEvent() {
//     while (Serial.available()) {
//         // get the new byte:
//         char inChar = (char) Serial.read();
//         // add it to the inputString:
//         inputString += inChar;
//         // if the incoming character is a newline, set a flag
//         // so the main loop can do something about it:
//         if (inChar == '\n') {
//             stringComplete = true;
//         }
//     }
// }

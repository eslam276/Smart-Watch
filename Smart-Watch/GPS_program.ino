
// #include "GPS_interface.h"


//  char latString[20];
//  char lonString[20];



//  // strcpy(latString , LAT.c_str());
//     // strcpy(lonString , LON.c_str());


// void GPS_Init()
// {

//      // reserve 200 bytes for the inputString:
//     inputString.reserve(200);

    
//     delay(1000);
// }



// char* GPS_Get_Latitude()
// {


// if (stringComplete) {
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

//             strcpy(latString , LAT.c_str());

//         }

//         // Serial.println(inputString);
//         // clear the string:
//         inputString = "";
//         stringComplete = false;
//     }







// return latString ;



// }



// char* GPS_Get_Longitude()
// {


//     if (stringComplete) {
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
//             strcpy(lonString , LON.c_str());

//         }

//         // Serial.println(inputString);
//         // clear the string:
//         inputString = "";
//         stringComplete = false;
//     }




//      return lonString ;
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

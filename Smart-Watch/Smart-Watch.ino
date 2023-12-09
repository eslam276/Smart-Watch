// #include <stdlib.h>
// #include <string.h>


// #include <SoftwareSerial.h>

// #include "HRS_interface.h"

// #include "GPS_interface.h"







// int AvgBPS ;
// //float latitude , longtude ;


// char arr[100] = "Langtude = ";


// void setup() 
// {

//   GPS_Init();
//   //HRS_Init();

 

//   Serial.begin(9600);



// }





// void loop() {
//   // put your main code here, to run repeatedly:
//   char arr[100] = "Latitude = ";

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



//    strcat(arr,GPS_Get_Latitude());
//    strcat(arr," longtude = ");
//    strcat(arr,GPS_Get_Longitude());
//    strcat(arr,"  AVG BPS = ");




//    sprintf(BPS, "%d", AvgBPS);
//    strcat(arr,BPS);

  

//   Serial.println(arr);
//   Serial.println("-------------------------------");



//   delay(1000);


// }




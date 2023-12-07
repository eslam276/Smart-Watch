#include <stdlib.h>
#include <string.h>

#include <SoftwareSerial.h>

#include "HRS_interface.h"
#include "GPS_interface.h"




int AvgBPS ;
float latitude , longtude ;


char arr[100] = "Langtude = ";


void setup() 
{

  GPS_Init();
  HRS_Init();

 

  Serial.begin(9600);


}





void loop() 
{
  char arr[100] = "Latitude = ";

    // 10 = 2+6
    char latString[20];
    char lonString[20];
    char BPS[3];




    latitude = GPS_Get_Latitude();
    longtude = GPS_Get_Longitude(); 
    AvgBPS = HRS_GetAvgBPM();

  

   dtostrf(latitude, 2,6, latString); 
   dtostrf(longtude, 2,6, lonString); 

   strcat(arr,latString);
   strcat(arr," longtude = ");
   strcat(arr,lonString);
   strcat(arr,"  AVG BPS = ");




   sprintf(BPS, "%d", AvgBPS);
   strcat(arr,BPS);

  

  Serial.println(arr);
  Serial.println("-------------------------------");

  delay(1000);
}









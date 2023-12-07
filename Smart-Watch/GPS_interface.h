#ifndef GPS_INTERFACE_H
#define GPS_INTERFACE_H



#include <SoftwareSerial.h>
#include<TinyGPS.h>
float lat, lon;


#define rxPin 3
#define txPin 2

SoftwareSerial SerialGPS(rxPin,txPin); 
TinyGPS GPS;






void GPS_Init();


float GPS_Get_Latitude();


float GPS_Get_Longitude();







#endif
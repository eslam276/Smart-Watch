
#include "GPS_interface.h"





void GPS_Init()
{
    //Begin serial communication with Arduino
    SerialGPS.begin(9600);

    
    delay(1000);
}



float GPS_Get_Latitude()
{
    GPS.encode(SerialGPS.read());
     GPS.f_get_position(&lat, &lon);
     return lat ;
}



float GPS_Get_Longitude()
{
    GPS.encode(SerialGPS.read());
    GPS.f_get_position(&lat, &lon);
     return lon ;
}

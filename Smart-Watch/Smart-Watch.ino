
#include "HRS_interface.h"

int AvgBPS ;

void setup() 
{
   HRS_Setup();
}

void loop() 
{
  AvgBPS =HRS_GetAvgBPM();
}

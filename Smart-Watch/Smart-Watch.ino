
#include "HRS_interface.h"

int AvgBPS ;

char* ptr = "Eslam\n";

void setup() 
{
  //  HRS_Setup();
   Serial.begin(115200);
}

void loop() 
{
  // AvgBPS =HRS_GetAvgBPM();
  Serial.write(ptr);

  delay(2000);
}

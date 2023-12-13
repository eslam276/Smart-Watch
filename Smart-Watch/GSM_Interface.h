#ifndef GSM_INTERFACE_H
#define GSM_INTERFACE_H

#include <SoftwareSerial.h>
#define Tx_Pin 5
#define Rx_Pin 6
SoftwareSerial mySerial(Tx_Pin,Rx_Pin);
void GSM_Init();
void updateSerial();
void SendMessage(String Message);


#endif

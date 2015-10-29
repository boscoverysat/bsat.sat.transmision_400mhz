/****************************
  Emisor434Test

  Este sketch comprueba el funcionamiento basico de un emisor ASK
 similar al TXC1. 

  Author: @goyoregalado

  
  Este codigo se deriva del codigo de ejemplo de la libreria radiohead.
  http://www.airspayce.com/mikem/arduino/RadioHead/
  
******************************/


#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;

void setup()
{
    Serial.begin(9600);	  // Debugging only
    if (!driver.init())
         Serial.println("init failed");
}

void loop()
{
    const char *msg = "hello";

    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();
    delay(200);
}

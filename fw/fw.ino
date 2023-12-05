#include "avr/io.h"
#include "avr/pgmspace.h"
#include "pins_config.h"
#define led_pin 13

void ledinit(){
  /*
  first you need to get the port to do port settings 
  */
  uint8_t port = digital_pin_to_port_PGM + led_pin; 
  
  
}


int main(){
  ledinit();
  while(1){
    toggleled(); 
    delay(); 
  }
}
//include guard
#ifndef _PINS_CONFIG_
#define _PINS_CONFIG_

#include <avr/pgmspace.h>

#define PA 1
#define PB 2
#define PC 3 
#define PD 4 
#define PE 5 
#define PF 6

//create a function such that, user supplies the pin and get the port
//first, must know which port based on pin;
void getport();

//port input pin (PINx) Read only writing 1 will toggle.
c

//ports (data direction register) DDRx  Read write 
const uint16_t PROGMEM digital_port_PGM[]={
  
};

//ports (data register) PORTx Read write
const uint8_t PROGMEM digital_pin_to_port_PGM[] = {
	PD, /* 0 */
	PD, 
	PD,
	PD,
	PD,
	PD,
	PD,
	PD,
	PB, /* 8 */
	PB,
	PB,
	PB,
	PB,
	PB,
	PC, /* 14 */
	PC,
	PC,
	PC,
	PC,
	PC,
};



#endif _PINS_CONFIG_
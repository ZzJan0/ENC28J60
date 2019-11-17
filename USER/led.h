#ifndef	_LED_H
#define _LED_H

#include "main.h"

#define LED3 	PDout(3)
#define LED2 	PDout(6)
#define LED1	PBout(5)

void LED_Init(void);

#endif

/*
 * gpio_dump.h
 *      Author: mzjhaveri
 */

#ifndef GPIODUMP_H_
#define GPIODUMP_H_


void gpioDump_init(int  gpioNum);
void gpioDump_showByte(uint8_t byte);
void gpioDump_showMem(uint8_t* adr,uint32_t len);


#endif /* GPIODUMP_H_ */

/*
 * registers.h
 *
 * Created: 1/26/2023 3:22:42 PM
 *  Author: 20120
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
#define DDRA *((volatile unsigned char*)0x3A)
#define DDRB *((volatile unsigned char*)0x37)
#define DDRC *((volatile unsigned char*)0x34)
#define DDRD *((volatile unsigned char*)0x31)
#define PORTA *((volatile unsigned char*)0x3B)
#define PORTB *((volatile unsigned char*)0x38)
#define PORTC *((volatile unsigned char*)0x35)
#define PORTD *((volatile unsigned char*)0x32)
#define PINA *((volatile unsigned char*)0x39)
#define PINB *((volatile unsigned char*)0x36)
#define PINC *((volatile unsigned char*)0x33)
#define PIND *((volatile unsigned char*)0x30)

#endif /* REGISTERS_H_ */
/*
 * DIO.c
 *
 * Created: 1/26/2023 3:19:50 PM
 *  Author: 20120
 */ 
#include "DIO.h"
#include "macros.h"
#include "registers.h"

void WRITE_VPIN_DIRECTION(char port,char pin,char dir)
{
	switch(port)
	{
		case 'A':
		case 'a':
		if(dir==1)
		{
			SET_BIT(DDRA,pin);
		}
		else 
		{
			CLEAR_BIT(DDRA,pin);
		}
		break;
		case 'B':
		case 'b':
		if(dir==1)
		{
			SET_BIT(DDRB,pin);
		}
		else
		{
			CLEAR_BIT(DDRB,pin);
		}
		break;
		case 'C':
		case 'c':
		if(dir==1)
		{
			SET_BIT(DDRC,pin);
		}
		else
		{
			CLEAR_BIT(DDRC,pin);
		}
		break;
		case 'D':
		case'd':
		if(dir==1)
		{
			SET_BIT(DDRD,pin);
		}
		else
		{
			CLEAR_BIT(DDRD,pin);
		}
		break;
	}
}
void WRITE_VPIN_BORT(char port,char pin,char val)
{
	switch(port)
	{
		case 'A':
		case 'a':
		if (val==1)
		{
			SET_BIT(PORTA,pin);
		}
		else
		{
			CLEAR_BIT(PORTA,pin);
		}
		break;
		case 'B':
		case 'b':
		if (val==1)
		{
			SET_BIT(PORTB,pin);
		}
		else
		{
			CLEAR_BIT(PORTB,pin);
		}
		break;
		case 'C':
		case 'c':
		if (val==1)
		{
			SET_BIT(PORTC,pin);
		}
		else
		{
			CLEAR_BIT(PORTC,pin);
		}
		break;
		case 'D':
		case 'd':
		if (val==1)
		{
			SET_BIT(PORTD,pin);
		}
		else
		{
			CLEAR_BIT(PORTD,pin);
		}
		break;
	}		
}
void TOGGLE_VBIT(char port,char pin)
{
	switch(port)
	{
		case 'A':
		case 'a':
		TOGGLE_BIT(PORTA,pin);
		break;
		case 'B':
		case 'b':
		TOGGLE_BIT(PORTB,pin);
		break;
		case 'C':
		case 'c':
		TOGGLE_BIT(PORTC,pin);
		break;
		case 'D':
		case 'd':
		TOGGLE_BIT(PORTD,pin);
		break;
		
	}
}
unsigned char READ_U8BIT(char port,char pin)
{
	unsigned char val;
	switch(port)
	{
		case 'A':
		case 'a':
		val=READ_BIT(PINA,pin);
		break;
		case 'B':
		case 'b':
		val=READ_BIT(PINB,pin);
		break;
		case 'C':
		case 'c':
		val=READ_BIT(PINC,pin);
		break;
		case 'D':
		case 'd':
		val=READ_BIT(PIND,pin);
		break;
	}
	return val;
}
void WRITE_VREG_DIRECTION(char port,char value)
{
	switch(port)
	{
		case 'A':
		case 'a':
		DDRA=value;
		break;
		case 'B':
		case 'b':
		DDRB=value;
		break;
		case 'C':
		case 'c':
		DDRC=value;
		break;
		case 'D':
		case 'd':
		DDRD=value;
		break;
	}
	
}
void WRITE_VREG_PORT(char port,char value)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA=value;
		break;
		case 'B':
		case 'b':
		PORTB=value;
		break;
		case 'C':
		case 'c':
		PORTC=value;
		break;
		case 'D':
		case 'd':
		PORTD=value;
		break;
	}
}
void TOGGLE_VREG(char port)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA=~PORTA;
		break;
		case 'B':
		case 'b':
		PORTB=~PORTB;
		break;
		case 'C':
		case 'c':
		PORTB=~PORTB;
		break;
		case 'D':
		case 'd':
		PORTD=~PORTD;
		break;
	}
}
unsigned char READ_U8REG(char port)
{
	unsigned char val;
	switch(port)
	{
		case 'A':
		case 'a':
		val=PINA;
		break;
		case 'B':
		case 'b':
		val=PINB;
		break;
		case 'C':
		case 'c':
		val=PINC;
		break;
		case 'D':
		case 'd':
		val=PIND;
		break;
		
	}
	return val;
}

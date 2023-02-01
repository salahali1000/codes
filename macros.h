/*
 * macros.h
 *
 * Created: 1/23/2023 7:56:26 PM
 *  Author: salah aly
 */ 


#ifndef MACROS_H_
#define MACROS_H_
#define REG_SIZE 8
#define SET_BIT(reg,bit)	reg|=(1<<bit)
#define CLEAR_BIT(reg,bit)	reg&=~(1<<bit)
#define READ_BIT(reg,bit)	((reg&(1<<bit))>>bit)
#define TOGGLE_BIT(reg,bit)	 reg^=(1<<bit)
#define IS_BIT_SET(reg,bit)	   ((reg&(1<<bit))>>bit)
#define IS_BIT_CLEAR(reg,bit)  !((reg&(1<<bit))>>bit)
#define ROR(reg,num)		reg=(reg<<(REG_SIZE-num)|reg>>(num))
#define ROL(reg,num)		reg=(reg>>(REG_SIZE-num)|reg<<(num))




#endif /* MACROS_H_ */
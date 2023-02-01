

#ifndef DIO_H_
#define DIO_H_
void WRITE_VPIN_DIRECTION(char port,char pin,char dir);
void WRITE_VPIN_BORT(char port,char pin,char val);
void TOGGLE_VBIT(char port,char pin);
unsigned char READ_U8BIT(char port,char pin);
void WRITE_VREG_DIRECTION(char port,char value);
void WRITE_VREG_PORT(char port,char value);
void TOGGLE_VREG(char port);
unsigned char READ_U8REG(char port);

#endif /* DIO_H_ */
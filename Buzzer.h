#ifndef BUZZER_H_
#define BUZZER_H_


void BUZZER_Init(unsigned char portname,unsigned char pinnumber);
void BUZZER_TurnOn(unsigned char portname,unsigned char pinnumber);
void BUZZER_TurnOff(unsigned char portname,unsigned char pinnumber);
void BUZZER_Toggle(unsigned char portname,unsigned char pinnumber);
unsigned char BUZZER_ReadStatues(unsigned char portname,unsigned char pinnumber);

#endif /* BUZZER_H_ */
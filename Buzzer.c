#include <avr/io.h>
#include "DIO.h"

int main(void)
{

	void BUZZER_Init(unsigned char portname,unsigned char pinnumber)
	{
		DIO_vsetPINDir(portname,pinnumber,1);
	}

	void BUZZER_TurnOn(unsigned char portname,unsigned char pinnumber)
	{
		DIO_write(portname,pinnumber,1);
	}

	void BUZZER_TurnOff(unsigned char portname,unsigned char pinnumber)
	{
		DIO_write(portname,pinnumber,0);
	}

	void BUZZER_Toggle(unsigned char portname,unsigned char pinnumber)
	{
		DIO_toggle(portname,pinnumber);
	}

	unsigned char BUZZER_ReadStatues(unsigned char portname,unsigned char pinnumber)
	{
		return DIO_u8read(portname , pinnumber);
	}

	
}
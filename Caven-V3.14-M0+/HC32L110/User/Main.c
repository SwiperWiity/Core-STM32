#include "main.h"


void Main_Init (void);
int main (void)
{
    Main_Init ();
	while(1)
	{
		
	}
}

void Main_Init (void)
{
    Clk_Enable(ClkRCL, TRUE);
    Clk_SetRCLFreq(ClkFreq38_4K);//�ڲ�38.4K

    Clk_SetPeripheralGate(ClkPeripheralLpUart,TRUE);//ʹ��LPUARTʱ��
    Clk_SetPeripheralGate(ClkPeripheralBt,TRUE);    
    
    //ͨ���˿�����
    Gpio_InitIOExt(2,5,GpioDirOut,TRUE,FALSE,FALSE,FALSE);
    Gpio_InitIOExt(2,6,GpioDirOut,TRUE,FALSE,FALSE,FALSE);

    Gpio_SetFunc_UART2RX_P25();
    Gpio_SetFunc_UART2TX_P26();
}


#include "main.h"

static uint8_t ethernet_mac[6] = {0x48,0x45,0x4B,0x31,0x12,0x18};

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	delay_Init();
	LED_Init();
	USART1_Init(115200);
	TIM3_Init(1000,72);//¶¨Ê±0.001s
	
	ENC28J60_Init(ethernet_mac);
	
	printf("ENC28J60 MAC: ");
	printf("%02X ",ENC28J60_Read(MAADR5));
	printf("%02X ",ENC28J60_Read(MAADR4));
	printf("%02X ",ENC28J60_Read(MAADR3));
	printf("%02X ",ENC28J60_Read(MAADR2));
	printf("%02X ",ENC28J60_Read(MAADR1));
	printf("%02X ",ENC28J60_Read(MAADR0));
	printf("\r\n");
	
	
	while(1)
	{
		
	}
}

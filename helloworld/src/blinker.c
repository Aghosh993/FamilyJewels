#include "blinker.h"

void blinkerInit(void)
{
	printf("Hi\r\n");
}

int blinkerOn(void)
{
	printf("Blinky blinky!!\r\n");
	return 0;
}

int blinkerOff(void)
{
	printf("Bye\r\n");
	return 0;
}
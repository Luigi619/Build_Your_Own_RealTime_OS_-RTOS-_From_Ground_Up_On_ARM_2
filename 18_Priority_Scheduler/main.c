#include "osKernel.h"
#include "STM32F4_RTOS_BSP.h"

#define	QUANTA	10


uint32_t count0,count1,count2,count3,count4,count5,count6,count7;


void Task0(void)
{
	 while(1)
	 {
			count0++;
	 }
}

void Task1(void)
{
	 while(1)
	 {
			count1++;
	 }
}

void Task2(void)
{
	 while(1)
	 {
		count2++;
	 }
}

void Task3(void)
{
	 while(1)
	 {
		count3++;
	 }
}

void Task4(void)
{
	 while(1)
	 {
			count4++;
	 }
}

void Task5(void)
{
	 while(1)
	 {
			count5++;
	 }
}

void Task6(void)
{
	 while(1)
	 {
		count6++;
	 }
}

void Task7(void)
{
	 while(1)
	 {
		 count7++;
	 }
 }
int main(void)
{

	BSP_LED_Init();
	osKernelInit();
	osKernelAddThreads(&Task0,5,&Task1,1,&Task2,1,&Task3,2,&Task4,5,&Task5,1,&Task6,1,&Task7,3);
	osKernelLaunch(QUANTA);
	
}



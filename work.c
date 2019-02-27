#include<stdio.h>
void main()
{
	int hour;
	printf("enter the hour");
	scanf("%d",&hour);
	if((hour>=2)&&(hour<3))
		printf("worker is highly efficent");
	if((hour>=3)&&(hour<4))
		printf("worker is to improve speed");
	if((hour>=4)&&(hour<5))
		printf("worker is given training to improve speed");
	if(hour>=5)
		printf("the worker is terminated");
}

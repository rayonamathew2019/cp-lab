#include<stdio.h>
void main()
{
	int hours;
	printf("enter the hour");
	scanf("%d",&hours);
	if((hours>=2)&&(hours<3))
		printf("worker is highly efficent");
	if((hours>=3)&&(hours<4))
		printf("worker is to improve speed");
	if((hours>=4)&&(hours<5))
		printf("worker is given training to improve speed");
	if(hours>=5)
		printf("the worker is terminated");
}

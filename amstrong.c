#include<stdio.h>
void main()
{
int num,ams=0,rem,amstrong;
printf("enter the num");
scanf("%d",&num);
amstrong=num;
while(num>0)
{
	rem=num%10;
	ams=ams+rem*rem*rem;
	num=num/10;
	
}
if(amstrong==ams)
	printf("%d is amstrong",ams);
else
	printf("%d is not amstrong",ams);
}

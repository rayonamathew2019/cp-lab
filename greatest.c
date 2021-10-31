#include<stdio.h>
void main()
{
int big,num1,num2,num3;
printf("enter three number");
scanf("%d%d%d",&num1,&num2,&num3);
big=num1;
if(num2>big)
	big=num2;
if(num3>big)
	big=num3;

	printf("%d is greatest",big);
	
}

#include<stdio.h>
void main()
{
int num,pali,rev=0,rem;
printf("enter the number");
scanf("%d",&num);
pali=num;
while(num>0)
{	
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
if(pali==rev)
	printf("%d is palindrome",pali);
else
	printf("%d is not palindrome",pali);
}

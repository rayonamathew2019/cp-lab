#include<stdio.h>
void main()
{
int n,pali,rev=0,rem;
printf("enter the num");
scanf("%d",&n);
pali=n;
while(n>0)
{	
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
if(pali==rev)
	printf("%d is palindrome",pali);
else
	printf("%d is not palindrome",pali);
}

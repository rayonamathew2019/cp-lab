#include<stdio.h>
void main()
{
	int ram,shyam,ajay,youngest;
	printf("Enter  ages of ram,shyam and ajay");
	scanf("%d%d%d",&ram,&shyam,&ajay);
	youngest=ram;
	if(shyam<youngest)
		youngest=shyam;
		
	if(ajay<youngest)
		youngest=ajay;
	if(youngest==ram)
		printf("ram is youngest");
	if(youngest==shyam)
		printf("shyam is youngest");
	if(youngest==ajay)
		printf("ajay is youngest");
}

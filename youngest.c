#include<stdio.h>
void main()
{
	int ram,shyam,ajay,young;
	printf("Enter the ages of ram,shyam and ajay");
	scanf("%d%d%d",&ram,&shyam,&ajay);
	young=ram;
	if(shyam<young)
		young=shyam;
		
	if(ajay<young)
		young=ajay;
	if(young==ram)
		printf("ram is youngest");
	if(young==shyam)
		printf("shyam is youngest");
	if(young==ajay)
		printf("ajay is youngest");
}

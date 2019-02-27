#include<stdio.h>
void main()
{
	int area,perimeter,len,bre;
	printf("enter length and breadth");
	scanf("%d%d",&len,&bre);
	area=len*bre;
	perimeter=2*(len+bre);
	if(area>perimeter)
		printf("area is greater than perimeter");
	else
		printf("perimeter is greater than area");
}

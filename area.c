#include<stdio.h>
void main()
{
	int area,perimeter,length,breadth;
	printf("Enter length and breadth");
	scanf("%d%d",&len,&bre);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		printf("area is greater than perimeter");
	else
		printf("perimeter is greater than area");
}

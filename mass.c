#include<stdio.h>
int main()
{
	int temperature,volum,pressure;
	double d,mass;
	printf("enter your values: ");
	scanf("%d %d %d",&pressure,&volum,&temperature);
	d=0.37*(temperature+460);
	mass=(pressure*volum)/d;
	printf("mass=%lf",mass);
	return 0;}

#include<stdio.h>
int main()
{
	int hour,rate,gross;
	double net,tax,bonus;
	printf("enter hour and rate");
	scanf("%d %d",&hour,&rate);
	gross=hour*rate;
	bonus=0.07*gross;
	tax=0.05*gross;
	net=gross+bonus-tax;
	printf("gross=%d",gross);
	printf("net=%lf",net);
	return 0;
}


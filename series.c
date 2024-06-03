#include<stdio.h>
int main()
{
	int number;
	double result;
	printf("enter the number");
	scanf("%d",&number);
	result=0.67*number*(number+1)*(2*number+1);
	printf("%lf",result);
	return 0;
}


#include<stdio.h>
int main()
{
	int number;
	printf("enter your number");
	scanf("%d",&number);
	double result;
	result=(number*(4*number*number-1))/3.00;
	printf("%lf is the result",result);
	return 0;
}

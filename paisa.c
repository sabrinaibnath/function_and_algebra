#include<stdio.h>
int main()
{
	double decimal;
	int paisa;
	printf("enter your ammount in decimal");
	scanf("%lf",&decimal);
	paisa=decimal*100;
	printf("%d is the paisa",paisa);
	return 0;
}

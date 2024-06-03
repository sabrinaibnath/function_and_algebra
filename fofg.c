#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double g,f;
	printf("enter the value of x");
	scanf("%d",&x);
	f=(4*x*x)+(2*sqrt(x))-3;
	g=(7*f)-6;
	printf("f=%.3lf",f);
	printf("g=%.3lf",g);
	return 0;
}

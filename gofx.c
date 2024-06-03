#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double g,f;
	printf("enter the value of x");
	scanf("%d",&x);
	g=(5*x*x*x)-4;
	f=(3*g*g*g*g)+(2*sqrt(g))-2;
	printf("g=%lf",g);
	printf("f=%lf",f);
	return 0;
}

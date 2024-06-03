#include<stdio.h>
int main()
{
	double re,h,he,t,gross,net;
	scanf("%lf",&gross);
	re=0.05*gross;
	h=0.2*gross;
	he=750.00;
	t=200.00;
	net=(gross+h+t)-(re+he);
	printf("%lf",net);
	return 0;
}

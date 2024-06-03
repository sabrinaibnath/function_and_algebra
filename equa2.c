#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c,d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	double m,n,o,p;
	m=(a-b)*(a-b);
	n=(c+4*d)*(c+4*d);
	o=sqrt(sqrt((a-b)/(c+d)));
	p=sqrt(m/n)+o;
	printf("%lf",p);
	return 0;
}


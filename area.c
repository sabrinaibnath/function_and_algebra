#include<stdio.h>
#include<math.h>
int main()
{
	int base,side1,side2;
	double s,area;
	printf("enter your sides");
	scanf("%d %d %d",&base,&side1,&side2);
	s=(base+side1+side2)/2.00;
	double f;
	f=s*(s-base)*(s-side1)*(s-side2);
	area=sqrt(f);
	printf("the area is %lf",area);
	return 0;
}

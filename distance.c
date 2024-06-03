#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2,di1,di2;
	double distance;
	printf("enter your coordinates: ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	double d;
	di1=x2-x1;
	di2=y2-y1;
	d=di1*di1+di2*di2;
	distance=sqrt(d);
	printf("the distance is %lf",distance);
	return 0;
}

#include<stdio.h>
int re(int am){
	if(am==0){
		return 10000;
	}
	else{
		return (re(am-1)+(0.05*re(am-1)));
	}
}
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	double result=re(year);
	printf("%lf",result);
	return 0;
}
	

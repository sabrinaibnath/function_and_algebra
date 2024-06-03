#include<stdio.h>
int re(int year){
	if(year==0){
		return 10000;
	}
	else{
		return (re(year-1)+(0.05*re(year-1)));
	}
}
int main()
{
	//int year;
	double result=re(30);
	printf("%lf",result);
	return 0;
}


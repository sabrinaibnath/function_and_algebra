#include<stdio.h>
int binary(int number){
	int re=0;
	if(number==0){
		printf("%d",number);
	}
	else{
		re=number%2;
		binary(number/2);
		printf("%d",re);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	binary(n);
	return 0;
}

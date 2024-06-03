#include<stdio.h>
int fibo(int number){
	if(number==0){
		return 0;
	}
	else if(number==1){
		return 1;
	}
	else{
		return fibo(number-1)+fibo(number-2);
	}
}
int main()
{
	int number;
	scanf("%d",&number);
	int result;
	result=fibo(number);
	printf("%d\n",result);
	return 0;
}

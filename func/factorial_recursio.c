#include<stdio.h>
int function(int number){
	if(number==0){
		return 1;
	}
	else{
		return number*function(number-1);
	}
}
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);

	int result;
	result=function(number);
	printf("the result is %d",result);
	return 0;
}

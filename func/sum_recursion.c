#include<stdio.h>
int sum(int number){
	if(number==1){
		return 1;
	}
	else{
		return number+sum(number-1);
	}
}
int main(){
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	int result;
	result=sum(number);
	printf("%d",result);
	return 0;
}
	

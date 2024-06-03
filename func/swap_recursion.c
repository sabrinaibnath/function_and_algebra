#include<stdio.h>
int swap(int *number1,int *number2){
	int temp;
	temp=*number1;
	*number1=*number2;
	*number2=temp;
}
int main(){
	int num1=100,num2=200;
	swap(&num1,&num2);
	printf("the first number is %d\n",num1);
	printf("the second number is %d",num2);
	return 0;
}

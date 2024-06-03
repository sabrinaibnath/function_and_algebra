#include<stdio.h>
int money(int number){
	if(number==0){
		return 135;
	}
	else{
		return money(number-1)+0.5168*money(number-1);
	}
}
int main()
{
	int result;
	result=money(7);
	printf("%d",result);
	return 0;
}


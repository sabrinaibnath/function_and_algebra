#include<stdio.h>
int main()
{
	int fixed_salary,total_sale;
	double tax,d,final_salary;
	scanf("%d %d",&fixed_salary,&total_sale);
	d=0.15*fixed_salary;
	tax=0.12*total_sale;
	final_salary=fixed_salary+d-tax;
	printf("%lf",final_salary);
	return 0;
}

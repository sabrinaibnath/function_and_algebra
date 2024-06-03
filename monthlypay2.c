#include<stdio.h>
int main()
{
	double tax,stax,re,he,gross,net;
	scanf("%lf",&gross);
	printf("gross amount:%lf\n",gross);
	tax=0.15*gross;
	printf("federal income tax:%lf\n",tax);
	stax=0.035*gross;
	printf("state tax=%lf\n",stax);
	re=0.05*gross;
	printf("retirement plan=%lf\n",re);
	he=750;
	printf("health insurance=%lf\n",he);
	net=gross-(tax+stax+re+he);
	printf("net salary=%lf\n",net);
	return 0;
}

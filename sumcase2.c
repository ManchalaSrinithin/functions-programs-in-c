#include<stdio.h>
void sum(int,float);
main()
{	int a;
	float b,result;
	printf("Enter any two value");
	scanf("%d%f",&a,&b);
	sum(a,b);
}
void sum(int a,float b)
{
	float result;
	result=a+b;
	printf("result=%f",result);	
}
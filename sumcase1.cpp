#include<stdio.h>
void sum();
main()
{
	sum();
}
void sum()
{
	int a;
	float b,result;
	printf("Enter any two value");
	scanf("%d%f",&a,&b);
	result=a+b;
	printf("result=%f",result);	
}
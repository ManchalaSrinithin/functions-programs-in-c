#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int a,b,z,ch,m;
	do
	{
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter your choice:\n");
	printf("1-addition\n");
	printf("2-substraction\n");
	printf("3-multiplication\n");
	printf("4-division\n");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:z=sum(a,b);
		{
		printf("\nsum of the numbers:%d",z);
		break;
		}
		case 2:z=sub(a,b);
		{
		printf("\nsubstraction of the numbers:%d",z);
		break;
		}
		case 3:z=mul(a,b);
		{
		printf("\nmultiplication of the numbers:%d",z);
		break;
		}
		case 4:z=div(a,b);
		{
		printf("\nquotient of the numbers:%d",z);
		break;
		}
	}
	printf("\nenter 1 to continue:");
	scanf("%d",&m);
	}while(m==1);
}
int sum(int a,int b)
{
	int result;
	result=a+b;
	return result;
}
int sub(int a,int b)
{
	int result;
	result=a-b;
	return result;
}
int mul(int a,int b)
{
	int result;
	result=a*b;
	return result;
}
int div(int a,int b)
{
	int result;
	result=a%b;
	return result;
}
#include<stdio.h>
int calci(int a,int b);
main()
{
	int z,ch,a,b;
	printf("Enter the choice:");
	scanf("%d",&ch);
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case 1:z=sum(a,b);
		printf("sum of the numbers=%d",z);
		break;
		case 2:z=sub(a,b);
		printf("substraction of the numbers=%d",z);
		break;
		case 3:z=mul(a,b);
		printf("multiplication of the numbers=%d",z);
		break;
	}
	
}
int sum(a,b)
{
	int result;
	result=a+b;
	return result;
}
int sub(a,b)
{
	int result;
	result=a-b;
	return result;
}
int mul(a,b)
{
	int result;
	result=a*b;
	return result;
}

#include<stdio.h>
int fact(int n);
main()
{
	int p,n;
	printf("Enter the n value");
	scanf("%d",&n);
	p=fact(n);
	printf("%d",p);
}
int fact(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;	
}
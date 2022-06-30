#include<stdio.h>
int fact();
main()
{
	int p;
	p=fact();
	printf("%d",p);
}
int fact()
{
	int i,result=1,n;
	printf("Enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;	
}
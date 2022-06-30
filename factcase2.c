#include<stdio.h>
void fact(int);
main()
{
	int n;
	printf("Enter the n value");
	scanf("%d",&n);
	fact(n);
}
void fact(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("result=%d",result);	
}
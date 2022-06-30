#include<stdio.h>
void fact();
main()
{
	fact();
}
void fact()
{
	int i,result=1,n;
	printf("Enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("result=%d",result);	
}
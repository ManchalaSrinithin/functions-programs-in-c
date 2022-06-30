#include<stdio.h>
int prime(int);
main()
{
	int n,start,end,z,i;
	printf("Enter the starting number:");
	scanf("%d",&start);
	printf("Enter the ending number:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
	z=prime(n);
	if(z==2)
	{
		printf("%d",i);
	}
}
int prime(int n)
{
	int j,k=0;
	for(j=1;j<=i;j++)
	{  
		if(i%j==0)
		{
		k++;
		}
    }  	
	return i;
}
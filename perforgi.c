#include<stdio.h>
int perfn(int);
main()
{
	int start,end,i,z;
	printf("Enter the starting number:");
	scanf("%d",&start);
	printf("Enter the ending number:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		z=perfn(i);
		if(i==z)
		printf("%d\n",i);
	}
	
}
int perfn(int i)
{
	int sum=0,j;
	   for(j=1;j<i;j++)
	   {   
   		if(i%j==0)
		sum=sum+j;
		}
	 
	return sum;
}
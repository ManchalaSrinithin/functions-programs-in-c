#include<stdio.h>
int perf(int);
main()
{
	int n,z;
	printf("Enter any number:");
	scanf("%d",&n);
	z=perf(n);
	if(z==n)
	printf("\nIt is perfect number");
	else
	printf("\nIt is not a perfect number");
	
}
int perf(int n)
{
	int sum=0,i=1;
	while(i<n) 
   	{   
   		if(n%i==0)
		sum=sum+i;
		i++;
	}   
	return sum;
}
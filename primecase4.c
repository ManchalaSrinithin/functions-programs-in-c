#include<stdio.h>
int prime(int a);
main()
{
	int a,y;
	printf("Enter any number:");
	scanf("%d",&a);
	y=prime(a);
	if(prime(a)!=1)
	printf("It is not a prime number");
	else
	printf("It is a prime number");
	
}
int prime(int a)
{
	int n,m;
	for(m=2,n=1;m<a; )
	{
		if(a%m==0)
		{
			n=0;
			break;
		}
		m++;
	}
	return n;
}
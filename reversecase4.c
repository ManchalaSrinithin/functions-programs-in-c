#include<stdio.h>
int reverse(int n);
main()
{
	int p,n;
	printf("Enter the n value");
	scanf("%d",&n);
	p=reverse(n);
	printf("\n reverse=%d",p);
}
int reverse(int n)
{
	int rev=0,rem;
	while(n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;	
	}
	return rev;	
}
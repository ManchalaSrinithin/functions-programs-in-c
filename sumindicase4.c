#include<stdio.h>
int digitsum(int n);
main()
{
	int q,n;
	printf("Enter the n value:");
	scanf("%d",&n);
	q=digitsum(n);
	printf("%d",q);

}
int digitsum(int n)
{
	int sum,m;
	for(sum=0;n>0; )
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	return sum;
	
}
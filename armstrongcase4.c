#include<stdio.h>
int arg(int n);
main()
{
	int n,o,temp;
	printf("Enter any value:");
	scanf("%d",&n);
	temp=n;
	o=arg(n);
	if(temp==o)
	printf("\n it is a armstrong number");
	else
	printf("\n it is not a armstrong number");
}
int arg(int n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	return sum;

}
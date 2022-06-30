#include<stdio.h>
int display(int n,int []);
int read(int n,int []);
main()
{
	int a[10],i,n,m;
	printf("Enter the size:");
	scanf("%d",&n);
	read(n,a);
	m=display(n,a);
	printf("the sum=%d",m);
}
int display(int n,int a[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int	read(int n,int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
}
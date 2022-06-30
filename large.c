#include<stdio.h>
int display(int n,int []);
main()
{
	int a[10],i,n,m;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=display(n,a);
	printf("the sum=%d",m);
}
int display(int n,int a[])
{
	int i,large=0;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
	if(a[i]>large)
	large=a[i];
	}
	return large;
}
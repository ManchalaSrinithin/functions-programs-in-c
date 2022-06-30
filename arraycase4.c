#include<stdio.h>
void display(int n,int []);
main()
{
	int a[10],i,n;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	display(n,a);
}
void display(int n,int a[])
{
	int i,;
	printf("The values are:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
}
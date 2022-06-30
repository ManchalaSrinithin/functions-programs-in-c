#include<stdio.h>
int i,j,m,n;
int display(int,int,int[][100]);
main()
{
	int a[100][100],b[100][100];
	printf("Enter no.of rows and columns in I-matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter %dX%d I-matrix values are:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter %dX%d II-matrix values are:\n",m1,n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	display(m,n,a);
}
int display(int m,int n,int a[ ][100])
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
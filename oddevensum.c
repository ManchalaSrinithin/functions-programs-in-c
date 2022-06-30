#include<stdio.h>
int i,n,j,k;
int oesum(int);
main()
{
	int a[100];
	printf("Enter any value:");
	scanf("%d",&n);
	printf("\nEnter %d values :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	oesum(n);
}
int oesum(int n)
{
	int osum[100],esum[100],a[100],j=0,k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			esum[j]=a[i];
			j++;
		}
		else
		{
			osum[k]=a[i];
			k++;
		}
	}
	printf("the odd values are\n");
 		for(i=0;i<k;i++)
        {
            printf("%d\n",osum[i]);
        }
        printf("The elements of Even are \n");
        for(i=0;i<j;i++)
        {
            printf("%d\n",esum[i]);
        }
}
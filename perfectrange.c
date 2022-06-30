#include<stdio.h>
int checkperf(int n1);
int perfn(int start,int end);
int main()
{
	int start,end;
	printf("Enter the starting number:");
	scanf("%d",&start);
	printf("Enter the ending number:");
	scanf("%d",&end);	
	perfn(start,end);
	return 0;

}
int checkperf(int n1)
{	
	int sum,j;
	sum=0;
	for(j=1;j<n1;j++)
   	{   
   		if(n1%j==0)
		sum=sum+j;
	
	} 
	if(sum==n1)  
	return 1;
	else
	return 0;

}
int perfn(int start,int end)
{
	while(start<=end)
	{
		if(checkperf(start))
		{
			printf("%d",start);
		}
		start++;
	}
}
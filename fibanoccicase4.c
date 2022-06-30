#include<stdio.h>
int fibi(int f1,int f2);
main()
{
	int f1,f2,n;
	printf("Enter starting two numbers");
	scanf("%d%d",&f1,&f2);
	fibi(f1,f2);
}
int fibi(int f1,int f2)
{
	int sum,i,n;
	printf("Enter n number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=f1+f2;
		printf("%4d",sum);
		f1=f2;
		f2=sum;
	}
	return sum;

}
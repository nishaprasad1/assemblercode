#include<stdio.h>
int main(void)
{
	int n,i,sum=0;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
		sum=sum+i;
	
	}
	
 }
	if(n==sum)
	{
		printf("a perfect number \n");
	
	}
	else
	{
		printf("not a perfect number \n ");
	}
	

	
}
